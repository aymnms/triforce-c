#include <stdio.h>
#include <stdlib.h>

void display_spaces(int nb_space){
    for(int space_i = 0, space_imax = nb_space; space_i<space_imax; space_i++) printf(" ");
}

void display_stars(int nb_stars){
    for(int space_i = 0, space_imax = nb_stars; space_i<space_imax; space_i++) printf("*");
}

void appear_triangle_line(int triangle_witdh, int triangle_line, int triangle_){

}

int get_triangle_base(char char_number[]){
    int triangle_base = atoi(char_number); // nombre négatif positif
    if (triangle_base < 0) triangle_base *= -1; // si négatif -> positif
    if (triangle_base % 2 == 0) triangle_base += 1; // si pair -> arrondi à impair supérieur
    return triangle_base;
}

void display_triangle(int width, int height){
    for(int y = 0, ymax = height; y<ymax; y++){
        int nb_star = y*2+1;
        int nb_space = (width-nb_star)/2;
        display_spaces(nb_space);
        display_stars(nb_star);
        display_spaces(nb_space);
        printf("\n");
    }
    printf("\n");
}


int main(int argc, char *argv[]) {
    if(argc < 2) return 1;
    
    int triangle_base = get_triangle_base(argv[1]);
    int triangle_height = triangle_base / 2 + 1;

    display_triangle(triangle_base, triangle_height);

    return 0;
}

//    *
//   ***
//  *****
// *******
