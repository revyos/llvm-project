# RUN: llvm-mc %s -triple=riscv64 -mattr=+a,+xtheadcmo,+xtheadsync -riscv-no-aliases -filetype=obj \
# RUN:     | llvm-objdump --mattr=+a,+xtheadcmo,+xtheadsync -d - \
# RUN:     | FileCheck -check-prefixes=CHECK-A-XTHEADCMO-XTHEADSYNC %s

# CHECK-A-XTHEADCMO-XTHEADSYNC-LABEL: .text
# CHECK-A-XTHEADCMO-XTHEADSYNC:       th.sync.i
# CHECK-A-XTHEADCMO-XTHEADSYNC-NEXT:  j 0x80
# CHECK-A-XTHEADCMO-XTHEADSYNC-NEXT:  nop
# CHECK-A-XTHEADCMO-XTHEADSYNC-LABEL: th.dcache.cval1
# CHECK-A-XTHEADCMO-XTHEADSYNC-NEXT:  lr.w
# CHECK-A-XTHEADCMO-XTHEADSYNC-NEXT:  th.sync
# CHECK-A-XTHEADCMO-XTHEADSYNC-NEXT:  nop
lr.w a0, (a1)

