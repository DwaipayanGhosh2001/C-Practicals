#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[10],i,c=0,n;
cout<<"Enter the size of the array \n";
cin>>n;
cout<<"Enter the array \n";
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<n;i++)
{
	if(a[i]%2==1)
	c++;
}
cout<<"Count of odd integers in the array is "<<c;
return 0;
}
