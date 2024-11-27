#include <stdio.h>
struct student_record {
    char name[60];
    int roll_no;
    float total_marks;
}
;
void input_student_data(struct student_record students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
    }
}
int find_topper(struct student_record students[], int n) {
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }
    return topper_index;
}
int main() {
    int n = 5;
    struct student_record students[n];
    printf("\t\t\t^^^ Topper Finder ^^^\n\n");
    input_student_data(students, n);
    int topper_index = find_topper(students, n);
    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_no);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);
    return 0;
}

