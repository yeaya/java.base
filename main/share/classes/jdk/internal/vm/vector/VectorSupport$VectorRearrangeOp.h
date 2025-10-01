#ifndef _jdk_internal_vm_vector_VectorSupport$VectorRearrangeOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorRearrangeOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$Vector;
				class VectorSupport$VectorShuffle;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorRearrangeOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorRearrangeOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$Vector* apply(::jdk::internal::vm::vector::VectorSupport$Vector* v1, ::jdk::internal::vm::vector::VectorSupport$VectorShuffle* shuffle) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorRearrangeOp_h_