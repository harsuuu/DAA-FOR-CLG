#include<iostream>
using namespace std;
int linear_search(int arr[], int key, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
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
int ans = linear_search(arr,key,n);
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