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

struct t5_11;
struct t5_11_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_614 (t5_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_11_marshal(const t5_11& unmarshaled, t5_11_marshaled& marshaled);
extern "C" void t5_11_marshal_back(const t5_11_marshaled& marshaled, t5_11& unmarshaled);
extern "C" void t5_11_marshal_cleanup(t5_11_marshaled& marshaled);
