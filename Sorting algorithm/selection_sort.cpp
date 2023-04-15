#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i,k,j;
    for(int i=0;i<n-1;i++)   //for passes
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
    swap(arr[i],arr[k]);
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
selectionSort(arr,n);
//priting
cout<<"Printing Sorted array :";
for(int k=0;k<n;k++)
{
    cout<<arr[k]<<endl;
}
return 0;
}