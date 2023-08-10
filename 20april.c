//create a structure book which contains members as book name, year of publication and price 
//and create one record from the given structure and take the input from the user for the
// record.

//#include<stdio.h>
//struct book{
//	char book_name[20];
//	int year;
//	float price;
//}b1;
//int main(){
//	printf("Enter the values : ");
//	scanf("%s",&b1.book_name);
//	scanf("%d",&b1.year);
//	scanf("%f",&b1.price);
//	FILE *ptr;
//	ptr = fopen("book.txt","w");
//	fwrite(&b1,sizeof(b1),1,ptr);
//	fclose(ptr);
//	ptr = fopen("book.txt","r");
//	fread(&b1,sizeof(b1),1,ptr);
//	printf("%s  %d  %f",b1.book_name,b1.year,b1.price);
//}

//create a structure person which conatains name and age as the members  create five records
//for the given structure and write this five records into the file and take the input from the
//user
#include<stdio.h>
struct person{
	char person_name[20];
	int person_age;
}p[5];
int main(){
	int i;
	for(i=0;i<5;i++){
		printf("Enter name: ");
		scanf("%s",&p[i].person_name);
		printf("Enter age: ");
		scanf("%d",&p[i].person_age);
	}
		FILE *ptr;
		ptr=fopen("personrecord.txt","w");
		fwrite(&p,sizeof(p),5,ptr);
		fclose(ptr);	
}
