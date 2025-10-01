#ifndef _jdk_internal_vm_vector_VectorSupport$StoreVectorOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$StoreVectorOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$StoreVectorOperation
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

class $import VectorSupport$StoreVectorOperation : public ::java::lang::Object {
	$interface(VectorSupport$StoreVectorOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void store(Object$* container, int32_t index, ::jdk::internal::vm::vector::VectorSupport$Vector* v) {}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$StoreVectorOperation_h_