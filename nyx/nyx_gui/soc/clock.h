/*
 * Copyright (c) 2018 naehrwert
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CLOCK_H_
#define _CLOCK_H_

#include "../utils/types.h"

/*! Clock registers. */
#define CLK_RST_CONTROLLER_RST_SOURCE 0x0
#define CLK_RST_CONTROLLER_RST_DEVICES_L 0x4
#define CLK_RST_CONTROLLER_RST_DEVICES_H 0x8
#define CLK_RST_CONTROLLER_RST_DEVICES_U 0xC
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_L 0x10
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_H 0x14
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_U 0x18
#define CLK_RST_CONTROLLER_CCLK_BURST_POLICY 0x20
#define CLK_RST_CONTROLLER_SUPER_CCLK_DIVIDER 0x24
#define CLK_RST_CONTROLLER_SCLK_BURST_POLICY 0x28
#define CLK_RST_CONTROLLER_SUPER_SCLK_DIVIDER 0x2C
#define CLK_RST_CONTROLLER_CLK_SYSTEM_RATE 0x30
#define CLK_RST_CONTROLLER_MISC_CLK_ENB 0x48
#define CLK_RST_CONTROLLER_OSC_CTRL 0x50
#define CLK_RST_CONTROLLER_PLLC_BASE 0x80
#define CLK_RST_CONTROLLER_PLLC_OUT 0x84
#define CLK_RST_CONTROLLER_PLLC_MISC 0x88
#define CLK_RST_CONTROLLER_PLLC_MISC_1 0x8C
#define CLK_RST_CONTROLLER_PLLM_BASE 0x90
#define CLK_RST_CONTROLLER_PLLM_MISC1 0x98
#define CLK_RST_CONTROLLER_PLLM_MISC2 0x9C
#define CLK_RST_CONTROLLER_PLLP_BASE 0xA0
#define CLK_RST_CONTROLLER_PLLD_BASE 0xD0
#define CLK_RST_CONTROLLER_PLLD_MISC1 0xD8
#define CLK_RST_CONTROLLER_PLLD_MISC 0xDC
#define CLK_RST_CONTROLLER_PLLX_BASE 0xE0
#define CLK_RST_CONTROLLER_PLLX_MISC 0xE4
#define CLK_RST_CONTROLLER_PLLE_BASE 0xE8
#define CLK_RST_CONTROLLER_PLLE_MISC 0xEC
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRA 0xF8
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRB 0xFC
#define CLK_RST_CONTROLLER_CLK_SOURCE_PWM 0x110
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C1 0x124
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C5 0x128
#define CLK_RST_CONTROLLER_CLK_SOURCE_DISP1 0x138
#define CLK_RST_CONTROLLER_CLK_SOURCE_VI 0x148
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC1 0x150
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC2 0x154
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC4 0x164
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTA 0x178
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTB 0x17C
#define CLK_RST_CONTROLLER_CLK_SOURCE_HOST1X 0x180
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C2 0x198
#define CLK_RST_CONTROLLER_CLK_SOURCE_EMC 0x19C
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTC 0x1A0
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C3 0x1B8
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC3 0x1BC
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTD 0x1C0
#define CLK_RST_CONTROLLER_CLK_SOURCE_CSITE 0x1D4
#define CLK_RST_CONTROLLER_CLK_SOURCE_TSEC 0x1F4
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_X 0x280
#define CLK_RST_CONTROLLER_CLK_ENB_X_SET 0x284
#define CLK_RST_CONTROLLER_CLK_ENB_X_CLR 0x288
#define CLK_RST_CONTROLLER_RST_DEVICES_X 0x28C
#define CLK_RST_CONTROLLER_RST_DEV_X_SET 0x290
#define CLK_RST_CONTROLLER_RST_DEV_X_CLR 0x294
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_Y 0x298
#define CLK_RST_CONTROLLER_CLK_ENB_Y_SET 0x29C
#define CLK_RST_CONTROLLER_CLK_ENB_Y_CLR 0x2A0
#define CLK_RST_CONTROLLER_RST_DEVICES_Y 0x2A4
#define CLK_RST_CONTROLLER_RST_DEV_Y_SET 0x2A8
#define CLK_RST_CONTROLLER_RST_DEV_Y_CLR 0x2AC
#define CLK_RST_CONTROLLER_RST_DEV_L_SET 0x300
#define CLK_RST_CONTROLLER_RST_DEV_L_CLR 0x304
#define CLK_RST_CONTROLLER_RST_DEV_H_SET 0x308
#define CLK_RST_CONTROLLER_RST_DEV_H_CLR 0x30C
#define CLK_RST_CONTROLLER_RST_DEV_U_SET 0x310
#define CLK_RST_CONTROLLER_RST_DEV_U_CLR 0x314
#define CLK_RST_CONTROLLER_CLK_ENB_L_SET 0x320
#define CLK_RST_CONTROLLER_CLK_ENB_L_CLR 0x324
#define CLK_RST_CONTROLLER_CLK_ENB_H_SET 0x328
#define CLK_RST_CONTROLLER_CLK_ENB_H_CLR 0x32C
#define CLK_RST_CONTROLLER_CLK_ENB_U_SET 0x330
#define CLK_RST_CONTROLLER_CLK_ENB_U_CLR 0x334
#define CLK_RST_CONTROLLER_RST_DEVICES_V 0x358
#define CLK_RST_CONTROLLER_RST_DEVICES_W 0x35C
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_V 0x360
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_W 0x364
#define CLK_RST_CONTROLLER_CPU_SOFTRST_CTRL2 0x388
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRC 0x3A0
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRD 0x3A4
#define CLK_RST_CONTROLLER_CLK_SOURCE_MSELECT 0x3B4
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C4 0x3C4
#define CLK_RST_CONTROLLER_CLK_SOURCE_SYS 0x400
#define CLK_RST_CONTROLLER_CLK_SOURCE_SOR1 0x410
#define CLK_RST_CONTROLLER_CLK_SOURCE_SE 0x42C
#define CLK_RST_CONTROLLER_RST_DEV_V_CLR 0x434
#define CLK_RST_CONTROLLER_CLK_ENB_V_SET 0x440
#define CLK_RST_CONTROLLER_CLK_ENB_V_CLR 0x444
#define CLK_RST_CONTROLLER_CLK_ENB_W_SET 0x448
#define CLK_RST_CONTROLLER_CLK_ENB_W_CLR 0x44C
#define CLK_RST_CONTROLLER_RST_CPUG_CMPLX_SET 0x450
#define CLK_RST_CONTROLLER_RST_CPUG_CMPLX_CLR 0x454
#define CLK_RST_CONTROLLER_UTMIP_PLL_CFG2 0x488
#define CLK_RST_CONTROLLER_PLLE_AUX 0x48C
#define CLK_RST_CONTROLLER_AUDIO_SYNC_CLK_I2S0 0x4A0
#define CLK_RST_CONTROLLER_PLLX_MISC_3 0x518
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRE 0x554
#define CLK_RST_CONTROLLER_SPARE_REG0 0x55C
#define CLK_RST_CONTROLLER_PLLC4_BASE 0x5A4
#define CLK_RST_CONTROLLER_PLLC4_MISC 0x5A8
#define CLK_RST_CONTROLLER_PLLC_MISC_2 0x5D0
#define CLK_RST_CONTROLLER_PLLC4_OUT 0x5E4
#define CLK_RST_CONTROLLER_PLLMB_BASE 0x5E8
#define CLK_RST_CONTROLLER_CLK_SOURCE_DSIA_LP 0x620
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C6 0x65C
#define CLK_RST_CONTROLLER_CLK_SOURCE_EMC_DLL 0x664
#define CLK_RST_CONTROLLER_CLK_SOURCE_UART_FST_MIPI_CAL 0x66C
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC_LEGACY_TM 0x694
#define CLK_RST_CONTROLLER_CLK_SOURCE_NVENC 0x6A0
#define CLK_RST_CONTROLLER_SE_SUPER_CLK_DIVIDER 0x704
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTAPE 0x710

#define CLK_NO_SOURCE 0x0

/*! PLL control and status bits */
#define PLLCX_BASE_ENABLE    (1 << 30)
#define PLLCX_BASE_REF_DIS   (1 << 29)
#define PLLCX_BASE_LOCK      (1 << 27)

#define PLLC_MISC_RESET      (1 << 30)
#define PLLC_MISC1_IDDQ      (1 << 27)
#define PLLC_OUT1_CLKEN      (1 << 1)
#define PLLC_OUT1_RSTN_CLR   (1 << 0)

#define PLLC4_MISC_EN_LCKDET (1 << 30)
#define PLLC4_BASE_IDDQ      (1 << 18)
#define PLLC4_OUT3_CLKEN     (1 << 1)
#define PLLC4_OUT3_RSTN_CLR  (1 << 0)

/*! Generic clock descriptor. */
typedef struct _clock_t
{
	u32 reset;
	u32 enable;
	u32 source;
	u8 index;
	u8 clk_src;
	u8 clk_div;
} clock_t;

/*! Generic clock enable/disable. */
void clock_enable(const clock_t *clk);
void clock_disable(const clock_t *clk);

/*! Clock control for specific hardware portions. */
void clock_enable_fuse(bool enable);
void clock_enable_uart(u32 idx);
void clock_enable_i2c(u32 idx);
void clock_disable_i2c(u32 idx);
void clock_enable_se();
void clock_enable_tzram();
void clock_enable_host1x();
void clock_disable_host1x();
void clock_enable_tsec();
void clock_disable_tsec();
void clock_enable_sor_safe();
void clock_disable_sor_safe();
void clock_enable_sor0();
void clock_disable_sor0();
void clock_enable_sor1();
void clock_disable_sor1();
void clock_enable_kfuse();
void clock_disable_kfuse();
void clock_enable_cl_dvfs();
void clock_disable_cl_dvfs();
void clock_enable_coresight();
void clock_disable_coresight();
void clock_enable_pwm();
void clock_disable_pwm();
void clock_sdmmc_config_clock_source(u32 *pout, u32 id, u32 val);
void clock_sdmmc_get_card_clock_div(u32 *pout, u16 *pdivisor, u32 type);
int clock_sdmmc_is_not_reset_and_enabled(u32 id);
void clock_sdmmc_enable(u32 id, u32 val);
void clock_sdmmc_disable(u32 id);

#endif
