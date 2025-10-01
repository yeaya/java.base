#ifndef _jdk_internal_vm_vector_VectorSupport$VectorConvertOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorConvertOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorConvertOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$VectorConvertOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorConvertOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* v, Object$* species) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorConvertOp_h_