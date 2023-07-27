#include <stdlib.h>
#include <string.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = strdup(name);
    d->owner = strdup(owner);
    d->age = age;
}
