#ifndef _jdk_internal_vm_VMSupport_h_
#define _jdk_internal_vm_VMSupport_h_
//$ class jdk.internal.vm.VMSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace jdk {
	namespace internal {
		namespace vm {

class $import VMSupport : public ::java::lang::Object {
	$class(VMSupport, 0, ::java::lang::Object)
public:
	VMSupport();
	void init$();
	static ::java::util::Properties* getAgentProperties();
	static $String* getVMTemporaryDirectory();
	static ::java::util::Properties* initAgentProperties(::java::util::Properties* props);
	static $bytes* serializeAgentPropertiesToByteArray();
	static $bytes* serializePropertiesToByteArray(::java::util::Properties* p);
	static $bytes* serializePropertiesToByteArray();
	static ::java::util::Properties* agentProps;
};

		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_VMSupport_h_