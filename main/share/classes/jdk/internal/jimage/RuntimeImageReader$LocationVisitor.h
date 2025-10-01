#ifndef _jdk_internal_jimage_RuntimeImageReader$LocationVisitor_h_
#define _jdk_internal_jimage_RuntimeImageReader$LocationVisitor_h_
//$ interface jdk.internal.jimage.RuntimeImageReader$LocationVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class RuntimeImageLocation;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export RuntimeImageReader$LocationVisitor : public ::java::lang::Object {
	$interface(RuntimeImageReader$LocationVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visit(::jdk::internal::jimage::RuntimeImageLocation* loc) {}
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_RuntimeImageReader$LocationVisitor_h_