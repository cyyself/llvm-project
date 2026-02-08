// RUN: %clang_cc1 -triple x86_64-unknown-linux-gnu -O2 -emit-llvm \
// RUN:   -ftarget-clones-table=%S/Inputs/target-clones-table.json -o - %s | FileCheck %s

int foo(void) { return 0; }

// CHECK: define{{.*}} i32 @foo.arch_x86-64-v2.{{[0-9]+}}(
// CHECK: define{{.*}} i32 @foo.arch_x86-64-v3.{{[0-9]+}}(
// CHECK: define{{.*}} i32 @foo.arch_x86-64-v4.{{[0-9]+}}(
// CHECK: define{{.*}} i32 @foo.default.{{[0-9]+}}(
