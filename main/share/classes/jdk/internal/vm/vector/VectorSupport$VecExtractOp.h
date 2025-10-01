#ifndef _jdk_internal_vm_vector_VectorSupport$VecExtractOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VecExtractOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VecExtractOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VecExtractOp : public ::java::lang::Object {
	$interface(VectorSupport$VecExtractOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t apply(Object$* v1, int32_t idx) {return 0;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VecExtractOp_h_