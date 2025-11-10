#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FILENAME "students.dat"

struct Student {
    int id;
    char name[50];
    float marks;
};

// Function prototypes
void addStudent(struct Student s[], int *count);
void displayStudents(struct Student s[], int count);
void searchStudent(struct Student s[], int count, int id);
void saveToFile(struct Student s[], int count);
int loadFromFile(struct Student s[]);

int main() {
    struct Student students[MAX];
    int count = 0, choice, id;

    // Load previous records (if file exists)
    count = loadFromFile(students);
    printf("📂 %d records loaded from file.\n", count);

    while (1) {
        printf("\n--- Student Database ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchStudent(students, count, id);
                break;
            case 4:
                saveToFile(students, count);
                printf("💾 Data saved successfully. Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

// Add new student
void addStudent(struct Student s[], int *count) {
    if (*count >= MAX) {
        printf("Database full!\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &s[*count].id);
    printf("Enter Name: ");
    scanf("%s", s[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("✅ Student added successfully!\n");
}

// Display all students
void displayStudents(struct Student s[], int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nID\tName\tMarks\n");
    printf("------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].marks);
    }
}

// Search student by ID
void searchStudent(struct Student s[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            printf("Found: %s - %.2f marks\n", s[i].name, s[i].marks);
            return;
        }
    }
    printf("❌ Student not found!\n");
}

// Save data to file
void saveToFile(struct Student s[], int count) {
    FILE *fp = fopen(FILENAME, "wb");
    if (!fp) {
        printf("Error saving file!\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(s, sizeof(struct Student), count, fp);
    fclose(fp);
}

// Load data from file
int loadFromFile(struct Student s[]) {
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp)
        return 0;  // No file found initially

    int count;
    fread(&count, sizeof(int), 1, fp);
    fread(s, sizeof(struct Student), count, fp);
    fclose(fp);
    return count;
}

