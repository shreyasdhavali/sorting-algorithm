# include<iostream>
using namespace std;
#define swap(x,y,t) {t=x;x=y;y=t;}
int main()
{
   int n,a[100],i,j,t;
   cout<<"Enter the number of elements of array: \n";
   cin>>n;
   cout<<"Enter the elements of the array: \n";
   for(i=0;i<n;i++)
   {
   		cin>>a[i];
   }
   
   for(i=0;i<n-1;i++)
   {
   		for(j=i+1;j<n;j++)
   		{
   			if(a[i]>a[j])
   				swap(a[i],a[j],t);
		}
   }
   
   cout<<"\nsorted array is : \n";
   for(i=0;i<n;i++)
   {
   		cout<<a[i]<<" ";
   }
   return 0;
   
}
