#ifndef _jdk_internal_jrtfs_SystemImage_h_
#define _jdk_internal_jrtfs_SystemImage_h_
//$ class jdk.internal.jrtfs.SystemImage
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RUNTIME_HOME")
#undef RUNTIME_HOME

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
			class ImageReader$Node;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class SystemImage : public ::java::lang::Object {
	$class(SystemImage, 0, ::java::lang::Object)
public:
	SystemImage();
	void init$();
	virtual void close() {}
	static $String* findHome();
	virtual ::jdk::internal::jimage::ImageReader$Node* findNode($String* path) {return nullptr;}
	virtual $bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node) {return nullptr;}
	static ::jdk::internal::jrtfs::SystemImage* open();
	static $String* RUNTIME_HOME;
	static ::java::nio::file::Path* moduleImageFile;
	static bool modulesImageExists;
	static ::java::nio::file::Path* explodedModulesDir;
};

		} // jrtfs
	} // internal
} // jdk

#pragma pop_macro("RUNTIME_HOME")

#endif // _jdk_internal_jrtfs_SystemImage_h_