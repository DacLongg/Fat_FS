#pragma once
#include "stdint.h"

typedef struct
{

}FatFs_t;



typedef struct
{
	uint16_t sector_size;
	uint16_t total_sector;
	uint16_t FAT_size;
	uint8_t Clustor_size;

}Fatfs_BootInfo;