@CODE_COVERAGE_RULES@
includedir=$(prefix)/include/freertos/
lib_LTLIBRARIES=libfreertos.la
include_HEADERS=croutine.h event_groups.h FreeRTOS.h list.h mpu_prototypes.h mpu_wrappers.h portable.h projdefs.h semphr.h queue.h task.h timers.h 
libfreertos_la_SOURCES=croutine.c event_groups.c list.c queue.c tasks.c timers.c 
libfreertos_la_CFLAGS=$(CODE_COVERAGE_CFLAGS) -std=gnu99 -Wall -Werror
