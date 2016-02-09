	/**
  **************************************************************************************
  * @file    c-fil_template.c
  * @author  Sivert Sliper
  * @version V1.0
  * @date    9-February-2016
  * @brief   *Explain the function/intent of this file here.
  **************************************************************************************
  */

/* -.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.
 * Please keep lines of comments and code less than 90 characters long.
 * -.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.,-.
 */

/* Include------------------------------------------------------------------------------*/

  /* Include .h files from other modules here.*/
#include "h-fil_template.h" // h-file belonging to this c-file
#include "stm32f30x.h" // h-file specific to the microcontroller. Allways include this.
#include "stm32f30x_can.h"  // h-file that declares functions from another c-file.

/* Global variables --------------------------------------------------------------------*/
/* If needed, include header file for extern declarations of global variables here. 
 * Try to avoid global variables. Using getters and setters is usually a better 
 * alternative.
 */
#include "extern_decl_global_vars.h"


/* Private Function Prototypes ----------------------------------------------------------*/

  /* Put prototypes for static functions here.
   * Private/static functions can only be called from within this c-file. Use static
   * for all functions that does not need to be used by an outside program.
   */
   static uint8_t private_function(uint8_t parameter);

/* Private variables -------------------------------------------------------------------*/
  /* Put static/private variables here. These variables are only accessible from this 
   * .c-file.
   */
   static uint8_t private_variable = 0; // Note: remember to initialize variables. (=0;)

/* Function definitions ----------------------------------------------------------------*/

/* Define all functions here. Use the static keyword for private functions and the 
 * extern keyword for public functions. Document the function by writing what it does
 * over the function definition.

/**
 * @brief  Explain what this function does here.
 * @param  uint8_t parameter: bla bla bla... can be a value of: ...
 * @retval Returns the number of... 
 */
 static uint8_t private_function(uint8_t parameter){
 	uint8_t retval = 1 + parameter;
 	// Do something.
 	return retval;
 }

/**
 * @brief  Explain what this function does here.
 * @param  None
 * @retval None
 */
extern void global_function(void){
	// Do something.
}
