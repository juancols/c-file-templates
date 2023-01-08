# C File Templates

Welcome to the C File Templates repository! Here you will find templates for both `.c` and `.h` files that you can use as a starting point for your embedded C projects. The templates are designed to provide standard structure and a naming conventions, helping you to write clean and organized code.

## Type of Files

| File                       | Description                                                                                                                                      |
| -------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| `PREFIX_ModuleName.c`      | Implementation file for _ModuleName_. Never add `typedef` or `#define` macros in this file. Use the `PREFIX_ModuleName_Priv.h` for that instead. |
| `PREFIX_ModuleName.h`      | Public interface. It includes all the _ModuleName_ public declarations.                                                                          |
| `PREFIX_ModuleName_Priv.h` | Private header. It includes all the _ModuleName_ private declarations (e.g. configuration macros).                                               |

## Naming Conventions & Coding Style

### Prefixes

- The prefix for the module should consist of 2 to 4 capitalized letters that indicate its place within the software architecture.
- Here are some examples that you can use:

  | Prefix  | Description                | Example             |
  | ------- | -------------------------- | ------------------- |
  | **APP** | Application layer          | APP_SystemManager.c |
  | **SYS** | System and MCU setup       | SYS_Includes.h      |
  | **BSP** | Board Service Package      | BSP_UserButton.c    |
  | **DRV** | Driver                     | DRV_GPIO.c          |
  | **OS**  | Operating System           | OS_FreeRTOS.c       |
  | **HAL** | Hardware Abstraction Layer | HAL_STM32L4xx.h     |

### Functions

- Function names should include a prefix as well.
- This should be an uppercase abbreviated version of the module it belongs (2-4 characters).
- Notice that this prefix is different from the ones use to name the module files.

  Example:

  ```c
  /** A function inside the DRV_ADC.c module */
  void ADC_StartConversion(void);
  ```

### Macros

- Macros names should also include a prefix with its module name (2-4 characters) and be declared in uppercase.

  ```c
  #define ADC_CHANNELS_NUMBER  19
  ```

- Avoid using an `_` as prefix for macros since these are usually system-defined or reserved.
- The only exception to this rule is the _inclusion guard macros_ (used to avoid recursive inclusion of header files).

  ```c
  #ifndef ___PREFIX_MODULE_NAME_H
  #define ___PREFIX_MODULE_NAME_H

  /* some code */

  #endif
  ```

### Type definitions

- **Typedef** names should also include the module name prefix and the `_t` suffix.
- This applies for both `enum` and `struct`.

  ```c
  typedef struct
  {
     /* some code */
  } DRV_ADC_ChannelConfig_t;
  ```

### Variables

- Start variable names always with a letter and use camelcase to separate different words.
- Avoid using `_` to separate words at least if it's a suffix like an engineering unit (e.g. `_mV`).
- Begin the name of _local variables_ (intended as global just within a single file) with the letter `l`.

```c
uint16_t lBatteryVoltage_uV = 0;
```

- Begin the name of _pointer variables_ with `p`.
- Begin the same of _local pointer variables_ with `lp`.

```c
DRV_ADC_ChannelConfig_t * lpMotorAdcConfig = NULL;
```

### Comments

- Only use the `/** */` sequence for comment blocks. This will be later used by _Doxygen_ for self-documentation.
- Use `/* */` for "on-line" comments. Avoid breaking an "on-line" comment into multiple lines.

  ```c
  /* AVOID THIS */
  uint8_t lMotorCurrent_mA = 0; /* This variable stores the last ADC
  value of the motor current in mA. */

  /* DO THIS*/
  /* This variable stores the last ADC value of the motor current in mA. */
  uint8_t lMotorCurrent_mA = 0;
  ```

### Line width

- Don't write lines of code longer than **120 characters**.
- If you're using VS Code you can set this up with `"editor.wordWrapColumn": 120` in `settings.json`.
