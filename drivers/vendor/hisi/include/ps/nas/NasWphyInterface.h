

#ifndef __NAS_WPHY_INTERFACE_H__
#define __NAS_WPHY_INTERFACE_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/

enum TC_WPHY_MSG_ID_ENUM
{
    ID_TC_WPHY_CLOSE_LOOP_NTF           = 0xE711,                               /* _H2ASN_MsgChoice TC_WPHY_CLOSE_LOOP_NTF_STRU */
    ID_TC_WPHY_OPEN_LOOP_NTF            = 0xE712,                               /* _H2ASN_MsgChoice TC_WPHY_OPEN_LOOP_NTF_STRU */
    ID_TC_WPHY_MSG_BUTT,

};
typedef VOS_UINT16 TC_WPHY_MSG_ID_ENUM_UINT16;
/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

typedef struct
{
    VOS_MSG_HEADER
    TC_WPHY_MSG_ID_ENUM_UINT16          usMsgId;
    VOS_UINT8                           aucReserved[2];
} TC_WPHY_CLOSE_LOOP_NTF_STRU;


typedef struct
{
    VOS_MSG_HEADER
    TC_WPHY_MSG_ID_ENUM_UINT16          usMsgId;
    VOS_UINT8                           aucReserved[2];
} TC_WPHY_OPEN_LOOP_NTF_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of NasWphyInterface.h */
