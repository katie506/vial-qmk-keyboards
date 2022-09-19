
# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfuS
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		= yes
MOUSEKEY_ENABLE 	= no
VIAL_INSECURE = yes