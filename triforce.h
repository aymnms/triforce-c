#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_triangle_width(char argv1[]){
    int triangle_width = abs(atoi(argv1)); // nombre négatif positif
    if (triangle_width % 2 == 0) triangle_width += 1; // si pair -> arrondi à impair supérieur

    return triangle_width;
}

int** init_matrice(int height, int width){
    int** matrice = (int**)malloc(height * sizeof(int*));
    int* data = (int*)malloc(height * width * sizeof(int));
    for (int i = 0; i < height; i++){
        matrice[i] = data + i * width;
        for (int j = 0; j < width; j++){
            matrice[i][j] = 0;
        }
    }
    return matrice;
}

void set_triangle_into_matrice(int** matrice, int height, int width){
    for(int h = 0; h<height; h++){
        int nb_star = h*2+1;
        int index_first_stars = (width/2)-(nb_star/2);
        for (int w = index_first_stars; w < index_first_stars+nb_star; w++){
            matrice[h][w] = 1;
        }
    }
}

void set_inverse_triangle_into_matrice(int** matrice, int height, int width){
    int index_height_max = height-1;
    for(int h = index_height_max; h>index_height_max/2; h--){
        int nb_removed_stars = (index_height_max-h)*2+1;
        int index_first_removed_stars = (width/2)-(nb_removed_stars/2);
        for (int w = index_first_removed_stars; w < index_first_removed_stars+nb_removed_stars; w++){
            matrice[h][w] = 0;
        }
    }
}

void display_matrice(int** matrice, int height, int width){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            printf("%d", matrice[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void display_matrice_stars(int** matrice, int height, int width){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            printf("%c", matrice[i][j] == 1 ? '*' : ' ');
        }
        printf("\n");
    }
    printf("\n");
}

void free_matrice(int** matrice, int height) {
    free(matrice[0]);
    free(matrice);
}
