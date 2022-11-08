#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int b=0;b<a;b++){
        int n,k,v[2204],r[2204],c=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&v[i]);
        }
        k=k%n;
        for(int j=0;j<n;j++){
            if(j>=k){
                r[c++]=v[j-k];
            }
            else{
                r[c++]=v[n+j-k];
            }
        }
        for(int i=0;i<c;i++){
            printf("%d",r[i]);
            if(i==c-1){
                break;
            }
            printf(" ");
        }
        printf("
");
    }
}