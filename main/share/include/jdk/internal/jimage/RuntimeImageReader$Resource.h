#ifndef _jdk_internal_jimage_RuntimeImageReader$Resource_h_
#define _jdk_internal_jimage_RuntimeImageReader$Resource_h_
//$ class jdk.internal.jimage.RuntimeImageReader$Resource
//$ extends jdk.internal.jimage.ImageReader$Node

#include <jdk/internal/jimage/ImageReader$Node.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageLocation;
			class ImageReader$Directory;
			class RuntimeImageLocation;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import RuntimeImageReader$Resource : public ::jdk::internal::jimage::ImageReader$Node {
	$class(RuntimeImageReader$Resource, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageReader$Node)
public:
	RuntimeImageReader$Resource();
	void init$(::jdk::internal::jimage::RuntimeImageLocation* loc, ::java::nio::file::attribute::BasicFileAttributes* fileAttrs);
	virtual int64_t compressedSize() override;
	virtual int64_t contentOffset() override;
	static ::jdk::internal::jimage::RuntimeImageReader$Resource* create(::jdk::internal::jimage::ImageReader$Directory* parent, ::jdk::internal::jimage::RuntimeImageLocation* loc, ::java::nio::file::attribute::BasicFileAttributes* fileAttrs);
	virtual $String* extension() override;
	virtual ::jdk::internal::jimage::ImageLocation* getLocation() override;
	virtual bool isCompleted() override;
	virtual bool isResource() override;
	virtual int64_t size() override;
	::jdk::internal::jimage::RuntimeImageLocation* loc = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_RuntimeImageReader$Resource_h_