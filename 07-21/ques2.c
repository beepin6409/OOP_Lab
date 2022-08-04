// WAP to multiply two matrix and display its transpose


#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mat1[n][m],mat2[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    int multmat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            multmat[i][j]=0;
            for(int k=0;k<n;k++){
                multmat[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",multmat[j][i]);
        }
        printf("\n");
    }




    return 0;

}