#ifndef _jdk_internal_vm_annotation_Contended_h_
#define _jdk_internal_vm_annotation_Contended_h_
//$ interface jdk.internal.vm.annotation.Contended
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

class $import Contended : public ::java::lang::annotation::Annotation {
	$interface(Contended, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

			} // annotation
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_annotation_Contended_h_