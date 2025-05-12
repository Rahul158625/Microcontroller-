 area lab10,code,readonly
start
;disabling
	mrs r0,cpsr;
	bic r0,r0,#0x80;
	msr cpsr_c,r0;
;enabling
	mrs r0,cpsr
	orr r0,r0,#0x80;
	msr cpsr_c,r0;
;stopping
	bx lr
	end

