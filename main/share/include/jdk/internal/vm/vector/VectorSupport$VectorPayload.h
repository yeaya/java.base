#ifndef _jdk_internal_vm_vector_VectorSupport$VectorPayload_h_
#define _jdk_internal_vm_vector_VectorSupport$VectorPayload_h_
//$ class jdk.internal.vm.vector.VectorSupport$VectorPayload
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $import VectorSupport$VectorPayload : public ::java::lang::Object {
	$class(VectorSupport$VectorPayload, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VectorSupport$VectorPayload();
	void init$(Object$* payload);
	$Object* getPayload();
	$Object* payload = nullptr;
};

			} // vector
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_vector_VectorSupport$VectorPayload_h_