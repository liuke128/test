#include<stdio.h>
int main()
{
	float average(float array[4]);
	float score[4],aver;
	int i;
	printf("ÊäÈë3¸ö³É¼¨£º\n");
	for(i=0;i<4;i++)
	{
		scanf("%f",&score[i]);
    }
    printf("\n");
    aver=average(score);
    printf("average score is %5.2f\n",aver);
    return 0;
}
float average(float array[4])
{
	int i;
	float aver,sum=array[4];
	for(i=0;i<4;i++)
	{
		sum=sum+array[i];
	}
	aver=sum/4;
	return (aver);
}
