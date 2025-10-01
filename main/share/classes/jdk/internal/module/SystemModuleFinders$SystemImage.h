#ifndef _jdk_internal_module_SystemModuleFinders$SystemImage_h_
#define _jdk_internal_module_SystemModuleFinders$SystemImage_h_
//$ class jdk.internal.module.SystemModuleFinders$SystemImage
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("READER")
#undef READER

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$SystemImage : public ::java::lang::Object {
	$class(SystemModuleFinders$SystemImage, 0, ::java::lang::Object)
public:
	SystemModuleFinders$SystemImage();
	void init$();
	static ::jdk::internal::jimage::ImageReader* reader();
	static ::jdk::internal::jimage::ImageReader* READER;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("READER")

#endif // _jdk_internal_module_SystemModuleFinders$SystemImage_h_