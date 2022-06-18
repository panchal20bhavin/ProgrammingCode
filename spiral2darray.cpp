#include<iostream>
using namespace std;
int main()
{
	int A[3][4];
	int i,j,tn,cn;
	int minr,minc,maxr,maxc;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			cin>>A[i][j];
		}
	}
	minr=0;
	minc=0;
	maxr=3;
	maxc=4;
	tn=12;
	cn=0;
	while(cn<tn)
	{
		for(i=minr,j=minc;i<=maxr && cn<tn;i++)
		{
			cout<<A[i][j]<<" ";
			cn++;
		}
		minc++;
		for(i=maxr,j=minc;j<=maxc && cn<tn;j++)
		{
			cout<<A[i][j]<<" ";
			cn++;
		}
		maxr--;
		for(i=maxr,j=maxc;i>=minr && cn<tn;i--)
		{
			cout<<A[i][j]<<" ";
			cn++;
		}
		maxc--;
		for(i=minr,j=maxc;i>=minc && cn<tn;j--)
		{
			cout<<A[i][j]<<" ";
			cn++;
		}
		minr++;
	}
	
	return 0;
}
