#include <stdio.h>

#include <stddef.h>
#include "dog.h"
void print_dog(struct dog *d) {
    if (d != NULL) {

        if (d->name != NULL){
            printf("Name: %s\n", d->name);
        }
        else
        {
            printf("Name: (nil)\n");
        }
 
        printf("Age: %f\n", d->age);

 
        if (d->owner != NULL)
        {
            printf("owner: %s\n", d->owner);
        }
        else
        {
            printf("nil)\n");
        }
    }
}
