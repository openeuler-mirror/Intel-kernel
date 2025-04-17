#include <linux/arm_mpam.h>

struct resctrl_arch_staged_config {
	struct resctrl_staged_config	config[FEAT_NUM_TYPES];
};
