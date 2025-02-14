#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct
{
  char name[50];
  char phone_number[15];
  char email[50];
} contacts;

contacts add_contact();
void see_contact();
void delete_contact();
contacts edit_contact();
int menu();

contacts contact[MAX_CONTACTS];
int n_contact = 0;

int menu(){
  int input;

  while(1){
    system("cls");
    printf("==============================\n");
    printf("   Contact Management System  \n");
    printf("==============================\n");
    printf("Menu :\n");
    printf("1. Add Contact\n");
    printf("2. See Contact\n");
    printf("3. Edit Contact\n");
    printf("0. Exit\n");
    printf("==============================\n");
    printf("Insert your option ="); scanf("%d", &input); getchar();

    switch(input){
      case 1:
      contact[n_contact++] = add_contact();
      break;
      case 2:
      see_contact();
      break;
      case 3:
      edit_contact();
      break;
      case 0:
      system("cls");
      printf("Thank you for using the program");
      return 0;
      break;
    }
  }
}

void see_contact(){
  system("cls");
  printf("Total Contacts = %d\n", n_contact);
  printf("Contact List : \n");

  for(int i = 0; i < n_contact; i++){
    printf("[%d] %s | %s | %s\n", i + 1, contact[i].name, contact[i].phone_number, contact[i].email);
  } 

  printf("Press Enter to go back to menu"); getchar();
}

contacts add_contact(){
  contacts new_contact;
  char name[50];
  char phone_number[15];
  char email[50];

  system("cls");
  printf("Enter the Person name : \n");
  scanf("%[^\n]", new_contact.name); getchar();
  printf("Enter Person phone number : \n");
  scanf("%[^\n]", new_contact.phone_number); getchar();
  printf("Enter the Person Email : \n");
  scanf("%[^\n]", new_contact.email); getchar();

  printf("New Contact added!\n");
  printf("Press Enter to go back to menu\n"); getchar();
  return new_contact;
}

contacts edit_contact(){
  int choice;
  int index;
  char new_name[50];
  char new_phone_number[15];
  char new_email[50];

  system("cls");
  printf("Total Contacts = %d\n", n_contact);
  printf("Contact List : \n");

  for(int i = 0; i < n_contact; i++){
    printf("[%d] %s | %s | %s\n", i + 1, contact[i].name, contact[i].phone_number, contact[i].email);
  } 

  printf("\nSelect the contact that you want to edit(1 - %d) : ", n_contact + 1); 
  scanf("%d", &choice); getchar();
  
  system("cls");

  index = choice - 1;

  printf("Please Edit the data\n");

  printf("Please enter the new Name (Press Enter to keep the old Name) : \n");
  fgets(new_name, sizeof(new_name), stdin);
  if(new_name[0] != '\n'){
    new_name[strcspn(new_name, "\n")] = '\0';
    strcpy(contact[index].name, new_name);
  }
  else if(new_name[0] == '\n'){
    printf("\nNo changes has been made to the Name");
  }

  printf("Please enter the new Phone Number (Press Enter to keep the old Phone Number) : \n");
  fgets(new_phone_number, sizeof(new_phone_number), stdin);
  if(new_phone_number[0] != '\n'){
    new_phone_number[strcspn(new_phone_number, "\n")] = '\0';
    strcpy(contact[index].phone_number, new_phone_number);
  }
  else if(new_phone_number[0] == '\n'){
    printf("\nNo changes has been made to the Phone Number");
  }

  printf("Please enter the new Email Adress (Press Enter to keep the old Email Adress) : \n");
  fgets(new_email, sizeof(new_email), stdin);
  if(new_email[0] != '\n'){
    new_email[strcspn(new_email, "\n")] = '\0';
    strcpy(contact[index].email, new_email);
  }
  else if(new_email[0] == '\n'){
    printf("\nNo changes has been made to the Email Adress");
  }
  
  system("cls");
  printf("Data Successfully Edited\n");
  printf("[%d] %s | %s | %s\n", choice, contact[index].name, contact[index].phone_number, contact[index].email);
  printf("\nPress Enter to go back to Menu");
  getchar();

}

int main(){
  
  menu();

  return 0;
}