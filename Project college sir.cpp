#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks[3];
    float average;
    char grade;
};

void calculateAverageAndGrade(struct Student *s) {
    float sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += s->marks[i];
    }
    s->average = sum / 3;

    if(s->average >= 90) s->grade = 'A';
    else if(s->average >= 75) s->grade = 'B';
    else if(s->average >= 60) s->grade = 'C';
    else if(s->average >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void displayRecords(struct Student students[], int count) {
    printf("\nStudent Records:\n");
    for(int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Average: %.2f, Grade: %c\n",
               students[i].roll, students[i].name, students[i].average, students[i].grade);
    }
}

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    do {
        printf("\n1. Add Student\n2. Display Records\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &students[count].roll);
            printf("Enter Name: ");
            scanf(" %[^\n]", students[count].name);
            printf("Enter Marks in 3 subjects: ");
            for(int i = 0; i < 3; i++) {
                scanf("%f", &students[count].marks[i]);
            }
            calculateAverageAndGrade(&students[count]);
            count++;
        } else if(choice == 2) {
            displayRecords(students, count);
        }

    } while(choice != 3);

    return 0;
}
