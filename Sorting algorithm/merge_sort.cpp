#include<iostream>
using namespace std;

void merge(int* arr, int s, int e)
{
    int mid =(s+e)/2;
    int len1=mid-s+1; //length of 1st array.
    int len2=e-mid;   //length of 2nd array.

    // ab dynamically 2 array bnao jisme sorted value of copy krni hai.
    int* left = new int[len1];
    int* right= new int[len2];

    // ab inme copy krdo value
    //left m copy kro.
    int k=s;    //starting index
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    //right bale m dalo
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k];
        k++;
    }

    //ab merge two sorted array ka logic 
    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=s;

    while(leftIndex<len1 && rightIndex<len2)
    {
        if(left[leftIndex]<right[rightIndex])
        {
            arr[mainIndex]=left[leftIndex];
            mainIndex++;
            leftIndex++;
        }
        else  //left[leftIndex]>right[rightIndex]
        {
            arr[mainIndex]=right[rightIndex];
            mainIndex++;
            rightIndex++;
        }  
    }

    // Ho skta hai koi array jldi end ho jaye jldi to baki values ko copy kr denge main array m bo sorted phle se hi h to aise hi copy kr denge.

    //left m copy
    while(leftIndex<len1)
    {
        arr[mainIndex]=left[leftIndex];
        mainIndex++;
        leftIndex++;
    }
    //right m copy krdi
    while(rightIndex<len2)
    {
        arr[mainIndex]=right[rightIndex];
        mainIndex++;
        rightIndex++;
    }

    //TODO : Jo array create kiye the use delete kr skte hai. 
}   

void merge_sort(int* arr, int s, int e)
{
    //base condition 
    if(s>=e)
    {
        return;
    }
    //mid nikalo
    int mid=(s+e)/2;
    //left part sort krdo
    merge_sort(arr,s,mid);
    //right part sort krdo
    merge_sort(arr,mid+1,e);
    
    //ab hme dono left and right bale ko sorted array ko merge krna hai.
    merge(arr,s,e);
}
int main(){
int arr[]={4,4,13,13,2};
int n=5;             //number of element in array;
int s=0;             //starting index
int e=n-1;           //ending index
merge_sort(arr,s,e);

//print
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}