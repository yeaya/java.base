#ifndef _jdk_internal_vm_vector_VectorSupport$LoadVectorOperationWithMap_h_
#define _jdk_internal_vm_vector_VectorSupport$LoadVectorOperationWithMap_h_
//$ interface jdk.internal.vm.vector.VectorSupport$LoadVectorOperationWithMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export VectorSupport$LoadVectorOperationWithMap : public ::java::lang::Object {
	$interface(VectorSupport$LoadVectorOperationWithMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::vm::vector::VectorSupport$Vector* loadWithMap(Object$* container, int32_t index, $ints* indexMap, int32_t indexM, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s) {return nullptr;}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$LoadVectorOperationWithMap_h_