/*
** file: matrix.h
** author: benjamin
** created on 16/04/12 at 15:42
*/

#ifndef MATRIX_H_
# define MATRIX_H_
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <assert.h>


typedef struct
{
    size_t l;
    size_t c;
    size_t size_arr;
    double *arr;
} s_matrix;

 /**
 ** @brief mat_build* will create a matrix of given dimensions
 ** @return the matrix newly created or a NULL value if
 **         something went wrong
 */

s_matrix* mat_build(size_t l, size_t c);
s_matrix* mat_build_id(size_t l, size_t c);
s_matrix* mat_build_0(size_t l, size_t c);

 /**
 ** @brief mat_build* will free any given matrix
 ** @return 1 if memory freeing went well and 0 if
 **         something went wrong
 */
int mat_free(s_matrix* m);

void mat_print(s_matrix* m, int verbose);


#endif /* !MATRIX_H_ */
