#include <stdio.h>

int main(void) {
    int d = 0x90000000;  


    int masque_bit4  = 1 << 28;
    int masque_bit20 = 1 << 12;

    int bit4_est_1  = (d & masque_bit4)  != 0;
    int bit20_est_1 = (d & masque_bit20) != 0;

    if (bit4_est_1 && bit20_est_1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
