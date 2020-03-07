################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MarkovChain.cpp \
../src/MarkovTweets.cpp \
../src/TextAnalyzer.cpp 

OBJS += \
./src/MarkovChain.o \
./src/MarkovTweets.o \
./src/TextAnalyzer.o 

CPP_DEPS += \
./src/MarkovChain.d \
./src/MarkovTweets.d \
./src/TextAnalyzer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


