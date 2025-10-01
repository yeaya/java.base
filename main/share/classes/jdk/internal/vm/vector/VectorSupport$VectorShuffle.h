#ifndef _jdk_internal_vm_vector_VectorSupport$VectorShuffle_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorShuffle_h_
//$ class jdk.internal.vm.vector.VectorSupport$VectorShuffle
//$ extends jdk.internal.vm.vector.VectorSupport$VectorPayload

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$VectorShuffle : public ::jdk::internal::vm::vector::VectorSupport$VectorPayload {
	$class(VectorSupport$VectorShuffle, $NO_CLASS_INIT, ::jdk::internal::vm::vector::VectorSupport$VectorPayload)
public:
	VectorSupport$VectorShuffle();
	void init$(Object$* payload);
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorShuffle_h_