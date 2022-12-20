#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);



// /
//  * Complete the 'findSum' function below.
//  *
//  * The function is expected to return a LONG_INTEGER_ARRAY.
//  * The function accepts following parameters:
//  *  1. INTEGER_ARRAY numbers
//  *  2. 2D_INTEGER_ARRAY queries
 

// /
//   To return the long integer array from the function, you should:
//       - Store the size of the array to be returned in the result_count variable
//       - Allocate the array statically or dynamically
 
//   For example,
//   long* return_long_integer_array_using_static_allocation(int* result_count) {
//     *result_count = 5;
 
//       static long a[5] = {1, 2, 3, 4, 5};
 
//       return a;
//   }
 
//   long* return_long_integer_array_using_dynamic_allocation(int* result_count) {
//       *result_count = 5;
 
//       long *a = malloc(5 * sizeof(long));
 
//       for (int i = 0; i < 5; i++) {
//           *(a + i) = i + 1;
//       }
 
//       return a;
//  }
 
long* findSum(int numbers_count, int* numbers, int queries_rows, int queries_columns, int** queries, int* result_count) {
    *result_count=queries_rows;
    long *result,s,low,high,num,count,i,j;
    result=(long *)malloc(sizeof(long)*queries_rows);
    for(i=0;i<queries_rows;i++)
    {
        s=0;
        count=0;
        low=queries[i][0];
        high=queries[i][1];
        num=queries[i][2];
        for(j=low-1;j<high;j++)
        {
            if(numbers[j]==0)
                count++;
            else
                s+=numbers[j];
        }
        s = s + (count*num);

        result[i]=s;
    }
    return &result[0];
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int numbers_count = parse_int(ltrim(rtrim(readline())));


    int* numbers = malloc(numbers_count * sizeof(int));

    for (int i = 0; i < numbers_count; i++) {
        int numbers_item = parse_int(ltrim(rtrim(readline())));

        *(numbers + i) = numbers_item;
    }

    int queries_rows = parse_int(ltrim(rtrim(readline())));

    int queries_columns = parse_int(ltrim(rtrim(readline())));

    int** queries = malloc(queries_rows * sizeof(int*));

    for (int i = 0; i < queries_rows; i++) {
        *(queries + i) = malloc(queries_columns * (sizeof(int)));

        char** queries_item_temp = split_string(rtrim(readline()));

        for (int j = 0; j < queries_columns; j++) {
            int queries_item = parse_int(*(queries_item_temp + j));
            *(*(queries + i) + j) = queries_item;
        }
    }
    

    int result_count;
    long* result = findSum(numbers_count, numbers, queries_rows, queries_columns, queries, &result_count);
    for (int i = 0; i < result_count; i++) {
        printf("%ld", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
