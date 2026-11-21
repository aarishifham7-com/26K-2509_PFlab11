#include <stdio.h>

struct Address{
  char city[50];
  int zipcode;
  char state[50];
};

struct Student{
  int roll_no;
  char name[50];
  float cgpa;
  struct Address address;
};

int main(){
  struct Student student1 = {102,"Aarish",3.4,
    {"Karachi", 72500, "Sindh"}
};
  printf("Roll no : %d\n",student1.roll_no);
  printf("Name : %s\n",student1.name);
  printf("CGPA : %0.2f\n",student1.cgpa);
  printf("City : %s\n",student1.address.city);
  printf("Zipcode : %d\n",student1.address.zipcode);
  printf("State : %s",student1.address.state);
}
