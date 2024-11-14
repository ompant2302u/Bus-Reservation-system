#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct ticket{
 char name[50],address_from[100],address_to[100],seatnum[10],date[50];
 double mobileNumber;
 };
void signup();
void login();
void Seat_Booking();
void Check_Seat();
void Cancel_Seat();
void Search_Seat();
void Update_Seat(); 
int main()
{ 
int choice;
 while (1) {
 printf("\n1. Sign up\n");
 printf("2. Login\n");
 printf("3. Exit\n");
 printf("\nEnter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 {
 signup();
 break;
}
 case 2:
 {
 login(); 
int choice,num=0;
char c;
do{
printf("\nPress 1 for Booking Seat.\n");
printf("Press 2 for Check Seat. \n");
printf("Press 3 for Cancel Seat.\n");
printf("Press 4 for Search Seat.\n");
printf("Press 5 for Update Seat.\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
 { 
system("cls");
 Seat_Booking();
 break;
 }
 case 2:
 {
 system("cls");
 Check_Seat();
 break;
}
 case 3:
 {
 system("cls");
Check_Seat();
 Cancel_Seat();
 break;
 }
 case 4:
 {
 system("cls");
 Search_Seat();
 break;
 }
 case 5:{
 system("cls");
 Update_Seat();
break;
}
 default:
 {
 printf("\nYou will Enter Wrong number ! Please enter correct number\n");
 break;
 }
}
printf("\nGo to menu press 'Y' else any letter for exit.\n");
fflush(stdin);
scanf("%c",&c);
}
while(c=='y' || c=='Y');
printf("Thanks for using our Service.\n");
 break;
 }
 case 3:
 {
 printf("Exiting program...\n");
 exit(0);
 }
 default:
 printf("Invalid choice.\n");
 }
 
}
}
void signup() {
 char username[20], password[20];
 FILE *fp;
 printf("Enter username: ");
 scanf("%s", username);
 printf("Enter password: ");
 scanf("%s", password);
 fp = fopen("users.txt", "w");
 if (fp == NULL) {
 printf("Error: Unable to open file.");
 exit(1);
 }
 fprintf(fp, "%s %s\n", username, password);
 fclose(fp);
 printf("Account created successfully.\n");
}
void login() {
 char username[20], password[20], file_username[20], file_password[20];
 FILE *fp; 
 do{
 fp = fopen("users.txt", "r");
 printf("\nEnter username: ");
 scanf("%s", username);
 printf("Enter password: ");
 scanf("%s", password);
 
fscanf(fp,"%s %s",&file_username,&file_password);
 if (strcmp(username, file_username) == 0 && strcmp(password, file_password) == 0) 
{
 printf("\nLogin successful.\n\n");
 fclose(fp);
 } else {
 printf("Incorrect username or password.\n\n");
 }
}
while ((strcmp(username, file_username) != 0) || (strcmp(password,file_password)!=0));
}
void Seat_Booking()
{
struct ticket s;
FILE *fpr;
fpr=fopen("Booking_Store.txt","ab");
char a[]="A1",b[]="A2",c[]="A3",d[]="A4",e[]="A5",f[]="A6",g[]="A7",h[]="A8",i[]="A9",
j[]="A10",k[]="A11",l[]="A12",m[]="A13",n[]="A14",aa[]="B1",ab[]="B2",ac[]="B3",ad[]="B4",
ae[]="B5",af[]="B6",ag[]="B7",ah[]="B8",ai[]="B9",aj[]="B10",ak[]="B11",al[]="B12",am[]="B13",
an[]="B14",ba[]="C1",bb[]="C2",bc[]="C3",bd[]="C4",be[]="C5";
char ca[]="D1",cb[]="D2";
int cmp;
printf("\t*****************Seat Plan*****************\n\n");
printf("\t%s\t%s\t\tDriver seat\n",ca,cb);
printf("\t==============\n");
printf("\tDoor\t\n");
printf("\t==============\n");
printf("\tLeft side seat\t\tRight side seat\n");
printf("\t%s\t%s\t\t%s\t%s\n",a,b,aa,ab);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",c,d,ac,ad);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",e,f,ae,af);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",g,h,ag,ah);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",i,j,ai,aj);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",k,l,ak,al);
printf("\n");
printf("\t%s\t%s\t\t%s\t%s\n",m,n,am,an);
printf("\n");
printf("\t%s\t%s\t%s\t%s\t%s\n",ba,bb,bc,bd,be);
printf("\n");
printf("Enter Your Name : ");
fflush(stdin);
 gets(s.name);
 printf("Enter Destination From : ");
 fflush(stdin);
 gets(s.address_from);
 printf("Enter Destination To : ");
 fflush(stdin);
 gets(s.address_to);
 printf("Enter Your Mobile number : ");
 scanf("%lf",&s.mobileNumber);
 printf("Travelling Date 'yyyy-mm-dd' : ");
 fflush(stdin);
 gets(s.date);
 printf("Choose your seat number :");
 fflush(stdin);
 gets(s.seatnum);
 if(strcmp(a,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(b,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(c,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(d,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(e,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(f,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(g,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(h,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(i,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(j,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(k,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(l,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(m,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(n,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(aa,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ab,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ac,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ad,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ae,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(af,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ag,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ah,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ai,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(aj,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ak,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(al,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(am,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(an,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(an,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ba,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(bb,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(bc,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(bd,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(be,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(ca,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else if(strcmp(cb,s.seatnum)==0)
{
 printf("Your seat are booked.\n");
 fwrite(&s,sizeof(struct ticket),1,fpr);
 }
 else{
 printf("Your seat are not booked.\n");
 }
 fclose(fpr);
}
 void Search_Seat()
 {
 FILE *fpr;
 fp=fopen("Booking_Store.txt","rb");
 struct ticket s;
 int found=1;
 char Check_Name[50];
 printf("\n\nEnter Your Name :");
 fflush(stdin);
 gets(Check_Name);
 while(fread(&s,sizeof(struct ticket),1,fpr))
{
 if(strcmp(Check_Name,s.name)==0){
 found==1;
 printf("\n*************************************************Search 
List************************************************\n");
printf("Name\t\tFrom\t\tTo\t\tMobile_Number\tDate\t\tSeat_Number\n\n");
 
printf("%s\t%s\t%s\t%.0lf\t%s\t%s\n",s.name,s.address_from,s.address_to,s.mobileNumber,s.date,s.se
atnum);
printf("\n**************************************************************************
******************************************\n");
}
} 
 fclose(fpr);
if(found!=1){
 printf("\nYour name aren't found !\n");
 } 
}
void Check_Seat()
 {
 FILE *fpr;
 fpr=fopen("Booking_Store.txt","rb");
 struct ticket s;
 printf("\n--------------------------------------------------Booking-List----------------------------------------------
------\n");
 printf("\nName\t\tFrom\t\tTo\t\tMobile_Number\tDate\t\tSeat_Number\n");
 while(fread(&s,sizeof(struct ticket),1,fpr))
{
 
printf("\n%s\t%s\t%s\t%.0lf\t%s\t%s\n",s.name,s.address_from,s.address_to,s.mobileNumber,s.date,s.
seatnum);
}
printf("\n--------------------------------------------------------------------------------------------
--------------------------\n");
 fclose(fpr); 
}
void Cancel_Seat(){
 FILE *fpr,*fptr;
 fpr=fopen("Booking_Store.txt","rb");
fptr=fopen("TempStore.txt","wb"); 
 struct ticket s;
 char Check_Name[50];
 printf("Enter Your Name :");
 fflush(stdin);
 gets(Check_Name);
 while(fread(&s,sizeof(struct ticket),1,fpr))
{
 if(strcmp(Check_Name,s.name)!=0){
 fwrite(&s,sizeof(struct ticket),1,fptr);
 printf("\nYour Ticket is unsuccessfully to Cancel .\n");
 }
 else{
 printf("\nYour Ticket is successfully to Cancel . \n");
 } 
}
 fclose(fpr);
 fclose(fptr);
 remove("Booking_Store.txt");
 rename("TempStore.txt","Booking_Store.txt");
}
void Update_Seat()
{
struct ticket s;
char Check_Name[50];
int c,found=0,flag=0;
FILE *fpr,*fptr;
 fpr=fopen("Booking_Store.txt","rb");
fptr=fopen("TempStore.txt","wb"); 
 printf("\nEnter Your Name :");
 fflush(stdin);
 gets(Check_Name);
 while(fread(&s,sizeof(struct ticket),1,fpr))
{
 if(strcmp(Check_Name,s.name)==0){
 flag==1;
 printf("\n*************************************************Update 
List************************************************\n");
printf("Name\t\tFrom\t\tTo\t\tMobile_Number\tDate\t\tSeat_Number\n\n");
 
printf("%s\t%s\t%s\t%.0lf\t%s\t%s\n",s.name,s.address_from,s.address_to,s.mobileNumber,s.date,s.se
atnum);
 
printf("\n**************************************************************************
************************************\n");
 int choice;
printf("\n\nEnter :-\n1- Do you went change Name.\n2- Do you went 
change Destination From.\n3- Do you went Destination To.\n4- Do you went change Date.\n5- Do you 
went change Mobile Number. \n6- Do you went change Seat Number.\n\n");
scanf("%d",&choice);
switch(choice){
case 1:{
printf("Enter New Name :");
fflush(stdin);
gets(s.name);
break;
}
case 2:{
printf("Enter Your New Destination From :");
fflush(stdin);
gets(s.address_from);
break;
}
case 3:{
printf("Enter Your New Destination To :");
fflush(stdin);
gets(s.address_to);
break;
}
 
case 4:{
printf("Enter New Date :");
fflush(stdin);
gets(s.date);
break;
}
case 5:{
printf("Enter Your New Mobile Number :");
scanf("%lf",&s.mobileNumber);
break;
}
case 6:{
printf("Enter Your new Seat Number :");
fflush(stdin);
gets(s.seatnum);
break;
}
}
fwrite(&s,sizeof(struct ticket),1,fptr);
 }
 else{
 fwrite(&s,sizeof(struct ticket),1,fptr);
}
}
fclose(fpr);
 fclose(fptr);
 remove("Booking_Store.txt");
 rename("TempStore.txt","Booking_Store.txt");
 if(flag!=1){
 printf("\nYour data is updata .\n");
 }
}