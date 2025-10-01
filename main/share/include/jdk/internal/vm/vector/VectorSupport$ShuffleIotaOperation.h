#ifndef _jdk_internal_vm_vector_VectorSupport$ShuffleIotaOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$ShuffleIotaOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$VectorShuffle;
				class VectorSupport$VectorSpecies;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$ShuffleIotaOperation : public ::java::lang::Object {
	$interface(VectorSupport$ShuffleIotaOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$VectorShuffle* apply(int32_t length, int32_t start, int32_t step, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$ShuffleIotaOperation_h_