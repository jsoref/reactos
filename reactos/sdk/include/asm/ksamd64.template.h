
RAW("include kxamd64.inc"),

HEADER("CPU type"),
CONSTANT(CPU_AMD),
CONSTANT(CPU_INTEL),
CONSTANT(CPU_VIA),

HEADER("CR0 flags"),
CONSTANT(CR0_PE),
CONSTANT(CR0_MP),
CONSTANT(CR0_EM),
CONSTANT(CR0_TS),
CONSTANT(CR0_ET),
CONSTANT(CR0_NE),
CONSTANT(CR0_WP),
CONSTANT(CR0_AM),
CONSTANT(CR0_NW),
CONSTANT(CR0_CD),
CONSTANT(CR0_PG),

HEADER("CR4 flags"),
CONSTANT(CR4_VME),
CONSTANT(CR4_PVI),
CONSTANT(CR4_TSD),
CONSTANT(CR4_DE),
CONSTANT(CR4_PSE),
CONSTANT(CR4_PAE),
CONSTANT(CR4_MCE),
CONSTANT(CR4_PGE),
CONSTANT(CR4_FXSR),
CONSTANT(CR4_XMMEXCPT),
CONSTANT(CR4_CHANNELS), // not in win 10
CONSTANT(CR4_XSAVE),

CONSTANT(DEBUG_ACTIVE_DR7),
CONSTANT(DEBUG_ACTIVE_INSTRUMENTED),
CONSTANT(DEBUG_ACTIVE_DBG_INSTRUMENTED),
CONSTANT(DEBUG_ACTIVE_MINIMAL_THREAD),

CONSTANT(DEBUG_ACTIVE_PRIMARY_THREAD),
CONSTANT(DEBUG_ACTIVE_PRIMARY_THREAD_BIT),
CONSTANT(DEBUG_ACTIVE_PRIMARY_THREAD_LOCK_BIT),
CONSTANT(DEBUG_ACTIVE_SCHEDULED_THREAD),
CONSTANT(DEBUG_ACTIVE_SCHEDULED_THREAD_BIT),
CONSTANT(DEBUG_ACTIVE_SCHEDULED_THREAD_LOCK),
CONSTANT(DEBUG_ACTIVE_SCHEDULED_THREAD_LOCK_BIT),

HEADER("DR7 debug control masks"),
CONSTANT(DR7_LEGAL),
CONSTANT(DR7_ACTIVE),
CONSTANT(DR7_TRACE_BRANCH),
CONSTANT(DR7_LAST_BRANCH),

HEADER("EFLAGS"),
CONSTANT(EFLAGS_TF_MASK),
CONSTANT(EFLAGS_TF_SHIFT),
CONSTANT(EFLAGS_IF_MASK),
CONSTANT(EFLAGS_IF_SHIFT),
CONSTANT(EFLAGS_ID_MASK),
CONSTANTX(EFLAGS_IF_BIT, EFLAGS_IF_MASK),

HEADER("Exception codes"),
CONSTANT(EXCEPTION_DIVIDED_BY_ZERO),
CONSTANT(EXCEPTION_DEBUG),
CONSTANT(EXCEPTION_NMI),
CONSTANT(EXCEPTION_INT3),
CONSTANT(EXCEPTION_BOUND_CHECK),
CONSTANT(EXCEPTION_INVALID_OPCODE),
CONSTANT(EXCEPTION_NPX_NOT_AVAILABLE),
CONSTANT(EXCEPTION_DOUBLE_FAULT),
CONSTANT(EXCEPTION_NPX_OVERRUN),
CONSTANT(EXCEPTION_INVALID_TSS),
CONSTANT(EXCEPTION_SEGMENT_NOT_PRESENT),
CONSTANT(EXCEPTION_STACK_FAULT),
CONSTANT(EXCEPTION_GP_FAULT),
CONSTANT(EXCEPTION_RESERVED_TRAP),
CONSTANT(EXCEPTION_NPX_ERROR),
CONSTANT(EXCEPTION_ALIGNMENT_CHECK),

HEADER("Legacy Floating Status Bit Masks"),
CONSTANT(FSW_INVALID_OPERATION),
CONSTANT(FSW_DENORMAL),
CONSTANT(FSW_ZERO_DIVIDE),
CONSTANT(FSW_OVERFLOW),
CONSTANT(FSW_UNDERFLOW),
CONSTANT(FSW_PRECISION),
CONSTANT(FSW_STACK_FAULT),
CONSTANT(FSW_ERROR_SUMMARY),
CONSTANT(FSW_CONDITION_CODE_0),
CONSTANT(FSW_CONDITION_CODE_1),
CONSTANT(FSW_CONDITION_CODE_2),
CONSTANT(FSW_CONDITION_CODE_3),
CONSTANT(FSW_ERROR_MASK),

HEADER("Hypervisor Enlightenment Definitions"),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_ADDRESS_SWITCH),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_LOCAL_FLUSH),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_REMOTE_FLUSH),
//CONSTANT(HV_X64_MSR_APIC_EOI), // not win 10
//CONSTANT(HV_APIC_ENLIGHTENED),
//CONSTANT(HV_KE_USE_HYPERCALL_FOR_LONG_SPIN_WAIT),
//CONSTANT(HV_DEPRECATE_AUTO_EOI), // win 10
//CONSTANT(HV_X64_MSR_EOI), // win 10
//CONSTANT(HV_VIRTUAL_APIC_NO_EOI_REQUIRED), // win 10
//CONSTANT(HV_VIRTUAL_APIC_NO_EOI_REQUIRED_V), // not win 10
//CONSTANT(HvApicFlags),

CONSTANT(KEXCEPTION_ACTIVE_INTERRUPT_FRAME),
CONSTANT(KEXCEPTION_ACTIVE_EXCEPTION_FRAME),
CONSTANT(KEXCEPTION_ACTIVE_SERVICE_FRAME),

HEADER("KeFeatureBits flags"),
CONSTANT(KF_RDTSC),
CONSTANT(KF_CR4),
CONSTANT(KF_GLOBAL_PAGE),
CONSTANT(KF_LARGE_PAGE),
CONSTANT(KF_CMPXCHG8B),
CONSTANT(KF_FAST_SYSCALL),
CONSTANT(KF_BRANCH), // win 10
CONSTANT(KF_XSTATE), // win 10
CONSTANT(KF_XSAVEOPT_BIT), // win 10
CONSTANT(KF_XSTATE_BIT), // win 10
CONSTANT(KF_RDWRFSGSBASE_BIT), // win 10

HEADER("KDGT selectors"),
CONSTANT(KGDT64_NULL),
CONSTANT(KGDT64_R0_CODE),
CONSTANT(KGDT64_R0_DATA),
CONSTANT(KGDT64_R3_CMCODE),
CONSTANT(KGDT64_R3_DATA),
CONSTANT(KGDT64_R3_CODE),
CONSTANT(KGDT64_SYS_TSS),
CONSTANT(KGDT64_R3_CMTEB),
CONSTANT(KGDT64_R0_LDT), // win 10

//HEADER("MCE Recovery Context Flags Definitions"),
//CONSTANT(KMRC_ALTERNATE_CONTEXT),
//CONSTANT(KMRC_WORK_ITEM),
//CONSTANT(KMRC_OFFLINE_PAGE),
//CONSTANT(KMRC_TERMINATE_PROCESS),

HEADER("Machine type definitions"),
CONSTANT(MACHINE_TYPE_ISA),
CONSTANT(MACHINE_TYPE_EISA),
CONSTANT(MACHINE_TYPE_MCA),

HEADER("Machine Specific Register Numbers"),
CONSTANT(MSR_EFER),
CONSTANT(MSR_STAR),
CONSTANT(MSR_LSTAR),
CONSTANT(MSR_CSTAR),
CONSTANT(MSR_SYSCALL_MASK),
CONSTANT(MSR_FS_BASE),
CONSTANT(MSR_GS_BASE),
CONSTANT(MSR_GS_SWAP),
CONSTANT(MSR_MCG_STATUS),
CONSTANT(MSR_AMD_ACCESS),
CONSTANT(MSR_IA32_MISC_ENABLE),

HEADER("Flags for MSR_EFER"),
CONSTANT(MSR_LMA),
CONSTANT(MSR_LME),
CONSTANT(MSR_SCE),
CONSTANT(MSR_NXE),
CONSTANT(MSR_PAT),
CONSTANT(MSR_DEBUG_CTL),
CONSTANT(MSR_LAST_BRANCH_FROM), // not win 10
CONSTANT(MSR_LAST_BRANCH_TO), // not win 10
CONSTANT(MSR_LAST_EXCEPTION_FROM), // not win 10
CONSTANT(MSR_LAST_EXCEPTION_TO), // not win 10

HEADER("Flags for MSR_DEBUG_CTL"),
//CONSTANT(MSR_DEBUG_CTL_LBR),
//CONSTANT(MSR_DEBUG_CTL_BTF),

HEADER("Flags for MSR_IA32_MISC_ENABLE"),
//CONSTANT(MSR_XD_ENABLE_MASK),

HEADER("Argument Home Address"),
CONSTANT(P1Home),
CONSTANT(P2Home),
CONSTANT(P3Home),
CONSTANT(P4Home),

#if (NTDDI_VERSION >= NTDDI_WIN7)
HEADER("RTL_UMS_SCHEDULER_REASON Enum Definitions"),
CONSTANT(UmsSchedulerStartup),
CONSTANT(UmsSchedulerThreadBlocked),
CONSTANT(UmsSchedulerThreadYield),

HEADER("User mode context flag definitions"),
CONSTANT(UMSCTX_SCHEDULED_THREAD_BIT),
CONSTANT(UMSCTX_SUSPENDED_BIT),
CONSTANT(UMSCTX_VOLATILE_CONTEXT_BIT),
CONSTANT(UMSCTX_TERMINATED_BIT),
CONSTANT(UMSCTX_DEBUG_ACTIVE_BIT),
CONSTANT(UMSCTX_DENY_RUNNING_ON_SELF_THREAD_BIT),
CONSTANT(UMSCTX_SCHEDULED_THREAD_MASK),
CONSTANT(UMSCTX_SUSPENDED_MASK),
CONSTANT(UMSCTX_VOLATILE_CONTEXT_MASK),
CONSTANT(UMSCTX_TERMINATED_MASK),
CONSTANT(UMSCTX_DEBUG_ACTIVE_MASK),
CONSTANT(UMSCTX_DENY_RUNNING_ON_SELF_THREAD_MASK),

#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

CONSTANT(XSTATE_MASK_LEGACY_FLOATING_POINT),
CONSTANT(XSTATE_MASK_LEGACY_SSE),
CONSTANT(XSTATE_MASK_LEGACY),
CONSTANT(XSTATE_MASK_GSSE),

HEADER("MXCSR Floating Control/Status Bit Masks"),
CONSTANT(XSW_INVALID_OPERATION),
CONSTANT(XSW_DENORMAL),
CONSTANT(XSW_ZERO_DIVIDE),
CONSTANT(XSW_OVERFLOW),
CONSTANT(XSW_UNDERFLOW),
CONSTANT(XSW_PRECISION),
CONSTANT(XSW_ERROR_MASK),
CONSTANT(XSW_ERROR_SHIFT),
CONSTANT(XCW_INVALID_OPERATION),
CONSTANT(XCW_DENORMAL),
CONSTANT(XCW_ZERO_DIVIDE),
CONSTANT(XCW_OVERFLOW),
CONSTANT(XCW_UNDERFLOW),
CONSTANT(XCW_PRECISION),
CONSTANT(XCW_ROUND_CONTROL),
CONSTANT(XCW_FLUSH_ZERO),
CONSTANT(INITIAL_FPCSR),
CONSTANT(INITIAL_MXCSR),

HEADER("Misc constants"),
CONSTANT(CONTEXT_XSTATE),
//CONSTANT(CONTEXT_EX_LENGTH),
CONSTANT(EVENT_INCREMENT),
//CONSTANT(KI_SPINLOCK_ORDER_PRCB_LOCK),
//CONSTANT(KTHREAD_UMS_DIRECTED_SWITCH_ENABLE_BIT),
//CONSTANT(KTHREAD_UMS_PERFORMING_SYSCALL_BIT),
//CONSTANT(KUMS_UCH_VOLATILE_BIT),
//CONSTANT(KUMS_UCH_VOLATILE_MASK),
CONSTANT(PF_COMPARE_EXCHANGE128),
//CONSTANT(PF_RDWRFSGSBASE_AVAILABLE),
//CONSTANT(UMS_TLS_THREAD_CONTEXT),
//CONSTANT(XHF_NOEXECUTE),

/// Field offsets

HEADER("CPU_INFO offsets"),
OFFSET(CpuEax, CPU_INFO, Eax),
OFFSET(CpuEbx, CPU_INFO, Ebx),
OFFSET(CpuEcx, CPU_INFO, Ecx),
OFFSET(CpuEdx, CPU_INFO, Edx),

HEADER("UCALLOUT_FRAME offsets (yes, Cu/Ck is ...)"),
OFFSET(CkBuffer, UCALLOUT_FRAME, Buffer),
OFFSET(CkLength, UCALLOUT_FRAME, Length),
OFFSET(CkApiNumber, UCALLOUT_FRAME, ApiNumber),
OFFSET(CkRsp, UCALLOUT_FRAME, MachineFrame.Rsp),
OFFSET(CkRip, UCALLOUT_FRAME, MachineFrame.Rip),
SIZE(CalloutFrameLength, UCALLOUT_FRAME),

HEADER("KCALLOUT_FRAME offsets (yes, Cu/Ck is ...)"),
OFFSET(CuTrapFrame, KCALLOUT_FRAME, TrapFrame),
OFFSET(CuOutputBuffer, KCALLOUT_FRAME, OutputBuffer),
OFFSET(CuOutputLength, KCALLOUT_FRAME, OutputLength),

HEADER("CONTEXT offsets"),
OFFSET(CxP1Home, CONTEXT, P1Home),
OFFSET(CxP2Home, CONTEXT, P2Home),
OFFSET(CxP3Home, CONTEXT, P3Home),
OFFSET(CxP4Home, CONTEXT, P4Home),
OFFSET(CxP5Home, CONTEXT, P5Home),
OFFSET(CxP6Home, CONTEXT, P6Home),
OFFSET(CxContextFlags, CONTEXT, ContextFlags),
OFFSET(CxMxCsr, CONTEXT, MxCsr),
OFFSET(CxSegCs, CONTEXT, SegCs),
OFFSET(CxSegDs, CONTEXT, SegDs),
OFFSET(CxSegEs, CONTEXT, SegEs),
OFFSET(CxSegFs, CONTEXT, SegFs),
OFFSET(CxSegGs, CONTEXT, SegGs),
OFFSET(CxSegSs, CONTEXT, SegSs),
OFFSET(CxEFlags, CONTEXT, EFlags),
OFFSET(CxDr0, CONTEXT, Dr0),
OFFSET(CxDr1, CONTEXT, Dr1),
OFFSET(CxDr2, CONTEXT, Dr2),
OFFSET(CxDr3, CONTEXT, Dr3),
OFFSET(CxDr6, CONTEXT, Dr6),
OFFSET(CxDr7, CONTEXT, Dr7),
OFFSET(CxRax, CONTEXT, Rax),
OFFSET(CxRcx, CONTEXT, Rcx),
OFFSET(CxRdx, CONTEXT, Rdx),
OFFSET(CxRbx, CONTEXT, Rbx),
OFFSET(CxRsp, CONTEXT, Rsp),
OFFSET(CxRbp, CONTEXT, Rbp),
OFFSET(CxRsi, CONTEXT, Rsi),
OFFSET(CxRdi, CONTEXT, Rdi),
OFFSET(CxR8, CONTEXT, R8),
OFFSET(CxR9, CONTEXT, R9),
OFFSET(CxR10, CONTEXT, R10),
OFFSET(CxR11, CONTEXT, R11),
OFFSET(CxR12, CONTEXT, R12),
OFFSET(CxR13, CONTEXT, R13),
OFFSET(CxR14, CONTEXT, R14),
OFFSET(CxR15, CONTEXT, R15),
OFFSET(CxRip, CONTEXT, Rip),
OFFSET(CxFltSave, CONTEXT, FltSave),
OFFSET(CxXmm0, CONTEXT, Xmm0),
OFFSET(CxXmm1, CONTEXT, Xmm1),
OFFSET(CxXmm2, CONTEXT, Xmm2),
OFFSET(CxXmm3, CONTEXT, Xmm3),
OFFSET(CxXmm4, CONTEXT, Xmm4),
OFFSET(CxXmm5, CONTEXT, Xmm5),
OFFSET(CxXmm6, CONTEXT, Xmm6),
OFFSET(CxXmm7, CONTEXT, Xmm7),
OFFSET(CxXmm8, CONTEXT, Xmm8),
OFFSET(CxXmm9, CONTEXT, Xmm9),
OFFSET(CxXmm10, CONTEXT, Xmm10),
OFFSET(CxXmm11, CONTEXT, Xmm11),
OFFSET(CxXmm12, CONTEXT, Xmm12),
OFFSET(CxXmm13, CONTEXT, Xmm13),
OFFSET(CxXmm14, CONTEXT, Xmm14),
OFFSET(CxXmm15, CONTEXT, Xmm15),
OFFSET(CxDebugControl, CONTEXT, DebugControl),
OFFSET(CxLastBranchToRip, CONTEXT, LastBranchToRip),
OFFSET(CxLastBranchFromRip, CONTEXT, LastBranchFromRip),
OFFSET(CxLastExceptionToRip, CONTEXT, LastExceptionToRip),
OFFSET(CxLastExceptionFromRip, CONTEXT, LastExceptionFromRip),
OFFSET(CxVectorControl, CONTEXT, VectorControl),
OFFSET(CxVectorRegister, CONTEXT, VectorRegister),
SIZE(CONTEXT_FRAME_LENGTH, CONTEXT),

HEADER("DISPATCHER_CONTEXT"),
OFFSET(DcControlPc, DISPATCHER_CONTEXT, ControlPc),
OFFSET(DcImageBase, DISPATCHER_CONTEXT, ImageBase),
OFFSET(DcFunctionEntry, DISPATCHER_CONTEXT, FunctionEntry),
OFFSET(DcEstablisherFrame, DISPATCHER_CONTEXT, EstablisherFrame),
OFFSET(DcTargetIp, DISPATCHER_CONTEXT, TargetIp),
OFFSET(DcContextRecord, DISPATCHER_CONTEXT, ContextRecord),
OFFSET(DcLanguageHandler, DISPATCHER_CONTEXT, LanguageHandler),
OFFSET(DcHandlerData, DISPATCHER_CONTEXT, HandlerData),
OFFSET(DcHistoryTable, DISPATCHER_CONTEXT, HistoryTable),
OFFSET(DcScopeIndex, DISPATCHER_CONTEXT, ScopeIndex),

// DPC Stack Frame Definitions
//OFFSET(DpRsp, ????, Rsp), // 0x0040
//OFFSET(DpRip, ????, Rip), // 0x0028

HEADER("KEXCEPTION_FRAME offsets"),
OFFSET(ExP1Home, KEXCEPTION_FRAME, P1Home),
OFFSET(ExP2Home, KEXCEPTION_FRAME, P2Home),
OFFSET(ExP3Home, KEXCEPTION_FRAME, P3Home),
OFFSET(ExP4Home, KEXCEPTION_FRAME, P4Home),
OFFSET(ExP5, KEXCEPTION_FRAME, P5),
OFFSET(ExXmm6, KEXCEPTION_FRAME, Xmm6),
OFFSET(ExXmm7, KEXCEPTION_FRAME, Xmm7),
OFFSET(ExXmm8, KEXCEPTION_FRAME, Xmm8),
OFFSET(ExXmm9, KEXCEPTION_FRAME, Xmm9),
OFFSET(ExXmm10, KEXCEPTION_FRAME, Xmm10),
OFFSET(ExXmm11, KEXCEPTION_FRAME, Xmm11),
OFFSET(ExXmm12, KEXCEPTION_FRAME, Xmm12),
OFFSET(ExXmm13, KEXCEPTION_FRAME, Xmm13),
OFFSET(ExXmm14, KEXCEPTION_FRAME, Xmm14),
OFFSET(ExXmm15, KEXCEPTION_FRAME, Xmm15),
OFFSET(ExMxCsr, KEXCEPTION_FRAME, MxCsr),
OFFSET(ExRbp, KEXCEPTION_FRAME, Rbp),
OFFSET(ExRbx, KEXCEPTION_FRAME, Rbx),
OFFSET(ExRdi, KEXCEPTION_FRAME, Rdi),
OFFSET(ExRsi, KEXCEPTION_FRAME, Rsi),
OFFSET(ExR12, KEXCEPTION_FRAME, R12),
OFFSET(ExR13, KEXCEPTION_FRAME, R13),
OFFSET(ExR14, KEXCEPTION_FRAME, R14),
OFFSET(ExR15, KEXCEPTION_FRAME, R15),
OFFSET(ExReturn, KEXCEPTION_FRAME, Return),
SIZE(KEXCEPTION_FRAME_LENGTH, KEXCEPTION_FRAME),

HEADER("JUMP_BUFFER"),
OFFSET(JbFrame, _JUMP_BUFFER, Frame),
OFFSET(JbRbx, _JUMP_BUFFER, Rbx),
OFFSET(JbRsp, _JUMP_BUFFER, Rsp),
OFFSET(JbRbp, _JUMP_BUFFER, Rbp),
OFFSET(JbRsi, _JUMP_BUFFER, Rsi),
OFFSET(JbRdi, _JUMP_BUFFER, Rdi),
OFFSET(JbR12, _JUMP_BUFFER, R12),
OFFSET(JbR13, _JUMP_BUFFER, R13),
OFFSET(JbR14, _JUMP_BUFFER, R14),
OFFSET(JbR15, _JUMP_BUFFER, R15),
OFFSET(JbRip, _JUMP_BUFFER, Rip),
//OFFSET(JbMxCsr, _JUMP_BUFFER, MxCsr),
//OFFSET(JbFpCsr, _JUMP_BUFFER, FpCsr),
//OFFSET(JbSpare, _JUMP_BUFFER, Spare),
OFFSET(JbXmm6, _JUMP_BUFFER, Xmm6),
OFFSET(JbXmm7, _JUMP_BUFFER, Xmm7),
OFFSET(JbXmm8, _JUMP_BUFFER, Xmm8),
OFFSET(JbXmm9, _JUMP_BUFFER, Xmm9),
OFFSET(JbXmm10, _JUMP_BUFFER, Xmm10),
OFFSET(JbXmm11, _JUMP_BUFFER, Xmm11),
OFFSET(JbXmm12, _JUMP_BUFFER, Xmm12),
OFFSET(JbXmm13, _JUMP_BUFFER, Xmm13),
OFFSET(JbXmm14, _JUMP_BUFFER, Xmm14),
OFFSET(JbXmm15, _JUMP_BUFFER, Xmm15),

HEADER("XSAVE_FORMAT offsets"),
OFFSET(LfControlWord, XSAVE_FORMAT, ControlWord),
OFFSET(LfStatusWord, XSAVE_FORMAT, StatusWord),
OFFSET(LfTagWord, XSAVE_FORMAT, TagWord),
OFFSET(LfErrorOpcode, XSAVE_FORMAT, ErrorOpcode),
OFFSET(LfErrorOffset, XSAVE_FORMAT, ErrorOffset),
OFFSET(LfErrorSelector, XSAVE_FORMAT, ErrorSelector),
OFFSET(LfDataOffset, XSAVE_FORMAT, DataOffset),
OFFSET(LfDataSelector, XSAVE_FORMAT, DataSelector),
OFFSET(LfMxCsr, XSAVE_FORMAT, MxCsr),
OFFSET(LfMxCsr_Mask, XSAVE_FORMAT, MxCsr_Mask),
OFFSET(LfFloatRegisters, XSAVE_FORMAT, FloatRegisters),
OFFSET(LfXmmRegisters, XSAVE_FORMAT, XmmRegisters),

HEADER("KGDTENTRY64 offsets"),
OFFSET(KgdtBaseLow, KGDTENTRY64, BaseLow),
OFFSET(KgdtBaseMiddle, KGDTENTRY64, Bytes.BaseMiddle),
OFFSET(KgdtBaseHigh, KGDTENTRY64, Bytes.BaseHigh),
OFFSET(KgdtBaseUpper, KGDTENTRY64, BaseUpper),
OFFSET(KgdtLimitHigh, KGDTENTRY64, Bytes.Flags2),
OFFSET(KgdtLimitLow, KGDTENTRY64, LimitLow),
//CONSTANT(KGDT_LIMIT_ENCODE_MASK),

HEADER("MACHINE_FRAME offsets"),
OFFSET(MfRip, MACHINE_FRAME, Rip),
OFFSET(MfSegCs, MACHINE_FRAME, SegCs),
OFFSET(MfEFlags, MACHINE_FRAME, EFlags),
OFFSET(MfRsp, MACHINE_FRAME, Rsp),
OFFSET(MfSegSs, MACHINE_FRAME, SegSs),
SIZE(MachineFrameLength, MACHINE_FRAME),

// MCE Recovery Context Offset Definitions
//OFFSET(MrcFlags, ????, Flags),
//OFFSET(MrcPhysicalAddress, ????, PhysicalAddress),
//SIZE(MceRecoveryContextLength, ????),

HEADER("KPRCB offsets"),
OFFSET(PbMxCsr, KPRCB, MxCsr),
OFFSET(PbNumber, KPRCB, Number),
OFFSET(PbInterruptRequest, KPRCB, InterruptRequest),
OFFSET(PbIdleHalt, KPRCB, IdleHalt),
OFFSET(PbCurrentThread, KPRCB, CurrentThread),
OFFSET(PbNextThread, KPRCB, NextThread),
OFFSET(PbIdleThread, KPRCB, IdleThread),
OFFSET(PbNestingLevel, KPRCB, NestingLevel),
OFFSET(PbRspBase, KPRCB, RspBase),
OFFSET(PbPrcbLock, KPRCB, PrcbLock),
#if (NTDDI_VERSION >= NTDDI_VISTA)
OFFSET(PbPriorityState, KPRCB, PriorityState),
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
OFFSET(PbSetMember, KPRCB, SetMember),
OFFSET(PbProcessorState, KPRCB, ProcessorState),
OFFSET(PbCpuType, KPRCB, CpuType),
OFFSET(PbCpuID, KPRCB, CpuID),
OFFSET(PbCpuStep, KPRCB, CpuStep),
OFFSET(PbHalReserved, KPRCB, HalReserved),
OFFSET(PbMinorVersion, KPRCB, MinorVersion),
OFFSET(PbMajorVersion, KPRCB, MajorVersion),
OFFSET(PbBuildType, KPRCB, BuildType),
OFFSET(PbCpuVendor, KPRCB, CpuVendor),
//OFFSET(PbCoresPerPhysicalProcessor, KPRCB, CoresPerPhysicalProcessor),
//OFFSET(PbLogicalProcessorsPerCore, KPRCB, LogicalProcessorsPerCore),
//OFFSET(PbGroup, KPRCB, Group),
//OFFSET(PbGroupIndex, KPRCB, GroupIndex),
OFFSET(PbApicMask, KPRCB, ApicMask),
OFFSET(PbCFlushSize, KPRCB, CFlushSize),
OFFSET(PbAcpiReserved, KPRCB, AcpiReserved),
OFFSET(PbInitialApicId, KPRCB, InitialApicId),
//OFFSET(PbStride, KPRCB, Stride),
OFFSET(PbLockQueue, KPRCB, LockQueue),
OFFSET(PbPPLookasideList, KPRCB, PPLookasideList),
OFFSET(PbPPNPagedLookasideList, KPRCB, PPNPagedLookasideList),
OFFSET(PbPPPagedLookasideList, KPRCB, PPPagedLookasideList),
OFFSET(PbPacketBarrier, KPRCB, PacketBarrier),
OFFSET(PbDeferredReadyListHead, KPRCB, DeferredReadyListHead),
OFFSET(PbLookasideIrpFloat, KPRCB, LookasideIrpFloat),
//OFFSET(PbSystemCalls, KPRCB, KeSystemCalls),
//OFFSET(PbReadOperationCount, KPRCB, IoReadOperationCount),
//OFFSET(PbWriteOperationCount, KPRCB, IoWriteOperationCount),
//OFFSET(PbOtherOperationCount, KPRCB, IoOtherOperationCount),
//OFFSET(PbReadTransferCount, KPRCB, IoReadTransferCount),
//OFFSET(PbWriteTransferCount, KPRCB, IoWriteTransferCount),
//OFFSET(PbOtherTransferCount, KPRCB, IoOtherTransferCount),
//OFFSET(PbContextSwitches, KPRCB, KeContextSwitches),
//OFFSET(PbLdtSelector, KPRCB, LdtSelector),
OFFSET(PbTargetSet, KPRCB, TargetSet),
//OFFSET(PbTargetCount, KPRCB, TargetCount),
OFFSET(PbIpiFrozen, KPRCB, IpiFrozen),
OFFSET(PbRequestMailbox, KPRCB, RequestMailbox),
OFFSET(PbSenderSummary, KPRCB, SenderSummary),
//OFFSET(PbDpcListHead, KPRCB, DpcListHead),
//OFFSET(PbDpcList, KPRCB, DpcList),
//OFFSET(PbDpcLock, KPRCB, DpcLock),
//OFFSET(PbDpcQueueDepth, KPRCB, DpcQueueDepth),
//OFFSET(PbDpcCount, KPRCB, DpcCount),
OFFSET(PbDpcStack, KPRCB, DpcStack),
OFFSET(PbMaximumDpcQueueDepth, KPRCB, MaximumDpcQueueDepth),
OFFSET(PbDpcRequestRate, KPRCB, DpcRequestRate),
OFFSET(PbMinimumDpcRate, KPRCB, MinimumDpcRate),
//OFFSET(PbDpcRequestSummary, KPRCB, DpcRequestSummary),
//OFFSET(PbNormalDpcState, KPRCB, NormalDpcState),
OFFSET(PbDpcInterruptRequested, KPRCB, DpcInterruptRequested),
OFFSET(PbDpcThreadRequested, KPRCB, DpcThreadRequested),
OFFSET(PbDpcRoutineActive, KPRCB, DpcRoutineActive),
OFFSET(PbDpcThreadActive, KPRCB, DpcThreadActive),
OFFSET(PbTimerHand, KPRCB, TimerHand),
OFFSET(PbTimerRequest, KPRCB, TimerRequest),
OFFSET(PbTickOffset, KPRCB, TickOffset),
//OFFSET(PbInterruptObject, KPRCB, InterruptObject),
OFFSET(PbMasterOffset, KPRCB, MasterOffset),
OFFSET(PbDpcLastCount, KPRCB, DpcLastCount),
OFFSET(PbQuantumEnd, KPRCB, QuantumEnd),
OFFSET(PbDpcSetEventRequest, KPRCB, DpcSetEventRequest),
OFFSET(PbIdleSchedule, KPRCB, IdleSchedule),
OFFSET(PbReadySummary, KPRCB, ReadySummary),
OFFSET(PbDispatcherReadyListHead, KPRCB, DispatcherReadyListHead),
OFFSET(PbInterruptCount, KPRCB, InterruptCount),
OFFSET(PbKernelTime, KPRCB, KernelTime),
OFFSET(PbUserTime, KPRCB, UserTime),
OFFSET(PbDpcTime, KPRCB, DpcTime),
OFFSET(PbInterruptTime, KPRCB, InterruptTime),
OFFSET(PbAdjustDpcThreshold, KPRCB, AdjustDpcThreshold),
OFFSET(PbSkipTick, KPRCB, SkipTick),
OFFSET(PbPollSlot, KPRCB, PollSlot),
OFFSET(PbParentNode, KPRCB, ParentNode),
OFFSET(PbMultiThreadProcessorSet, KPRCB, MultiThreadProcessorSet),
OFFSET(PbMultiThreadSetMaster, KPRCB, MultiThreadSetMaster),
//OFFSET(PbStartCycles, KPRCB, StartCycles),
OFFSET(PbPageColor, KPRCB, PageColor),
OFFSET(PbNodeColor, KPRCB, NodeColor),
OFFSET(PbNodeShiftedColor, KPRCB,NodeShiftedColor),
OFFSET(PbSecondaryColorMask, KPRCB, SecondaryColorMask),
OFFSET(PbSleeping, KPRCB, Sleeping),
//OFFSET(PbCycleTime, KPRCB, CycleTime),
//OFFSET(PbFastReadNoWait, KPRCB, FastReadNoWait),
//OFFSET(PbFastReadWait, KPRCB, FastReadWait),
//OFFSET(PbFastReadNotPossible, KPRCB, FastReadNotPossible),
//OFFSET(PbCopyReadNoWait, KPRCB, CopyReadNoWait),
//OFFSET(PbCopyReadWait, KPRCB, CopyReadWait),
//OFFSET(PbCopyReadNoWaitMiss, KPRCB, CopyReadNoWaitMiss),
//OFFSET(PbAlignmentFixupCount, KPRCB, AlignmentFixupCount),
//OFFSET(PbExceptionDispatchCount, KPRCB, ExceptionDispatchCount),
//OFFSET(PbKeSpinLockOrdering, KPRCB, KeSpinLockOrdering),
OFFSET(PbVendorString, KPRCB, VendorString),
OFFSET(PbPowerState, KPRCB, PowerState),
//OFFSET(PbContext, KPRCB, Context),
//OFFSET(PbIsrStack, KPRCB, IsrStack),
//OFFSET(PbEntropyCount, KPRCB, EntropyTimingState.EntropyCount),
//OFFSET(PbEntropyBuffer, KPRCB, EntropyTimingState.Buffer),
//OFFSET(PbMailbox, KPRCB, Mailbox),
SIZE(ProcessorBlockLength, KPRCB),

HEADER("KPCR"),
//OFFSET(PcGdt, KPCR, Gdt),
//OFFSET(PcTss, KPCR, Tss),
OFFSET(PcUserRsp, KPCR, UserRsp),
OFFSET(PcSelf, KPCR, Self),
OFFSET(PcCurrentPrcb, KPCR, CurrentPrcb),
OFFSET(PcLockArray, KPCR, LockArray),
//OFFSET(PcTeb, KPCR, Teb),
//OFFSET(PcIdt, KPCR, Idt),
OFFSET(PcIrql, KPCR, Irql),
OFFSET(PcStallScaleFactor, KPCR, StallScaleFactor),
OFFSET(PcHalReserved, KPCR, HalReserved),
//OFFSET(PcPrcb, KPCR, Prcb),
//OFFSET(PcMxCsr, KPCR, MxCsr),
//OFFSET(PcNumber, KPCR, Number),
//OFFSET(PcInterruptRequest, KPCR, InterruptRequest),
//OFFSET(PcIdleHalt, KPCR, IdleHalt),
OFFSET(PcCurrentThread, KIPCR, Prcb.CurrentThread),
//OFFSET(PcNextThread, KPCR, NextThread),
//OFFSET(PcIdleThread, KPCR, IdleThread),
//OFFSET(PcIpiFrozen, KPCR, IpiFrozen),
//OFFSET(PcNestingLevel, KPCR, NestingLevel),
OFFSET(PcRspBase, KIPCR, Prcb.RspBase),
//OFFSET(PcPrcbLock, KPCR, PrcbLock),
OFFSET(PcSetMember, KIPCR, Prcb.SetMember),
#if 0
OFFSET(PcCr0, KIPCR, Prcb.Cr0),
OFFSET(PcCr2, KIPCR, Prcb.Cr2),
OFFSET(PcCr3, KIPCR, Prcb.Cr3),
OFFSET(PcCr4, KIPCR, Prcb.Cr4),
OFFSET(PcKernelDr0, KIPCR, Prcb.KernelDr0),
OFFSET(PcKernelDr1, KIPCR, Prcb.KernelDr1),
OFFSET(PcKernelDr2, KIPCR, Prcb.KernelDr2),
OFFSET(PcKernelDr3, KIPCR, Prcb.KernelDr3),
OFFSET(PcKernelDr7, KIPCR, Prcb.KernelDr7),
OFFSET(PcGdtrLimit, KIPCR, Prcb.GdtrLimit),
OFFSET(PcGdtrBase, KIPCR, Prcb.GdtrBase),
OFFSET(PcIdtrLimit, KIPCR, IdtrLimit),
OFFSET(PcIdtrBase, KIPCR, IdtrBase),
OFFSET(PcTr, KIPCR, Tr),
OFFSET(PcLdtr, KIPCR, Ldtr),
OFFSET(PcDebugControl, KIPCR, DebugControl),
OFFSET(PcLastBranchToRip, KIPCR, LastBranchToRip),
OFFSET(PcLastBranchFromRip, KIPCR, LastBranchFromRip),
OFFSET(PcLastExceptionToRip, KIPCR, LastExceptionToRip),
OFFSET(PcLastExceptionFromRip, KIPCR, LastExceptionFromRip),
OFFSET(PcCr8, KIPCR, Cr8),
#endif
OFFSET(PcCpuType, KIPCR, Prcb.CpuType),
OFFSET(PcCpuID, KIPCR, Prcb.CpuID),
OFFSET(PcCpuStep, KIPCR, Prcb.CpuStep),
OFFSET(PcCpuVendor, KIPCR, Prcb.CpuVendor),
OFFSET(PcCFlushSize, KIPCR, Prcb.CFlushSize),
OFFSET(PcDeferredReadyListHead, KIPCR, Prcb.DeferredReadyListHead),
OFFSET(PcSystemCalls, KIPCR, Prcb.KeSystemCalls),
OFFSET(PcDpcRoutineActive, KIPCR, Prcb.DpcRoutineActive),
OFFSET(PcInterruptCount, KIPCR, Prcb.InterruptCount),
OFFSET(PcDebuggerSavedIRQL, KIPCR, Prcb.DebuggerSavedIRQL),
OFFSET(PcTickOffset, KIPCR, Prcb.TickOffset),
OFFSET(PcMasterOffset, KIPCR, Prcb.MasterOffset),
OFFSET(PcSkipTick, KIPCR, Prcb.SkipTick),
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
OFFSET(PcVirtualApicAssist, KIPCR, Prcb.VirtualApicAssist),
OFFSET(PcStartCycles, KIPCR, Prcb.StartCycles),
#endif
//OFFSET(PcFeatureBits, KIPCR, Prcb.FeatureBits),
//OFFSET(PcNmiActive, KIPCR, Prcb.NmiActive),
//OFFSET(PcDeepSleep, KIPCR, Prcb.DeepSleep),
SIZE(ProcessorControlRegisterLength, KIPCR),

HEADER("KPROCESSOR_START_BLOCK offsets"),
OFFSET(PsbCompletionFlag, KPROCESSOR_START_BLOCK, CompletionFlag),
OFFSET(PsbFlags, KPROCESSOR_START_BLOCK, Flags),
OFFSET(PsbGdt32, KPROCESSOR_START_BLOCK, Gdt32),
OFFSET(PsbIdt32, KPROCESSOR_START_BLOCK, Idt32),
OFFSET(PsbGdt, KPROCESSOR_START_BLOCK, Gdt),
OFFSET(PsbTiledMemoryMap, KPROCESSOR_START_BLOCK, TiledMemoryMap),
OFFSET(PsbPmTarget, KPROCESSOR_START_BLOCK, PmTarget),
OFFSET(PsbLmIdentityTarget, KPROCESSOR_START_BLOCK, LmIdentityTarget),
OFFSET(PsbLmTarget, KPROCESSOR_START_BLOCK, LmTarget),
OFFSET(PsbSelfMap, KPROCESSOR_START_BLOCK, SelfMap),
OFFSET(PsbMsrPat, KPROCESSOR_START_BLOCK, MsrPat),
OFFSET(PsbMsrEFER, KPROCESSOR_START_BLOCK, MsrEFER),
OFFSET(PsbProcessorState, KPROCESSOR_START_BLOCK, ProcessorState),
SIZE(ProcessorStartBlockLength, KPROCESSOR_START_BLOCK),
CONSTANT(PROCESSOR_START_FLAG_FORCE_ENABLE_NX),

HEADER("KPROCESSOR_STATE offsets"),
OFFSET(PsSpecialRegisters, KPROCESSOR_STATE, SpecialRegisters),
OFFSET(PsCr0, KPROCESSOR_STATE, SpecialRegisters.Cr0),
OFFSET(PsCr2, KPROCESSOR_STATE, SpecialRegisters.Cr2),
OFFSET(PsCr3, KPROCESSOR_STATE, SpecialRegisters.Cr3),
OFFSET(PsCr4, KPROCESSOR_STATE, SpecialRegisters.Cr4),
OFFSET(PsKernelDr0, KPROCESSOR_STATE, SpecialRegisters.KernelDr0),
OFFSET(PsKernelDr1, KPROCESSOR_STATE, SpecialRegisters.KernelDr1),
OFFSET(PsKernelDr2, KPROCESSOR_STATE, SpecialRegisters.KernelDr2),
OFFSET(PsKernelDr3, KPROCESSOR_STATE, SpecialRegisters.KernelDr3),
OFFSET(PsKernelDr6, KPROCESSOR_STATE, SpecialRegisters.KernelDr6),
OFFSET(PsKernelDr7, KPROCESSOR_STATE, SpecialRegisters.KernelDr7),
OFFSET(PsGdtr, KPROCESSOR_STATE, SpecialRegisters.Gdtr),
OFFSET(PsIdtr, KPROCESSOR_STATE, SpecialRegisters.Idtr),
OFFSET(PsTr, KPROCESSOR_STATE, SpecialRegisters.Tr),
OFFSET(PsLdtr, KPROCESSOR_STATE, SpecialRegisters.Ldtr),
OFFSET(PsMxCsr, KPROCESSOR_STATE, SpecialRegisters.MxCsr),
//OFFSET(PsMsrGsBase, KPROCESSOR_STATE, MsrGsBase),
//OFFSET(PsMsrGsSwap, KPROCESSOR_STATE, MsrGsSwap),
//OFFSET(PsMsrStar, KPROCESSOR_STATE, MsrStar),
//OFFSET(PsMsrLStar, KPROCESSOR_STATE, MsrLStar),
//OFFSET(PsMsrCStar, KPROCESSOR_STATE, MsrCStar),
//OFFSET(PsMsrSyscallMask, KPROCESSOR_STATE, MsrSyscallMask),
//OFFSET(PsXcr0, KPROCESSOR_STATE, Xcr0),
OFFSET(PsContextFrame, KPROCESSOR_STATE, ContextFrame),
OFFSET(PsDebugControl, KPROCESSOR_STATE, SpecialRegisters.DebugControl),
OFFSET(PsLastBranchToRip, KPROCESSOR_STATE, SpecialRegisters.LastBranchToRip),
OFFSET(PsLastBranchFromRip, KPROCESSOR_STATE, SpecialRegisters.LastBranchFromRip),
OFFSET(PsLastExceptionToRip, KPROCESSOR_STATE, SpecialRegisters.LastExceptionToRip),
OFFSET(PsLastExceptionFromRip, KPROCESSOR_STATE, SpecialRegisters.LastExceptionFromRip),
OFFSET(PsCr8, KPROCESSOR_STATE, SpecialRegisters.Cr8),
SIZE(ProcessorStateLength, KPROCESSOR_STATE),

HEADER("KSTART_FRAME"),
OFFSET(SfP1Home, KSTART_FRAME, P1Home),
OFFSET(SfP2Home, KSTART_FRAME, P2Home),
OFFSET(SfP3Home, KSTART_FRAME, P3Home),
OFFSET(SfP4Home, KSTART_FRAME, P4Home),
OFFSET(SfReturn, KSTART_FRAME, Return),
SIZE(KSTART_FRAME_LENGTH, KSTART_FRAME),

HEADER("KSPECIAL_REGISTERS"),
OFFSET(SrKernelDr0, KSPECIAL_REGISTERS, KernelDr0),
OFFSET(SrKernelDr1, KSPECIAL_REGISTERS, KernelDr1),
OFFSET(SrKernelDr2, KSPECIAL_REGISTERS, KernelDr2),
OFFSET(SrKernelDr3, KSPECIAL_REGISTERS, KernelDr3),
OFFSET(SrKernelDr6, KSPECIAL_REGISTERS, KernelDr6),
OFFSET(SrKernelDr7, KSPECIAL_REGISTERS, KernelDr7),
OFFSET(SrGdtr, KSPECIAL_REGISTERS, Gdtr),
OFFSET(SrIdtr, KSPECIAL_REGISTERS, Idtr),
OFFSET(SrTr, KSPECIAL_REGISTERS, Tr),
OFFSET(SrMxCsr, KSPECIAL_REGISTERS, MxCsr),
OFFSET(SrMsrGsBase, KSPECIAL_REGISTERS, MsrGsBase),
OFFSET(SrMsrGsSwap, KSPECIAL_REGISTERS, MsrGsSwap),
OFFSET(SrMsrStar, KSPECIAL_REGISTERS, MsrStar),
OFFSET(SrMsrLStar, KSPECIAL_REGISTERS, MsrLStar),
OFFSET(SrMsrCStar, KSPECIAL_REGISTERS, MsrCStar),
OFFSET(SrMsrSyscallMask, KSPECIAL_REGISTERS, MsrSyscallMask),
//OFFSET(SrXcr0, KSPECIAL_REGISTERS, Xcr0),

HEADER("KSYSTEM_TIME"), // obsolete in win 10
OFFSET(StLowTime, KSYSTEM_TIME, LowPart),
OFFSET(StHigh1Time, KSYSTEM_TIME, High1Time),
OFFSET(StHigh2Time, KSYSTEM_TIME, High2Time),

HEADER("KSWITCH_FRAME"),
OFFSET(SwP5Home, KSWITCH_FRAME, P5Home),
OFFSET(SwApcBypass, KSWITCH_FRAME, ApcBypass),
OFFSET(SwRbp, KSWITCH_FRAME, Rbp),
OFFSET(SwReturn, KSWITCH_FRAME, Return),
SIZE(SwitchFrameLength, KSWITCH_FRAME),
SIZE(KSWITCH_FRAME_LENGTH, KSWITCH_FRAME),

#if (NTDDI_VERSION >= NTDDI_WIN7)
HEADER("KTIMER_TABLE offsets"), // not in win 10
OFFSET(TtEntry, KTIMER_TABLE, TimerEntries),
OFFSET(TtTime, KTIMER_TABLE_ENTRY, Time),
SIZE(TIMER_ENTRY_SIZE, KTIMER_TABLE_ENTRY),
SIZE(TIMER_TABLE_SIZE, KTIMER_TABLE),
SIZE(KTIMER_TABLE_SIZE, KTIMER_TABLE),
#endif

#if 0 // FIXME: reloffset???
HEADER("KTRAP_FRAME offsets"),
OFFSET(TrP1Home, KTRAP_FRAME, TrP1Home),
TrP2Home, KTRAP_FRAME, TrP1Home),
TrP3Home, KTRAP_FRAME, TrP1Home),
TrP4Home, KTRAP_FRAME, TrP1Home),
TrP5, KTRAP_FRAME, TrP1Home),
TrPreviousMode, KTRAP_FRAME, TrP1Home),
TrPreviousIrql, KTRAP_FRAME, TrP1Home),
TrFaultIndicator, KTRAP_FRAME, TrP1Home),
TrExceptionActive, KTRAP_FRAME, TrP1Home),
TrMxCsr, KTRAP_FRAME, TrP1Home),
TrRax equ 0FFFFFFB0H
TrRcx equ 0FFFFFFB8H
TrRdx equ 0FFFFFFC0H
TrR8 equ 0FFFFFFC8H
TrR9 equ 0FFFFFFD0H
TrR10 equ 0FFFFFFD8H
TrR11 equ 0FFFFFFE0H
TrGsBase equ 0FFFFFFE8H
TrGsSwap equ 0FFFFFFE8H
TrXmm0 equ 0FFFFFFF0H
TrXmm1 equ 00000H
TrXmm2 equ 00010H
TrXmm3 equ 00020H
TrXmm4 equ 00030H
TrXmm5 equ 00040H
TrFaultAddress equ 00050H
TrDr0 equ 00058H
TrDr1 equ 00060H
TrDr2 equ 00068H
TrDr3 equ 00070H
TrDr6 equ 00078H
TrDr7 equ 00080H
TrDebugControl equ 00088H
TrLastBranchToRip equ 00090H
TrLastBranchFromRip equ 00098H
TrLastExceptionToRip equ 000A0H
TrLastExceptionFromRip equ 000A8H
TrSegDs equ 000B0H
TrSegEs equ 000B2H
TrSegFs equ 000B4H
TrSegGs equ 000B6H
TrTrapFrame equ 000B8H
TrRbx equ 000C0H
TrRdi equ 000C8H
TrRsi equ 000D0H
TrRbp equ 000D8H
TrErrorCode equ 000E0H
TrRip equ 000E8H
TrSegCs equ 000F0H
TrLogging equ 000F3H
TrEFlags equ 000F8H
TrRsp equ 00100H
TrSegSs equ 00108H
SIZE(KTRAP_FRAME_LENGTH, KTRAP_FRAME),
#endif

HEADER("KTSS offsets"),
OFFSET(TssRsp0, KTSS64, Rsp0),
OFFSET(TssRsp1, KTSS64, Rsp1),
OFFSET(TssRsp2, KTSS64, Rsp2),
OFFSET(TssPanicStack, KTSS64, Ist[1]),
OFFSET(TssMcaStack, KTSS64, Ist[2]),
OFFSET(TssNmiStack, KTSS64, Ist[3]),
OFFSET(TssIoMapBase, KTSS64, IoMapBase),
SIZE(TssLength, KTSS64),

#if (NTDDI_VERSION >= NTDDI_WIN7)
HEADER("RTL_UMS_CONTEXT offsets"),
OFFSET(UcLink, RTL_UMS_CONTEXT, Link),
OFFSET(UcContext, RTL_UMS_CONTEXT, Context),
OFFSET(UcTeb, RTL_UMS_CONTEXT, Teb),
OFFSET(UcFlags, RTL_UMS_CONTEXT, Flags),
OFFSET(UcContextLock, RTL_UMS_CONTEXT, ContextLock),
OFFSET(UcPrimaryUmsContext, RTL_UMS_CONTEXT, PrimaryUmsContext),
SIZE(RTL_UMS_CONTEXT_LENGTH, RTL_UMS_CONTEXT),

HEADER("KUMS_CONTEXT_HEADER offsets"),
OFFSET(UchStackTop, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchStackSize, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchRspOffset, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchRip, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchFltSave, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchFlags, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchTrapFrame, KUMS_CONTEXT_HEADER, StackTop),
OFFSET(UchExceptionFrame, KUMS_CONTEXT_HEADER, StackTop),
SIZE(KUMS_CONTEXT_HEADER_LENGTH, KUMS_CONTEXT_HEADER),

HEADER("UMS_CONTROL_BLOCK offsets"),
OFFSET(UcbUmsTeb, UMS_CONTROL_BLOCK, UmsTeb),
#endif

HEADER("XSTATE_CONFIGURATION offsets"),
OFFSET(XcfgEnabledFeatures, XSTATE_CONFIGURATION, EnabledFeatures),
#if (NTDDI_VERSION >= NTDDI_WIN10)
OFFSET(XcfgEnabledVolatileFeatures, XSTATE_CONFIGURATION, EnabledFeatures),
#endif

HEADER("XSTATE_CONTEXT offsets"),
OFFSET(XctxMask, XSTATE_CONTEXT, Mask),
OFFSET(XctxLength, XSTATE_CONTEXT, Length),
OFFSET(XctxArea, XSTATE_CONTEXT, Area),

HEADER("XSAVE_AREA offsets"),
OFFSET(XsaHeader, XSAVE_AREA, Header),
SIZE(XsaHeaderLength, XSAVE_AREA_HEADER),
CONSTANTX(XSAVE_ALIGN, _alignof(XSAVE_AREA)),

//CONSTANT(CFlushSize),

HEADER("KTHREAD offsets"),
#if (NTDDI_VERSION >= NTDDI_VISTA)
OFFSET(ThTebMappedLowVa, KTHREAD, TebMappedLowVa),
OFFSET(ThUcb, KTHREAD, Ucb),
//OFFSET(ThBase, KTHREAD, Base?),
//OFFSET(ThLimit, KTHREAD, Limit?),
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
HEADER("KPROCESS offsets"),
OFFSET(PrLdtSystemDescriptor, KPROCESS, LdtSystemDescriptor),
OFFSET(PrLdtBaseAddress, KPROCESS, LdtBaseAddress),
#endif


/// ROS definitions

HEADER("CONTEXT"),
OFFSET(CONTEXT_P1Home, CONTEXT, P1Home),
OFFSET(CONTEXT_P2Home, CONTEXT, P2Home),
OFFSET(CONTEXT_P3Home, CONTEXT, P3Home),
OFFSET(CONTEXT_P4Home, CONTEXT, P4Home),
OFFSET(CONTEXT_P5Home, CONTEXT, P5Home),
OFFSET(CONTEXT_P6Home, CONTEXT, P6Home),
OFFSET(CONTEXT_ContextFlags, CONTEXT, ContextFlags),
OFFSET(CONTEXT_MxCsr, CONTEXT, MxCsr),
OFFSET(CONTEXT_SegCs, CONTEXT, SegCs),
OFFSET(CONTEXT_SegDs, CONTEXT, SegDs),
OFFSET(CONTEXT_SegEs, CONTEXT, SegEs),
OFFSET(CONTEXT_SegFs, CONTEXT, SegFs),
OFFSET(CONTEXT_SegGs, CONTEXT, SegGs),
OFFSET(CONTEXT_SegSs, CONTEXT, SegSs),
OFFSET(CONTEXT_EFlags, CONTEXT, EFlags),
OFFSET(CONTEXT_Dr0, CONTEXT, Dr0),
OFFSET(CONTEXT_Dr1, CONTEXT, Dr1),
OFFSET(CONTEXT_Dr2, CONTEXT, Dr2),
OFFSET(CONTEXT_Dr3, CONTEXT, Dr3),
OFFSET(CONTEXT_Dr6, CONTEXT, Dr6),
OFFSET(CONTEXT_Dr7, CONTEXT, Dr7),
OFFSET(CONTEXT_Rax, CONTEXT, Rax),
OFFSET(CONTEXT_Rcx, CONTEXT, Rcx),
OFFSET(CONTEXT_Rdx, CONTEXT, Rdx),
OFFSET(CONTEXT_Rbx, CONTEXT, Rbx),
OFFSET(CONTEXT_Rsp, CONTEXT, Rsp),
OFFSET(CONTEXT_Rbp, CONTEXT, Rbp),
OFFSET(CONTEXT_Rsi, CONTEXT, Rsi),
OFFSET(CONTEXT_Rdi, CONTEXT, Rdi),
OFFSET(CONTEXT_R8, CONTEXT, R8),
OFFSET(CONTEXT_R9, CONTEXT, R9),
OFFSET(CONTEXT_R10, CONTEXT, R10),
OFFSET(CONTEXT_R11, CONTEXT, R11),
OFFSET(CONTEXT_R12, CONTEXT, R12),
OFFSET(CONTEXT_R13, CONTEXT, R13),
OFFSET(CONTEXT_R14, CONTEXT, R14),
OFFSET(CONTEXT_R15, CONTEXT, R15),
OFFSET(CONTEXT_Rip, CONTEXT, Rip),
OFFSET(CONTEXT_FltSave, CONTEXT, FltSave),
OFFSET(CONTEXT_Xmm0, CONTEXT, Xmm0),
OFFSET(CONTEXT_Xmm1, CONTEXT, Xmm1),
OFFSET(CONTEXT_Xmm2, CONTEXT, Xmm2),
OFFSET(CONTEXT_Xmm3, CONTEXT, Xmm3),
OFFSET(CONTEXT_Xmm4, CONTEXT, Xmm4),
OFFSET(CONTEXT_Xmm5, CONTEXT, Xmm5),
OFFSET(CONTEXT_Xmm6, CONTEXT, Xmm6),
OFFSET(CONTEXT_Xmm7, CONTEXT, Xmm7),
OFFSET(CONTEXT_Xmm8, CONTEXT, Xmm8),
OFFSET(CONTEXT_Xmm9, CONTEXT, Xmm9),
OFFSET(CONTEXT_Xmm10, CONTEXT, Xmm10),
OFFSET(CONTEXT_Xmm11, CONTEXT, Xmm11),
OFFSET(CONTEXT_Xmm12, CONTEXT, Xmm12),
OFFSET(CONTEXT_Xmm13, CONTEXT, Xmm13),
OFFSET(CONTEXT_Xmm14, CONTEXT, Xmm14),
OFFSET(CONTEXT_Xmm15, CONTEXT, Xmm15),
OFFSET(CONTEXT_DebugControl, CONTEXT, DebugControl),
OFFSET(CONTEXT_LastBranchToRip, CONTEXT, LastBranchToRip),
OFFSET(CONTEXT_LastBranchFromRip, CONTEXT, LastBranchFromRip),
OFFSET(CONTEXT_LastExceptionToRip, CONTEXT, LastExceptionToRip),
OFFSET(CONTEXT_LastExceptionFromRip, CONTEXT, LastExceptionFromRip),
OFFSET(CONTEXT_VectorControl, CONTEXT, VectorControl),
OFFSET(CONTEXT_VectorRegister, CONTEXT, VectorRegister),
SIZE(CONTEXT_FRAME_LENGTH, CONTEXT),

HEADER("KEXCEPTION_FRAME"),
OFFSET(KEXCEPTION_FRAME_P1Home, KEXCEPTION_FRAME, P1Home),
OFFSET(KEXCEPTION_FRAME_P2Home, KEXCEPTION_FRAME, P2Home),
OFFSET(KEXCEPTION_FRAME_P3Home, KEXCEPTION_FRAME, P3Home),
OFFSET(KEXCEPTION_FRAME_P4Home, KEXCEPTION_FRAME, P4Home),
OFFSET(KEXCEPTION_FRAME_P5, KEXCEPTION_FRAME, P5),
OFFSET(KEXCEPTION_FRAME_Xmm6, KEXCEPTION_FRAME, Xmm6),
OFFSET(KEXCEPTION_FRAME_Xmm7, KEXCEPTION_FRAME, Xmm7),
OFFSET(KEXCEPTION_FRAME_Xmm8, KEXCEPTION_FRAME, Xmm8),
OFFSET(KEXCEPTION_FRAME_Xmm9, KEXCEPTION_FRAME, Xmm9),
OFFSET(KEXCEPTION_FRAME_Xmm10, KEXCEPTION_FRAME, Xmm10),
OFFSET(KEXCEPTION_FRAME_Xmm11, KEXCEPTION_FRAME, Xmm11),
OFFSET(KEXCEPTION_FRAME_Xmm12, KEXCEPTION_FRAME, Xmm12),
OFFSET(KEXCEPTION_FRAME_Xmm13, KEXCEPTION_FRAME, Xmm13),
OFFSET(KEXCEPTION_FRAME_Xmm14, KEXCEPTION_FRAME, Xmm14),
OFFSET(KEXCEPTION_FRAME_Xmm15, KEXCEPTION_FRAME, Xmm15),
OFFSET(KEXCEPTION_FRAME_MxCsr, KEXCEPTION_FRAME, MxCsr),
OFFSET(KEXCEPTION_FRAME_Rbp, KEXCEPTION_FRAME, Rbp),
OFFSET(KEXCEPTION_FRAME_Rbx, KEXCEPTION_FRAME, Rbx),
OFFSET(KEXCEPTION_FRAME_Rdi, KEXCEPTION_FRAME, Rdi),
OFFSET(KEXCEPTION_FRAME_Rsi, KEXCEPTION_FRAME, Rsi),
OFFSET(KEXCEPTION_FRAME_R12, KEXCEPTION_FRAME, R12),
OFFSET(KEXCEPTION_FRAME_R13, KEXCEPTION_FRAME, R13),
OFFSET(KEXCEPTION_FRAME_R14, KEXCEPTION_FRAME, R14),
OFFSET(KEXCEPTION_FRAME_R15, KEXCEPTION_FRAME, R15),
OFFSET(KEXCEPTION_FRAME_Return, KEXCEPTION_FRAME, Return),
OFFSET(KEXCEPTION_FRAME_TrapFrame, KEXCEPTION_FRAME, TrapFrame),
OFFSET(KEXCEPTION_FRAME_OutputBuffer, KEXCEPTION_FRAME, OutputBuffer),
OFFSET(KEXCEPTION_FRAME_OutputLength, KEXCEPTION_FRAME, OutputLength),
SIZE(KEXCEPTION_FRAME_LENGTH, KEXCEPTION_FRAME),

HEADER("KTRAP_FRAME"),
OFFSET(KTRAP_FRAME_P1Home, KTRAP_FRAME, P1Home),
OFFSET(KTRAP_FRAME_P2Home, KTRAP_FRAME, P2Home),
OFFSET(KTRAP_FRAME_P3Home, KTRAP_FRAME, P3Home),
OFFSET(KTRAP_FRAME_P4Home, KTRAP_FRAME, P4Home),
OFFSET(KTRAP_FRAME_P5, KTRAP_FRAME, P5),
OFFSET(KTRAP_FRAME_PreviousMode, KTRAP_FRAME, PreviousMode),
OFFSET(KTRAP_FRAME_PreviousIrql, KTRAP_FRAME, PreviousIrql),
OFFSET(KTRAP_FRAME_FaultIndicator, KTRAP_FRAME, FaultIndicator),
OFFSET(KTRAP_FRAME_ExceptionActive, KTRAP_FRAME, ExceptionActive),
OFFSET(KTRAP_FRAME_MxCsr, KTRAP_FRAME, MxCsr),
OFFSET(KTRAP_FRAME_Rax, KTRAP_FRAME, Rax),
OFFSET(KTRAP_FRAME_Rcx, KTRAP_FRAME, Rcx),
OFFSET(KTRAP_FRAME_Rdx, KTRAP_FRAME, Rdx),
OFFSET(KTRAP_FRAME_R8, KTRAP_FRAME, R8),
OFFSET(KTRAP_FRAME_R9, KTRAP_FRAME, R9),
OFFSET(KTRAP_FRAME_R10, KTRAP_FRAME, R10),
OFFSET(KTRAP_FRAME_R11, KTRAP_FRAME, R11),
OFFSET(KTRAP_FRAME_GsBase, KTRAP_FRAME, GsBase),
OFFSET(KTRAP_FRAME_GsSwap, KTRAP_FRAME,GsSwap),
OFFSET(KTRAP_FRAME_Xmm0, KTRAP_FRAME, Xmm0),
OFFSET(KTRAP_FRAME_Xmm1, KTRAP_FRAME, Xmm1),
OFFSET(KTRAP_FRAME_Xmm2, KTRAP_FRAME, Xmm2),
OFFSET(KTRAP_FRAME_Xmm3, KTRAP_FRAME, Xmm3),
OFFSET(KTRAP_FRAME_Xmm4, KTRAP_FRAME, Xmm4),
OFFSET(KTRAP_FRAME_Xmm5, KTRAP_FRAME, Xmm5),
OFFSET(KTRAP_FRAME_FaultAddress, KTRAP_FRAME, FaultAddress),
OFFSET(KTRAP_FRAME_TimeStampCKCL, KTRAP_FRAME, TimeStampCKCL),
OFFSET(KTRAP_FRAME_Dr0, KTRAP_FRAME, Dr0),
OFFSET(KTRAP_FRAME_Dr1, KTRAP_FRAME, Dr1),
OFFSET(KTRAP_FRAME_Dr2, KTRAP_FRAME, Dr2),
OFFSET(KTRAP_FRAME_Dr3, KTRAP_FRAME, Dr3),
OFFSET(KTRAP_FRAME_Dr6, KTRAP_FRAME, Dr6),
OFFSET(KTRAP_FRAME_Dr7, KTRAP_FRAME, Dr7),
OFFSET(KTRAP_FRAME_DebugControl, KTRAP_FRAME, DebugControl),
OFFSET(KTRAP_FRAME_LastBranchToRip, KTRAP_FRAME, LastBranchToRip),
OFFSET(KTRAP_FRAME_LastBranchFromRip, KTRAP_FRAME, LastBranchFromRip),
OFFSET(KTRAP_FRAME_LastExceptionToRip, KTRAP_FRAME, LastExceptionToRip),
OFFSET(KTRAP_FRAME_LastExceptionFromRip, KTRAP_FRAME, LastExceptionFromRip),
OFFSET(KTRAP_FRAME_LastBranchControl, KTRAP_FRAME, LastBranchControl),
OFFSET(KTRAP_FRAME_LastBranchMSR, KTRAP_FRAME, LastBranchMSR),
OFFSET(KTRAP_FRAME_SegDs, KTRAP_FRAME, SegDs),
OFFSET(KTRAP_FRAME_SegEs, KTRAP_FRAME, SegEs),
OFFSET(KTRAP_FRAME_SegFs, KTRAP_FRAME, SegFs),
OFFSET(KTRAP_FRAME_SegGs, KTRAP_FRAME, SegGs),
OFFSET(KTRAP_FRAME_TrapFrame, KTRAP_FRAME, TrapFrame),
OFFSET(KTRAP_FRAME_Rbx, KTRAP_FRAME, Rbx),
OFFSET(KTRAP_FRAME_Rdi, KTRAP_FRAME, Rdi),
OFFSET(KTRAP_FRAME_Rsi, KTRAP_FRAME, Rsi),
OFFSET(KTRAP_FRAME_Rbp, KTRAP_FRAME, Rbp),
OFFSET(KTRAP_FRAME_ErrorCode, KTRAP_FRAME, ErrorCode),
OFFSET(KTRAP_FRAME_TimeStampKlog, KTRAP_FRAME, TimeStampKlog),
OFFSET(KTRAP_FRAME_Rip, KTRAP_FRAME, Rip),
OFFSET(KTRAP_FRAME_SegCs, KTRAP_FRAME, SegCs),
OFFSET(KTRAP_FRAME_Logging, KTRAP_FRAME, Logging),
OFFSET(KTRAP_FRAME_EFlags, KTRAP_FRAME, EFlags),
OFFSET(KTRAP_FRAME_Rsp, KTRAP_FRAME, Rsp),
OFFSET(KTRAP_FRAME_SegSs, KTRAP_FRAME, SegSs),
OFFSET(KTRAP_FRAME_CodePatchCycle, KTRAP_FRAME, CodePatchCycle),
SIZE(KTRAP_FRAME_LENGTH, KTRAP_FRAME),

HEADER("EXCEPTION_RECORD"),
OFFSET(EXCEPTION_RECORD_ExceptionCode, EXCEPTION_RECORD, ExceptionCode),
OFFSET(EXCEPTION_RECORD_ExceptionFlags, EXCEPTION_RECORD, ExceptionFlags),
OFFSET(EXCEPTION_RECORD_ExceptionRecord, EXCEPTION_RECORD, ExceptionRecord),
OFFSET(EXCEPTION_RECORD_ExceptionAddress, EXCEPTION_RECORD, ExceptionAddress),
OFFSET(EXCEPTION_RECORD_NumberParameters, EXCEPTION_RECORD, NumberParameters),
OFFSET(EXCEPTION_RECORD_ExceptionInformation, EXCEPTION_RECORD, ExceptionInformation),

HEADER("KTHREAD"),
OFFSET(KTHREAD_WAIT_IRQL, KTHREAD, WaitIrql),
OFFSET(KTHREAD_TrapFrame, KTHREAD, TrapFrame),
OFFSET(KTHREAD_PreviousMode, KTHREAD, PreviousMode),
OFFSET(KTHREAD_KernelStack, KTHREAD, KernelStack),
OFFSET(KTHREAD_UserApcPending, KTHREAD, ApcState.UserApcPending),

HEADER("KINTERRUPT"),
OFFSET(KINTERRUPT_Type, KINTERRUPT, Type),
OFFSET(KINTERRUPT_Size, KINTERRUPT, Size),
OFFSET(KINTERRUPT_InterruptListEntry, KINTERRUPT, InterruptListEntry),
OFFSET(KINTERRUPT_ServiceRoutine, KINTERRUPT, ServiceRoutine),
OFFSET(KINTERRUPT_ServiceContext, KINTERRUPT, ServiceContext),
OFFSET(KINTERRUPT_SpinLock, KINTERRUPT, SpinLock),
OFFSET(KINTERRUPT_TickCount, KINTERRUPT, TickCount),
OFFSET(KINTERRUPT_ActualLock, KINTERRUPT, ActualLock),
OFFSET(KINTERRUPT_DispatchAddress, KINTERRUPT, DispatchAddress),
OFFSET(KINTERRUPT_Vector, KINTERRUPT, Vector),
OFFSET(KINTERRUPT_Irql, KINTERRUPT, Irql),
OFFSET(KINTERRUPT_SynchronizeIrql, KINTERRUPT, SynchronizeIrql),
OFFSET(KINTERRUPT_FloatingSave, KINTERRUPT, FloatingSave),
OFFSET(KINTERRUPT_Connected, KINTERRUPT, Connected),
OFFSET(KINTERRUPT_Number, KINTERRUPT, Number),
OFFSET(KINTERRUPT_ShareVector, KINTERRUPT, ShareVector),
OFFSET(KINTERRUPT_Mode, KINTERRUPT, Mode),
OFFSET(KINTERRUPT_ServiceCount, KINTERRUPT, ServiceCount),
OFFSET(KINTERRUPT_DispatchCount, KINTERRUPT, DispatchCount),
OFFSET(KINTERRUPT_TrapFrame, KINTERRUPT, TrapFrame),
OFFSET(KINTERRUPT_DispatchCode, KINTERRUPT, DispatchCode),

