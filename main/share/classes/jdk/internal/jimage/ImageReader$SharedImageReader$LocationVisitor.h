#ifndef _jdk_internal_jimage_ImageReader$SharedImageReader$LocationVisitor_h_
#define _jdk_internal_jimage_ImageReader$SharedImageReader$LocationVisitor_h_
//$ interface jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageLocation;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageReader$SharedImageReader$LocationVisitor : public ::java::lang::Object {
	$interface(ImageReader$SharedImageReader$LocationVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visit(::jdk::internal::jimage::ImageLocation* loc) {}
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageReader$SharedImageReader$LocationVisitor_h_