
// NOTE: we are including C files here, which is not a good practice in general, but in this case it is ok. 

#if defined(FREERTOS_PORT_ARM_CM3)
	#include "port_arm_cm3.c"
#else 
	#error "No port selected!"
#endif
