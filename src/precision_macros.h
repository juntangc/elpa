#ifdef REALCASE
#undef  MATH_DATATYPE
#define  MATH_DATATYPE real
#undef  PRECISION
#undef  PRECISION_STR
#undef  qr_pdgeqrf_2dcomm_PRECISION
#undef  qr_pdgeqrf_2dcomm_PRECISION_STR
#undef  redist_band_NUMBER_PRECISION
#undef  redist_band_NUMBER_PRECISION_STR
#undef  redist_band_real_PRECISION
#undef  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION
#undef  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR
#undef  unpack_and_prepare_row_group_real_gpu_PRECISION
#undef  extract_hh_tau_NUMBER_gpu_PRECISION
#undef  extract_hh_tau_NUMBER_gpu_PRECISION_STR
#undef  extract_hh_tau_real_gpu_PRECISION
#undef  compute_hh_dot_products_NUMBER_gpu_PRECISION
#undef  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR
#undef  compute_hh_dot_products_real_gpu_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR
#undef  compute_hh_trafo_real_cpu_openmp_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_PRECISION_STR
#undef  compute_hh_trafo_real_cpu_PRECISION
#undef  pack_row_group_NUMBER_gpu_PRECISION
#undef  pack_row_group_NUMBER_gpu_PRECISION_STR
#undef  pack_row_group_real_gpu_PRECISION
#undef  pack_row_NUMBER_cpu_openmp_PRECISION
#undef  pack_row_NUMBER_cpu_openmp_PRECISION_STR
#undef  pack_row_real_cpu_openmp_PRECISION
#undef  pack_row_NUMBER_cpu_PRECISION
#undef  pack_row_NUMBER_cpu_PRECISION_STR
#undef  pack_row_real_cpu_PRECISION
#undef  wy_gen_PRECISION
#undef  wy_gen_PRECISION_STR
#undef  wy_right_PRECISION
#undef  wy_right_PRECISION_STR
#undef  wy_left_PRECISION
#undef  wy_left_PRECISION_STR
#undef  wy_symm_PRECISION
#undef  wy_symm_PRECISION_STR
#undef  merge_recursive_PRECISION
#undef  merge_recursive_PRECISION_STR
#undef  merge_systems_PRECISION
#undef  merge_systems_PRECISION_STR
#undef  distribute_global_column_PRECISION
#undef  distribute_global_column_PRECISION_STR
#undef  check_monotony_PRECISION
#undef  check_monotony_PRECISION_STR
#undef  global_gather_PRECISION
#undef  global_gather_PRECISION_STR
#undef  resort_ev_PRECISION
#undef  resort_ev_PRECISION_STR
#undef  transform_columns_PRECISION
#undef  transform_columns_PRECISION_STR
#undef  solve_secular_equation_PRECISION
#undef  solve_secular_equation_PRECISION_STR
#undef  global_product_PRECISION
#undef  global_product_PRECISION_STR
#undef  add_tmp_PRECISION
#undef  add_tmp_PRECISION_STR
#undef  v_add_s_PRECISION
#undef  v_add_s_PRECISION_STR
#undef  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION
#undef  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR
#undef  launch_compute_hh_trafo_c_kernel_real_PRECISION
#undef  compute_hh_trafo_NUMBER_gpu_PRECISION
#undef  compute_hh_trafo_NUMBER_gpu_PRECISION_STR
#undef  compute_hh_trafo_real_gpu_PRECISION
#undef  launch_my_pack_c_kernel_NUMBER_PRECISION
#undef  launch_my_pack_c_kernel_NUMBER_PRECISION_STR
#undef  launch_my_pack_c_kernel_real_PRECISION
#undef  launch_my_unpack_c_kernel_NUMBER_PRECISION
#undef  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR
#undef  launch_my_unpack_c_kernel_real_PRECISION
#undef  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION
#undef  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR
#undef  launch_compute_hh_dotp_c_kernel_real_PRECISION
#undef  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION
#undef  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR
#undef  launch_extract_hh_tau_c_kernel_real_PRECISION
#undef  PRECISION_GEMV
#undef  PRECISION_TRMV
#undef  PRECISION_GEMM
#undef  PRECISION_TRMM
#undef  PRECISION_HERK
#undef  PRECISION_SYRK
#undef  PRECISION_SYMV
#undef  PRECISION_SYMM
#undef  PRECISION_HEMV
#undef  PRECISION_HER2
#undef  PRECISION_SYR2
#undef  PRECISION_SYR2K
#undef  PRECISION_GEQRF
#undef  PRECISION_STEDC
#undef  PRECISION_STEQR
#undef  PRECISION_LAMRG
#undef  PRECISION_LAMCH
#undef  PRECISION_LAPY2
#undef  PRECISION_LAED4
#undef  PRECISION_LAED5
#undef  cublas_PRECISION_GEMM
#undef  cublas_PRECISION_TRMM
#undef  cublas_PRECISION_GEMV
#undef  PRECISION_SUFFIX
#undef  CONST_0_0
#undef  CONST_0_5
#undef  CONST_1_0
#undef  CONST_2_0
#undef  CONST_8_0
#undef  size_of_PRECISION_real
#undef  MPI_REAL_PRECISION
#undef  C_DATATYPE_KIND
#ifdef DOUBLE_PRECISION
#define  PRECISION double
#define  PRECISION_STR 'double'
#define  qr_pdgeqrf_2dcomm_PRECISION qr_pdgeqrf_2dcomm_double
#define  qr_pdgeqrf_2dcomm_PRECISION_STR 'qr_pdgeqrf_2dcomm_double'
#define  redist_band_NUMBER_PRECISION redist_band_real_double
#define  redist_band_NUMBER_PRECISION_STR 'redist_band_real_double'
#define  redist_band_real_PRECISION redist_band_real_double
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION unpack_and_prepare_row_group_real_gpu_double
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR 'unpack_and_prepare_row_group_real_gpu_double'
#define  unpack_and_prepare_row_group_real_gpu_PRECISION unpack_and_prepare_row_group_real_gpu_double
#define  extract_hh_tau_NUMBER_gpu_PRECISION extract_hh_tau_real_gpu_double
#define  extract_hh_tau_NUMBER_gpu_PRECISION_STR 'extract_hh_tau_real_gpu_double'
#define  extract_hh_tau_real_gpu_PRECISION extract_hh_tau_real_gpu_double
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION compute_hh_dot_products_real_gpu_double
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR 'compute_hh_dot_products_real_gpu_double'
#define  compute_hh_dot_products_real_gpu_PRECISION compute_hh_dot_products_real_gpu_double
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION compute_hh_trafo_real_cpu_openmp_double
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR 'compute_hh_trafo_real_cpu_openmp_double'
#define  compute_hh_trafo_real_cpu_openmp_PRECISION compute_hh_trafo_real_cpu_openmp_double
#define  compute_hh_trafo_NUMBER_cpu_PRECISION compute_hh_trafo_real_cpu_double
#define  compute_hh_trafo_NUMBER_cpu_PRECISION_STR 'compute_hh_trafo_real_cpu_double'
#define  compute_hh_trafo_real_cpu_PRECISION compute_hh_trafo_real_cpu_double
#define  pack_row_group_NUMBER_gpu_PRECISION pack_row_group_real_gpu_double
#define  pack_row_group_NUMBER_gpu_PRECISION_STR 'pack_row_group_real_gpu_double'
#define  pack_row_group_real_gpu_PRECISION pack_row_group_real_gpu_double
#define  pack_row_NUMBER_cpu_openmp_PRECISION pack_row_real_cpu_openmp_double
#define  pack_row_NUMBER_cpu_openmp_PRECISION_STR 'pack_row_real_cpu_openmp_double'
#define  pack_row_real_cpu_openmp_PRECISION pack_row_real_cpu_openmp_double
#define  pack_row_NUMBER_cpu_PRECISION pack_row_real_cpu_double
#define  pack_row_NUMBER_cpu_PRECISION_STR 'pack_row_real_cpu_double'
#define  pack_row_real_cpu_PRECISION pack_row_real_cpu_double
#define  wy_gen_PRECISION wy_gen_double
#define  wy_gen_PRECISION_STR 'wy_gen_double'
#define  wy_right_PRECISION wy_right_double
#define  wy_right_PRECISION_STR 'wy_right_double'
#define  wy_left_PRECISION wy_left_double
#define  wy_left_PRECISION_STR 'wy_left_double'
#define  wy_symm_PRECISION wy_symm_double
#define  wy_symm_PRECISION_STR 'wy_symm_double'
#define  merge_recursive_PRECISION merge_recursive_double
#define  merge_recursive_PRECISION_STR 'merge_recursive_double'
#define  merge_systems_PRECISION merge_systems_double
#define  merge_systems_PRECISION_STR 'merge_systems_double'
#define  distribute_global_column_PRECISION distribute_global_column_double
#define  distribute_global_column_PRECISION_STR 'distribute_global_column_double'
#define  check_monotony_PRECISION check_monotony_double
#define  check_monotony_PRECISION_STR 'check_monotony_double'
#define  global_gather_PRECISION global_gather_double
#define  global_gather_PRECISION_STR 'global_gather_double'
#define  resort_ev_PRECISION resort_ev_double
#define  resort_ev_PRECISION_STR 'resort_ev_double'
#define  transform_columns_PRECISION transform_columns_double
#define  transform_columns_PRECISION_STR 'transform_columns_double'
#define  solve_secular_equation_PRECISION solve_secular_equation_double
#define  solve_secular_equation_PRECISION_STR 'solve_secular_equation_double'
#define  global_product_PRECISION global_product_double
#define  global_product_PRECISION_STR 'global_product_double'
#define  add_tmp_PRECISION add_tmp_double
#define  add_tmp_PRECISION_STR 'add_tmp_double'
#define  v_add_s_PRECISION v_add_s_double
#define  v_add_s_PRECISION_STR 'v_add_s_double'
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION launch_compute_hh_trafo_c_kernel_real_double
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_trafo_c_kernel_real_double'
#define  launch_compute_hh_trafo_c_kernel_real_PRECISION launch_compute_hh_trafo_c_kernel_real_double
#define  compute_hh_trafo_NUMBER_gpu_PRECISION compute_hh_trafo_real_gpu_double
#define  compute_hh_trafo_NUMBER_gpu_PRECISION_STR 'compute_hh_trafo_real_gpu_double'
#define  compute_hh_trafo_real_gpu_PRECISION compute_hh_trafo_real_gpu_double
#define  launch_my_pack_c_kernel_NUMBER_PRECISION launch_my_pack_c_kernel_real_double
#define  launch_my_pack_c_kernel_NUMBER_PRECISION_STR 'launch_my_pack_c_kernel_real_double'
#define  launch_my_pack_c_kernel_real_PRECISION launch_my_pack_c_kernel_real_double
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION launch_my_unpack_c_kernel_real_double
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR 'launch_my_unpack_c_kernel_real_double'
#define  launch_my_unpack_c_kernel_real_PRECISION launch_my_unpack_c_kernel_real_double
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION launch_compute_hh_dotp_c_kernel_real_double
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_dotp_c_kernel_real_double'
#define  launch_compute_hh_dotp_c_kernel_real_PRECISION launch_compute_hh_dotp_c_kernel_real_double
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION launch_extract_hh_tau_c_kernel_real_double
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR 'launch_extract_hh_tau_c_kernel_real_double'
#define  launch_extract_hh_tau_c_kernel_real_PRECISION launch_extract_hh_tau_c_kernel_real_double
#define  PRECISION_GEMV DGEMV
#define  PRECISION_TRMV DTRMV
#define  PRECISION_GEMM DGEMM
#define  PRECISION_TRMM DTRMM
#define  PRECISION_HERK DHERK
#define  PRECISION_SYRK DSYRK
#define  PRECISION_SYMV DSYMV
#define  PRECISION_SYMM DSYMM
#define  PRECISION_HEMV DHEMV
#define  PRECISION_HER2 DHER2
#define  PRECISION_SYR2 DSYR2
#define  PRECISION_SYR2K DSYR2K
#define  PRECISION_GEQRF DGEQRF
#define  PRECISION_STEDC DSTEDC
#define  PRECISION_STEQR DSTEQR
#define  PRECISION_LAMRG DLAMRG
#define  PRECISION_LAMCH DLAMCH
#define  PRECISION_LAPY2 DLAPY2
#define  PRECISION_LAED4 DLAED4
#define  PRECISION_LAED5 DLAED5
#define  cublas_PRECISION_GEMM cublas_DGEMM
#define  cublas_PRECISION_TRMM cublas_DTRMM
#define  cublas_PRECISION_GEMV cublas_DGEMV
#define  PRECISION_SUFFIX "_double"
#define  CONST_0_0 0.0_rk8
#define  CONST_0_5 0.5_rk8
#define  CONST_1_0 1.0_rk8
#define  CONST_2_0 2.0_rk8
#define  CONST_8_0 8.0_rk8
#define  size_of_PRECISION_real size_of_double_real_datatype
#define  MPI_REAL_PRECISION MPI_REAL8
#define  C_DATATYPE_KIND c_double
#endif
#ifdef SINGLE_PRECISION
#define  PRECISION single
#define  PRECISION_STR 'single'
#define  qr_pdgeqrf_2dcomm_PRECISION qr_pdgeqrf_2dcomm_single
#define  qr_pdgeqrf_2dcomm_PRECISION_STR 'qr_pdgeqrf_2dcomm_single'
#define  redist_band_NUMBER_PRECISION redist_band_real_single
#define  redist_band_NUMBER_PRECISION_STR 'redist_band_real_single'
#define  redist_band_real_PRECISION redist_band_real_single
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION unpack_and_prepare_row_group_real_gpu_single
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR 'unpack_and_prepare_row_group_real_gpu_single'
#define  unpack_and_prepare_row_group_real_gpu_PRECISION unpack_and_prepare_row_group_real_gpu_single
#define  extract_hh_tau_NUMBER_gpu_PRECISION extract_hh_tau_real_gpu_single
#define  extract_hh_tau_NUMBER_gpu_PRECISION_STR 'extract_hh_tau_real_gpu_single'
#define  extract_hh_tau_real_gpu_PRECISION extract_hh_tau_real_gpu_single
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION compute_hh_dot_products_real_gpu_single
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR 'compute_hh_dot_products_real_gpu_single'
#define  compute_hh_dot_products_real_gpu_PRECISION compute_hh_dot_products_real_gpu_single
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION compute_hh_trafo_real_cpu_openmp_single
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR 'compute_hh_trafo_real_cpu_openmp_single'
#define  compute_hh_trafo_real_cpu_openmp_PRECISION compute_hh_trafo_real_cpu_openmp_single
#define  compute_hh_trafo_NUMBER_cpu_PRECISION compute_hh_trafo_real_cpu_single
#define  compute_hh_trafo_NUMBER_cpu_PRECISION_STR 'compute_hh_trafo_real_cpu_single'
#define  compute_hh_trafo_real_cpu_PRECISION compute_hh_trafo_real_cpu_single
#define  pack_row_group_NUMBER_gpu_PRECISION pack_row_group_real_gpu_single
#define  pack_row_group_NUMBER_gpu_PRECISION_STR 'pack_row_group_real_gpu_single'
#define  pack_row_group_real_gpu_PRECISION pack_row_group_real_gpu_single
#define  pack_row_NUMBER_cpu_openmp_PRECISION pack_row_real_cpu_openmp_single
#define  pack_row_NUMBER_cpu_openmp_PRECISION_STR 'pack_row_real_cpu_openmp_single'
#define  pack_row_real_cpu_openmp_PRECISION pack_row_real_cpu_openmp_single
#define  pack_row_NUMBER_cpu_PRECISION pack_row_real_cpu_single
#define  pack_row_NUMBER_cpu_PRECISION_STR 'pack_row_real_cpu_single'
#define  pack_row_real_cpu_PRECISION pack_row_real_cpu_single
#define  wy_gen_PRECISION wy_gen_single
#define  wy_gen_PRECISION_STR 'wy_gen_single'
#define  wy_right_PRECISION wy_right_single
#define  wy_right_PRECISION_STR 'wy_right_single'
#define  wy_left_PRECISION wy_left_single
#define  wy_left_PRECISION_STR 'wy_left_single'
#define  wy_symm_PRECISION wy_symm_single
#define  wy_symm_PRECISION_STR 'wy_symm_single'
#define  merge_recursive_PRECISION merge_recursive_single
#define  merge_recursive_PRECISION_STR 'merge_recursive_single'
#define  merge_systems_PRECISION merge_systems_single
#define  merge_systems_PRECISION_STR 'merge_systems_single'
#define  distribute_global_column_PRECISION distribute_global_column_single
#define  distribute_global_column_PRECISION_STR 'distribute_global_column_single'
#define  check_monotony_PRECISION check_monotony_single
#define  check_monotony_PRECISION_STR 'check_monotony_single'
#define  global_gather_PRECISION global_gather_single
#define  global_gather_PRECISION_STR 'global_gather_single'
#define  resort_ev_PRECISION resort_ev_single
#define  resort_ev_PRECISION_STR 'resort_ev_single'
#define  transform_columns_PRECISION transform_columns_single
#define  transform_columns_PRECISION_STR 'transform_columns_single'
#define  solve_secular_equation_PRECISION solve_secular_equation_single
#define  solve_secular_equation_PRECISION_STR 'solve_secular_equation_single'
#define  global_product_PRECISION global_product_single
#define  global_product_PRECISION_STR 'global_product_single'
#define  add_tmp_PRECISION add_tmp_single
#define  add_tmp_PRECISION_STR 'add_tmp_single'
#define  v_add_s_PRECISION v_add_s_single
#define  v_add_s_PRECISION_STR 'v_add_s_single'
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION launch_compute_hh_trafo_c_kernel_real_single
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_trafo_c_kernel_real_single'
#define  launch_compute_hh_trafo_c_kernel_real_PRECISION launch_compute_hh_trafo_c_kernel_real_single
#define  compute_hh_trafo_NUMBER_gpu_PRECISION compute_hh_trafo_real_gpu_single
#define  compute_hh_trafo_NUMBER_gpu_PRECISION_STR 'compute_hh_trafo_real_gpu_single'
#define  compute_hh_trafo_real_gpu_PRECISION compute_hh_trafo_real_gpu_single
#define  launch_my_pack_c_kernel_NUMBER_PRECISION launch_my_pack_c_kernel_real_single
#define  launch_my_pack_c_kernel_NUMBER_PRECISION_STR 'launch_my_pack_c_kernel_real_single'
#define  launch_my_pack_c_kernel_real_PRECISION launch_my_pack_c_kernel_real_single
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION launch_my_unpack_c_kernel_real_single
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR 'launch_my_unpack_c_kernel_real_single'
#define  launch_my_unpack_c_kernel_real_PRECISION launch_my_unpack_c_kernel_real_single
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION launch_compute_hh_dotp_c_kernel_real_single
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_dotp_c_kernel_real_single'
#define  launch_compute_hh_dotp_c_kernel_real_PRECISION launch_compute_hh_dotp_c_kernel_real_single
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION launch_extract_hh_tau_c_kernel_real_single
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR 'launch_extract_hh_tau_c_kernel_real_single'
#define  launch_extract_hh_tau_c_kernel_real_PRECISION launch_extract_hh_tau_c_kernel_real_single
#define  PRECISION_GEMV SGEMV
#define  PRECISION_TRMV STRMV
#define  PRECISION_GEMM SGEMM
#define  PRECISION_TRMM STRMM
#define  PRECISION_HERK SHERK
#define  PRECISION_SYRK SSYRK
#define  PRECISION_SYMV SSYMV
#define  PRECISION_SYMM SSYMM
#define  PRECISION_HEMV SHEMV
#define  PRECISION_HER2 SHER2
#define  PRECISION_SYR2 SSYR2
#define  PRECISION_SYR2K SSYR2K
#define  PRECISION_GEQRF SGEQRF
#define  PRECISION_STEDC SSTEDC
#define  PRECISION_STEQR SSTEQR
#define  PRECISION_LAMRG SLAMRG
#define  PRECISION_LAMCH SLAMCH
#define  PRECISION_LAPY2 SLAPY2
#define  PRECISION_LAED4 SLAED4
#define  PRECISION_LAED5 SLAED5
#define  cublas_PRECISION_GEMM cublas_SGEMM
#define  cublas_PRECISION_TRMM cublas_STRMM
#define  cublas_PRECISION_GEMV cublas_SGEMV
#define  PRECISION_SUFFIX "_single"
#define  CONST_0_0 0.0_rk4
#define  CONST_0_5 0.5_rk4
#define  CONST_1_0 1.0_rk4
#define  CONST_2_0 2.0_rk4
#define  CONST_8_0 8.0_rk4
#define  size_of_PRECISION_real size_of_single_real_datatype
#define  MPI_REAL_PRECISION MPI_REAL4
#define  C_DATATYPE_KIND c_float
#endif
#endif
#ifdef COMPLEXCASE
#undef  MATH_DATATYPE
#define  MATH_DATATYPE complex
#undef  PRECISION
#undef  PRECISION_STR
#undef  qr_pdgeqrf_2dcomm_PRECISION
#undef  qr_pdgeqrf_2dcomm_PRECISION_STR
#undef  redist_band_NUMBER_PRECISION
#undef  redist_band_NUMBER_PRECISION_STR
#undef  redist_band_complex_PRECISION
#undef  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION
#undef  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR
#undef  unpack_and_prepare_row_group_complex_gpu_PRECISION
#undef  extract_hh_tau_NUMBER_gpu_PRECISION
#undef  extract_hh_tau_NUMBER_gpu_PRECISION_STR
#undef  extract_hh_tau_complex_gpu_PRECISION
#undef  compute_hh_dot_products_NUMBER_gpu_PRECISION
#undef  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR
#undef  compute_hh_dot_products_complex_gpu_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR
#undef  compute_hh_trafo_complex_cpu_openmp_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_PRECISION
#undef  compute_hh_trafo_NUMBER_cpu_PRECISION_STR
#undef  compute_hh_trafo_complex_cpu_PRECISION
#undef  pack_row_group_NUMBER_gpu_PRECISION
#undef  pack_row_group_NUMBER_gpu_PRECISION_STR
#undef  pack_row_group_complex_gpu_PRECISION
#undef  pack_row_NUMBER_cpu_openmp_PRECISION
#undef  pack_row_NUMBER_cpu_openmp_PRECISION_STR
#undef  pack_row_complex_cpu_openmp_PRECISION
#undef  pack_row_NUMBER_cpu_PRECISION
#undef  pack_row_NUMBER_cpu_PRECISION_STR
#undef  pack_row_complex_cpu_PRECISION
#undef  wy_gen_PRECISION
#undef  wy_gen_PRECISION_STR
#undef  wy_right_PRECISION
#undef  wy_right_PRECISION_STR
#undef  wy_left_PRECISION
#undef  wy_left_PRECISION_STR
#undef  wy_symm_PRECISION
#undef  wy_symm_PRECISION_STR
#undef  merge_recursive_PRECISION
#undef  merge_recursive_PRECISION_STR
#undef  merge_systems_PRECISION
#undef  merge_systems_PRECISION_STR
#undef  distribute_global_column_PRECISION
#undef  distribute_global_column_PRECISION_STR
#undef  check_monotony_PRECISION
#undef  check_monotony_PRECISION_STR
#undef  global_gather_PRECISION
#undef  global_gather_PRECISION_STR
#undef  resort_ev_PRECISION
#undef  resort_ev_PRECISION_STR
#undef  transform_columns_PRECISION
#undef  transform_columns_PRECISION_STR
#undef  solve_secular_equation_PRECISION
#undef  solve_secular_equation_PRECISION_STR
#undef  global_product_PRECISION
#undef  global_product_PRECISION_STR
#undef  add_tmp_PRECISION
#undef  add_tmp_PRECISION_STR
#undef  v_add_s_PRECISION
#undef  v_add_s_PRECISION_STR
#undef  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION
#undef  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR
#undef  launch_compute_hh_trafo_c_kernel_complex_PRECISION
#undef  compute_hh_trafo_NUMBER_gpu_PRECISION
#undef  compute_hh_trafo_NUMBER_gpu_PRECISION_STR
#undef  compute_hh_trafo_complex_gpu_PRECISION
#undef  launch_my_pack_c_kernel_NUMBER_PRECISION
#undef  launch_my_pack_c_kernel_NUMBER_PRECISION_STR
#undef  launch_my_pack_c_kernel_complex_PRECISION
#undef  launch_my_unpack_c_kernel_NUMBER_PRECISION
#undef  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR
#undef  launch_my_unpack_c_kernel_complex_PRECISION
#undef  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION
#undef  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR
#undef  launch_compute_hh_dotp_c_kernel_complex_PRECISION
#undef  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION
#undef  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR
#undef  launch_extract_hh_tau_c_kernel_complex_PRECISION
#undef  PRECISION_GEMV
#undef  PRECISION_TRMV
#undef  PRECISION_GEMM
#undef  PRECISION_TRMM
#undef  PRECISION_HERK
#undef  PRECISION_SYRK
#undef  PRECISION_SYMV
#undef  PRECISION_SYMM
#undef  PRECISION_HEMV
#undef  PRECISION_HER2
#undef  PRECISION_SYR2
#undef  PRECISION_SYR2K
#undef  PRECISION_GEQRF
#undef  PRECISION_STEDC
#undef  PRECISION_STEQR
#undef  PRECISION_LAMRG
#undef  PRECISION_LAMCH
#undef  PRECISION_LAPY2
#undef  PRECISION_LAED4
#undef  PRECISION_LAED5
#undef  cublas_PRECISION_GEMM
#undef  cublas_PRECISION_TRMM
#undef  cublas_PRECISION_GEMV
#undef  PRECISION_SUFFIX
#undef  MPI_COMPLEX_PRECISION
#undef  MPI_COMPLEX_EXPLICIT_PRECISION
#undef  MPI_REAL_PRECISION
#undef  KIND_PRECISION
#undef  PRECISION_CMPLX
#undef  PRECISION_IMAG
#undef  PRECISION_REAL
#undef  CONST_REAL_0_0
#undef  CONST_REAL_1_0
#undef  CONST_REAL_0_5
#undef  CONST_COMPLEX_PAIR_0_0
#undef  CONST_COMPLEX_PAIR_1_0
#undef  CONST_COMPLEX_PAIR_NEGATIVE_1_0
#undef  CONST_COMPLEX_PAIR_NEGATIVE_0_5
#undef  CONST_COMPLEX_0_0
#undef  CONST_COMPLEX_1_0
#undef  size_of_PRECISION_complex
#undef  C_DATATYPE_KIND
#ifdef DOUBLE_PRECISION
#define  PRECISION double
#define  PRECISION_STR 'double'
#define  qr_pdgeqrf_2dcomm_PRECISION qr_pdgeqrf_2dcomm_double
#define  qr_pdgeqrf_2dcomm_PRECISION_STR 'qr_pdgeqrf_2dcomm_double'
#define  redist_band_NUMBER_PRECISION redist_band_complex_double
#define  redist_band_NUMBER_PRECISION_STR 'redist_band_complex_double'
#define  redist_band_complex_PRECISION redist_band_complex_double
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION unpack_and_prepare_row_group_complex_gpu_double
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR 'unpack_and_prepare_row_group_complex_gpu_double'
#define  unpack_and_prepare_row_group_complex_gpu_PRECISION unpack_and_prepare_row_group_complex_gpu_double
#define  extract_hh_tau_NUMBER_gpu_PRECISION extract_hh_tau_complex_gpu_double
#define  extract_hh_tau_NUMBER_gpu_PRECISION_STR 'extract_hh_tau_complex_gpu_double'
#define  extract_hh_tau_complex_gpu_PRECISION extract_hh_tau_complex_gpu_double
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION compute_hh_dot_products_complex_gpu_double
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR 'compute_hh_dot_products_complex_gpu_double'
#define  compute_hh_dot_products_complex_gpu_PRECISION compute_hh_dot_products_complex_gpu_double
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION compute_hh_trafo_complex_cpu_openmp_double
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR 'compute_hh_trafo_complex_cpu_openmp_double'
#define  compute_hh_trafo_complex_cpu_openmp_PRECISION compute_hh_trafo_complex_cpu_openmp_double
#define  compute_hh_trafo_NUMBER_cpu_PRECISION compute_hh_trafo_complex_cpu_double
#define  compute_hh_trafo_NUMBER_cpu_PRECISION_STR 'compute_hh_trafo_complex_cpu_double'
#define  compute_hh_trafo_complex_cpu_PRECISION compute_hh_trafo_complex_cpu_double
#define  pack_row_group_NUMBER_gpu_PRECISION pack_row_group_complex_gpu_double
#define  pack_row_group_NUMBER_gpu_PRECISION_STR 'pack_row_group_complex_gpu_double'
#define  pack_row_group_complex_gpu_PRECISION pack_row_group_complex_gpu_double
#define  pack_row_NUMBER_cpu_openmp_PRECISION pack_row_complex_cpu_openmp_double
#define  pack_row_NUMBER_cpu_openmp_PRECISION_STR 'pack_row_complex_cpu_openmp_double'
#define  pack_row_complex_cpu_openmp_PRECISION pack_row_complex_cpu_openmp_double
#define  pack_row_NUMBER_cpu_PRECISION pack_row_complex_cpu_double
#define  pack_row_NUMBER_cpu_PRECISION_STR 'pack_row_complex_cpu_double'
#define  pack_row_complex_cpu_PRECISION pack_row_complex_cpu_double
#define  wy_gen_PRECISION wy_gen_double
#define  wy_gen_PRECISION_STR 'wy_gen_double'
#define  wy_right_PRECISION wy_right_double
#define  wy_right_PRECISION_STR 'wy_right_double'
#define  wy_left_PRECISION wy_left_double
#define  wy_left_PRECISION_STR 'wy_left_double'
#define  wy_symm_PRECISION wy_symm_double
#define  wy_symm_PRECISION_STR 'wy_symm_double'
#define  merge_recursive_PRECISION merge_recursive_double
#define  merge_recursive_PRECISION_STR 'merge_recursive_double'
#define  merge_systems_PRECISION merge_systems_double
#define  merge_systems_PRECISION_STR 'merge_systems_double'
#define  distribute_global_column_PRECISION distribute_global_column_double
#define  distribute_global_column_PRECISION_STR 'distribute_global_column_double'
#define  check_monotony_PRECISION check_monotony_double
#define  check_monotony_PRECISION_STR 'check_monotony_double'
#define  global_gather_PRECISION global_gather_double
#define  global_gather_PRECISION_STR 'global_gather_double'
#define  resort_ev_PRECISION resort_ev_double
#define  resort_ev_PRECISION_STR 'resort_ev_double'
#define  transform_columns_PRECISION transform_columns_double
#define  transform_columns_PRECISION_STR 'transform_columns_double'
#define  solve_secular_equation_PRECISION solve_secular_equation_double
#define  solve_secular_equation_PRECISION_STR 'solve_secular_equation_double'
#define  global_product_PRECISION global_product_double
#define  global_product_PRECISION_STR 'global_product_double'
#define  add_tmp_PRECISION add_tmp_double
#define  add_tmp_PRECISION_STR 'add_tmp_double'
#define  v_add_s_PRECISION v_add_s_double
#define  v_add_s_PRECISION_STR 'v_add_s_double'
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION launch_compute_hh_trafo_c_kernel_complex_double
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_trafo_c_kernel_complex_double'
#define  launch_compute_hh_trafo_c_kernel_complex_PRECISION launch_compute_hh_trafo_c_kernel_complex_double
#define  compute_hh_trafo_NUMBER_gpu_PRECISION compute_hh_trafo_complex_gpu_double
#define  compute_hh_trafo_NUMBER_gpu_PRECISION_STR 'compute_hh_trafo_complex_gpu_double'
#define  compute_hh_trafo_complex_gpu_PRECISION compute_hh_trafo_complex_gpu_double
#define  launch_my_pack_c_kernel_NUMBER_PRECISION launch_my_pack_c_kernel_complex_double
#define  launch_my_pack_c_kernel_NUMBER_PRECISION_STR 'launch_my_pack_c_kernel_complex_double'
#define  launch_my_pack_c_kernel_complex_PRECISION launch_my_pack_c_kernel_complex_double
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION launch_my_unpack_c_kernel_complex_double
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR 'launch_my_unpack_c_kernel_complex_double'
#define  launch_my_unpack_c_kernel_complex_PRECISION launch_my_unpack_c_kernel_complex_double
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION launch_compute_hh_dotp_c_kernel_complex_double
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_dotp_c_kernel_complex_double'
#define  launch_compute_hh_dotp_c_kernel_complex_PRECISION launch_compute_hh_dotp_c_kernel_complex_double
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION launch_extract_hh_tau_c_kernel_complex_double
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR 'launch_extract_hh_tau_c_kernel_complex_double'
#define  launch_extract_hh_tau_c_kernel_complex_PRECISION launch_extract_hh_tau_c_kernel_complex_double
#define  PRECISION_GEMV ZGEMV
#define  PRECISION_TRMV ZTRMV
#define  PRECISION_GEMM ZGEMM
#define  PRECISION_TRMM ZTRMM
#define  PRECISION_HERK ZHERK
#define  PRECISION_SYRK ZSYRK
#define  PRECISION_SYMV ZSYMV
#define  PRECISION_SYMM ZSYMM
#define  PRECISION_HEMV ZHEMV
#define  PRECISION_HER2 ZHER2
#define  PRECISION_SYR2 ZSYR2
#define  PRECISION_SYR2K ZSYR2K
#define  PRECISION_GEQRF ZGEQRF
#define  PRECISION_STEDC ZSTEDC
#define  PRECISION_STEQR ZSTEQR
#define  PRECISION_LAMRG ZLAMRG
#define  PRECISION_LAMCH ZLAMCH
#define  PRECISION_LAPY2 ZLAPY2
#define  PRECISION_LAED4 ZLAED4
#define  PRECISION_LAED5 ZLAED5
#define  cublas_PRECISION_GEMM cublas_ZGEMM
#define  cublas_PRECISION_TRMM cublas_ZTRMM
#define  cublas_PRECISION_GEMV cublas_ZGEMV
#define  PRECISION_SUFFIX "_double"
#define  MPI_COMPLEX_PRECISION MPI_DOUBLE_COMPLEX
#define  MPI_COMPLEX_EXPLICIT_PRECISION MPI_COMPLEX16
#define  MPI_REAL_PRECISION MPI_REAL8
#define  KIND_PRECISION rk8
#define  PRECISION_CMPLX DCMPLX
#define  PRECISION_IMAG DIMAG
#define  PRECISION_REAL DREAL
#define  CONST_REAL_0_0 0.0_rk8
#define  CONST_REAL_1_0 1.0_rk8
#define  CONST_REAL_0_5 0.5_rk8
#define  CONST_COMPLEX_PAIR_0_0 (0.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_1_0 (1.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_NEGATIVE_1_0 (-1.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_NEGATIVE_0_5 (-0.5_rk8,0.0_rk8)
#define  CONST_COMPLEX_0_0 0.0_ck8
#define  CONST_COMPLEX_1_0 1.0_ck8
#define  size_of_PRECISION_complex size_of_double_complex_datatype
#define  C_DATATYPE_KIND c_double
#endif
#ifdef SINGLE_PRECISION
#define  PRECISION single
#define  PRECISION_STR 'single'
#define  qr_pdgeqrf_2dcomm_PRECISION qr_pdgeqrf_2dcomm_single
#define  qr_pdgeqrf_2dcomm_PRECISION_STR 'qr_pdgeqrf_2dcomm_single'
#define  redist_band_NUMBER_PRECISION redist_band_complex_single
#define  redist_band_NUMBER_PRECISION_STR 'redist_band_complex_single'
#define  redist_band_complex_PRECISION redist_band_complex_single
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION unpack_and_prepare_row_group_complex_gpu_single
#define  unpack_and_prepare_row_group_NUMBER_gpu_PRECISION_STR 'unpack_and_prepare_row_group_complex_gpu_single'
#define  unpack_and_prepare_row_group_complex_gpu_PRECISION unpack_and_prepare_row_group_complex_gpu_single
#define  extract_hh_tau_NUMBER_gpu_PRECISION extract_hh_tau_complex_gpu_single
#define  extract_hh_tau_NUMBER_gpu_PRECISION_STR 'extract_hh_tau_complex_gpu_single'
#define  extract_hh_tau_complex_gpu_PRECISION extract_hh_tau_complex_gpu_single
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION compute_hh_dot_products_complex_gpu_single
#define  compute_hh_dot_products_NUMBER_gpu_PRECISION_STR 'compute_hh_dot_products_complex_gpu_single'
#define  compute_hh_dot_products_complex_gpu_PRECISION compute_hh_dot_products_complex_gpu_single
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION compute_hh_trafo_complex_cpu_openmp_single
#define  compute_hh_trafo_NUMBER_cpu_openmp_PRECISION_STR 'compute_hh_trafo_complex_cpu_openmp_single'
#define  compute_hh_trafo_complex_cpu_openmp_PRECISION compute_hh_trafo_complex_cpu_openmp_single
#define  compute_hh_trafo_NUMBER_cpu_PRECISION compute_hh_trafo_complex_cpu_single
#define  compute_hh_trafo_NUMBER_cpu_PRECISION_STR 'compute_hh_trafo_complex_cpu_single'
#define  compute_hh_trafo_complex_cpu_PRECISION compute_hh_trafo_complex_cpu_single
#define  pack_row_group_NUMBER_gpu_PRECISION pack_row_group_complex_gpu_single
#define  pack_row_group_NUMBER_gpu_PRECISION_STR 'pack_row_group_complex_gpu_single'
#define  pack_row_group_complex_gpu_PRECISION pack_row_group_complex_gpu_single
#define  pack_row_NUMBER_cpu_openmp_PRECISION pack_row_complex_cpu_openmp_single
#define  pack_row_NUMBER_cpu_openmp_PRECISION_STR 'pack_row_complex_cpu_openmp_single'
#define  pack_row_complex_cpu_openmp_PRECISION pack_row_complex_cpu_openmp_single
#define  pack_row_NUMBER_cpu_PRECISION pack_row_complex_cpu_single
#define  pack_row_NUMBER_cpu_PRECISION_STR 'pack_row_complex_cpu_single'
#define  pack_row_complex_cpu_PRECISION pack_row_complex_cpu_single
#define  wy_gen_PRECISION wy_gen_single
#define  wy_gen_PRECISION_STR 'wy_gen_single'
#define  wy_right_PRECISION wy_right_single
#define  wy_right_PRECISION_STR 'wy_right_single'
#define  wy_left_PRECISION wy_left_single
#define  wy_left_PRECISION_STR 'wy_left_single'
#define  wy_symm_PRECISION wy_symm_single
#define  wy_symm_PRECISION_STR 'wy_symm_single'
#define  merge_recursive_PRECISION merge_recursive_single
#define  merge_recursive_PRECISION_STR 'merge_recursive_single'
#define  merge_systems_PRECISION merge_systems_single
#define  merge_systems_PRECISION_STR 'merge_systems_single'
#define  distribute_global_column_PRECISION distribute_global_column_single
#define  distribute_global_column_PRECISION_STR 'distribute_global_column_single'
#define  check_monotony_PRECISION check_monotony_single
#define  check_monotony_PRECISION_STR 'check_monotony_single'
#define  global_gather_PRECISION global_gather_single
#define  global_gather_PRECISION_STR 'global_gather_single'
#define  resort_ev_PRECISION resort_ev_single
#define  resort_ev_PRECISION_STR 'resort_ev_single'
#define  transform_columns_PRECISION transform_columns_single
#define  transform_columns_PRECISION_STR 'transform_columns_single'
#define  solve_secular_equation_PRECISION solve_secular_equation_single
#define  solve_secular_equation_PRECISION_STR 'solve_secular_equation_single'
#define  global_product_PRECISION global_product_single
#define  global_product_PRECISION_STR 'global_product_single'
#define  add_tmp_PRECISION add_tmp_single
#define  add_tmp_PRECISION_STR 'add_tmp_single'
#define  v_add_s_PRECISION v_add_s_single
#define  v_add_s_PRECISION_STR 'v_add_s_single'
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION launch_compute_hh_trafo_c_kernel_complex_single
#define  launch_compute_hh_trafo_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_trafo_c_kernel_complex_single'
#define  launch_compute_hh_trafo_c_kernel_complex_PRECISION launch_compute_hh_trafo_c_kernel_complex_single
#define  compute_hh_trafo_NUMBER_gpu_PRECISION compute_hh_trafo_complex_gpu_single
#define  compute_hh_trafo_NUMBER_gpu_PRECISION_STR 'compute_hh_trafo_complex_gpu_single'
#define  compute_hh_trafo_complex_gpu_PRECISION compute_hh_trafo_complex_gpu_single
#define  launch_my_pack_c_kernel_NUMBER_PRECISION launch_my_pack_c_kernel_complex_single
#define  launch_my_pack_c_kernel_NUMBER_PRECISION_STR 'launch_my_pack_c_kernel_complex_single'
#define  launch_my_pack_c_kernel_complex_PRECISION launch_my_pack_c_kernel_complex_single
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION launch_my_unpack_c_kernel_complex_single
#define  launch_my_unpack_c_kernel_NUMBER_PRECISION_STR 'launch_my_unpack_c_kernel_complex_single'
#define  launch_my_unpack_c_kernel_complex_PRECISION launch_my_unpack_c_kernel_complex_single
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION launch_compute_hh_dotp_c_kernel_complex_single
#define  launch_compute_hh_dotp_c_kernel_NUMBER_PRECISION_STR 'launch_compute_hh_dotp_c_kernel_complex_single'
#define  launch_compute_hh_dotp_c_kernel_complex_PRECISION launch_compute_hh_dotp_c_kernel_complex_single
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION launch_extract_hh_tau_c_kernel_complex_single
#define  launch_extract_hh_tau_c_kernel_NUMBER_PRECISION_STR 'launch_extract_hh_tau_c_kernel_complex_single'
#define  launch_extract_hh_tau_c_kernel_complex_PRECISION launch_extract_hh_tau_c_kernel_complex_single
#define  PRECISION_GEMV CGEMV
#define  PRECISION_TRMV CTRMV
#define  PRECISION_GEMM CGEMM
#define  PRECISION_TRMM CTRMM
#define  PRECISION_HERK CHERK
#define  PRECISION_SYRK CSYRK
#define  PRECISION_SYMV CSYMV
#define  PRECISION_SYMM CSYMM
#define  PRECISION_HEMV CHEMV
#define  PRECISION_HER2 CHER2
#define  PRECISION_SYR2 CSYR2
#define  PRECISION_SYR2K CSYR2K
#define  PRECISION_GEQRF CGEQRF
#define  PRECISION_STEDC CSTEDC
#define  PRECISION_STEQR CSTEQR
#define  PRECISION_LAMRG CLAMRG
#define  PRECISION_LAMCH CLAMCH
#define  PRECISION_LAPY2 CLAPY2
#define  PRECISION_LAED4 CLAED4
#define  PRECISION_LAED5 CLAED5
#define  cublas_PRECISION_GEMM cublas_CGEMM
#define  cublas_PRECISION_TRMM cublas_CTRMM
#define  cublas_PRECISION_GEMV cublas_CGEMV
#define  PRECISION_SUFFIX "_single"
#define  MPI_COMPLEX_PRECISION MPI_COMPLEX
#define  MPI_COMPLEX_EXPLICIT_PRECISION MPI_COMPLEX8
#define  MPI_REAL_PRECISION MPI_REAL4
#define  KIND_PRECISION rk4
#define  PRECISION_CMPLX CMPLX
#define  PRECISION_IMAG AIMAG
#define  PRECISION_REAL REAL
#define  CONST_REAL_0_0 0.0_rk4
#define  CONST_REAL_1_0 1.0_rk4
#define  CONST_REAL_0_5 0.5_rk4
#define  CONST_COMPLEX_PAIR_0_0 (0.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_1_0 (1.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_NEGATIVE_1_0 (-1.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_NEGATIVE_0_5 (-0.5_rk4,0.0_rk4)
#define  CONST_COMPLEX_0_0 0.0_ck4
#define  CONST_COMPLEX_1_0 1.0_ck4
#define  size_of_PRECISION_complex size_of_single_complex_datatype
#define  C_DATATYPE_KIND c_float
#endif
#endif
