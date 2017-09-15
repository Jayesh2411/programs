#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int temp;
	int n,k,j;
	scanf("%d",&n);
	int flag=0;
	char a[n][50];
	int mp[n],gf[n],ga[n],pts[n],rn[n],gd[n],ctr[n],chk[n][n];
	int i;
	char x[50],y[50];
	int p,q;
	int s1,s2;
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		mp[i]=gd[i]=gf[i]=ga[i]=pts[i]=ctr[i]=0;	
		for(j=0;j<n;j++)
			chk[i][j]=0;
		rn[i]=n;
	}
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		scanf("%s %s %d %d",&x,&y,&s1,&s2);
		if((strcmp(x,y))==0)
		{
			printf("Invalid Input");
			exit(1);
		}
		flag=0;
		for(i=0;i<n;i++)
		{
			if((strcmp(a[i],x))==0)
			{
				p=i;
				flag++;
			}
			if((strcmp(a[i],y))==0)
			{
				q=i;
				flag++;
			}
			if(flag==2)
				break;
		}
		if(chk[p][q]==2||chk[q][p]==2||mp[p]==2||mp[q]==2)
		{
			printf("Invalid Input");
			exit(1);
		}
		chk[p][q]++;
		chk[q][p]++;
		gf[p]+=s1;
		ga[q]+=s1;
		gf[q]+=s2;
		ga[p]+=s2;
		mp[p]++;
		mp[q]++;
		if(s1>s2)
			pts[p]+=2;
		else if(s2>s1)
			pts[q]+=2;
		else
		{
			pts[p]++;
			pts[q]++;
		}
	}
	for(i=0;i<n;i++)
	{
		gd[i]=gf[i]-ga[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pts[i]>pts[j])
			{
				rn[i]--;
			}
		 	else if(pts[i]==pts[j])
			{
				if(gd[i]>gd[j])
					rn[i]--;
				else if(gd[i]==gd[j])
				{
					if(gf[i]>gf[j])
					{
						rn[i]--;
					}
					else if(gf[i]==gf[j])
					{
						while(a[i][p++]!=a[j][q++]);
						if(a[i][q]>a[j][q])
							rn[i]--;
						else
							rn[j]--;
					}
					else
						rn[j]--;
				}
				else
					rn[j]--;
			}
			else
				rn[j]--;

		}
					
	}
	for(i=0;i<n;i++)
	{
		ctr[rn[i]-1]=i;	
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[ctr[i]]);
	}
	return 0;
}

