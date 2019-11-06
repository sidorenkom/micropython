// This board is configured to communicate over USB port, not ST-Link
#define MICROPY_HW_BOARD_NAME       "F469DISC"
#define MICROPY_HW_MCU_NAME         "STM32F469"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (1)

#define MODULE_SECP256K1_ENABLED    (1)
#define MODULE_HASHLIB_ENABLED      (1)
#define MODULE_DISPLAY_ENABLED      (1)
#define MODULE_QRCODE_ENABLED       (1)
// #define MICROPY_PY_THREAD           (1)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (8)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_6

// UART config
#define MICROPY_HW_UART3_NAME       "YB"
#define MICROPY_HW_UART3_TX         (pin_B10)
#define MICROPY_HW_UART3_RX         (pin_B11)
#define MICROPY_HW_UART6_NAME       "YA"
#define MICROPY_HW_UART6_TX         (pin_G14)
#define MICROPY_HW_UART6_RX         (pin_G9)

// I2C busses
#define MICROPY_HW_I2C1_SCL         (pin_B8)
#define MICROPY_HW_I2C1_SDA         (pin_B9)

// SPI
#define MICROPY_HW_SPI2_NSS         (pin_B9)
#define MICROPY_HW_SPI2_SCK         (pin_D3)
#define MICROPY_HW_SPI2_MISO        (pin_B14)
#define MICROPY_HW_SPI2_MOSI        (pin_B15)

// CAN busses
#define MICROPY_HW_CAN1_TX          (pin_B9)
#define MICROPY_HW_CAN1_RX          (pin_B8)

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_A0)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// LEDs
#define MICROPY_HW_LED1             (pin_G6) // green
#define MICROPY_HW_LED2             (pin_D4) // orange 
#define MICROPY_HW_LED3             (pin_D5) // red
#define MICROPY_HW_LED4             (pin_K3) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))

// SD card detect switch
#define MICROPY_HW_SDMMC_CK                (pin_C12)
#define MICROPY_HW_SDMMC_CMD               (pin_D2)
#define MICROPY_HW_SDMMC_D0                (pin_C8)
#define MICROPY_HW_SDMMC_D1                (pin_C9)
#define MICROPY_HW_SDMMC_D2                (pin_C10)
#define MICROPY_HW_SDMMC_D3                (pin_C11)
#define MICROPY_HW_SDCARD_DETECT_PIN       (pin_G2)
#define MICROPY_HW_SDCARD_DETECT_PULL      (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_DETECT_PRESENT   (GPIO_PIN_RESET)

// USB config
#define MICROPY_HW_USB_FS (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// 512MBit external QSPI flash, to be memory mapped
// #define MICROPY_HW_QSPIFLASH_SIZE_BITS_LOG2 (29) // <- check
// #define MICROPY_HW_QSPIFLASH_CS     (pin_B6)
// #define MICROPY_HW_QSPIFLASH_SCK    (pin_F10)
// #define MICROPY_HW_QSPIFLASH_IO0    (pin_D11)
// #define MICROPY_HW_QSPIFLASH_IO1    (pin_D12)
// #define MICROPY_HW_QSPIFLASH_IO2    (pin_F7)
// #define MICROPY_HW_QSPIFLASH_IO3    (pin_D13)
