#include<bits/stdc++.h>
using namespace std;
void selactionSort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
void bubbleSort(int arr[], int n){
    for(int i= n-1; i>=0; i--){
        bool swapped = false;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    } 
}
void insertionSort(int arr[], int n){
    for(int i = 1; i<=n-1; i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int n;
    cout<<"Enter the nnumber.......!!"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++)cin>>arr[i];
    insertionSort(arr,n);
    for(int i = 0; i<n;i++)cout<<arr[i]<<" ";
    return 0 ;
}