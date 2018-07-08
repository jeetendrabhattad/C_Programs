#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex
{
    int iReal;
    int iImag;
};

typedef struct Complex COMPLEX_T;

COMPLEX_T Add(const COMPLEX_T c1, const COMPLEX_T c2);
COMPLEX_T AddInt(const COMPLEX_T c1, int real);
COMPLEX_T Sub(const COMPLEX_T c1, const COMPLEX_T c2);

#endif
