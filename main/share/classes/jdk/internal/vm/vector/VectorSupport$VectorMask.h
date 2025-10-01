#ifndef _jdk_internal_vm_vector_VectorSupport$VectorMask_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorMask_h_
//$ class jdk.internal.vm.vector.VectorSupport$VectorMask
//$ extends jdk.internal.vm.vector.VectorSupport$VectorPayload

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorMask : public ::jdk::internal::vm::vector::VectorSupport$VectorPayload {
	$class(VectorSupport$VectorMask, $NO_CLASS_INIT, ::jdk::internal::vm::vector::VectorSupport$VectorPayload)
public:
	VectorSupport$VectorMask();
	void init$(Object$* payload);
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorMask_h_