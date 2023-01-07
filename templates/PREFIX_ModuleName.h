/**
 * @file        PREFIX_ModuleName.h
 *
 * @brief       <Add file description here> For example, "Public interface. It includes all the ModuleName public
 *              declarations."
 *
 * @author      Author Name
 *
 * @copyright   Copyright © 2023. All rights reserved.
 *              Some license text here.
 *
 **********************************************************************************************************************/
#ifndef ___PREFIX_MODULENAME_H
#define ___PREFIX_MODULENAME_H
/*************************************************** SYSTEM INCLUDES **************************************************/
#include "headerFile1.h"
#include "headerFile2.h"

/*************************************************** PROJECT INCLUDES *************************************************/
#include "headerFile3.h"
#include "headerFile4.h"

/*************************************************** DRIVER INCLUDES **************************************************/
#include "headerFile5.h"
#include "headerFile6.h"

/*********************************************** PUBLIC MACROS DEFINTION **********************************************/

/** @defgroup PREFIX_ModuleName
 * Add here the description for your module. It will be used by Doxygen to self-generate the documentation.
 * @{*/

/** @brief Short description regarding define scope and functionality */
#define MODNAM_PUBLIC_DEFINE_1    ( 1U )
/** @brief Short description regarding define scope and functionality */
#define MODNAM_PUBLIC_DEFINE_2    ( 2U )
/** @brief Short description regarding define scope and functionality */
#define MODNAM_PUBLIC_DEFINE_3    ( 3U )


/**************************************** PUBLIC TYPEDEFS, STRUCTURES and UNIONS **************************************/

/** @brief Short description regarding typedef scope and functionality */
typedef enum
{
    MODNAM_ENUM_1 = ( 0x00u ),
    MODNAM_ENUM_2 = ( 0x00u ),
    MODNAM_ENUM_3 = ( 0x00u ),
} MODNAM_PUBLIC_TYPENAME1_t;

/** @brief Short description regarding typedef scope and functionality */
typedef struct
{
    uint8_t varName1;
    uint16_t varName2;
} MODNAM_PUBLIC_TYPENAME2_t;

/*************************************** FUNCTION PROTOTYPES (PUBLIC INTERFACE) ***************************************/
uint32_t MODNAM_publicFunctionOneName( uint8_t param1,
                                       uint8_t param2 );
void MODNAM_publicFunctionTwoName( void );

#endif /*___PREFIX_MODULENAME_H*/
/** @} */
/**************************************************** END OF FILE *****************************************************/
