
#include <common.h>
#include <power/sunxi/axp.h>
#include <power/sunxi/pmu.h>
#include <i2c.h>
#include <asm/io.h>
#include <malloc.h>
#include "teres.h"
#include <sys_config.h>
DECLARE_GLOBAL_DATA_PTR;

int teres_set_axp_voltages(void)
{
/*
  user_gpio_set_t gpio_info;
        int ret;
        __s32 p_handler;

	axp_set_supply_status(0, PMU_SUPPLY_DLDO2, 2700, 0);
        axp_set_supply_status(0, PMU_SUPPLY_DLDO3, 1200, 0);
	axp_set_supply_status(0, PMU_SUPPLY_DCDC5, 1350, 1);

        printf("Setting DLDO2 and DLDO3 Voltage\n");
        axp_set_supply_status(0, PMU_SUPPLY_DLDO2, 2700, 1);
        __udelay(1300);
        axp_set_supply_status(0, PMU_SUPPLY_DLDO3, 1200, 1);
    ret = fdt_get_one_gpio("boot_disp", "pwr_ok_gpio",&gpio_info);
        if (ret >= 0) {
                        printf("LED GPIO Ok\n");
         p_handler =  gpio_request(&gpio_info, 1);
         gpio_set_one_pin_io_status(p_handler, 1, "pwr_ok_led");
        } else {

        printf("LED GPIO failed %d\n",ret);
        }
*/

	return 0;
}
