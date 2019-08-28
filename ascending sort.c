# include<stdio.h>
#define swap(x,y,t) {t=x;x=y;y=t;}
int main()
{
   int n,a[100],i,j,t;
   printf("Enter the number of elements of array: \n");
   scanf("%d",&n);
   printf("Enter the elements of the array: \n");
   for(i=0;i<n;i++)
   {
   		scanf("%d",&a[i]);
   }
   
   for(i=0;i<n-1;i++)
   {
   		for(j=i+1;j<n;j++)
   		{
   			if(a[i]>a[j])
   				swap(a[i],a[j],t);
		}
   }
   
   printf("\nsorted array is : \n");
   for(i=0;i<n;i++)
   {
   		printf("%d ",a[i]);
   }
   return 0;
   
}
