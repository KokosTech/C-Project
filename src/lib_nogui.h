#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* #ifdef LIB */

#define CONTACT_BUFFER 5
#define DEFAULT_SIZE 1
#define LIB

typedef struct Names{
    char* first;
    char* middle;
    char* last;
} Name;

typedef struct Social_Medias{
    char* facebook;
    char* instagram;
    char* twitter;
    char* snapchat;
    char* discord;
    char* linkedin;
    char* github;
} Social_Media;

// Block Number, Entrence, Floor, Apartment

typedef struct Apartments{
    int block_num;
    char suite;
    int floor;
    int apt;
} Apartment;

typedef struct Addresses{
    char* country;
    char country_code[3];
    char* state; // щат/област/провинция
    char* city; // city/twon/village
    char* neighborhood;
    char* street;
    int street_num
    Apartment* apartment; // or
} Address;



typedef struct Contacts{
    int id;
    Name* name;
    char* number;
    char* email;
    Social_Media* social_media;
    Address* address;
} Contact;

/* #endif */
