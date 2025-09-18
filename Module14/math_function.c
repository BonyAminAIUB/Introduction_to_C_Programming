#include <stdio.h>
#include <math.h>
int main(){
    int ceiling_v = ceil(4.3);
    printf("Ceiling -> %d\n",ceiling_v);
    int floor_v = floor(4.6);
    printf("Floor -> %d\n",floor_v); 
    int round_v = round(4.5);
    printf("Round -> %d\n",round_v); 
    float sqrt_v = sqrt(26);
    printf("Sqrt -> %f\n",sqrt_v);
    int power_v = pow(2,3);
    printf("Power -> %d\n",power_v);
    int abs_v = abs(-10);
    printf("Absolute -> %d\n",abs_v); 
    return 0;
}