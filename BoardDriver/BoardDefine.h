#ifndef __BOARDDEFINE_H
#define __BOARDDEFINE_H

#include "MCU_Periph.h"

/* Debug Port Linker */
#define DEBUG_PORT_SEND                          Uart7SendBuffer_DMA

/* Wifi Port Linker */
#define WIFI_PORT_GET_BYTE                       Uart8PullOneByte

/* IMU ICM20602 Linker */
#define IMU_SPI                                  SPI2
#define IMU_TxRxData                             SPI2_TxRxData_DMA
#define IMU_TxRxCpltCallback                     MCU_SPI2_TxRxCpltCallback
#define IMU_TxRxErrorCallback                    MCU_SPI2_ErrorCallback

/* BARO MCP2520 Linker */
#define BARO_SPI                                 SPI4
#define BARO_TxRxData                            SPI4_TxRxData_DMA
#define BARO_TxRxCpltCallback                    MCU_SPI4_TxRxCpltCallback

#endif /* __BOARDDEFINE_H */
