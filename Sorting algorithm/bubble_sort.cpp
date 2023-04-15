#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)  //for passes
    {
        for(int j=0;j<n-1-i;j++)   //for comparison
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
int n;
cout<<"Enter how many element in the array :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
bubbleSort(arr,n);
//priting
cout<<"Printing Sorted array :";
for(int k=0;k<n;k++)
{
    cout<<arr[k]<<endl;
}
return 0;
}