/*
 * Copyright (C) 2011 LG Electronics Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __LGE_BATTERY_ID_H__
#define __LGE_BATTERY_ID_H__
enum cell_type {
	LGC_LLL,
	TCD_AAC
};

enum {
	BATT_ID_UNKNOWN         = 0,
	BATT_ID_DS2704_N        = 17,
	BATT_ID_DS2704_L        = 32,
	BATT_ID_DS2704_C        = 48,
	BATT_ID_ISL6296_N       = 73,
	BATT_ID_ISL6296_L       = 94,
	BATT_ID_ISL6296_C       = 105,
	BATT_ID_RA4301_VC0      = 130,
	BATT_ID_RA4301_VC1      = 147,
	BATT_ID_RA4301_VC2      = 162,
	BATT_ID_SW3800_VC0      = 187,
	BATT_NOT_PRESENT        = 200,
	BATT_ID_SW3800_VC1      = 204,
	BATT_ID_SW3800_VC2      = 219,
};

struct battery_id_type {
	int battery_id;
	int battery_cell_type;
	char *battery_type_name;
};

extern struct battery_id_type battery_id_list[];
#ifdef CONFIG_LGE_PM_BATTERY_ID_CHECKER
bool lge_battery_check(void);
extern int is_battery_present;
#endif
#ifdef CONFIG_LGE_PM_LGE_POWER_CLASS_BATTERY_ID_CHECKER
int lge_is_battery_present(void);
#endif
#define BATT_ID_LIST_MAX 8
#define BATT_ID_DEFAULT BATT_ID_SW3800_VC0
#define BATT_ID_DEFAULT_TYPE_NAME "LGE_BL51YF_LGC_3000mAh"

#endif  /* __LGE_BATTERY_ID_H__ */

