#include<iostream>
using namespace std;
void selectionSort(int *arr, int n){
    int i,j,min_index;
    for(i=0 ; i<n ; i++){
        min_index=i;
        for(j=i+1 ; j<n ; j++){
            if(arr[j]<arr[min_index])
             min_index=j;
        }
        swap(arr[min_index],arr[i]);
    }
}
int main(){
    int n;
     cin>>n;   
       int arr[n];
         for(int i=0 ; i<n ;i++){
              cin>>arr[i];
         }
     selectionSort(arr,n);
           for(int i=0 ; i<n ;i++){
             cout<<arr[i]<<" ";
         }
    return 0;

}