#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(arr[j]>x && j>-1)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
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
insertionSort(arr,n);
//priting
cout<<"Printing Sorted array :";
for(int k=0;k<n;k++)
{
    cout<<arr[k]<<endl;
}
return 0;
}