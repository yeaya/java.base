#ifndef _jdk_internal_invoke_NativeEntryPoint_h_
#define _jdk_internal_invoke_NativeEntryPoint_h_
//$ class jdk.internal.invoke.NativeEntryPoint
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace invoke {
			class ABIDescriptorProxy;
			class VMStorageProxy;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace invoke {

class $import NativeEntryPoint : public ::java::lang::Object {
	$class(NativeEntryPoint, 0, ::java::lang::Object)
public:
	NativeEntryPoint();
	void init$(int32_t shadowSpace, $longs* argMoves, $longs* returnMoves, bool needTransition, ::java::lang::invoke::MethodType* methodType, $String* name);
	static $longs* encodeVMStorages($Array<::jdk::internal::invoke::VMStorageProxy>* moves);
	static ::jdk::internal::invoke::NativeEntryPoint* make($String* name, ::jdk::internal::invoke::ABIDescriptorProxy* abi, $Array<::jdk::internal::invoke::VMStorageProxy>* argMoves, $Array<::jdk::internal::invoke::VMStorageProxy>* returnMoves, bool needTransition, ::java::lang::invoke::MethodType* methodType);
	static void registerNatives();
	virtual ::java::lang::invoke::MethodType* type();
	static int64_t vmStorageToVMReg(int32_t type, int32_t index);
	int32_t shadowSpace = 0;
	$longs* argMoves = nullptr;
	$longs* returnMoves = nullptr;
	bool needTransition = false;
	::java::lang::invoke::MethodType* methodType = nullptr;
	$String* name = nullptr;
};

		} // invoke
	} // internal
} // jdk

#endif // _jdk_internal_invoke_NativeEntryPoint_h_