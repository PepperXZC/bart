
struct nlop_s;
struct noir_model_conf_s;
extern struct nlop_s* nlop_T1_create(int N, const long map_dims[N], const long out_dims[N], const long in_dims[N],
                const long TI_dims[N], const complex float* TI, float scaling_M0, float scaling_R1s, bool use_gpu);

