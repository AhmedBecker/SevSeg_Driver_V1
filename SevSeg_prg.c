#include"STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include"SevSeg_Private.h"
#include"SevSeg_cfg.h"
u8 SevSeg_U8SegNum[10]={zero,one,two,three,four,five,six,eight,nine};
void SevSeg_VidDisplayNum(u8 CopyU8Port,u8 CopyU8Num )
{
	#if 	SEG_TYPE == COM_KA
	DIO_VidSetPortValue(Copy_U8Port, SevSeg_U8SegNum[CopyU8Num]);
	#elif	SEG_TYPE == COM_ANA
	DIO_VidSetPortValue(Copy_U8Port, ~(SevSeg_U8SegNum[CopyU8Num]));
	#else
		#error "WRONG INPUT"
	#endif
}