#include <iostream>

using namespace std;

int main()
{
    long long n1, n2, mn1, mn2, res;

    cin >> n1 >> n2;

    mn1 = n1 % 10;
    mn2 = n2 % 10;

    res = mn1 + mn2;

    cout << res << endl;


    return 0;
}
