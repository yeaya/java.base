#ifndef _jdk_internal_vm_vector_VectorSupport$VectorCompareOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorCompareOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorCompareOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$VectorCompareOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorCompareOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(int32_t cond, Object$* v1, Object$* v2) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorCompareOp_h_