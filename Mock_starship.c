#include<stdio.h>

int main(){
    char str;
    int ship;
    scanf("%d",&ship);
    if (ship < 1000) {
        int lastDigit = ship % 10;
        if (lastDigit == 0) {
            printf("Command-class starship");
        } else if (lastDigit == 5) {
            printf("Exploration-class starship");
        } else {
            printf("General-class starship");
        }
    }else {
        int shipf = ship;
        while (shipf >= 10){
            shipf/=10;
        }
        int lastTwoDigits = ship % 100;
        if (shipf % 2 == 0) {
            if (lastTwoDigits == 50 || lastTwoDigits == 75) {
                printf("Active Starfleet Flagship");
            } else {
                printf("Active Standard-class starship");
            }
        } else {
            if (lastTwoDigits == 50 || lastTwoDigits == 75) {
                printf("Reserve Starfleet Flagship");
            } else {
                printf("Reserve Standard-class starship");
            }
        }
    }

    return 0;
}