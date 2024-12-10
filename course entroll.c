#include <stdio.h>
int main(){
int course_choice,n;
sacnf("%d",&n);
float price;
printf("\n===== Course Enrollment System =====\n");
printf("1. Enroll in Computer Science\n");
printf("2. Enroll in Mathematics\n");
printf("3. Enroll in Physics\n");
printf("4. Enroll in Chemistry\n");
printf("5. Enroll in Biology\n");
printf("6. Exit\n");
printf("====================================\n");
printf("Enter your choice: ");
for(int i=0;i<=n;i++){
scanf("%d",&course_choice);
switch(course_choice) {
case 1:
price = 100.0;
printf("You selected 'cs'. The price is $%.2f\n", price);
break;
case 2:
price = 120.0;
printf("You selected 'maths'. The price is $%.2f\n", price);
break;
case 3:
price = 130.0;
printf("You selected 'physics'. The price is $%.2f\n", price);
break;
case 4:
price = 140.0;
printf("You selected 'chemistry'. The price is $%.2f\n", price);
break;
case 5:
price = 150.0;
printf("You selected 'biology'. The price is $%.2f\n", price);

break;
case 6:
printf("\nExiting the system. Thank you!\n");
break;
default:
printf("\nInvalid choice, please try again.\n");


}


}




    return 0;
}
