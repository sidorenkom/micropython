# MCU settings
MCU_SERIES = f4
CMSIS_MCU = STM32F469xx
MICROPY_FLOAT_IMPL = double
AF_FILE = boards/stm32f469_af.csv

# When not using Mboot the ISR text goes first, then the rest, no file system
LD_FILES = boards/STM32F469DISC/stm32f469disc.ld boards/common_ifs.ld
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08008000

# MicroPython settings
MICROPY_PY_USSL = 1
MICROPY_SSL_MBEDTLS = 1
