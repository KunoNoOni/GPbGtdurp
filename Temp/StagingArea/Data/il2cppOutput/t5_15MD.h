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

struct t5_15;
struct t5_15_marshaled;
struct t1_18;
struct t1_37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_15 (t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_16 (t1_1 * __this , t5_15 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t5_15 * m5_17 (t1_1 * __this , t1_18* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t5_15 * m5_18 (t1_1 * __this , t1_37 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t5_15 * m5_19 (t1_1 * __this , t1_37 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_15_marshal(const t5_15& unmarshaled, t5_15_marshaled& marshaled);
extern "C" void t5_15_marshal_back(const t5_15_marshaled& marshaled, t5_15& unmarshaled);
extern "C" void t5_15_marshal_cleanup(t5_15_marshaled& marshaled);
