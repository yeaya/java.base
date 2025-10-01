#ifndef _jdk_internal_ValueBased_h_
#define _jdk_internal_ValueBased_h_
//$ interface jdk.internal.ValueBased
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {

class ValueBased : public ::java::lang::annotation::Annotation {
	$interface(ValueBased, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

	} // internal
} // jdk

#endif // _jdk_internal_ValueBased_h_