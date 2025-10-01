#ifndef _jdk_internal_invoke_ABIDescriptorProxy_h_
#define _jdk_internal_invoke_ABIDescriptorProxy_h_
//$ interface jdk.internal.invoke.ABIDescriptorProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace invoke {

class $import ABIDescriptorProxy : public ::java::lang::Object {
	$interface(ABIDescriptorProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t shadowSpaceBytes() {return 0;}
};

		} // invoke
	} // internal
} // jdk

#endif // _jdk_internal_invoke_ABIDescriptorProxy_h_