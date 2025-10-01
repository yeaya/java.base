#ifndef _jdk_internal_vm_vector_VectorSupport$TernaryOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$TernaryOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$TernaryOperation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$TernaryOperation : public ::java::lang::Object {
	$interface(VectorSupport$TernaryOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* v1, Object$* v2, Object$* v3) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$TernaryOperation_h_