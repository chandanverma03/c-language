//                       File Handling


//#include<stdio.h>
//int main(){
//	FILE *fp;
//	fp = fopen("zerofile.txt","w");
//	fprintf(fp,"Computer Programming");
//	fclose(fp);
//}

//#include<stdio.h>
//int main(){
//	char buff[255];
//	FILE *f1;
//	f1 = fopen("zerofile.txt","r");
//	while(fscanf(f1, "%s",buff)!=EOF){
//		printf("%s",buff);
//	}
//	fclose(f1);
//}


//#include<stdio.h>
//int main(){
//	FILE *fp;
//	fp = fopen("zerofile.txt","a");
//	fprintf(fp,"Computer Programming");
//	fclose(fp);
//}

/*#include<stdio.h>
int main(){
	FILE *f1;
	int regno;
	char name[20];
	float percentage;
	f1 = fopen("StudentData.txt","w");
	printf("Enter the regno : \n");
	scanf("%d",&regno);
	fprintf(f1,"regno = %d\n",regno);
	printf("Enter the name: ");
	scanf("%s",&name);
	fprintf(f1,"Name = %s\n",name);
	printf("Enter percentage : ");
	scanf("%f",&percentage);
	fprintf(f1,"percentage : %f\n",percentage);
	fclose(f1);
}*/

#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("zero90.txt","w+");
	fputs("This is javatpoint",fp);
	fseek(fp,8,SEEK_SET);
	fputs("Sonoo jaiswal",fp);
	fclose(fp);
}

#include<stdio.h>
void main(){
	FILE *fp;
	int length;
	fp = fopen("zero90.txt","r");
	fseek(fp,0,SEEK_END);
	length = ftell(fp);
	fclose(fp);
	printf("Size of file : %d bytes",length);
	
}


#include<stdio.h>
void main(){
	FILE *fp;
	char c;
	fp = fopen("zero90.txt","r");
	while((c = fgetc(fp))!=EOF){
		printf("%c",c);
	}
	rewind(fp);
	while((c=fgetc(fp))!=EOF){
		
	}
}
