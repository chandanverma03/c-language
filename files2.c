#include<stdio.h>
int main(){
	FILE *fp;
	int n,ch,pos;
	fp = fopen("zero90.txt","r");
	printf("Here is the content available in file --->\n");
	while((ch==fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	printf("\nfp=%d\n",ftell(fp));
	printf("\nEnter how many characters would u like to ");
	scanf("%d",&n);
	fseek(fp,n,SEEK_END);
	printf("n=%d\n",n);
	printf("fp=%d\n",ftell(fp));
	printf("\nInfo after %d bytes---->\n",n);
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
	
	
}


//fopen(), fprintf(), fgetc(), fwrite(), fseek()
//fclose(), fscanf(), fputc(), fread(), ftell()  learn about these functions for ete
