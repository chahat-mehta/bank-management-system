#include<stdio.h>
#define max 10
int sqenq(int[],int);
int sqdeq(int[],int,int);
void disp(int[],int,int);
void peek(int[],int);
int main(){
int sq[max],F=-1,R=-1,ch;
do{
printf("\n 1.enq\n 2.deq\n 3.disp\n 4.peek\n 5.exit");
printf("enter a choice");
scanf("%d",&ch);
switch(ch){
case 1:
    R=sqenq(sq,R);
    if(F==-1)
    F=0;
break;
case 2:
    F=sqdeq(sq,F,R);
    if(F==-1)
    R=-1;
break;
case 3:
    disp(sq,F,R);
break;
case 4:
    peek(sq,F);
break;
}}
while(ch<=4);
}
int sqenq(int sq[],int R){
int x;
if(R==max-1){
printf("stack is full");}
else{
printf("enter the value");
scanf("%d",&x);
{
R++;
sq[R]=x;
}
return R;}
}
int sqdeq(int sq[],int F,int R){
int x,i;
if(R==-1&&F==-1){
printf("\n empty");
}
else{
printf("enter a value ");
scanf("%d",&x);{
x=sq[F];
printf("%d is dequeue  from sq[%d]",sq[F],F);
if(F==R){
    F=-1;
} else {
    F++;
}
printf("dequeue the value at particular index");
for(i=F;i<=R;i++){
    sq[i];
}
} return F;
}
void disp(int sq[],int F,int R){
if(R==-1,F==-1){
printf("\n empty");}
else {
while(F<=R){
printf("%d",sq[F]);
F++;
}}
}
void peek(int sq[], int F){
if(F==-1){
printf("\n empty");
}
else{
printf("%d",sq[F]);
}
}}

