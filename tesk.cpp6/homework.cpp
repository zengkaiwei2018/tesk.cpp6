#include<stdio.h>
#define SUM 100
struct students
{
	char name[20];
	char stu_Num[20];
	char Collage[30];
	double aveScore;
}stu[SUM];
struct judge
{
	char Name[20];
	double grade[SUM];
}jud[7];
int main()
{
	FILE *fp1,*fp2,*fp3;
	int i=0,j=0,k=0;
	int stu_count=0;
	fp1=fopen("students.txt","r");
	if(fp1==NULL)
	{
		printf("students�ļ��򿪴���\n");
		return 0;
	 } 
	 //printf("asdasd\n");
	while(!feof(fp1))
	{
		fscanf(fp1,"%s %s %s\n",stu[i].name,stu[i].Collage,stu[i].stu_Num);
		++i;
	}
	//printf("%d\n",i);
	stu_count=i;
	fclose(fp1);
	fp2=fopen("judge.txt","r");
	if(fp2==NULL)
	{
		printf("judge�ļ��򿪴���\n");
		return 0;
	}
	while(!feof(fp2))
	{
		fscanf(fp1,"%s",jud[j].Name);
		k=0;
		for(int i=stu_count;i>0;i--)
		{
			fscanf(fp2,"%lf",&jud[j].grade[k]);
			//printf("%.0lf j=%d k=%d ",jud[j].grade[k],j,k);
			++k;
		}
		++j;
	}
    printf("%.0lf\n",jud[1].grade[0]);
	fclose(fp2);
	/*for(int i=0;i<7;i++)
	{
		for(int j=0;j<stu_count;j++)
		{
			printf("%.0lf ",jud[i].grade[j]);
		}
		printf("\n");
	}*/
	
	//��ȡ�����ݿ�ʼ����
	double score[stu_count][7];        //�ѳɼ��浽������������ 
	printf("1\n");
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<stu_count;j++)
		{
			score[j][i]=jud[i].grade[j];
		//	printf("%.0lf ",jud[i].grade[j]);
		}
	//	printf("\n");
	}  
//	printf("2\n");
	double replace;
	for(int i=0;i<stu_count;i++)       //ð�����򷨶�����ѧ���ɼ����� 
	{
		for(int j=0;j<7;j++)
		{
			for(int k=0;k<7;k++)
			{
				if(score[i][k]<score[i][k+1])
				{
					replace=score[i][k];
					score[i][k]=score[i][k+1];
					score[i][k+1]=replace;
				}
			}
			
	 }
	 		stu[i].aveScore=(score[i][1]+score[i][2],score[i][3],score[i][4],score[i][5])/5;//��ƽ���ּ���ṹ���� 
	 		
	}
	printf("3\n");
	fp3=fopen("result.txt","w+"); 
	if(fp3==NULL)
	{
		printf("�ļ�����ʧ�ܣ�\n");
		return 0;
	}
	fprintf(fp3,"������   ѧԺ��       ѧ�ţ�      ƽ���֣�  ");
	for(int i=0;i<7;i++)
	{
		fprintf(fp3,"%s ",jud[i].Name);
	 } 
	 fprintf(fp3,"\n");
	 //����ɼ������� 
	double MAX=0; 
	int record=0; 
	for(int i=0;i<stu_count;++i)           
	{
		for(int j=0;j<stu_count;++j)       //�ҳ����ֵ  
		{
			if(stu[j].aveScore>MAX)
			{  
				MAX=stu[j].aveScore;
				record=j;
			}
		}
		fprintf(fp3,"%8s %18s %13s %3.0lf %3.0lf %3.0lf %3.0lf %3.0lf %3.0lf %3.0lf %3.0lf\n",stu[record].name,stu[record].Collage,stu[record].stu_Num,
		stu[record].aveScore,jud[0].grade[record],jud[1].grade[record],jud[2].grade[record],jud[3].grade[record],
		jud[4].grade[record],jud[5].grade[record],jud[6].grade[record]);
		stu[record].aveScore=0;
		MAX=0; 
	 } 
	fclose(fp3);
	printf("��鿴�ļ���\n");
	return 0;
 } 
