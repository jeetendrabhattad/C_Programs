#include "complex.h"

COMPLEX_T Add(const COMPLEX_T c1, const COMPLEX_T c2)
{
    COMPLEX_T result;
    result.iReal = c1.iReal + c2.iReal;
    result.iImag = c1.iImag + c2.iImag;
    return result;
}

COMPLEX_T AddInt(const COMPLEX_T c1, int real)
{
    COMPLEX_T result;
    result.iReal = c1.iReal + real;
    return result;
}

COMPLEX_T Sub(const COMPLEX_T c1, const COMPLEX_T c2)
{
    COMPLEX_T result;
    result.iReal = c1.iReal - c2.iReal;
    result.iImag = c1.iImag - c2.iImag;
    return result;
}
