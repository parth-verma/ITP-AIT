#include <iostream>

using namespace std;

int main(){
	int a[100],n,x,pos;
	cout<<"Enter the number of elements:";
	cin>>n;
	for (int i = 0; i< n;i++){
		cin>>a[i];
	}
	cout<<"Enter the element to insert:";
	cin>>x;
	cout<<"Enter position to insert:";
	cin>>pos;
	if (pos > n || pos >= 100){
		cout<<"Invalid position\n";
		return 0;
	}
	for (int i = n;i>pos;i--)
	{
		 a[i]=a[i-1];
	}
	a[pos] = x;
	n++;
	cout<<"Resultant Array:";
	for (int i = 0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
