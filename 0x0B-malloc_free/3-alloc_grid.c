#include <stdlib.h>
#include <stddef.h>
int **alloc_grid(int width, int height) {
    int i,j;
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int **grid ;
    grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    for ( i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
