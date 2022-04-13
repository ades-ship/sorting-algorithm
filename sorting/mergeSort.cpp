#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r);
void mergesort(int arr[], int l, int r){
     if(l<r)
     {
         int mid=l+(r-l)/2;
         mergesort(arr,l,mid);
         mergesort(arr,mid+1,r);
         merge(arr,l,mid,r);
     }
}
void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0 ; i<n1 ; i++)
      L[i]=arr[l+i];
      for(int j=0 ; j<n2 ; j++)
         R[j]=arr[mid+1+j];
   int i=0,j=0, k=l;
     while(i<n1 && j<n2)
     {
         if(L[i]>=R[j])
         {
             arr[k++]=R[j++];
              
         }
         else
         arr[k++]=L[i++];
     }
     while(i<n1)
     {
         arr[k++]=L[i++];
     }

      while(j<n2)
     {
         arr[k++]=R[j++];
     }
}

void display(int arr[],int n)
{
   for(int i=0 ; i<n ;i++)
     cout<<arr[i]<<" ";
}
int main()
{  int n;
   cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++)
     cin>>arr[i];
     mergesort(arr,0,n-1);
     display(arr,n);
     

    return 0;
}