#include <cblas.h>

enum CBLAS_ORDER col_major() { return CblasColMajor; }
enum CBLAS_ORDER row_major() { return CblasRowMajor; }

enum CBLAS_TRANSPOSE no_trans() { return CblasNoTrans; }
enum CBLAS_TRANSPOSE trans() { return CblasTrans; }
enum CBLAS_TRANSPOSE conj_trans() { return CblasConjTrans; }