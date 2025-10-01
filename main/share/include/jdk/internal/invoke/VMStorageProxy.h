#ifndef _jdk_internal_invoke_VMStorageProxy_h_
#define _jdk_internal_invoke_VMStorageProxy_h_
//$ interface jdk.internal.invoke.VMStorageProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace invoke {

class $import VMStorageProxy : public ::java::lang::Object {
	$interface(VMStorageProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t index() {return 0;}
	virtual int32_t type() {return 0;}
};

		} // invoke
	} // internal
} // jdk

#endif // _jdk_internal_invoke_VMStorageProxy_h_