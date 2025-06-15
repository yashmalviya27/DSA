#include <bits/stdc++.h>
using namespace std;

void printTheNumber(int counter)
{
    if (counter == 5)
    {
        return;
    }

    counter++;
    cout << counter << " ";
    printTheNumber(counter);
}
void printName(int count, int n)
{
    if (count >= n)
    {
        return;
    }
    cout << count + 1 << " Yash Malviya." << endl;
    printName(count + 1, n);
}
void rev(int count)
{
    if (count < 1)
    {
        return;
    }
    rev(count - 1);
    cout << count << ", ";
}
void backTrack(int count)
{
    if (count < 1)
    {
        return;
    }
    rev(count - 1);
    cout << count << ", ";
}
void sibumation(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sibumation(i - 1, sum + i);
}
void Factorial(int i, int Fact)
{
    if (i < 1)
    {
        cout << Fact;
        return;
    }
    Factorial(i - 1, Fact * i);
}
int sibumation2(int n)
{
    if (n == 0)
        return 0;

    return n + sibumation2(n - 1);
}
int Factorial2(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return n * Factorial2(n - 1);
}
void swapArr(int arr[], int start, int end)
{
    if (start >= end / 2)
        return;
    // this how i am swap using inbild finction
    // swap(arr[start], arr[end - 1 - start]);

    arr[start] = arr[start] + arr[end - 1 - start];
    arr[end - 1 - start] = arr[start] - arr[end - 1 - start];
    arr[start] = arr[start] - arr[end - 1 - start];
    swapArr(arr, start + 1, end);
}
bool p(string s, int st, int e)
{
    if (st >= e)
        return true;
    if (s[st] != s[e])
        return false;
    return p(s, st + 1, e - 1);
}
bool isPalindrome(string s)
{
    return p(s, 0, s.length() - 1);
}
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacci(n - 1);
    int last2 = fibonacci(n - 2);
    return last + last2;
}
int main()
{
    int n;
    cout << "Enter the Number....!!!! " << endl;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
// string s;
// cout << "Enter a string: ";
// cin >> s;

// if (isPalindrome(s))
//     cout << "It is a palindrome." << endl;
// else
//     cout << "It is not a palindrome." << endl;

// int n;
//     cout << "Enter the Number....!!!! " << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "\nOriginal array:\n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     swapArr(arr, 0, n);
//     cout << "\n\nReversed array:\n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;