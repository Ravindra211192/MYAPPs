#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../840_Traps.c ../840_main.c ../840_start.c ../840_SPI.c ../840_Regler.c ../840_Konfig.c ../840_Int.c ../840_UART.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1472/840_Traps.o ${OBJECTDIR}/_ext/1472/840_main.o ${OBJECTDIR}/_ext/1472/840_start.o ${OBJECTDIR}/_ext/1472/840_SPI.o ${OBJECTDIR}/_ext/1472/840_Regler.o ${OBJECTDIR}/_ext/1472/840_Konfig.o ${OBJECTDIR}/_ext/1472/840_Int.o ${OBJECTDIR}/_ext/1472/840_UART.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1472/840_Traps.o.d ${OBJECTDIR}/_ext/1472/840_main.o.d ${OBJECTDIR}/_ext/1472/840_start.o.d ${OBJECTDIR}/_ext/1472/840_SPI.o.d ${OBJECTDIR}/_ext/1472/840_Regler.o.d ${OBJECTDIR}/_ext/1472/840_Konfig.o.d ${OBJECTDIR}/_ext/1472/840_Int.o.d ${OBJECTDIR}/_ext/1472/840_UART.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1472/840_Traps.o ${OBJECTDIR}/_ext/1472/840_main.o ${OBJECTDIR}/_ext/1472/840_start.o ${OBJECTDIR}/_ext/1472/840_SPI.o ${OBJECTDIR}/_ext/1472/840_Regler.o ${OBJECTDIR}/_ext/1472/840_Konfig.o ${OBJECTDIR}/_ext/1472/840_Int.o ${OBJECTDIR}/_ext/1472/840_UART.o

# Source Files
SOURCEFILES=../840_Traps.c ../840_main.c ../840_start.c ../840_SPI.c ../840_Regler.c ../840_Konfig.c ../840_Int.c ../840_UART.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=33EP32GS502
MP_LINKER_FILE_OPTION=,--script="..\p33EP32GS502.gld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1472/840_Traps.o: ../840_Traps.c  .generated_files/d8fa8000c9a88a064de392649c4cb797ed144a79.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Traps.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Traps.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Traps.c  -o ${OBJECTDIR}/_ext/1472/840_Traps.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Traps.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_main.o: ../840_main.c  .generated_files/776fb1792ce6ea8dea3d2285ad8e1ea5486c283c.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_main.c  -o ${OBJECTDIR}/_ext/1472/840_main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_main.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_start.o: ../840_start.c  .generated_files/bc06d0617c3c5125f9ad27afa7d9c0e728fc5e91.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_start.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_start.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_start.c  -o ${OBJECTDIR}/_ext/1472/840_start.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_start.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_SPI.o: ../840_SPI.c  .generated_files/116e0a3dc1c275fea18d9979071d3a04aa106963.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_SPI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_SPI.c  -o ${OBJECTDIR}/_ext/1472/840_SPI.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_SPI.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Regler.o: ../840_Regler.c  .generated_files/5bf159cd3b3363c9077e26f6d4ede14ab6e30eb3.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Regler.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Regler.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Regler.c  -o ${OBJECTDIR}/_ext/1472/840_Regler.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Regler.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Konfig.o: ../840_Konfig.c  .generated_files/fe11075d65f544628d57303afc8ec34dba9bc569.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Konfig.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Konfig.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Konfig.c  -o ${OBJECTDIR}/_ext/1472/840_Konfig.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Konfig.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Int.o: ../840_Int.c  .generated_files/e660b85ba9be3c033f13ab60ce50aa06329777e0.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Int.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Int.c  -o ${OBJECTDIR}/_ext/1472/840_Int.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Int.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_UART.o: ../840_UART.c  .generated_files/a733dba95b7452cd78025681fbdfab30890c23d9.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_UART.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_UART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_UART.c  -o ${OBJECTDIR}/_ext/1472/840_UART.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_UART.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
else
${OBJECTDIR}/_ext/1472/840_Traps.o: ../840_Traps.c  .generated_files/82bf8001a8ae73bfeecf9d099556be1447aa3bb1.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Traps.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Traps.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Traps.c  -o ${OBJECTDIR}/_ext/1472/840_Traps.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Traps.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_main.o: ../840_main.c  .generated_files/1e3fd32e9935f49e97288023698653e1121422dd.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_main.c  -o ${OBJECTDIR}/_ext/1472/840_main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_main.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_start.o: ../840_start.c  .generated_files/b0b066b431b267464c719b296cc648b434b10754.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_start.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_start.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_start.c  -o ${OBJECTDIR}/_ext/1472/840_start.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_start.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_SPI.o: ../840_SPI.c  .generated_files/b8498845e1608fa772d68fd679a17cd07fbef77b.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_SPI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_SPI.c  -o ${OBJECTDIR}/_ext/1472/840_SPI.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_SPI.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Regler.o: ../840_Regler.c  .generated_files/f8f666ae95d5c1d293ca350e8fab2e3b3311a694.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Regler.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Regler.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Regler.c  -o ${OBJECTDIR}/_ext/1472/840_Regler.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Regler.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Konfig.o: ../840_Konfig.c  .generated_files/aee2e7147e9e0b2899a56d79ecafa7b06a0433e6.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Konfig.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Konfig.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Konfig.c  -o ${OBJECTDIR}/_ext/1472/840_Konfig.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Konfig.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_Int.o: ../840_Int.c  .generated_files/2e9e487411a111a198f9864f9ab90ac8f5423bd2.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_Int.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_Int.c  -o ${OBJECTDIR}/_ext/1472/840_Int.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_Int.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
${OBJECTDIR}/_ext/1472/840_UART.o: ../840_UART.c  .generated_files/da5afb04cdaa867151786dfeda53c8a5555d8e01.flag .generated_files/3c2a6eefdc863f39463f8001cdbf89ed7a72667b.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1472" 
	@${RM} ${OBJECTDIR}/_ext/1472/840_UART.o.d 
	@${RM} ${OBJECTDIR}/_ext/1472/840_UART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../840_UART.c  -o ${OBJECTDIR}/_ext/1472/840_UART.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/1472/840_UART.o.d"      -mno-eds-warn  -g -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -O1 -I".." -I"." -msmart-io=1 -Wall -msfr-warn=off   
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemblePreproc
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../p33EP32GS502.gld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -D__DEBUG=__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)   -mreserve=data@0x1000:0x101B -mreserve=data@0x101C:0x101D -mreserve=data@0x101E:0x101F -mreserve=data@0x1020:0x1021 -mreserve=data@0x1022:0x1023 -mreserve=data@0x1024:0x1027 -mreserve=data@0x1028:0x104F   -Wl,--local-stack,,--defsym=__MPLAB_BUILD=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D__DEBUG=__DEBUG,--defsym=__MPLAB_DEBUGGER_PK3=1,$(MP_LINKER_FILE_OPTION),--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--library-path="..",--library-path=".",--no-force-link,--smart-io,-Map="${DISTDIR}/6900747_840b_EP.X.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml$(MP_EXTRA_LD_POST)  
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../p33EP32GS502.gld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -omf=elf -DXPRJ_default=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -Wl,--local-stack,,--defsym=__MPLAB_BUILD=1,$(MP_LINKER_FILE_OPTION),--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--library-path="..",--library-path=".",--no-force-link,--smart-io,-Map="${DISTDIR}/6900747_840b_EP.X.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml$(MP_EXTRA_LD_POST)  
	${MP_CC_DIR}\\xc16-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/840test.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -a  -omf=elf   
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
