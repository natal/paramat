/*
** file: mat_mult.h
** author: benjamin
** created on 18/04/12 at 19:00
*/

#ifndef MAT_MULT_H_
# define MAT_MULT_H_
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <assert.h>

# include "mat_struct.h"

void mat_scale(s_matrix* a, double s);
s_matrix *mat_mult_para(s_matrix *res,
                        s_matrix *a,
                        s_matrix *b,
                        size_t nb_proc);

# include "mat_mult.hxx"

#endif /* !MAT_MULT_H_ */
