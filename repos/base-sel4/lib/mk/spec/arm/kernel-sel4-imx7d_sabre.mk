PLAT  := imx7
CPU   := cortex-a7
override BOARD := imx7d_sabre

-include $(REP_DIR)/lib/mk/spec/arm/kernel-sel4.inc
