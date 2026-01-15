#include <stdio.h>
#include <stdbool.h>
//CS2022034Q2F2

int stamp_value, coin_value, change;
bool stamp;
bool available_change;
int stamp10 =2, stamp15= 3, stamp25=4;
int coin5=2, coin10=3, coin25=4, coin50=5;
int used5, used10, used25, used50;

void checkStamps(){
    switch(stamp_value){
        case 10:
            stamp = (stamp10>0);
            break;
        case 15:
            stamp = (stamp15>0);
            break;
        case 25:
            stamp = (stamp25>0);
            break;

    }
}


void checkChange(){
    change = coin_value - stamp_value;
    if (change<0){

        available_change = false;

    }else if(change == 0){
        available_change = true;
    }else{
        used5=0, used10=0, used25=0, used50=0;
        int temp_change = change;
        while(temp_change>=5){
            if (temp_change>=50 && coin50>0 && used50==0){
                temp_change -= 50;
                used50=1;

            }else if (temp_change>=25 && coin25>0 && used25==0){
                temp_change -= 25;
                used25=1;
            }else if (temp_change>=10 && coin10>0 && used10==0){
                temp_change -= 10;
                used10=1;
            }else if(temp_change>=5 && coin5>0 && used5==0){
                temp_change -= 5;
                used5=1;
            }else{
                break;
            }

        }

        if (temp_change == 0){
            available_change = true;
        }else{
            available_change = false;
        }

    }

}
