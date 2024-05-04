#include "stdio.h"
#include <string.h> // Add missing import

static int zysystem(char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z') && (str[i] < '0' || str[i] > '9')) {
      return 1; // Return error
    }
  }
  return 0; // No error
}

int main(int argc, char *argv[])
{
  char name[1024];;
  char* token;

  printf("Enter student's name: ");
  scanf("%[^\n]", name); // Read the entire line including spaces

  // Check if name contains at least two tokens
  token = strtok(name, " ");
  if (token == NULL || strtok(NULL, " ") == NULL) {
    printf("Error: Name should contain at least first name and last name.\n");
    return 1; // Return error
  }

  int id;

  printf("Enter student's ID: ");;
  scanf("%d", &id);

  printf("Student's name: %s\n", name);
  printf("Student's ID: %d\n", id);

  return 0;
}