#include<stdio.h>
int main()
{
	float average(float array[3]);
	float score[3],aver;
	int i;
	printf("ÊäÈë3¸ö³É¼¨£º\n");
	for(i=0;i<3;i++)
	{
		scanf("%f",&score[i]);
    }
    printf("\n");
    aver=average(score);
    printf("average score is %5.2f\n",aver);
    return 0;
}
float average(float array[3])
{
	int i;
	float aver,sum=array[3];
	for(i=0;i<3;i++)
	{
		sum=sum+array[i];
	}
	aver=sum/3;
	return (aver);
}
