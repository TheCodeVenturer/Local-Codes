#include <bits/stdc++.h>
#include <cmath>

using namespace std;

double power(int base, int ex)
{
    double e = exp(ex * log(base));
    return e;
}
int main()
{
    cout << power(5, 3);
}