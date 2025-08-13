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

<<<<<<< HEAD
struct info
{
  int roll_no;
  char name[50];
  float CGPA;
};

void print_info(struct info *student)
{
  printf("Roll No: %d\n", student->roll_no);
  printf("Name: %s\n", student->name);
  printf("CGPA: %.2f\n", student->CGPA);
}

void main()
{
  struct info student1;

  printf("Enter Roll No: ");
  scanf("%d", &student1.roll_no);
  printf("Enter Name: ");
  scanf(" %[^\n]", student1.name);
  printf("Enter CGPA: ");
  scanf("%f", &student1.CGPA);

  print_info(&student1);
=======
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
>>>>>>> 3a3f7ed7287819910f7fac579c6981da5b0bc3f5
}
