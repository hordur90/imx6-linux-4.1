/*
 * Copyright 2013-2015 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __DT_BINDINGS_CLOCK_IMX6SL_H
#define __DT_BINDINGS_CLOCK_IMX6SL_H

#define IMX6SL_CLK_DUMMY		0
#define IMX6SL_CLK_CKIL			1
#define IMX6SL_CLK_OSC			2
#define IMX6SL_CLK_PLL1_SYS		3
#define IMX6SL_CLK_PLL2_BUS		4
#define IMX6SL_CLK_PLL3_USB_OTG		5
#define IMX6SL_CLK_PLL4_AUDIO		6
#define IMX6SL_CLK_PLL5_VIDEO		7
#define IMX6SL_CLK_PLL6_ENET		8
#define IMX6SL_CLK_PLL7_USB_HOST	9
#define IMX6SL_CLK_USBPHY1		10
#define IMX6SL_CLK_USBPHY2		11
#define IMX6SL_CLK_USBPHY1_GATE		12
#define IMX6SL_CLK_USBPHY2_GATE		13
#define IMX6SL_CLK_PLL4_POST_DIV	14
#define IMX6SL_CLK_PLL5_POST_DIV	15
#define IMX6SL_CLK_PLL5_VIDEO_DIV	16
#define IMX6SL_CLK_ENET_REF		17
#define IMX6SL_CLK_PLL2_PFD0		18
#define IMX6SL_CLK_PLL2_PFD1		19
#define IMX6SL_CLK_PLL2_PFD2		20
#define IMX6SL_CLK_PLL3_PFD0		21
#define IMX6SL_CLK_PLL3_PFD1		22
#define IMX6SL_CLK_PLL3_PFD2		23
#define IMX6SL_CLK_PLL3_PFD3		24
#define IMX6SL_CLK_PLL2_198M		25
#define IMX6SL_CLK_PLL3_120M		26
#define IMX6SL_CLK_PLL3_80M		27
#define IMX6SL_CLK_PLL3_60M		28
#define IMX6SL_CLK_STEP			29
#define IMX6SL_CLK_PLL1_SW		30
#define IMX6SL_CLK_OCRAM_ALT_SEL	31
#define IMX6SL_CLK_OCRAM_SEL		32
#define IMX6SL_CLK_PRE_PERIPH2_SEL	33
#define IMX6SL_CLK_PRE_PERIPH_SEL	34
#define IMX6SL_CLK_PERIPH2_CLK2_SEL	35
#define IMX6SL_CLK_PERIPH_CLK2_SEL	36
#define IMX6SL_CLK_CSI_SEL		37
#define IMX6SL_CLK_LCDIF_AXI_SEL	38
#define IMX6SL_CLK_USDHC1_SEL		39
#define IMX6SL_CLK_USDHC2_SEL		40
#define IMX6SL_CLK_USDHC3_SEL		41
#define IMX6SL_CLK_USDHC4_SEL		42
#define IMX6SL_CLK_SSI1_SEL		43
#define IMX6SL_CLK_SSI2_SEL		44
#define IMX6SL_CLK_SSI3_SEL		45
#define IMX6SL_CLK_PERCLK_SEL		46
#define IMX6SL_CLK_PXP_AXI_SEL		47
#define IMX6SL_CLK_EPDC_AXI_SEL		48
#define IMX6SL_CLK_GPU2D_OVG_SEL	49
#define IMX6SL_CLK_GPU2D_SEL		50
#define IMX6SL_CLK_LCDIF_PIX_SEL	51
#define IMX6SL_CLK_EPDC_PIX_SEL		52
#define IMX6SL_CLK_SPDIF0_SEL		53
#define IMX6SL_CLK_SPDIF1_SEL		54
#define IMX6SL_CLK_EXTERN_AUDIO_SEL	55
#define IMX6SL_CLK_ECSPI_SEL		56
#define IMX6SL_CLK_UART_SEL		57
#define IMX6SL_CLK_PERIPH		58
#define IMX6SL_CLK_PERIPH2		59
#define IMX6SL_CLK_OCRAM_PODF		60
#define IMX6SL_CLK_PERIPH_CLK2_PODF	61
#define IMX6SL_CLK_PERIPH2_CLK2_PODF	62
#define IMX6SL_CLK_IPG			63
#define IMX6SL_CLK_CSI_PODF		64
#define IMX6SL_CLK_LCDIF_AXI_PODF	65
#define IMX6SL_CLK_USDHC1_PODF		66
#define IMX6SL_CLK_USDHC2_PODF		67
#define IMX6SL_CLK_USDHC3_PODF		68
#define IMX6SL_CLK_USDHC4_PODF		69
#define IMX6SL_CLK_SSI1_PRED		70
#define IMX6SL_CLK_SSI1_PODF		71
#define IMX6SL_CLK_SSI2_PRED		72
#define IMX6SL_CLK_SSI2_PODF		73
#define IMX6SL_CLK_SSI3_PRED		74
#define IMX6SL_CLK_SSI3_PODF		75
#define IMX6SL_CLK_PERCLK		76
#define IMX6SL_CLK_PXP_AXI_PODF		77
#define IMX6SL_CLK_EPDC_AXI_PODF	78
#define IMX6SL_CLK_GPU2D_OVG_PODF	79
#define IMX6SL_CLK_GPU2D_PODF		80
#define IMX6SL_CLK_LCDIF_PIX_PRED	81
#define IMX6SL_CLK_EPDC_PIX_PRED	82
#define IMX6SL_CLK_LCDIF_PIX_PODF	83
#define IMX6SL_CLK_EPDC_PIX_PODF	84
#define IMX6SL_CLK_SPDIF0_PRED		85
#define IMX6SL_CLK_SPDIF0_PODF		86
#define IMX6SL_CLK_SPDIF1_PRED		87
#define IMX6SL_CLK_SPDIF1_PODF		88
#define IMX6SL_CLK_EXTERN_AUDIO_PRED	89
#define IMX6SL_CLK_EXTERN_AUDIO_PODF	90
#define IMX6SL_CLK_ECSPI_ROOT		91
#define IMX6SL_CLK_UART_ROOT		92
#define IMX6SL_CLK_AHB			93
#define IMX6SL_CLK_MMDC_ROOT		94
#define IMX6SL_CLK_ARM			95
#define IMX6SL_CLK_ECSPI1		96
#define IMX6SL_CLK_ECSPI2		97
#define IMX6SL_CLK_ECSPI3		98
#define IMX6SL_CLK_ECSPI4		99
#define IMX6SL_CLK_EPIT1		100
#define IMX6SL_CLK_EPIT2		101
#define IMX6SL_CLK_EXTERN_AUDIO		102
#define IMX6SL_CLK_GPT			103
#define IMX6SL_CLK_GPT_SERIAL		104
#define IMX6SL_CLK_GPU2D_OVG		105
#define IMX6SL_CLK_I2C1			106
#define IMX6SL_CLK_I2C2			107
#define IMX6SL_CLK_I2C3			108
#define IMX6SL_CLK_OCOTP		109
#define IMX6SL_CLK_CSI			110
#define IMX6SL_CLK_PXP_AXI		111
#define IMX6SL_CLK_EPDC_AXI		112
#define IMX6SL_CLK_LCDIF_AXI		113
#define IMX6SL_CLK_LCDIF_PIX		114
#define IMX6SL_CLK_EPDC_PIX		115
#define IMX6SL_CLK_OCRAM		116
#define IMX6SL_CLK_PWM1			117
#define IMX6SL_CLK_PWM2			118
#define IMX6SL_CLK_PWM3			119
#define IMX6SL_CLK_PWM4			120
#define IMX6SL_CLK_SDMA			121
#define IMX6SL_CLK_SPDIF		122
#define IMX6SL_CLK_SSI1			123
#define IMX6SL_CLK_SSI2			124
#define IMX6SL_CLK_SSI3			125
#define IMX6SL_CLK_UART			126
#define IMX6SL_CLK_UART_SERIAL		127
#define IMX6SL_CLK_USBOH3		128
#define IMX6SL_CLK_USDHC1		129
#define IMX6SL_CLK_USDHC2		130
#define IMX6SL_CLK_USDHC3		131
#define IMX6SL_CLK_USDHC4		132
#define IMX6SL_CLK_PLL4_AUDIO_DIV	133
#define IMX6SL_CLK_SPBA			134
#define IMX6SL_CLK_ENET			135
#define IMX6SL_CLK_LVDS1_SEL		136
#define IMX6SL_CLK_LVDS1_OUT		137
#define IMX6SL_CLK_LVDS1_IN		138
#define IMX6SL_CLK_ANACLK1		139
#define IMX6SL_PLL1_BYPASS_SRC		140
#define IMX6SL_PLL2_BYPASS_SRC		141
#define IMX6SL_PLL3_BYPASS_SRC		142
#define IMX6SL_PLL4_BYPASS_SRC		143
#define IMX6SL_PLL5_BYPASS_SRC		144
#define IMX6SL_PLL6_BYPASS_SRC		145
#define IMX6SL_PLL7_BYPASS_SRC		146
#define IMX6SL_CLK_PLL1			147
#define IMX6SL_CLK_PLL2			148
#define IMX6SL_CLK_PLL3			149
#define IMX6SL_CLK_PLL4			150
#define IMX6SL_CLK_PLL5			151
#define IMX6SL_CLK_PLL6			152
#define IMX6SL_CLK_PLL7			153
#define IMX6SL_PLL1_BYPASS		154
#define IMX6SL_PLL2_BYPASS		155
#define IMX6SL_PLL3_BYPASS		156
#define IMX6SL_PLL4_BYPASS		157
#define IMX6SL_PLL5_BYPASS		158
#define IMX6SL_PLL6_BYPASS		159
#define IMX6SL_PLL7_BYPASS		160
#define IMX6SL_CLK_SSI1_IPG		161
#define IMX6SL_CLK_SSI2_IPG		162
#define IMX6SL_CLK_SSI3_IPG		163
#define IMX6SL_CLK_SPDIF_GCLK		164
#define IMX6SL_CLK_END			165

#endif /* __DT_BINDINGS_CLOCK_IMX6SL_H */
