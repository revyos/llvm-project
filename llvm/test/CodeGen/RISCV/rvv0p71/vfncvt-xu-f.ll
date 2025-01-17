; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: sed 's/iXLen/i32/g' %s | llc -mtriple=riscv32 -mattr=+xtheadvector,+zfh,+d \
; RUN:   -verify-machineinstrs | FileCheck %s
; RUN: sed 's/iXLen/i64/g' %s | llc -mtriple=riscv64 -mattr=+xtheadvector,+zfh,+d \
; RUN:   -verify-machineinstrs | FileCheck %s

declare <vscale x 8 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i8.nxv8f16(
  <vscale x 8 x i8>,
  <vscale x 8 x half>,
  iXLen, iXLen);

define <vscale x 8 x i8> @intrinsic_vfncvt_xu.f.w_nxv8i8_nxv8f16(<vscale x 8 x half> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv8i8_nxv8f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v10, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v10
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i8.nxv8f16(
    <vscale x 8 x i8> undef,
    <vscale x 8 x half> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 8 x i8> %a
}

declare <vscale x 8 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i8.nxv8f16(
  <vscale x 8 x i8>,
  <vscale x 8 x half>,
  <vscale x 8 x i1>,
  iXLen, iXLen);

define <vscale x 8 x i8> @intrinsic_vfncvt_mask_xu.f.w_nxv8i8_nxv8f16(<vscale x 8 x i8> %0, <vscale x 8 x half> %1, <vscale x 8 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv8i8_nxv8f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v10, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i8.nxv8f16(
    <vscale x 8 x i8> %0,
    <vscale x 8 x half> %1,
    <vscale x 8 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 8 x i8> %a
}

declare <vscale x 16 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv16i8.nxv16f16(
  <vscale x 16 x i8>,
  <vscale x 16 x half>,
  iXLen, iXLen);

define <vscale x 16 x i8> @intrinsic_vfncvt_xu.f.w_nxv16i8_nxv16f16(<vscale x 16 x half> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv16i8_nxv16f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v12, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v12
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 16 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv16i8.nxv16f16(
    <vscale x 16 x i8> undef,
    <vscale x 16 x half> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 16 x i8> %a
}

declare <vscale x 16 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv16i8.nxv16f16(
  <vscale x 16 x i8>,
  <vscale x 16 x half>,
  <vscale x 16 x i1>,
  iXLen, iXLen);

define <vscale x 16 x i8> @intrinsic_vfncvt_mask_xu.f.w_nxv16i8_nxv16f16(<vscale x 16 x i8> %0, <vscale x 16 x half> %1, <vscale x 16 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv16i8_nxv16f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v12, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 16 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv16i8.nxv16f16(
    <vscale x 16 x i8> %0,
    <vscale x 16 x half> %1,
    <vscale x 16 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 16 x i8> %a
}

declare <vscale x 32 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv32i8.nxv32f16(
  <vscale x 32 x i8>,
  <vscale x 32 x half>,
  iXLen, iXLen);

define <vscale x 32 x i8> @intrinsic_vfncvt_xu.f.w_nxv32i8_nxv32f16(<vscale x 32 x half> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv32i8_nxv32f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v16, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v16
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 32 x i8> @llvm.riscv.th.vfncvt.xu.f.w.nxv32i8.nxv32f16(
    <vscale x 32 x i8> undef,
    <vscale x 32 x half> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 32 x i8> %a
}

declare <vscale x 32 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv32i8.nxv32f16(
  <vscale x 32 x i8>,
  <vscale x 32 x half>,
  <vscale x 32 x i1>,
  iXLen, iXLen);

define <vscale x 32 x i8> @intrinsic_vfncvt_mask_xu.f.w_nxv32i8_nxv32f16(<vscale x 32 x i8> %0, <vscale x 32 x half> %1, <vscale x 32 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv32i8_nxv32f16:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e8, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v16, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 32 x i8> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv32i8.nxv32f16(
    <vscale x 32 x i8> %0,
    <vscale x 32 x half> %1,
    <vscale x 32 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 32 x i8> %a
}

declare <vscale x 4 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv4i16.nxv4f32(
  <vscale x 4 x i16>,
  <vscale x 4 x float>,
  iXLen, iXLen);

define <vscale x 4 x i16> @intrinsic_vfncvt_xu.f.w_nxv4i16_nxv4f32(<vscale x 4 x float> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv4i16_nxv4f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v10, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v10
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 4 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv4i16.nxv4f32(
    <vscale x 4 x i16> undef,
    <vscale x 4 x float> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 4 x i16> %a
}

declare <vscale x 4 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv4i16.nxv4f32(
  <vscale x 4 x i16>,
  <vscale x 4 x float>,
  <vscale x 4 x i1>,
  iXLen, iXLen);

define <vscale x 4 x i16> @intrinsic_vfncvt_mask_xu.f.w_nxv4i16_nxv4f32(<vscale x 4 x i16> %0, <vscale x 4 x float> %1, <vscale x 4 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv4i16_nxv4f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v10, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 4 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv4i16.nxv4f32(
    <vscale x 4 x i16> %0,
    <vscale x 4 x float> %1,
    <vscale x 4 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 4 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i16.nxv8f32(
  <vscale x 8 x i16>,
  <vscale x 8 x float>,
  iXLen, iXLen);

define <vscale x 8 x i16> @intrinsic_vfncvt_xu.f.w_nxv8i16_nxv8f32(<vscale x 8 x float> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv8i16_nxv8f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v12, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v12
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i16.nxv8f32(
    <vscale x 8 x i16> undef,
    <vscale x 8 x float> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 8 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i16.nxv8f32(
  <vscale x 8 x i16>,
  <vscale x 8 x float>,
  <vscale x 8 x i1>,
  iXLen, iXLen);

define <vscale x 8 x i16> @intrinsic_vfncvt_mask_xu.f.w_nxv8i16_nxv8f32(<vscale x 8 x i16> %0, <vscale x 8 x float> %1, <vscale x 8 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv8i16_nxv8f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v12, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i16.nxv8f32(
    <vscale x 8 x i16> %0,
    <vscale x 8 x float> %1,
    <vscale x 8 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 8 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv16i16.nxv16f32(
  <vscale x 16 x i16>,
  <vscale x 16 x float>,
  iXLen, iXLen);

define <vscale x 16 x i16> @intrinsic_vfncvt_xu.f.w_nxv16i16_nxv16f32(<vscale x 16 x float> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv16i16_nxv16f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v16, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v16
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 16 x i16> @llvm.riscv.th.vfncvt.xu.f.w.nxv16i16.nxv16f32(
    <vscale x 16 x i16> undef,
    <vscale x 16 x float> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 16 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv16i16.nxv16f32(
  <vscale x 16 x i16>,
  <vscale x 16 x float>,
  <vscale x 16 x i1>,
  iXLen, iXLen);

define <vscale x 16 x i16> @intrinsic_vfncvt_mask_xu.f.w_nxv16i16_nxv16f32(<vscale x 16 x i16> %0, <vscale x 16 x float> %1, <vscale x 16 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv16i16_nxv16f32:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e16, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v16, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 16 x i16> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv16i16.nxv16f32(
    <vscale x 16 x i16> %0,
    <vscale x 16 x float> %1,
    <vscale x 16 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 16 x i16> %a
}

declare <vscale x 2 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv2i32.nxv2f64(
  <vscale x 2 x i32>,
  <vscale x 2 x double>,
  iXLen, iXLen);

define <vscale x 2 x i32> @intrinsic_vfncvt_xu.f.w_nxv2i32_nxv2f64(<vscale x 2 x double> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv2i32_nxv2f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v10, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v10
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 2 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv2i32.nxv2f64(
    <vscale x 2 x i32> undef,
    <vscale x 2 x double> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 2 x i32> %a
}

declare <vscale x 2 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv2i32.nxv2f64(
  <vscale x 2 x i32>,
  <vscale x 2 x double>,
  <vscale x 2 x i1>,
  iXLen, iXLen);

define <vscale x 2 x i32> @intrinsic_vfncvt_mask_xu.f.w_nxv2i32_nxv2f64(<vscale x 2 x i32> %0, <vscale x 2 x double> %1, <vscale x 2 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv2i32_nxv2f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m1, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v10, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 2 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv2i32.nxv2f64(
    <vscale x 2 x i32> %0,
    <vscale x 2 x double> %1,
    <vscale x 2 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 2 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv4i32.nxv4f64(
  <vscale x 4 x i32>,
  <vscale x 4 x double>,
  iXLen, iXLen);

define <vscale x 4 x i32> @intrinsic_vfncvt_xu.f.w_nxv4i32_nxv4f64(<vscale x 4 x double> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv4i32_nxv4f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v12, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v12
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 4 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv4i32.nxv4f64(
    <vscale x 4 x i32> undef,
    <vscale x 4 x double> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 4 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv4i32.nxv4f64(
  <vscale x 4 x i32>,
  <vscale x 4 x double>,
  <vscale x 4 x i1>,
  iXLen, iXLen);

define <vscale x 4 x i32> @intrinsic_vfncvt_mask_xu.f.w_nxv4i32_nxv4f64(<vscale x 4 x i32> %0, <vscale x 4 x double> %1, <vscale x 4 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv4i32_nxv4f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m2, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v12, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 4 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv4i32.nxv4f64(
    <vscale x 4 x i32> %0,
    <vscale x 4 x double> %1,
    <vscale x 4 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 4 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i32.nxv8f64(
  <vscale x 8 x i32>,
  <vscale x 8 x double>,
  iXLen, iXLen);

define <vscale x 8 x i32> @intrinsic_vfncvt_xu.f.w_nxv8i32_nxv8f64(<vscale x 8 x double> %0, iXLen %1) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_xu.f.w_nxv8i32_nxv8f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v16, v8
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    th.vmv.v.v v8, v16
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i32> @llvm.riscv.th.vfncvt.xu.f.w.nxv8i32.nxv8f64(
    <vscale x 8 x i32> undef,
    <vscale x 8 x double> %0,
    iXLen 0, iXLen %1)

  ret <vscale x 8 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i32.nxv8f64(
  <vscale x 8 x i32>,
  <vscale x 8 x double>,
  <vscale x 8 x i1>,
  iXLen, iXLen);

define <vscale x 8 x i32> @intrinsic_vfncvt_mask_xu.f.w_nxv8i32_nxv8f64(<vscale x 8 x i32> %0, <vscale x 8 x double> %1, <vscale x 8 x i1> %2, iXLen %3) nounwind {
; CHECK-LABEL: intrinsic_vfncvt_mask_xu.f.w_nxv8i32_nxv8f64:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    th.vsetvli zero, a0, e32, m4, d1
; CHECK-NEXT:    fsrmi a0, 0
; CHECK-NEXT:    th.vfncvt.xu.f.v v8, v16, v0.t
; CHECK-NEXT:    fsrm a0
; CHECK-NEXT:    ret
entry:
  %a = call <vscale x 8 x i32> @llvm.riscv.th.vfncvt.xu.f.w.mask.nxv8i32.nxv8f64(
    <vscale x 8 x i32> %0,
    <vscale x 8 x double> %1,
    <vscale x 8 x i1> %2,
    iXLen 0, iXLen %3)

  ret <vscale x 8 x i32> %a
}
