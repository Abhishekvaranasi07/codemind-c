#include<stdio.h>
int main(){
    int n,vk[2004];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&vk[i]);
    }
    for(int l=0;l<n;l++){
        int a=l,b=-1;
        for(int j=l+1;j<n;j++){
            if(vk[l]<vk[j]){
                b=j;
                break;
            }
        }
        if(b==-1){
            a=0;
        }
        else{
            a=b-a;
        }
        printf("%d ",a);
    }
}