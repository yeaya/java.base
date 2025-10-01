#ifndef _jdk_internal_vm_vector_VectorSupport$VectorMaskOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorMaskOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorMaskOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorMaskOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorMaskOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t apply(Object$* m) {return 0;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorMaskOp_h_