#ifndef _jdk_internal_jrtfs_RuntimeImage_h_
#define _jdk_internal_jrtfs_RuntimeImage_h_
//$ class jdk.internal.jrtfs.RuntimeImage
//$ extends jdk.internal.jrtfs.SystemImage

#include <java/lang/Array.h>
#include <jdk/internal/jrtfs/SystemImage.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader$Node;
			class RuntimeImageReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class RuntimeImage : public ::jdk::internal::jrtfs::SystemImage {
	$class(RuntimeImage, $NO_CLASS_INIT, ::jdk::internal::jrtfs::SystemImage)
public:
	RuntimeImage();
	void init$(::jdk::internal::jimage::RuntimeImageReader* reader);
	virtual void close() override;
	virtual ::jdk::internal::jimage::ImageReader$Node* findNode($String* path) override;
	virtual $bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node) override;
	::jdk::internal::jimage::RuntimeImageReader* reader = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_RuntimeImage_h_