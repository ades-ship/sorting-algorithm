/*
#include<bits/stdc++.h>
using namespace std;
int partion(int arr[], int l ,int r) {
    int i=l-1;
    int pivot=arr[r];
    for (int j = l; j <=r-1; j++)
    {
         if(arr[j]<pivot) {
             i++;
             swap(arr[j],arr[i]);

         }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
    
}

void quicksort(int arr[], int l , int r) {
    if(l<r) {
        int p=partion(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }

}

int main(){
   int arr[]={5,4,3,2,1,0};
   quicksort(arr,0,5);
   for (int i = 0; i < 6; i++)
   {
       cout<<arr[i]<<" ";
   }
   
    return 0;
}  */


//randomized quick sort
#include<bits/stdc++.h>
using namespace std;
int partion(int arr[], int l ,int r) {
     int x=rand() % (r-l+1) + l;
      swap(arr[x],arr[r]);
    int i=l-1;
    int pivot=arr[r];
    for (int j = l; j <=r-1; j++)
    {
         if(arr[j]<pivot) {
             i++;
             swap(arr[j],arr[i]);

         }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
    
}

void quicksort(int arr[], int l , int r) {
    if(l<r) {
        int p=partion(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }

}

int main(){
     int size;
      cin>>size;
   int arr[size];
     for(int i=0 ; i<size; i++) {
         cin>>arr[i];
     }
   quicksort(arr,0,size-1);
   for (int i = 0; i <size; i++)
   {
       cout<<arr[i]<<" ";
   }
   
    return 0;
}