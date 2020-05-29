#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define maxn 100
struct node{
	char name[maxn];
	int daihao;
	int renshu;
	int fonud_year;
	char introduce[maxn];	
}place[maxn];//�ص���Ϣ�ýṹ��  

int **Floyd(int **graph,int n){//���ø��������㷨����ÿ����֮������·���ľ��� 
		
	int i,k,j;
	int **g=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++) 
		g[i]=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)  
		for(j=0;j<n;j++){
			g[i][j]=graph[i][j];
		}
	
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
				if(g[i][j]>g[i][k]+g[k][j]){
					g[i][j]=g[i][k]+g[k][j];
				}				
			}			
	return g;		
}
void chaxun_jingdian(int n){//Ϊ���ÿ����ṩͼ�����⾰�������Ϣ�Ĳ�ѯ
	char x[maxn]; 
	int i,a=-1;	
	printf("\n�������ѯ���㣺\n");
	scanf("%s",&x);
	a=daihao(x,n);	
	if(a==-1){
		printf("\n��Ǹ������ѯ�ĵ�ַ����\n");return;
	}
	printf("\n������ţ�%d\n",place[a].daihao);
	printf("����������%d\n",place[a].renshu);	
	printf("����ʱ�䣺%d\n",place[a].fonud_year);
	printf("���ܣ�%s\n",place[a].introduce);	
}
