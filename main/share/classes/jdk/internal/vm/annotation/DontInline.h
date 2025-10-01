#ifndef _jdk_internal_vm_annotation_DontInline_h_
#define _jdk_internal_vm_annotation_DontInline_h_
//$ interface jdk.internal.vm.annotation.DontInline
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

class $export DontInline : public ::java::lang::annotation::Annotation {
	$interface(DontInline, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

			} // annotation
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_annotation_DontInline_h_