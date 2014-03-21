################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(COMMON)/Buzzer.c" \
"$(COMMON)/Debounce.c" \
"$(COMMON)/Event.c" \
"$(COMMON)/KeyDebounce.c" \
"$(COMMON)/Keys.c" \
"$(COMMON)/LED.c" \
"$(COMMON)/Timer.c" \
"$(COMMON)/Trigger.c" \
"$(COMMON)/application.c" \
"$(COMMON)/platform.c" \

C_SRCS += \
$(COMMON_ESCAPED)/Buzzer.c \
$(COMMON_ESCAPED)/Debounce.c \
$(COMMON_ESCAPED)/Event.c \
$(COMMON_ESCAPED)/KeyDebounce.c \
$(COMMON_ESCAPED)/Keys.c \
$(COMMON_ESCAPED)/LED.c \
$(COMMON_ESCAPED)/Timer.c \
$(COMMON_ESCAPED)/Trigger.c \
$(COMMON_ESCAPED)/application.c \
$(COMMON_ESCAPED)/platform.c \

OBJS += \
./Sources/Common/Buzzer.o \
./Sources/Common/Debounce.o \
./Sources/Common/Event.o \
./Sources/Common/KeyDebounce.o \
./Sources/Common/Keys.o \
./Sources/Common/LED.o \
./Sources/Common/Timer.o \
./Sources/Common/Trigger.o \
./Sources/Common/application.o \
./Sources/Common/platform.o \

C_DEPS += \
./Sources/Common/Buzzer.d \
./Sources/Common/Debounce.d \
./Sources/Common/Event.d \
./Sources/Common/KeyDebounce.d \
./Sources/Common/Keys.d \
./Sources/Common/LED.d \
./Sources/Common/Timer.d \
./Sources/Common/Trigger.d \
./Sources/Common/application.d \
./Sources/Common/platform.d \

OBJS_QUOTED += \
"./Sources/Common/Buzzer.o" \
"./Sources/Common/Debounce.o" \
"./Sources/Common/Event.o" \
"./Sources/Common/KeyDebounce.o" \
"./Sources/Common/Keys.o" \
"./Sources/Common/LED.o" \
"./Sources/Common/Timer.o" \
"./Sources/Common/Trigger.o" \
"./Sources/Common/application.o" \
"./Sources/Common/platform.o" \

C_DEPS_QUOTED += \
"./Sources/Common/Buzzer.d" \
"./Sources/Common/Debounce.d" \
"./Sources/Common/Event.d" \
"./Sources/Common/KeyDebounce.d" \
"./Sources/Common/Keys.d" \
"./Sources/Common/LED.d" \
"./Sources/Common/Timer.d" \
"./Sources/Common/Trigger.d" \
"./Sources/Common/application.d" \
"./Sources/Common/platform.d" \

OBJS_OS_FORMAT += \
./Sources/Common/Buzzer.o \
./Sources/Common/Debounce.o \
./Sources/Common/Event.o \
./Sources/Common/KeyDebounce.o \
./Sources/Common/Keys.o \
./Sources/Common/LED.o \
./Sources/Common/Timer.o \
./Sources/Common/Trigger.o \
./Sources/Common/application.o \
./Sources/Common/platform.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Common/Buzzer.o: $(COMMON_ESCAPED)/Buzzer.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Buzzer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Buzzer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/Debounce.o: $(COMMON_ESCAPED)/Debounce.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Debounce.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Debounce.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/Event.o: $(COMMON_ESCAPED)/Event.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Event.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Event.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/KeyDebounce.o: $(COMMON_ESCAPED)/KeyDebounce.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/KeyDebounce.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/KeyDebounce.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/Keys.o: $(COMMON_ESCAPED)/Keys.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Keys.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Keys.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/LED.o: $(COMMON_ESCAPED)/LED.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/LED.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/LED.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/Timer.o: $(COMMON_ESCAPED)/Timer.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Timer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Timer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/Trigger.o: $(COMMON_ESCAPED)/Trigger.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/Trigger.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/Trigger.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/application.o: $(COMMON_ESCAPED)/application.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/application.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/application.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/platform.o: $(COMMON_ESCAPED)/platform.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/platform.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/platform.o"
	@echo 'Finished building: $<'
	@echo ' '


