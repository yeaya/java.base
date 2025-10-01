#ifndef _jdk_internal_vm_vector_VectorSupport$Vector_h_
#define _jdk_internal_vm_vector_VectorSupport$Vector_h_
//$ class jdk.internal.vm.vector.VectorSupport$Vector
//$ extends jdk.internal.vm.vector.VectorSupport$VectorPayload

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$Vector : public ::jdk::internal::vm::vector::VectorSupport$VectorPayload {
	$class(VectorSupport$Vector, $NO_CLASS_INIT, ::jdk::internal::vm::vector::VectorSupport$VectorPayload)
public:
	VectorSupport$Vector();
	void init$(Object$* payload);
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$Vector_h_