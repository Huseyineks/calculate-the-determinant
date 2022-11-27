#include <stdio.h>  
#include <stdlib.h>
#include<math.h>
#include<conio.h>

void hesapla(){
float kat1;
int m;
float det=1.0;
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);
float arr[a][b];
int o;
int c=0;
int v=0;
int y;
y=0;
int p=0;
int i;
int j;
for(i=0;i<a;i++){	
	for(j=0;j<b;j++){		
		scanf("%f",&arr[i][j]);		
	}
}
for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		printf("%.3f ",arr[i][j]);	
	}
	printf("\n");
}
for(o=0;o<a;o++){
int d=1;
while(d!=a-p){
	v=y;
    if(arr[c][v]!=0){	
	kat1=arr[c+d][v]/arr[c][v];
}
	for(v=y;v<b;v++){
	arr[c+d][v]+=arr[c][v]*-1*kat1;	
	}
d++;	
}	
c++;	
y++;	
p++;	
}
for(m=0;m<a;m++){
	det*=arr[m][m];	
}
printf("%.2f",det);;	
}
int main() {
	hesapla();
/*
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);

float arr[a][b];



int i;
int j;
for(i=0;i<a;i++){
	
	for(j=0;j<b;j++){
		
		scanf("%f",&arr[i][j]);
		
		
		
		
		
		
	}
}
for(i=0;i<a;i++){
	
	for(j=0;j<b;j++){
		
		printf("%.3f ",arr[i][j]);
		
		
		
		
		
		
	}
	printf("\n");
}

float kat1;

int c=0;
int v=0;
int d=1;
while(d!=a){
	v=0;
    if(arr[c][v]!=0){
	
	kat1=arr[c+d][v]/arr[c][v];
}
	
	for(v=0;v<b;v++){
	arr[c+d][v]+=arr[c][v]*-1*kat1;
	
		
	}

d++;
	
}


float det;
if(a==3 || a==4){

c=1;
d=1;
while(d!=a-1){
		v=1;
    if(arr[c][v]!=0){
	
	kat1=arr[c+d][v]/arr[c][v];
}
	
	for(v=1;v<b;v++){
	arr[c+d][v]+=arr[c][v]*-1*kat1;
	
		
	}

d++;

}
if(a==4){

c=2;
d=1;
while(d!=a-2){
		v=2;
    if(arr[c][v]!=0){
	
	kat1=arr[c+d][v]/arr[c][v];
}
	
	for(v=2;v<b;v++){
	arr[c+d][v]+=arr[c][v]*-1*kat1;
	
		
	}

d++;

}
}

}
int k;
int l;
for(k=0;k<a;k++){
	for(l=0;l<b;l++){
		
		printf("%.2f\n",arr[k][l]);
		
		
		
		
	}
}
if(a==4){
det=arr[0][0]*arr[1][1]*arr[2][2]*arr[3][3];
printf("Determinant is %f ",det);	
}
else if(a==3){

det=arr[0][0]*arr[1][1]*arr[2][2];
printf("Determinant is %f ",det);	
}else{
	det=arr[0][0]*arr[1][1];
 printf("Determinant is %f ",det);	
}
	

	
	
	
*/
	
	
	return 0;
}

