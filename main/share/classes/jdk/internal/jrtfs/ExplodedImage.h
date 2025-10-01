#ifndef _jdk_internal_jrtfs_ExplodedImage_h_
#define _jdk_internal_jrtfs_ExplodedImage_h_
//$ class jdk.internal.jrtfs.ExplodedImage
//$ extends jdk.internal.jrtfs.SystemImage

#include <java/lang/Array.h>
#include <jdk/internal/jrtfs/SystemImage.h>

#pragma push_macro("MODULES")
#undef MODULES
#pragma push_macro("PACKAGES")
#undef PACKAGES
#pragma push_macro("PACKAGES_LEN")
#undef PACKAGES_LEN

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class ExplodedImage : public ::jdk::internal::jrtfs::SystemImage {
	$class(ExplodedImage, 0, ::jdk::internal::jrtfs::SystemImage)
public:
	ExplodedImage();
	void init$(::java::nio::file::Path* modulesDir);
	virtual void close() override;
	virtual ::jdk::internal::jimage::ImageReader$Node* findModulesNode($String* str);
	virtual ::jdk::internal::jimage::ImageReader$Node* findNode($String* str) override;
	$String* frontSlashToNativeSlash($String* str);
	virtual $bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node) override;
	void initNodes();
	static bool lambda$initNodes$0(::java::nio::file::Path* x$0);
	void lambda$initNodes$1(::java::nio::file::Path* module, ::java::util::Map* packageToModules, $String* moduleName, ::java::nio::file::Path* p);
	$String* nativeSlashToFrontSlash($String* str);
	$String* slashesToDots($String* str);
	virtual ::java::nio::file::Path* underlyingPath($String* str);
	static $String* MODULES;
	static $String* PACKAGES;
	static int32_t PACKAGES_LEN;
	::java::nio::file::FileSystem* defaultFS = nullptr;
	$String* separator = nullptr;
	::java::util::Map* nodes = nullptr;
	::java::nio::file::attribute::BasicFileAttributes* modulesDirAttrs = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#pragma pop_macro("MODULES")
#pragma pop_macro("PACKAGES")
#pragma pop_macro("PACKAGES_LEN")

#endif // _jdk_internal_jrtfs_ExplodedImage_h_