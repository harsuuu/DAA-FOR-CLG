#include<iostream>
using namespace std;
int binary_search(int arr[], int key, int n)
{
    int start=0;
    int end=n-1;
    int mid =(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else //means arr[mid]>key
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
int n;
cout<<"Enter how many element element :";
cin>>n;
int arr[n];
cout<<"Enter the element"<<endl;
//taking input -->means sare element ko read krlo.
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int key;
cout<<"Enter the key which you want to search :";
cin>>key;
int ans = binary_search(arr,key,n);
if(ans==-1)
{
    cout<<"Not found ";
}
else 
{
    cout<<"Key is found at index : "<<ans<<endl;
}
return 0;
}