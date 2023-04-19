#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    //step 1 : choose pivot element
    int pivotIndex=s;
    int pivotElement=arr[s];

    //step2: find right position for pivot element and place.
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotElement)
        {
            count++;
        }
    }
    //ab loop bhar se bahar aakkr hmare pas pivot ki right potiton hogi.
    int rightIndex=s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;


    //step 3: left m chote and right m bde
    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivotElement)
        {
            i++;
        }
        while(arr[j]>pivotElement) 
        {
            j--;
        }
    //agr gadbad mili than 
    if(i<pivotIndex && j>pivotIndex )
    {
        swap(arr[i],arr[j]);
    }
    }
    return pivotIndex;
}
void quick_sort(int arr[], int s, int e)
{
    //base class
    if(s>=e)
    {
        return;
    }
    //partition logic --> pivot element
    int p = partition(arr,s,e);

    //recursive call
    //  left 
    quick_sort(arr,s,p-1);
    //right
    quick_sort(arr,p+1,e);
}  
int main(){
int arr[]={8,1,3,4,20,50,30};
int n=7;
int s=0;
int e=n-1;
quick_sort(arr,s,e);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl; 
}
return 0;
}