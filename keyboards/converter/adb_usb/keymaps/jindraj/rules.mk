# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE  = yes   # Mouse keys
CONSOLE_ENABLE   = yes   # Console for debug
COMMAND_ENABLE   = yes   # Commands for debug and configuration
SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend
NKRO_ENABLE      = no   # USB Nkey Rollover - not yet supported in LUFA
EXTRAKEY_ENABLE  = yes
USB_HID_ENABLE   = yes
BACKLIGHT_ENABLE = no
#BLUETOOTH        = AdafruitBLE  # For Adafruit Feather 32U4 BLE support, uncomment this line
CUSTOM_MATRIX    = yes

SRC = matrix.c adb.c led.c

LTO_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
