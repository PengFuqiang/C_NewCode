#include<stdio.h>
struct cj{
    char name[10];
    int grade;
}s[1000];
int main(){
    int n,c;
    int i,j;
    while(scanf("%d",&n) != EOF){
    scanf("%d",&c);
    for(i=0; i<n; i++){
        scanf("%s%d",&s[i].name,&s[i].grade);
    }
    if(c==0){
        for(i=0; i<n; i++){
            for(j=0; j<n-i-1; j++){
                if(s[j].grade<s[j+1].grade){
                    struct cj t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
    }
    else if(c==1){
        for(i=0; i<n; i++){
            for(j=0; j<n-i-1; j++){
                if(s[j].grade>s[j+1].grade){
                    struct cj t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%s %d\n",s[i].name,s[i].grade);
    }
    }
}

