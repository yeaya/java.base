#ifndef _jdk_internal_vm_vector_VectorSupport$VectorBroadcastIntOp_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorBroadcastIntOp_h_
//$ interface jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$Vector;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorBroadcastIntOp : public ::java::lang::Object {
	$interface(VectorSupport$VectorBroadcastIntOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$Vector* apply(::jdk::internal::vm::vector::VectorSupport$Vector* v, int32_t n) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorBroadcastIntOp_h_