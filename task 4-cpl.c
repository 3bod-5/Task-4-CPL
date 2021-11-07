#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,x,count;
    count=0;
    printf("enter number of row :\n");
    scanf("%d",&n);
    printf("enter number of columns :\n");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the number you want to search : ");
    scanf("%d",&x);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(arr[i][j]==x){
                count++;
            }
        }
    }
    if(count==0){
        printf("number %d not found",x);
    }
    else{
        printf("number %d found",x);
    }

    return 0;
}
