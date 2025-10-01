#ifndef _jdk_internal_jimage_ImageReaderFactory$1_h_
#define _jdk_internal_jimage_ImageReaderFactory$1_h_
//$ class jdk.internal.jimage.ImageReaderFactory$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageReaderFactory$1 : public ::java::util::function::Function {
	$class(ImageReaderFactory$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	ImageReaderFactory$1();
	void init$();
	virtual ::jdk::internal::jimage::ImageReader* apply(::java::nio::file::Path* path);
	virtual $Object* apply(Object$* path) override;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageReaderFactory$1_h_