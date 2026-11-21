#include <stdio.h>

struct HospitalRecord{
    int hospitalID;
    char ward[50];
    struct PatientInfo{
        int patientid;
        char name[50];
        int age;
    } patient;
};

int main(){
    struct HospitalRecord record = {101,"Emergency",
       {5002, "Ahmed", 40}
    };
    struct HospitalRecord *ptr;
    ptr = &record;
    printf("Hospital ID: %d\n", ptr->hospitalID);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientid);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);
    return 0;
}
