#include<iostream>
using namespace std;
int main()
{
	int sizea,sizeb,sizec;
	int carry=0;
	cout<<"Enter the size of A array: "<<endl;
	cin>>sizea;
	cout<<"Enter the size of B array: "<<endl;
	cin>>sizeb;
	cout<<"Enter the size of C array: "<<endl;
	cin>>sizec;
	int a[sizea];
	int b[sizeb];
	int c[sizec];
	for(int i=0;i<sizea;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<sizeb;j++)
	{
		cin>>b[j];
	}
	if(sizea==sizeb)
	{
		for(int k=sizea-1;k>=0;k--)
		{
			for(int p=k;p==k;p--)
			{   
				c[p]=carry+a[p]+b[p];
				carry=c[p]/10;
				c[p]=c[p]%10;
			}
		}
	}
	for(int i=0;i<sizea;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
