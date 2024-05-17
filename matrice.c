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

int main(int argc, char *argv[]) {
    if(argc < 2) return 1;

    int triangle_width = get_triangle_width(argv[1]);
    int triangle_height = triangle_width / 2 + 1;

    int** matrice = init_matrice(triangle_height, triangle_width);

    set_triangle_into_matrice(matrice, triangle_height, triangle_width);

    display_matrice_stars(matrice, triangle_height, triangle_width);

    free_matrice(matrice, triangle_height);

    return 0;
}
