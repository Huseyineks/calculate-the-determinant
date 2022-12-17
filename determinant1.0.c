#include <stdio.h>  
#include <stdlib.h>
#include<math.h>
#include<conio.h>

void hesapla(){
float kat1;
int m;
float det=1.0;
int a;
printf("Enter the size of square matrix: ");
scanf("%d",&a);
float arr[a][a];
int o;
int c=0;
int v=0;
int y;
y=0;
int p=0;
int i;
int j;
int b=1;
int w;
for(i=0;i<a;i++){	
	for(j=0;j<a;j++){		
		scanf("%f",&arr[i][j]);		
	}
}
for(i=0;i<a;i++){
	for(j=0;j<a;j++){
		printf("%.3f ",arr[i][j]);	
	}
	printf("\n");
}

if(arr[c][v]==0){
  

for(i=1;i<a;i++){
	
	if(arr[i][v]!=0){
	for(v=0;v<a;v++){
	
		
	arr[c][v]+= arr[i][v];	
		
} 
		
	}
	
	
	
	
}
}
printf("\n");

for(i=0;i<a;i++){
	for(j=0;j<a;j++){
		printf("%.3f ",arr[i][j]);	
	}
	printf("\n");
}

for(o=0;o<a;o++){
int d=1;
w=c;
if(arr[c][w]==0){
if(arr[c+b][w]!=0){             
    while(a!=b){
	for(v=0;v<a;v++){
		
	arr[c][v]+=arr[c+b][v];                                      
}

if(arr[c][w]!=0){
	break;
}

b++;
}
}
}
b=1;
if(arr[c][w]==0){
if(arr[c-b][w]!=0){             
    while((c-b)>=0){
	for(v=0;v<a;v++){
		
	arr[c][v]+=arr[c-b][v];                                      
}
if(arr[c][w]!=0){
	break;
}

b++;
}
}
}

while(d!=a-p){
	v=y;
    if(arr[c][v]!=0){	
	kat1=arr[c+d][v]/arr[c][v];
}

	for(v=y;v<a;v++){
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

	
	return 0;
}

