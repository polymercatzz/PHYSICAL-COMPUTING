#include <stdio.h>
#include <stdlib.h>
 
int main() {
    double num_n, num_a, num_b, num_c, num_d, num_e, num_f, num_g;
    double price = 0;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &num_n, &num_a, &num_b, &num_c, &num_d, &num_e, &num_f, &num_g);
    if (num_f > num_g) {
        double temp = num_f;
        num_f = num_g;
        num_g = temp;
    }
    double sta = abs(num_g - num_f);
    if (num_g <= num_n) {
        if (num_g <= num_f + num_a) {
            price += num_b;
        }else if(num_g <= num_f + num_a + num_c) {
             price += num_b + ((num_g - (num_f + num_a)) * num_d);
        }else{
            price += num_b + (num_c * num_d) + ((num_g - (num_f + num_a + num_c)) * num_e);
        }
        printf("%.0lf",price);
    } else {
        printf("Error\n");
    }
    return 0;
}