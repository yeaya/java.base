#ifndef _jdk_internal_vm_vector_VectorSupport$VectorBlendOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorBlendOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorBlendOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$Vector;
				class VectorSupport$VectorMask;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorBlendOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorBlendOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$Vector* apply(::jdk::internal::vm::vector::VectorSupport$Vector* v1, ::jdk::internal::vm::vector::VectorSupport$Vector* v2, ::jdk::internal::vm::vector::VectorSupport$VectorMask* mask) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorBlendOp_h_