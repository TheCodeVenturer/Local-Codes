#include<stdio.h>
#include<malloc.h>
int fibo[100];

typedef struct data 
{
    int encryptedData;
    int privateKey;
} data;

data encrypt(int n, int representation[])
{
    fibo[0] = 0;
    fibo[1] = 1;
    int i = 2;
    while (fibo[i - 1] <= n)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
    }
    int pos=0;
    while(n>0){
        if(n>=fibo[i-1]){
            representation[pos++] = fibo[i-1];
            n = n - fibo[i-1];
        }
        i--;
    }
    int product = 1;
    for(int i=0;i<pos;i++){
        product = product * representation[i];
    }
    if(representation[pos-1]==1){
        pos--;
        product++;
    }
    data d;
    d.encryptedData = product;
    d.privateKey = representation[0];
    return d;
}

char decrypt(int encryptedData,int privateKey)
{
    int idx = 0;
    for(int i=1;i<100;i++)
        if(fibo[i]==privateKey)
        {
            idx=i;
            break;
        }
    int decryptedData=0;
    if(encryptedData % privateKey != 0){
        decryptedData++;
        encryptedData--;
    }
    while(encryptedData>1){
        if(encryptedData % fibo[idx]==0){
            encryptedData /= fibo[idx];
            decryptedData += fibo[idx];
        }
        idx--;
    }
    return (char) decryptedData;
}

int main(void){
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    int representation[100];
    data receivedData = encrypt((int)ch, representation);
    printf("Encrypted Data = %d ",receivedData.encryptedData);
    printf("and Private Key = %d ", receivedData.privateKey);
    char decryptedCharacter = decrypt(receivedData.encryptedData,receivedData.privateKey);
    printf("%c is Decrypted Data",decryptedCharacter);
    return 0;
}
