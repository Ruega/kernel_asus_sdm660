#include <linux/module.h>

static int ais_enable = 0;
module_param_named(ais_enable, ais_enable, int, 0664);

static int perf_ready = -1;
module_param_named(perf_ready, perf_ready, int, 0664);
