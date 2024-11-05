#include <stdio.h>
int main(){
int i,n,k,p;
int A[6];
printf("enter the size of the array:");
scanf("%d",&n);
for
(i=0;i<n;i++){
printf("element  %d:",i+1);
scanf("%d",&A[i]);}
{
printf("number to be inserted");
scanf("%d",&k);
}
{
printf("enter at what position the number should be inserted");
scanf("%d",&p);
}
for(i=n;i>=p;i--){
A[i]=A[i-1];
}
n++;
A[p-1]=k;
for(i=0;i<n;i++){
printf("%d",A[i]);
}
return 0;
}
