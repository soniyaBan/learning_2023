//1 ternary operator
 #include <stdio.h>

int find_biggest_if_else(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = find_biggest_if_else(num1, num2);
    printf("The biggest number is: %d\n", result);
    return 0;
}
//1 if-else
 #include <stdio.h>

int find_biggest_ternary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = find_biggest_ternary(num1, num2);
    printf("The biggest number is: %d\n", result);
    return 0;
}
 
//2 Grade of student
#include <stdio.h>

void printGrade(int score) {
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    } else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    } else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    } else if (score >= 0 && score <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }
}

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    printGrade(score);
    return 0;
}
 
//3 information of student
 #include <stdio.h>

//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

int main() {
	
    struct Marks marks[5];
    
    
    for(int i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }
    
    
	for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}

//4 simple calculator
 #include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter Number1: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
// 5 Bit_operation
 #include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        t
        num |= 1;
    } else if (oper_type == 2) {
        
        num &= ~(1 << 31);
    } else if (oper_type == 3) {
        
        num ^= (1 << 15);
    }

    return num;
}

int main() {
    int num = 123; 
    int oper_type = 2;  

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}