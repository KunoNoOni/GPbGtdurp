﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t5_242;
struct t5_5;
struct t5_5_marshaled;
struct t1_29;
struct t1_170;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1370_gshared (t5_242 * __this, t5_5 * p0, t1_29 * p1, bool p2, const MethodInfo* method);
#define m5_1370(__this, p0, p1, p2, method) (( void (*) (t5_242 *, t5_5 *, t1_29 *, bool, const MethodInfo*))m5_1370_gshared)(__this, p0, p1, p2, method)
extern "C" void m5_1503_gshared (t5_242 * __this, t1_170* p0, const MethodInfo* method);
#define m5_1503(__this, p0, method) (( void (*) (t5_242 *, t1_170*, const MethodInfo*))m5_1503_gshared)(__this, p0, method)
