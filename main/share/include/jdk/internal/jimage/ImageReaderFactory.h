#ifndef _jdk_internal_jimage_ImageReaderFactory_h_
#define _jdk_internal_jimage_ImageReaderFactory_h_
//$ class jdk.internal.jimage.ImageReaderFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OPENER")
#undef OPENER
#pragma push_macro("JAVA_HOME")
#undef JAVA_HOME
#pragma push_macro("BOOT_MODULES_JIMAGE")
#undef BOOT_MODULES_JIMAGE

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
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

class $import ImageReaderFactory : public ::java::lang::Object {
	$class(ImageReaderFactory, 0, ::java::lang::Object)
public:
	ImageReaderFactory();
	void init$();
	static ::jdk::internal::jimage::ImageReader* get(::java::nio::file::Path* jimage);
	static ::jdk::internal::jimage::ImageReader* getImageReader();
	static $String* JAVA_HOME;
	static ::java::nio::file::Path* BOOT_MODULES_JIMAGE;
	static ::java::util::Map* readers;
	static ::java::util::function::Function* OPENER;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("OPENER")
#pragma pop_macro("JAVA_HOME")
#pragma pop_macro("BOOT_MODULES_JIMAGE")

#endif // _jdk_internal_jimage_ImageReaderFactory_h_