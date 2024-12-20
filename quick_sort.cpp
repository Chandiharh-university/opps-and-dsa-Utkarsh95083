#include<bits/stdc++.h>
using namespace std;
int partion(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>=pivot&&j>low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
       
    }
     swap(arr[low],arr[j]);
        return j;
       
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pIndex = partion(arr,low,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}