#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t5_14;
struct t5_14_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_12 (t5_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_13 (t5_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_14 (t5_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_14_marshal(const t5_14& unmarshaled, t5_14_marshaled& marshaled);
extern "C" void t5_14_marshal_back(const t5_14_marshaled& marshaled, t5_14& unmarshaled);
extern "C" void t5_14_marshal_cleanup(t5_14_marshaled& marshaled);
