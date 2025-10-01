#ifndef _jdk_internal_vm_vector_VectorSupport$IndexOperation_h_
#define _jdk_internal_vm_vector_VectorSupport$IndexOperation_h_
//$ interface jdk.internal.vm.vector.VectorSupport$IndexOperation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$Vector;
				class VectorSupport$VectorSpecies;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$IndexOperation : public ::java::lang::Object {
	$interface(VectorSupport$IndexOperation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$Vector* index(::jdk::internal::vm::vector::VectorSupport$Vector* v, int32_t step, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$IndexOperation_h_