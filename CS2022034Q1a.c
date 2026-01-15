#include <stdio.h>
#define PART_TIME 0
#define FULL_TIME 1
//CS2022034Q1a

void inputData(int*, int*, int*);
void calculateTotalfee(int, int, int *, float*, float*);
void outputData(float, float, int, int);

int main(){

    int enroll_No, no_subjects, no_exams, student_type;
    float discount, total_fee;

    inputData(&enroll_No, &no_subjects, &no_exams);
    calculateTotalfee(no_subjects, no_exams, &student_type, &discount, &total_fee);
    outputData(total_fee, discount, student_type, enroll_No );
    return 0;

}


void inputData(int *enroll_No, int *no_subjects, int *no_exams){
    printf("Enter Your Student Number(101-999): ");
    scanf("%d", enroll_No);

    while (!(*enroll_No>100 && *enroll_No<1000)){
        printf("Please enter a valid enroll number, enroll number should be a digit between (101 -999)\nPls enter correct enroll no now:");
        scanf("%d", enroll_No);
    }



    printf("Enter the Number of Subjects enrolled in: ");
    scanf("%d",no_subjects);

    printf("Enter the Number Examinations to be taken: ");
    scanf("%d",no_exams);



}



void calculateTotalfee(int no_subjects, int no_exams, int *student_type, float *discount, float *total_fee){
    int anual_fee;
    if (no_subjects>4){
        anual_fee = 8000;
        *student_type= FULL_TIME;
    }else{
        anual_fee = 4000;
        *student_type = PART_TIME;
    }

    char choice;
    printf("~~~~If You are eligible to pay the total fee at the time of enrollment you will be applicable for discounts~~~~\n");
    printf("              ~~~~If You are part- time student you will be rewarded a '10%%' discount~~~~\n");
    printf("              ~~~~If You are full- time student you will be rewarded a '15%%' discount~~~~\n\n");
    printf("Do you pay the total fee at the time of enrollment(Y/N):");
    scanf(" %c",&choice);

    while (!(choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n' )){
        printf("You response is not valid\n");
        printf("Please enter Y if yes, else N if no:");
        scanf(" %c",&choice);
    }

    if (choice == 'Y' || choice == 'y'){
       if (no_subjects>4){
           *discount = 0.15;
       }else{
           *discount = 0.10;
       }
    }else{
       *discount = 0.0;
    }


    int base_fee = (no_subjects*15000 + no_exams*1500 + anual_fee );
    *total_fee = base_fee - ((base_fee) * (*discount));

}



void outputData(float total_fee, float discount, int student_type, int enroll_No){
    printf("\n____________________________________________________________________\n\n");
    printf("Enroll No %d\n", enroll_No);


    printf("The Student Type Is :");
    if (student_type== 0){
        printf("part-time\n");
    }else{
        printf("full-time\n");
    }

    printf("You are applicable for a %.2f discount\n", discount);

    printf("The Total Fee you should pay : %.2f\n",total_fee);


    printf("\n____________________________________________________________________\n");

}

