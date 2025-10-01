#ifndef _jdk_internal_vm_vector_VectorSupport$VecInsertOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VecInsertOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VecInsertOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VecInsertOp : public ::java::lang::Object {
	$interface(VectorSupport$VecInsertOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* v1, int32_t idx, int64_t val) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VecInsertOp_h_