#include <bits/stdc++.h>
using namespace std;
int count(int N)
{
    int con = 0;
    while (N > 0)
    {
        con++;
        N = N / 10;
    }
    return con; // return instead of printing
}

void revNumber(int N)
{
    int rev = 0;
    while (N > 0)
    {
        int id = N % 10;
        rev = (rev * 10) + id;
        N = N / 10;
    }
    cout << rev;
}
void palindrome(int N)
{
    int main = N;
    int rev = 0;
    while (N > 0)
    {
        int id = N % 10;
        rev = (rev * 10) + id;
        N = N / 10;
    }
    if (rev == main)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
void armstrongNum(int n, int count)
{
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, count);
        n = n / 10;
    }

    cout << "Armstrong Sum: " << sum << endl;

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;
}
void division(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}
void divisiontype2(int n)
{
    vector<int> vc;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            vc.push_back(i);
            if (n / i != i)
            {
                vc.push_back(n / i);
            }
        }
    }
    sort(vc.begin(), vc.end());
    for (auto it : vc)
        cout << it << " ";
}
void primeNumber(int n)
{
    int counter = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            counter++;
            if (n / i != i)
            {
                counter++;
            }
        }
    }
    if (counter == 2)
    {
        cout << "It is an Prime Number....!!!";
    }
    else
    {
        cout << "Not an Prime Number.....!!!";
    }
}
void gcdAndHcf(int n1, int n2)
{
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << i << " this is na the HCF & GCD ";
            break;
        }
    }
}
void gcdAndHcf2(int n1, int n2)
{
    while(n1>0 && n2>0){
        if(n1>n2)n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) cout<< n2;
    cout<< n1;

}
int main()
{
    int N, N2;
    cout << "Enter the no....!!" << endl;
    cin >> N >> N2;
    gcdAndHcf2(N, N2);
    return 0;
}
