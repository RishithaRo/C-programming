/* program to accept n elements into array,
Print those elements whose sum of digits value is not a perfect square 
i/p:-- 3
765 9 3362

o/p:--
3362

*/

#include<stdio.h>
#include<math.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		int dig = arr[i];
		int sum = 0;
		while(dig>0)
		{
			int r=dig%10;
			sum = sum+r;
			dig/=10;
		}
		int fsum = 0;
		while(sum>0)
		{
			int res = sum%10;
			fsum = fsum+res;
			sum = sum/10;
		}
		int root = sqrt(fsum);
		if(root*root!=fsum)
		{
			printf("%d ",arr[i]);
		}
		
	}
}
