#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//CS2022034Q2F1

extern int stamp_value, coin_value, change;
extern bool stamp;
extern bool available_change;
extern int stamp10, stamp15, stamp25;
extern int coin5, coin10, coin25, coin50;
extern int used5, used10, used25, used50;
int result;


extern void checkStamps();
extern void checkChange();
extern void outputData();



int main(){
    printf("Available stamps in the machine Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
    printf("Available coins in the machine  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);

    while(1){
        printf("~~If you want to quit from the machine please enter 'quit'~~\n\n");
        printf("Enter the value of the stamp you want(10, 15,25) :");
        result = scanf("%d",&stamp_value);

        if(result != 1){
                char temp[20];
                scanf("%s",temp);
                if(strcmp(temp,"quit")==0){
                    break;
                }else{
                    printf("Invalid input. Please enter a valid number or 'quit'.\n\n");
                    continue;

                }

        }
        if(stamp_value != 10 && stamp_value != 15 && stamp_value != 25){
           printf("Invalid stamp value. \n");
           printf("Remaining Stamps Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
           printf("Remaining Coins  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);
           continue;
        }



        printf("Enter a coin (5, 10, 25, 50) :");
        scanf("%d",&coin_value);
        if (coin_value != 5 && coin_value != 10 && coin_value != 25 && coin_value != 50) {
            printf("Invalid coin value. \n");
            printf("Remaining Stamps Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
            printf("Remaining Coins  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);
            continue;
        }
        checkStamps();
        checkChange();
        outputData();

    }

    return 0;

}

