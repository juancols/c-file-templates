/**
 * @file        PREFIX_ModuleName.c
 *
 * @brief       <Add file description here> For example, "Implementation file for ModuleName. Never add typedef or
 *              #define macros in this file."
 *
 * @author      Author Name
 *
 * @copyright   Copyright © 2023. All rights reserved.
 *              Some license text here.
 *
 **********************************************************************************************************************/

/*************************************************** PROJECT INCLUDES *************************************************/

/**
 * @note
 * - "PREFIX_ModuleName_Priv.h" should only include internal functions, types and attributes.
 * - "PREFIX_ModuleName.h" should be used to include external dependencies. Include here the strictly necessary files
 *   for its own compilation. The dependencies of the private functions should be included in the .c file */
#include "PREFIX_ModuleName.h"
#include "PREFIX_ModuleName_Priv.h"

/*************************************************** PRIVATE INCLUDES *************************************************/

/**
 * @note
 * - Add here the headers used only by the private functions of the module.
 * - The declarations needed by the public functions should be all included in "PREFIX_ModuleName.h" */
#include "HeaderName.h"

/***************************************************** LOCAL DATA *****************************************************/

/*************************************************** LOCAL VARIABLES **************************************************/
/** @brief Add local variable description */
static uint32_t lVariableName = 0;
/** @brief Add local pointer variable description */
static uint32_t * lpVariableName = NULL;

/************************************************** EXTERNAL VARIABLES ************************************************/
/** @brief Add external variable description */
extern uint8_t ExternalVariable;

/******************************************** PRIVATE FUNCTION PROTOTYPES *********************************************/
static void MODNAM_privateFunctionName( void );

/******************************************* PUBLIC FUNCTION IMPLEMENTATION *******************************************/

/**
 * @brief Short description about what the function does.
 *
 * @param [in] paramIn - Short parameter description
 * @param [out] pParamOut - Short parameter description
 * @retval uint8_t - Return value explanation
 * @note (Optional)
 *
 *******************************************************************************/
uint8_t MODNAM_publicFunctionName( uint32_t paramIn,
                                   uint8_t * pParamOut )
{
    /* some code that does something*/
}

/******************************************* PRIVATE FUNCTION IMPLEMENTATION ******************************************/

/**
 * @brief Short description about what the function does.
 *
 * @retval void - Return value explanation
 * @note (Optional)
 *
 *******************************************************************************/
static void MODNAM_privateFunctionName( void )
{
    /* some code that does something*/
}
/**************************************************** END OF FILE *****************************************************/
