#include<stdio.h>

int main(){
	int r,c;
	int a[5][5];
	int b[5][5];
	int c1[5][5];

	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			a[r][c]=r+1;
			b[r][c]=c+1;
			c1[r][c]=0;
		}
	}
	for(r=0;r<5;r++){
                for(c=0;c<5;c++){
                        printf(" %d ",a[r][c]);
                }
                printf("\n");
	        }
	for(r=0;r<5;r++){
                for(c=0;c<5;c++){
                        printf(" %d ",b[r][c]);
                }
                printf("\n");
        }

	int k=0;
	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			for(k=0;k<5;k++){
				c1[r][c]=a[r][k]*b[k][c]+c1[r][c];
			}
		}
	}
	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			printf(" %d ",c1[r][c]);
		}
		printf("\n");
	}
}	


/*algo
123
123
111

234
345
456
*/
