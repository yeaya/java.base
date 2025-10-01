#ifndef _jdk_internal_vm_vector_VectorSupport$BroadcastOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$BroadcastOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$BroadcastOperation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$VectorSpecies;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport$BroadcastOperation : public ::java::lang::Object {
	$interface(VectorSupport$BroadcastOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* broadcast(int64_t l, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$BroadcastOperation_h_