/*2.   Write   a   C   program   to   assign   values   to   each
members   of   the   following   structure.   Pass   the
populated   structure   to   a   function   Using   call-by
address and print the value of each member of the
structure with in that function.
struct info{
int roll_no;
char name[50];
float CGPA;
}*/

#include <stdio.h>

struct info {
    int roll_no;
    char name[50];
    float CGPA;
};

void display(struct info *student) {
    printf("\n--- Student Details ---\n");
    printf("Roll no. : %d\n", student->roll_no);
    printf("Name     : %s", student->name);  // 'fgets' keeps the newline
    printf("CGPA     : %.2f\n", student->CGPA);
}

int main() {
    struct info s;

    printf("Enter Roll = ");
    scanf("%d", &s.roll_no);
    getchar();  

    printf("Enter Name = ");
    fgets(s.name, sizeof(s.name), stdin);  // safer string input

    printf("Enter CGPA = ");
    scanf("%f", &s.CGPA);

    display(&s);

    return 0;
}
