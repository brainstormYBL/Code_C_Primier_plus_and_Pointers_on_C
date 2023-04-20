#include <stdio.h>
#include <limits.h>

void problem_01(){
    printf("The maximum of signed int %d\n", INT_MAX);
    int inx_max = INT_MAX;
    printf("%d", inx_max+1);
}

void problem_02(){
    int ch;
    printf("Please input a ASCII value:\n");
    if(scanf("%d", &ch)){
        printf("Input successful\n");
    }
    printf("The ASCII value is %d, and the char is %c.\n", ch, ch);
}

void problem_03(){
    ;
}

void problem_04(){
    double data;
    printf("Please input a double:\n");
    if(scanf("%lf", &data)){
        printf("Inpt successful.\n");
    }
    printf("%f\n", data);
    printf("%e\n", data);
    printf("%p\n", data);
}

void problem_05(){
    const  double sec_a_year = 3.156e17;
    printf("Please input your age\n");
    int age;
    if(scanf("%d", &age)){
        printf("Input successful.\n");
    }
    printf("The %d years is %e seconds.", age, age * sec_a_year);
}

void problem_06(){
    const double qui = 3.0e-23;
    int num;
    printf("Please input:\n");
    if(scanf("%d", &num)){
        printf("Input successful.\n");
    }
    double num_res = num * 950.0 / qui;
    printf("%e", num_res);
}

void problem_07(){
    double eng;
    double cm;
    printf("Please input\n");
    if(scanf("%lf", &eng)){
        printf("Input successful.\n");
    }
    cm = eng * 2.54;
    printf("%f", cm);
}

void problem_08(){
    ;
}
int main() {
    problem_07();
    return 0;
}
