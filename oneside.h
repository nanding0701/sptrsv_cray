#include "fompi.h"
#include "checksum.h"
extern foMPI_Win bc_winl;
extern foMPI_Win rd_winl;
extern foMPI_Win bc_winl_u;
extern foMPI_Win rd_winl_u;
extern MPI_Comm row_comm;
extern MPI_Comm col_comm;
extern int *BufSize;
extern int *BufSize_rd;
extern int *validBCQindex;
extern int *validRDQindex;
extern int *BufSize_u;
extern int *BufSize_urd;
extern int *validBCQindex_u;
extern int *validRDQindex_u;
//extern double *onesidecomm_bc;
//extern double onesidecomm_rd;
//extern double onesidecomm_bc;
extern int *recv_size_all;
extern int *recv_size_all_u;
extern double* BC_taskq;
extern double* RD_taskq;
extern double* BC_taskq_u;
extern double* RD_taskq_u;
//extern double *onesidedgemm;
