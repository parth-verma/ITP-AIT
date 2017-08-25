#include <iostream>

using namespace std;

int main(){
	int a[100],n,pos;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the index of element to be removed:";
	cin>>pos;
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	cout<<"The resultant array:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}

