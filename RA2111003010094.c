#include <stdio.h>
int main()
{
    int getint1, getint2, result_value1;
    
    float getfloat1, getfloat2, result_value2;
    double getdouble1, getdouble2, result_value3;
    printf("Enter INTEGER number\n");
    scanf("%d %d", &getint1, &getint2);
    printf("\nEnter FLOAT number\n");
    scanf("%f %f", &getfloat1, &getfloat2);
    printf("\nEnter DOUBLE number\n");
    scanf("%lf %lf", &getdouble1, &getdouble2);

    int val;
        printf("Enter:\n 1-addition \n 2-Substraction \n 3- Division \n 4-Multiplication \n 5-Modulus\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            result_value1 = getint1 + getint2;
            result_value2 = getfloat1 + getfloat2;
            result_value3 = getdouble1 + getdouble2;
            printf(" SUM OF INTEGER %d\n", result_value1);
            printf(" SUM OF FLOAT %0.3f\n", result_value2);
            printf(" SUM OF DOUBLE %lf\n", result_value3);

            break;
        case 2:
            result_value1 = getint1 - getint2;
            result_value2 = getfloat1 - getfloat2;
            result_value3 = getdouble1 - getdouble2;
            printf(" SUBTRACTION OF INTEGERS %d\n", result_value1);
            printf(" SUBTRACTION OF FLOAT %0.3f\n", result_value2);
            printf(" SUBTRACTION of double %lf\n", result_value3);
            break;
        case 3:
            result_value1 = getint1 / getint2;
            result_value2 = getfloat1 / getfloat2;
            result_value3 = getdouble1 / getdouble2;
            printf(" DIVIDE OF INTEFER%d \n", result_value1);
            printf(" DIVIDE OF FLOAT%0.3f\n", result_value2);
            printf(" DIVIDE OF DOUBLE%lf\n", result_value3);         
               break;
        case 4:
            result_value1 = getint1 * getint2;
            result_value2 = getfloat1 * getfloat2;
            result_value3 = getdouble1 * getdouble2;
            printf("MULTIPLICATION OF INTEGER%d\n", result_value1);
            printf("MULTIPLICATION OF FLOAT%0.3f\n", result_value2);
            printf("MULTIPLICATION OF DOUBLE%lf\n", result_value3);  
            break;
        case 5:
            result_value1 = getint1 % getint2;
            printf("MODULUS OF INTEGER%d", result_value1);

        default:;
        }

        return 0;
        }

