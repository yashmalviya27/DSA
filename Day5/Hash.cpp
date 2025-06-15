#include <bits/stdc++.h>
using namespace std;
int *tackAnInput(int n)
{
    int *arr = new int[n]; // allocate array in heap
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr; // return pointer to the array
}
int HashNum(int arr[], int n)
{
    int hash[100] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    cout << "Hello tthis is an answer..." << endl;
    for (int i = 0; i < 100; i++)
    {
        if (hash[i] > 0)
        {
            cout << i << " " << hash[i] << endl;
        }
    }
}

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int *arr = tackAnInput(n); // pointer to array

//     cout << HashNum(arr, n); // assuming HashNum returns a string

//     delete[] arr; // free memory
//     return 0;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int n = s.length();

//     int hash[256] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[s[i]]++;
//     }
    
//     for (int i = 0; i < 256; i++)
//     {
//         if (hash[i] > 0)
//         {
//             cout << char(i) << " " << hash[i] << endl;
//         }
//     }
// }
int main(){
    int n;
    cout<<"Einter an mun...!!!"<<endl;
    cin>>n;
    int arr[n];
    map<int , int>mpp;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<500; i++){
        if(mpp[i]>0){
            cout<<i<<" ----->z"<<mpp[i]<<endl;
        }
    }
    return 0;
}