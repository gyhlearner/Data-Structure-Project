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

void projcet(){
	printf("******************\n");
	printf("*  У԰������ѯ  *\n");
	printf("******************\n\n");
}
void banquan(){
	printf("��һ��\n");
	printf("\t184804013 ����\n"); 
	printf("\t184804005 ��С��\n"); 
	printf("\t184804010 ��پ��\n\n"); 	
}
int tishi(){
	int choise;
	projcet();				
	printf("\n��ѡ�����Ĳ�����\n");
	printf("|=============================|\n");
	printf("|(1) ��ѯ�����������·��-----|\n");
	printf("|(2) ��ѯ������Ϣ-------------|\n");
	printf("|(3) ��ѯ������������·��-----|\n");	
	printf("|(0) �˳�---------------------|\n");
	printf("|=============================|\n\n");
	scanf("%d",&choise);
	return choise;
}
int daihao(char *name,int n){ //����������ֻ�Ϊ�ṹ������
	int i,a; 
	for(i=0;i<n;i++){
		if(!strcmp(name,place[i].name)) 
			a=i;	
	}
	return a;
}
int **creat_graph(int n,int m){//��������ͼ������ص���Ϣ��·�� 
	int i,j,t,f,x,y,k,distance;				
	
	int **graph=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++) 
		graph[i]=(int *)malloc(n*sizeof(int));
		
	for(i=0;i<n;i++)  
		for(j=0;j<n;j++){ 
			graph[i][j]=maxn;
		}	//��ʼ��
	
	printf("\n������ص���Ϣ\n");	
	for(i=0;i<n;i++){
		scanf("%s %d %d %d %s",&place[i].name,&place[i].daihao,&place[i].renshu,&place[i].fonud_year,&place[i].introduce);
	}	//����ص���Ϣ	
	printf("\n���������ͨ·��\n");
	for(i=0;i<m;i++){
		scanf("%d %d %d",&x,&y,&distance);
		graph[x][y]=graph[y][x]=distance;
	} 	//����·����Ϣ 
	
	system("pause");
	system("cls");
	return graph;	
			
}
