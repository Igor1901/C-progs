#include <stdio.h>
int main(int argc, char *argv[]) {
    float temp;
    char m;
    printf("Enter you temperature\n");
    scanf("%f %s", &temp,&m);
    switch (m)
    {
       case 'C':
          printf("C %.2f\n", temp);
          printf("F %.2f\n", 1.8 * temp + 32);
          printf("K %.2f\n", temp + 273.15);
          break;
    case 'F':
       printf("C %.2f\n", 5.0/9.0*(temp-32));
       printf("F %.2f\n", temp);
       printf("K %.2f\n",5 * (temp - 32) + 273.15);
       break;
    case 'K':
       printf("C %.2f\n", temp - 273.15);
       printf("F %.2f\n", 9 * (temp - 273.15)/5.0 + 32);
       printf("K %.2f\n", temp);
       break;
    default:
        printf("If C %.2f\n", temp);
        printf("F %.2f\n", 1.8 * temp + 32);
        printf("K %.2f\n", temp + 273.15);
        printf("\n");
        printf("If F %.2f\n", temp);
        printf("K %.2f\n",5 * (temp - 32) + 273.15);
        printf("C %.2f\n", 5.0/9.0*(temp-32));
        printf("\n");
        printf("If K %.2f\n", temp);
        printf("C %.2f\n", temp - 273.15);
        printf("F %.2f\n", 9 * (temp - 273.15)/5.0 + 32);
        break;
    }
    return 0;
}
