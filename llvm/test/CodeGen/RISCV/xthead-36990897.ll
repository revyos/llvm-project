; RUN: llc -mtriple=riscv64 -mattr=+a,+xtheadcmo,+xtheadsync -verify-machineinstrs -filetype=obj < %s \
; RUN:   | llvm-objdump -d  - | FileCheck -check-prefix=RV64IAXTHEADCMOXTHEADSYNC %s
; RUN: llc -mtriple=riscv64 -mattr=+a,+xtheadcmo,+xtheadsync -verify-machineinstrs -filetype=obj -riscv-xthead-id="none" < %s \
; RUN:   | llvm-objdump -d  - | FileCheck -check-prefix=RV64IA %s

define i1 @cmpxchg_i32_seq_cst_seq_cst(ptr %ptr, i32 signext %cmp,
; RV64IAXTHEADCMOXTHEADSYNC-LABEL: <cmpxchg_i32_seq_cst_seq_cst>:
; RV64IAXTHEADCMOXTHEADSYNC:       th.sync.i
; RV64IAXTHEADCMOXTHEADSYNC-NEXT:  j 0x80
; RV64IAXTHEADCMOXTHEADSYNC-NEXT:  nop
; RV64IAXTHEADCMOXTHEADSYNC-LABEL: th.dcache.cval1
; RV64IAXTHEADCMOXTHEADSYNC:       lr.w.aqrl
; RV64IAXTHEADCMOXTHEADSYNC-NEXT:  th.sync
; RV64IAXTHEADCMOXTHEADSYNC-NEXT:  nop
; RV64IAXTHEADCMOXTHEADSYNC-LABEL: ret
; RV64IA-LABEL: <cmpxchg_i32_seq_cst_seq_cst>:
; RV64IA:       lr.w.aqrl
        i32 signext %val) nounwind {
entry:
  %0 = cmpxchg ptr %ptr, i32 %cmp, i32 %val seq_cst seq_cst
  %1 = extractvalue { i32, i1 } %0, 1
  ret i1 %1
}
