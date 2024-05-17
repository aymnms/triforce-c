#include "triforce.h"

int main(int argc, char *argv[]) {
    if(argc < 2) return 1;

    int triangle_width = get_triangle_width(argv[1]);
    int triangle_height = triangle_width / 2 + 1;

    int** matrice = init_matrice(triangle_height, triangle_width);

    set_triangle_into_matrice(matrice, triangle_height, triangle_width);
    set_inverse_triangle_into_matrice(matrice, triangle_height, triangle_width);

    display_matrice_stars(matrice, triangle_height, triangle_width);

    free_matrice(matrice, triangle_height);

    return 0;
}


//    *
//   ***
//  *   *
// *** ***
