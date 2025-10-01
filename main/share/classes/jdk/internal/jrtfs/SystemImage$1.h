#ifndef _jdk_internal_jrtfs_SystemImage$1_h_
#define _jdk_internal_jrtfs_SystemImage$1_h_
//$ class jdk.internal.jrtfs.SystemImage$1
//$ extends jdk.internal.jrtfs.SystemImage

#include <java/lang/Array.h>
#include <jdk/internal/jrtfs/SystemImage.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader;
			class ImageReader$Node;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class SystemImage$1 : public ::jdk::internal::jrtfs::SystemImage {
	$class(SystemImage$1, $NO_CLASS_INIT, ::jdk::internal::jrtfs::SystemImage)
public:
	SystemImage$1();
	void init$(::jdk::internal::jimage::ImageReader* val$image);
	virtual void close() override;
	virtual ::jdk::internal::jimage::ImageReader$Node* findNode($String* path) override;
	virtual $bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node) override;
	::jdk::internal::jimage::ImageReader* val$image = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_SystemImage$1_h_