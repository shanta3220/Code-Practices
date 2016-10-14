#include<stdio.h>
int main(){
    int t, n, i;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        if(n>=0){
        for(i=0; i<=n; i++){
            printf("%d", i);
            if(i!=n){
                printf(" ");
            }

        }
        }
        else if(n<0){
        for(i=n; i<=0; i++){
            printf("%d", i);
            if(i!=0){
                printf(" ");
            }

        }
        }
        printf("\n");
    }
    return 0;
}
