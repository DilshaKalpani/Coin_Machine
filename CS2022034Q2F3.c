#include <stdio.h>
#include <stdbool.h>
//CS2022034Q2F3

extern int stamp_value, coin_value, change;
extern bool stamp;
extern bool available_change;
extern int stamp10, stamp15, stamp25;
extern int coin5, coin10, coin25, coin50;
extern int used5, used10, used25, used50;

void addCoins();
void subStamps();

void outputData(){
    if(stamp && available_change){
            addCoins();
            subStamps();
            while(1){
                if(used50==1){
                   coin50--;
                   used50=0;
                }else if(used25){
                   coin25--;
                   used25=0;
                }else if(used10){
                   coin10--;
                   used10=0;
                }else if(used5){
                   coin5--;
                   used5=0;
                }else{
                    break;
                }
            }
            printf("Your stamp is here. \n");
            if(change!=0){
                printf("Your Rs. %d change is here. \n", change);

            }
            printf("Remaining Stamps Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
            printf("Remaining Coins  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);


    }else if(stamp == false && available_change == true){
        printf("Stamps are not available. \n");
        printf("This is your money back. \n");
        printf("Remaining Stamps Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
        printf("Remaining Coins  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);

    }else if(stamp == true && available_change == false){
        if(change<0){
            printf("Insufficient amount tendered. \n");
        }else{
            printf("Change is not available. \n");
        }

        printf("This is your money back. \n");
        printf("Remaining Stamps Rs 25: %d   Rs 15: %d   Rs 10: %d           \n",stamp25, stamp15, stamp10);
        printf("Remaining Coins  Rs 50: %d   Rs 25: %d   Rs 10: %d   Rs 5: %d\n\n",coin50, coin25, coin10, coin5);

    }

}


void addCoins(){
    switch(coin_value){
    case 5:
        coin5++;
        break;
    case 10:
        coin10++;
        break;
    case 25:
        coin25++;
        break;
    case 50:
        coin50++;
        break;
    }
}


void subStamps(){
    switch(stamp_value){
    case 10:
        stamp10--;
        break;
    case 15:
        stamp15--;
        break;
    case 25:
        stamp25--;
        break;

    }
}

