/**
 * @file        PREFIX_ModuleName_Priv.h
 *
 * @brief       <Add file description here> For example, "Private header. It includes all the ModuleName private
 *              declarations."
 *
 * @author      Author Name
 *
 * @copyright   Copyright © 2023. All rights reserved.
 *              Some license text here.
 *
 **********************************************************************************************************************/
#ifndef __PREFIX_MODULENAME_PRIV_H
#define __PREFIX_MODULENAME_PRIV_H
/*************************************************** SYSTEM INCLUDES **************************************************/
#include "headerFile1.h"
#include "headerFile2.h"

/*************************************************** PROJECT INCLUDES *************************************************/
#include "headerFile3.h"
#include "headerFile4.h"

/*************************************************** DRIVER INCLUDES **************************************************/
#include "headerFile5.h"
#include "headerFile6.h"

/********************************************** PRIVATE MACROS DEFINTION **********************************************/

/** @defgroup PREFIX_ModuleName
 * Add here the description for your module. It will be used by Doxygen to self-generate the documentation.
 * @{*/

/** @brief Short description regarding define scope and functionality */
#define MODNAM_PRIVATE_DEFINE_1    ( 1U )
/** @brief Short description regarding define scope and functionality */
#define MODNAM_PRIVATE_DEFINE_2    ( 2U )
/** @brief Short description regarding define scope and functionality */
#define MODNAM_PRIVATE_DEFINE_3    ( 3U )


/*************************************** PRIVATE TYPEDEFS, STRUCTURES and UNIONS **************************************/

/** @brief Short description regarding typedef scope and functionality */
typedef enum
{
    MODNAM_ENUM_1 = ( 0x00u ),
    MODNAM_ENUM_2 = ( 0x00u ),
    MODNAM_ENUM_3 = ( 0x00u ),
} MODNAM_PRIVATE_TYPENAME1_t;

/** @brief Short description regarding typedef scope and functionality */
typedef struct
{
    uint8_t varName1;
    uint16_t varName2;
} MODNAM_PRIVATE_TYPENAME2_t;

#endif /*__PREFIX_MODULENAME_PRIV_H*/
/** @} */
/**************************************************** END OF FILE *****************************************************/
