#include "matrix.h"


int main(int argc, char** argv)
{
    argc = argc;
    argv = argv;

    s_matrix *mat1 = mat_build_id(10, 10);
    s_matrix *mat2 = mat_build_id(10, 10);
    s_matrix *mat3 = mat_build_id(10, 10);
    s_matrix *res = mat_build(10, 10);
    MAT_MULT(res, mat1, mat2, TT, COEF_MUL(5., ID));
    mat_scale(res, 6.);
    mat_sum(res, res, mat3);
    mat_reset(res);
    mat_write_to_file(res, "outmat.dat");
    mat_print(res, 1);

    mat_free(mat1);
    mat_free(mat2);
    mat_free(res);

    res = mat_build_from_file("outmat.dat");
    mat_print(res, 1);



    return (0);
}
