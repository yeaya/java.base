#ifndef _jdk_internal_vm_vector_VectorSupport$StoreVectorOperationWithMap_h_
#define _jdk_internal_vm_vector_VectorSupport$StoreVectorOperationWithMap_h_
//$ interface jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export VectorSupport$StoreVectorOperationWithMap : public ::java::lang::Object {
	$interface(VectorSupport$StoreVectorOperationWithMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void storeWithMap(Object$* container, int32_t index, ::jdk::internal::vm::vector::VectorSupport$Vector* v, $ints* indexMap, int32_t indexM) {}
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$StoreVectorOperationWithMap_h_