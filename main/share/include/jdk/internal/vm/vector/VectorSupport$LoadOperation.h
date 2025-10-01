#ifndef _jdk_internal_vm_vector_VectorSupport$LoadOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$LoadOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$LoadOperation
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

class $import VectorSupport$LoadOperation : public ::java::lang::Object {
	$interface(VectorSupport$LoadOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* load(Object$* container, int32_t index, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$LoadOperation_h_