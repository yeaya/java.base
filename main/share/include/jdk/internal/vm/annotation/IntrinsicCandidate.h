#ifndef _jdk_internal_vm_annotation_IntrinsicCandidate_h_
#define _jdk_internal_vm_annotation_IntrinsicCandidate_h_
//$ interface jdk.internal.vm.annotation.IntrinsicCandidate
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

class $import IntrinsicCandidate : public ::java::lang::annotation::Annotation {
	$interface(IntrinsicCandidate, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

			} // annotation
		} // vm
	} // internal
} // jdk

#endif // _jdk_internal_vm_annotation_IntrinsicCandidate_h_