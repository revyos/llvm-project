// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +xtheadvector \
// RUN:   -target-feature +d -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x half> @test_vfwcvt_f_x_v_f16m2
// CHECK-RV64-SAME: (<vscale x 8 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.th.vfwcvt.f.x.v.nxv8f16.nxv8i8.i64(<vscale x 8 x half> poison, <vscale x 8 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfwcvt_f_x_v_f16m2(vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x half> @test_vfwcvt_f_x_v_f16m4
// CHECK-RV64-SAME: (<vscale x 16 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.th.vfwcvt.f.x.v.nxv16f16.nxv16i8.i64(<vscale x 16 x half> poison, <vscale x 16 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfwcvt_f_x_v_f16m4(vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x half> @test_vfwcvt_f_x_v_f16m8
// CHECK-RV64-SAME: (<vscale x 32 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.th.vfwcvt.f.x.v.nxv32f16.nxv32i8.i64(<vscale x 32 x half> poison, <vscale x 32 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfwcvt_f_x_v_f16m8(vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x half> @test_vfwcvt_f_xu_v_f16m2
// CHECK-RV64-SAME: (<vscale x 8 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.th.vfwcvt.f.xu.v.nxv8f16.nxv8i8.i64(<vscale x 8 x half> poison, <vscale x 8 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfwcvt_f_xu_v_f16m2(vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x half> @test_vfwcvt_f_xu_v_f16m4
// CHECK-RV64-SAME: (<vscale x 16 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.th.vfwcvt.f.xu.v.nxv16f16.nxv16i8.i64(<vscale x 16 x half> poison, <vscale x 16 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfwcvt_f_xu_v_f16m4(vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x half> @test_vfwcvt_f_xu_v_f16m8
// CHECK-RV64-SAME: (<vscale x 32 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.th.vfwcvt.f.xu.v.nxv32f16.nxv32i8.i64(<vscale x 32 x half> poison, <vscale x 32 x i8> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfwcvt_f_xu_v_f16m8(vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_x_v_f32m2
// CHECK-RV64-SAME: (<vscale x 4 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.x.v.nxv4f32.nxv4i16.i64(<vscale x 4 x float> poison, <vscale x 4 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_x_v_f32m2(vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_x_v_f32m4
// CHECK-RV64-SAME: (<vscale x 8 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.x.v.nxv8f32.nxv8i16.i64(<vscale x 8 x float> poison, <vscale x 8 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_x_v_f32m4(vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_x_v_f32m8
// CHECK-RV64-SAME: (<vscale x 16 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.x.v.nxv16f32.nxv16i16.i64(<vscale x 16 x float> poison, <vscale x 16 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_x_v_f32m8(vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_xu_v_f32m2
// CHECK-RV64-SAME: (<vscale x 4 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.xu.v.nxv4f32.nxv4i16.i64(<vscale x 4 x float> poison, <vscale x 4 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_xu_v_f32m2(vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_xu_v_f32m4
// CHECK-RV64-SAME: (<vscale x 8 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.xu.v.nxv8f32.nxv8i16.i64(<vscale x 8 x float> poison, <vscale x 8 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_xu_v_f32m4(vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_xu_v_f32m8
// CHECK-RV64-SAME: (<vscale x 16 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.xu.v.nxv16f32.nxv16i16.i64(<vscale x 16 x float> poison, <vscale x 16 x i16> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_xu_v_f32m8(vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_f_v_f32m2
// CHECK-RV64-SAME: (<vscale x 4 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.f.v.nxv4f32.nxv4f16.i64(<vscale x 4 x float> poison, <vscale x 4 x half> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_f_v_f32m2(vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_f_v_f32m4
// CHECK-RV64-SAME: (<vscale x 8 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.f.v.nxv8f32.nxv8f16.i64(<vscale x 8 x float> poison, <vscale x 8 x half> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_f_v_f32m4(vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_f_v_f32m8
// CHECK-RV64-SAME: (<vscale x 16 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.f.v.nxv16f32.nxv16f16.i64(<vscale x 16 x float> poison, <vscale x 16 x half> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_f_v_f32m8(vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_x_v_f64m2
// CHECK-RV64-SAME: (<vscale x 2 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.x.v.nxv2f64.nxv2i32.i64(<vscale x 2 x double> poison, <vscale x 2 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_x_v_f64m2(vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_x_v_f64m4
// CHECK-RV64-SAME: (<vscale x 4 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.x.v.nxv4f64.nxv4i32.i64(<vscale x 4 x double> poison, <vscale x 4 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_x_v_f64m4(vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_x_v_f64m8
// CHECK-RV64-SAME: (<vscale x 8 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.x.v.nxv8f64.nxv8i32.i64(<vscale x 8 x double> poison, <vscale x 8 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_x_v_f64m8(vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_xu_v_f64m2
// CHECK-RV64-SAME: (<vscale x 2 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.xu.v.nxv2f64.nxv2i32.i64(<vscale x 2 x double> poison, <vscale x 2 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_xu_v_f64m2(vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_xu_v_f64m4
// CHECK-RV64-SAME: (<vscale x 4 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.xu.v.nxv4f64.nxv4i32.i64(<vscale x 4 x double> poison, <vscale x 4 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_xu_v_f64m4(vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_xu_v_f64m8
// CHECK-RV64-SAME: (<vscale x 8 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.xu.v.nxv8f64.nxv8i32.i64(<vscale x 8 x double> poison, <vscale x 8 x i32> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_xu_v_f64m8(vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_f_v_f64m2
// CHECK-RV64-SAME: (<vscale x 2 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.f.v.nxv2f64.nxv2f32.i64(<vscale x 2 x double> poison, <vscale x 2 x float> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_f_v_f64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_f_v_f64m4
// CHECK-RV64-SAME: (<vscale x 4 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.f.v.nxv4f64.nxv4f32.i64(<vscale x 4 x double> poison, <vscale x 4 x float> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_f_v_f64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_f_v_f64m8
// CHECK-RV64-SAME: (<vscale x 8 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.f.v.nxv8f64.nxv8f32.i64(<vscale x 8 x double> poison, <vscale x 8 x float> [[SRC]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_f_v_f64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8(src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x half> @test_vfwcvt_f_x_v_f16m2_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x half> [[MASKEDOFF:%.*]], <vscale x 8 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv8f16.nxv8i8.i64(<vscale x 8 x half> [[MASKEDOFF]], <vscale x 8 x i8> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfwcvt_f_x_v_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x half> @test_vfwcvt_f_x_v_f16m4_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x half> [[MASKEDOFF:%.*]], <vscale x 16 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv16f16.nxv16i8.i64(<vscale x 16 x half> [[MASKEDOFF]], <vscale x 16 x i8> [[SRC]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfwcvt_f_x_v_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x half> @test_vfwcvt_f_x_v_f16m8_m
// CHECK-RV64-SAME: (<vscale x 32 x i1> [[MASK:%.*]], <vscale x 32 x half> [[MASKEDOFF:%.*]], <vscale x 32 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv32f16.nxv32i8.i64(<vscale x 32 x half> [[MASKEDOFF]], <vscale x 32 x i8> [[SRC]], <vscale x 32 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfwcvt_f_x_v_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x half> @test_vfwcvt_f_xu_v_f16m2_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x half> [[MASKEDOFF:%.*]], <vscale x 8 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv8f16.nxv8i8.i64(<vscale x 8 x half> [[MASKEDOFF]], <vscale x 8 x i8> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x half> @test_vfwcvt_f_xu_v_f16m4_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x half> [[MASKEDOFF:%.*]], <vscale x 16 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv16f16.nxv16i8.i64(<vscale x 16 x half> [[MASKEDOFF]], <vscale x 16 x i8> [[SRC]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x half> @test_vfwcvt_f_xu_v_f16m8_m
// CHECK-RV64-SAME: (<vscale x 32 x i1> [[MASK:%.*]], <vscale x 32 x half> [[MASKEDOFF:%.*]], <vscale x 32 x i8> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv32f16.nxv32i8.i64(<vscale x 32 x half> [[MASKEDOFF]], <vscale x 32 x i8> [[SRC]], <vscale x 32 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_x_v_f32m2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], <vscale x 4 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv4f32.nxv4i16.i64(<vscale x 4 x float> [[MASKEDOFF]], <vscale x 4 x i16> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_x_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_x_v_f32m4_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], <vscale x 8 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv8f32.nxv8i16.i64(<vscale x 8 x float> [[MASKEDOFF]], <vscale x 8 x i16> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_x_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_x_v_f32m8_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], <vscale x 16 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv16f32.nxv16i16.i64(<vscale x 16 x float> [[MASKEDOFF]], <vscale x 16 x i16> [[SRC]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_x_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_xu_v_f32m2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], <vscale x 4 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv4f32.nxv4i16.i64(<vscale x 4 x float> [[MASKEDOFF]], <vscale x 4 x i16> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_xu_v_f32m4_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], <vscale x 8 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv8f32.nxv8i16.i64(<vscale x 8 x float> [[MASKEDOFF]], <vscale x 8 x i16> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_xu_v_f32m8_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], <vscale x 16 x i16> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv16f32.nxv16i16.i64(<vscale x 16 x float> [[MASKEDOFF]], <vscale x 16 x i16> [[SRC]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vfwcvt_f_f_v_f32m2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], <vscale x 4 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv4f32.nxv4f16.i64(<vscale x 4 x float> [[MASKEDOFF]], <vscale x 4 x half> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfwcvt_f_f_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vfwcvt_f_f_v_f32m4_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], <vscale x 8 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv8f32.nxv8f16.i64(<vscale x 8 x float> [[MASKEDOFF]], <vscale x 8 x half> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfwcvt_f_f_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vfwcvt_f_f_v_f32m8_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], <vscale x 16 x half> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv16f32.nxv16f16.i64(<vscale x 16 x float> [[MASKEDOFF]], <vscale x 16 x half> [[SRC]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfwcvt_f_f_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_x_v_f64m2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x double> [[MASKEDOFF:%.*]], <vscale x 2 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv2f64.nxv2i32.i64(<vscale x 2 x double> [[MASKEDOFF]], <vscale x 2 x i32> [[SRC]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_x_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_x_v_f64m4_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x double> [[MASKEDOFF:%.*]], <vscale x 4 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv4f64.nxv4i32.i64(<vscale x 4 x double> [[MASKEDOFF]], <vscale x 4 x i32> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_x_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_x_v_f64m8_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x double> [[MASKEDOFF:%.*]], <vscale x 8 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.x.v.mask.nxv8f64.nxv8i32.i64(<vscale x 8 x double> [[MASKEDOFF]], <vscale x 8 x i32> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_x_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_xu_v_f64m2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x double> [[MASKEDOFF:%.*]], <vscale x 2 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv2f64.nxv2i32.i64(<vscale x 2 x double> [[MASKEDOFF]], <vscale x 2 x i32> [[SRC]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_xu_v_f64m4_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x double> [[MASKEDOFF:%.*]], <vscale x 4 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv4f64.nxv4i32.i64(<vscale x 4 x double> [[MASKEDOFF]], <vscale x 4 x i32> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_xu_v_f64m8_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x double> [[MASKEDOFF:%.*]], <vscale x 8 x i32> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.xu.v.mask.nxv8f64.nxv8i32.i64(<vscale x 8 x double> [[MASKEDOFF]], <vscale x 8 x i32> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x double> @test_vfwcvt_f_f_v_f64m2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x double> [[MASKEDOFF:%.*]], <vscale x 2 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv2f64.nxv2f32.i64(<vscale x 2 x double> [[MASKEDOFF]], <vscale x 2 x float> [[SRC]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfwcvt_f_f_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x double> @test_vfwcvt_f_f_v_f64m4_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x double> [[MASKEDOFF:%.*]], <vscale x 4 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv4f64.nxv4f32.i64(<vscale x 4 x double> [[MASKEDOFF]], <vscale x 4 x float> [[SRC]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfwcvt_f_f_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_m(mask, maskedoff, src, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x double> @test_vfwcvt_f_f_v_f64m8_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x double> [[MASKEDOFF:%.*]], <vscale x 8 x float> [[SRC:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.th.vfwcvt.f.f.v.mask.nxv8f64.nxv8f32.i64(<vscale x 8 x double> [[MASKEDOFF]], <vscale x 8 x float> [[SRC]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfwcvt_f_f_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_m(mask, maskedoff, src, vl);
}
