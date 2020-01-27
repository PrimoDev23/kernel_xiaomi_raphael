/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 idkwhoiam322 <idkwhoiam322@raphielgang.org>
 */

#ifndef _POWER_HAL_H
#define _POWER_HAL_H

#ifdef CONFIG_CPU_INPUT_BOOST
/* UFS Boosting */
void set_ufshcd_clkgate_enable_status(u32 value);
void set_ufshcd_hibern8_on_idle_enable_status(u32 value);

#else

static inline void set_ufshcd_clkgate_enable_status(u32 value) { }
static inline void set_ufshcd_hibern8_on_idle_enable_status(u32 value) { }

#endif /* CONFIG_CPU_INPUT_BOOST */

#endif /* _POWER_HAL_H */
