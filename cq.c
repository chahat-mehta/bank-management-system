#include<stdio.h>
#define max 10
int cqenq(int[],int,int);
int cqdeq(int[],int,int);
void disp(int[],int,int);
void peek(int[],int);
int main(){
int cq[max],F=-1,R=-1,ch;
do{
printf("\n 1.enq\n 2.deq\n 3.disp\n 4.peek\n 5.exit");
printf("enter a choice");
scanf("%d",&ch);
switch(ch){
case 1:
    R=cqenq(cq,R,F);
    if(F==-1)
    F=0;
break;
case 2:
    F=cqdeq(cq,F,R);
    if(F==-1)
    R=-1;
break;
case 3:
    disp(cq,F,R);
break;
case 4:
    peek(cq,F);
break;
}}
while(ch<=4);
}
int cqenq(int cq[],int R,int F){
int x;
if(R+1% max==F){
printf("stack is full");}
else{
printf("enter the value");
scanf("%d",&x);
{
R= R+1% max;
cq[R]=x;
}
return R;}
}
int cqdeq(int cq[],int F,int R){
int x;
if(F+1 % max==R){
printf("\n empty");
}
else{
printf("enter a value ");
scanf("%d",&x);{
    F=F+1 % max;
x=cq[F];

}
}
 return F;
}
void disp(int cq[],int F,int R){
if(R==-1&&F==-1){
printf("\n empty");}
else {
while(F!=R){
printf("%d",cq[F]);
F=F+1 % max;
}
printf("%d",cq[F]);}
}
void peek(int cq[], int F){
if(F==-1){
printf("\n empty");
}
else{
printf("%d",cq[F]);
}
}
