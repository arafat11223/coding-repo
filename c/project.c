#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Rec {
    long id;
    char name[100];
    int age;
};

struct Rec db[MAX];
int count = 0;

void add() {
    if (count < MAX) {
        printf("Enter an ID: ");
        scanf("%ld", &db[count].id);
        printf("Enter a Student Name: ");
        getchar();
        fgets(db[count].name, sizeof(db[count].name), stdin);
        db[count].name[strcspn(db[count].name, "\n")] = 0;
        printf("Enter Age: ");
        scanf("%d", &db[count].age);
        count++;
        printf("Record added successfully.\n");
        printf("Thank You.\n");
    } else {
        printf("Database is full.\n");
    }
}

void display() {
    if (count == 0) {
        printf("No records to display.\n");
        return;
    }
    printf("\nDisplaying all records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %ld, Name: %s, Age: %d\n", db[i].id, db[i].name, db[i].age);
        printf("Thank You.\n");
    }
}

void update() {
    long id;
    int found = 0;
    printf("Enter an ID to update: ");
    scanf("%ld", &id);
    for (int i = 0; i < count; i++) {
        if (db[i].id == id) {
            found = 1;
            printf("Enter a new Name: ");
            getchar();
            fgets(db[i].name, sizeof(db[i].name), stdin);
            db[i].name[strcspn(db[i].name, "\n")] = 0;
            printf("Enter a new Age: ");
            scanf("%d", &db[i].age);
            printf("Record updated successfully.\n");
            printf("Thank You.\n");
            break;
        }
    }
    if (!found) {
        printf("Record not found.\n");
    }
}

void delete() {
    long id;
    int found = 0;
    printf("Enter ID to delete: ");
    scanf("%ld", &id);
    for (int i = 0; i < count; i++) {
        if (db[i].id == id) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                db[j] = db[j + 1];
            }
            count--;
            printf("Record deleted successfully.\n");
            printf("Thank You.\n");
            break;
        }
    }
    if (!found) {
        printf("Record not found.\n");
    }
}

void save() {
    FILE *f = fopen("student_db.txt", "w");
    if (f == NULL) {
        perror("Error opening file for saving");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(f, "%ld %s %d\n", db[i].id, db[i].name, db[i].age);
    }
    fclose(f);
    printf("Records saved successfully.\n");
}

void load() {
    FILE *f = fopen("student_db.txt", "r");
    if (f == NULL) {
        perror("Error opening file for loading");
        return;
    }
    count = 0;
    while (fscanf(f, "%ld %99s %d", &db[count].id, db[count].name, &db[count].age) != EOF) {
        count++;
    }
    fclose(f);
}

int main() {
    int choice;
    load();
    printf("\n===== Welcome to the Students Database Management System =====\n");
    while (1) {
        printf("\nPlease choose an option:\n");
        printf("1. Add A Record\n");
        printf("2. Display Records\n");
        printf("3. Update Record\n");
        printf("4. Delete Record\n");
        printf("5. Save Records\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: update(); break;
            case 4: delete(); break;
            case 5: save(); break;
            case 6: save(); exit(0);
            default: printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
