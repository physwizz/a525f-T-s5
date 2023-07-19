/* Copyright (c) 2018-2019, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef NPU_HW_H
#define NPU_HW_H

/* -------------------------------------------------------------------------
 * Defines
 * -------------------------------------------------------------------------
 */
#define NPU_HW_VERSION (0x00000000)
#define NPU_MASTERn_IPC_IRQ_OUT(n) (0x00001004+0x1000*(n))
#define NPU_CACHEMAP0_ATTR_IDn(n) (0x00000800+0x4*(n))
#define NPU_CACHEMAP0_ATTR_METADATA_IDn(n) (0x00000814+0x4*(n))
#define NPU_CACHEMAP1_ATTR_IDn(n) (0x00000830+0x4*(n))
#define NPU_CACHEMAP1_ATTR_METADATA_IDn(n) (0x00000844+0x4*(n))
#define NPU_CACHEMAP_SCID_MASK 0x0000001F
#define NPU_MASTERn_IPC_IRQ_IN_CTRL(n) (0x00001008+0x1000*(n))
#define NPU_MASTER0_IPC_IRQ_IN_CTRL__IRQ_SOURCE_SELECT___S 4
#define NPU_MASTERn_IPC_IRQ_OUT_CTRL(n) (0x00001004+0x1000*(n))
#define NPU_MASTER0_IPC_IRQ_OUT_CTRL__IRQ_TYPE_PULSE 4
#define NPU_GPR0 (0x00000100)
#define NPU_MASTERn_ERROR_IRQ_STATUS(n) (0x00001010+0x1000*(n))
#define NPU_MASTERn_ERROR_IRQ_INCLUDE(n) (0x00001014+0x1000*(n))
#define NPU_MASTERn_ERROR_IRQ_ENABLE(n) (0x00001018+0x1000*(n))
#define NPU_MASTERn_ERROR_IRQ_CLEAR(n) (0x0000101C+0x1000*(n))
#define NPU_MASTERn_ERROR_IRQ_SET(n) (0x00001020+0x1000*(n))
#define NPU_MASTERn_ERROR_IRQ_OWNER(n) (0x00007000+4*(n))
#define NPU_ERROR_IRQ_MASK 0x000000E3
#define NPU_MASTERn_WDOG_IRQ_STATUS(n) (0x00001030+0x1000*(n))
#define NPU_WDOG_BITE_IRQ_STATUS (1 << 1)
#define NPU_MASTERn_WDOG_IRQ_INCLUDE(n) (0x00001034+0x1000*(n))
#define NPU_WDOG_BITE_IRQ_INCLUDE (1 << 1)
#define NPU_MASTERn_WDOG_IRQ_OWNER(n) (0x00007010+4*(n))
#define NPU_WDOG_IRQ_MASK 0x00000002


#define NPU_GPR1 (0x00000104)
#define NPU_GPR2 (0x00000108)
#define NPU_GPR3 (0x0000010C)
#define NPU_GPR4 (0x00000110)
#define NPU_GPR5 (0x00000114)
#define NPU_GPR11 (0x0000012c)
#define NPU_GPR13 (0x00000134)
#define NPU_GPR14 (0x00000138)
#define NPU_GPR15 (0x0000013C)

#define NPU_QDSP6SS_IPC 0x00088000
#define NPU_QDSP6SS_IPC1 0x00088004

#define APSS_SHARED_IPC_INTERRUPT_1 0x00000010

/* NPU_CC */
#define NPU_CC_NPU_MASTERn_ERROR_IRQ_OWNER(n) (0x00006000+4*(n))
#define NPU_CC_NPU_MASTERn_ERROR_IRQ_STATUS(n) (0x00009010+0x1000*(n))
#define NPU_CC_NPU_MASTERn_ERROR_IRQ_ENABLE(n) (0x00009018+0x1000*(n))
#define NPU_CC_NPU_MASTERn_ERROR_IRQ_CLEAR(n) (0x0000901C+0x1000*(n))
#define NPU_CC_NPU_MASTERn_GENERAL_IRQ_OWNER(n) (0x00006030+4*(n))
#define NPU_CC_NPU_MASTERn_GENERAL_IRQ_STATUS(n) (0x00009050+0xFC0*(n))
#define NPU_CC_NPU_MASTERn_GENERAL_IRQ_INCLUDE(n) (0x00009054+0xFC0*(n))
#define RSC_SHUTDOWN_REQ_IRQ_STATUS (1 << 11)
#define RSC_BRINGUP_REQ_IRQ_STATUS (1 << 12)
#define NPU_CC_NPU_MASTERn_GENERAL_IRQ_ENABLE(n) (0x00009058+0xFC0*(n))
#define NPU_CC_NPU_MASTERn_GENERAL_IRQ_CLEAR(n) (0x0000905C+0xFC0*(n))
#define RSC_SHUTDOWN_REQ_IRQ_ENABLE (1 << 11)
#define RSC_BRINGUP_REQ_IRQ_ENABLE (1 << 12)
#define NPU_CC_NPU_CPC_RSC_CTRL (0x000011C8)
#define Q6SS_RSC_BRINGUP_ACK_EN (1 << 0)
#define Q6SS_RSC_SHUTDOWN_ACK_EN (1 << 1)
#define NPU_CC_NPU_MASTERn_WDOG_BITE_IRQ_OWNER(n) (0x0006010+4*(n))
#define NPU_CC_NPU_MASTERn_WDOG_BITE_IRQ_STATUS(n) (0x00009030+0x1000*(n))

#define TCSR_NPU_CPC_PWR_ON (0x0003700C)
#define NPU_CPC_PWR_ON (1 << 0)

#endif /* NPU_HW_H */
