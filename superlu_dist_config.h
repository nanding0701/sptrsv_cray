/* superlu_dist_config.h.in */

/* Enable parmetis */
#define HAVE_PARMETIS TRUE

/* Enable LAPACK */
#define HAVE_LAPACK TRUE

/* Enable CombBLAS */
/* #undef HAVE_COMBBLAS */

/* enable 64bit index mode */
#define XSDK_INDEX_SIZE 32

#if (XSDK_INDEX_SIZE == 64)
#define _LONGINT 1

#endif
