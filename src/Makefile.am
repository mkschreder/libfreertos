@CODE_COVERAGE_RULES@
includedir=$(prefix)/include/freertos/
lib_LTLIBRARIES=libfreertos_arm_cm3.la
include_HEADERS=croutine.h event_groups.h FreeRTOS.h FreeRTOSConfig.h list.h mpu_prototypes.h mpu_wrappers.h portable.h portmacro.h projdefs.h semphr.h queue.h task.h timers.h deprecated_definitions.h port_arm_cm3.h
libfreertos_arm_cm3_la_SOURCES=croutine.c event_groups.c list.c queue.c tasks.c timers.c portable.c heap_2.c
libfreertos_arm_cm3_la_CFLAGS=$(CODE_COVERAGE_CFLAGS) -DFREERTOS_PORT_ARM_CM3 -std=gnu99 -Wall -Werror
