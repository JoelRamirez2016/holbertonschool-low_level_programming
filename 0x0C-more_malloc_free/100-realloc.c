#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    int i;
    char *ptr_cp, *r;
    
    if (new_size == old_size) 
        return (ptr);
    if (!ptr)
        return malloc(new_size);
    if (!new_size && ptr)
    {
        free(ptr); 
        return (0);
    }
    
    ptr_cp = ptr;
    r = malloc(new_size);

    for (i = 0; i < old_size; i++)
        r[i] = ptr_cp[i];
        
    free(ptr);    
    return ((void *)r);
}


