#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int jump_search(int arr[], int jump, int key, int n)
{
    int low=0;
    for(int i = 0; i<n; i+=jump){
		if(arr[i] == key)
			return i;
		if(arr[i] < key)
			low = i;
		else
			break;
	}
	
	for(int i = low; i<n; i++){
		if(arr[i] == key)
			return i;
	}
	return -1;
}
int main()
{
int n;
cout<<"Enter how many element element :";
cin>>n;
int jump=sqrt(n);
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
int ans = jump_search(arr,jump,key,n);
if(ans==-1)
{
    cout<<"Not found ";
}
else 
{
    cout<<"Key is found at "<<ans<<endl;
}
return 0;
}