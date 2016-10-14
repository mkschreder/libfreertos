#pragma once

#if !defined(CPU_CLOCK_FREQ)
	#error "Please define CPU_CLOCK_FREQ as your board cpu frequency!"
#endif

#if defined(FREERTOS_PORT_ARM_CM3)
	#include "port_arm_cm3.h"
#else 
	#error "You did not select a port using -DFREERTOS_PORT_XXXX define!"
#endif
