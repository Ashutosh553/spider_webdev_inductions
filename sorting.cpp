//Ishani Srivastava 106117032

#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int r );

void mergesort(int a[],int left,int right)
{
	if(left<right)
	{
		int middle=(left+right-1)/2;
		mergesort(a,left,middle);
		mergesort(a,middle+1,right);
		merge(a,left,middle,right);
	}
}
 void merge(int a[], int l, int m ,int r)
 {
 	int l1[m-l+1];
	 int l2[r-m];
 	for(int i=0;i<(m-l+1);i++)
 	l1[i]=a[l+i];
 	for(int j=0;j<(r-m);j++)
 	{
 		l2[j]=a[m+j+1];
	 }
	 
	 int i = 0, j=0, k=l;
    while (i < (m-l+1) && j < (r-m))
    {
        if (l1[i] <= l2[j])
        {
            a[k] = l1[i];
            i++;
        }
        else
        {
            a[k] = l2[j];
            j++;
        }
        k++;
    }
    while (i < (m-l+1))
    {
        a[k] = l1[i];
        i++;
        k++;
    }
 
   
    while (j < (r-m))
    {
        a[k] = l2[j];
        j++;
        k++;
    }
	 
 }
 int main()
 { int n;
 int a[1000];
 
  cout<<"ENTER THE  NUMBER OF ELEMENT\n";
 	cin>>n;
  cout<<"ENTER YOUR NUMBER FOR SORTING \n";
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	
 	mergesort(a,0,n-1);
 	cout<<"YOUR SORTED NUMBER IS \n ";
 	for(int i=0;i<n;i++)
 	{
	 cout<<a[i];
 	cout<<" ";}
 }
