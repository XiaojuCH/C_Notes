#include <stdio.h>

void Findmaxmin(int target[],int n,int *maxnum,int *minnum,int *maxsub,int *minsub)
{
	int i;
	for(i=0;i<n;i++){
		if(i==0){
			*maxnum=target[i];
			*minnum=target[i];
			*maxsub=i;
			*minsub=i;
		}else{
			if(target[i]>*maxnum){
				*maxnum=target[i];
				*maxsub=i;
			}
			if(target[i]<*minnum){
				*minnum=target[i];
				*minsub=i;
			}
		}
	}
}

void change(int target[],int x,int y)
{
	int t;
	t=target[x];
	target[x]=target[y];
	target[y]=t;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,maxnum,minnum,maxsub,minsub;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    Findmaxmin(a, n, &maxnum, &minnum, &maxsub, &minsub);
	change(a,minsub,0);
	Findmaxmin(a,n,&maxnum,&minnum,&maxsub,&minsub);
	change(a,maxsub,n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
