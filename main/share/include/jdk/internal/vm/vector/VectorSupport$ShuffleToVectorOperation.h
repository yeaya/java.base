#ifndef _jdk_internal_vm_vector_VectorSupport$ShuffleToVectorOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$ShuffleToVectorOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$ShuffleToVectorOperation : public ::java::lang::Object {
	$interface(VectorSupport$ShuffleToVectorOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$ShuffleToVectorOperation_h_