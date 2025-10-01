#ifndef _jdk_internal_jimage_ImageReader$Directory_h_
#define _jdk_internal_jimage_ImageReader$Directory_h_
//$ class jdk.internal.jimage.ImageReader$Directory
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
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import ImageReader$Directory : public ::jdk::internal::jimage::ImageReader$Node {
	$class(ImageReader$Directory, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageReader$Node)
public:
	ImageReader$Directory();
	void init$($String* name, ::java::nio::file::attribute::BasicFileAttributes* fileAttrs);
	void addChild(::jdk::internal::jimage::ImageReader$Node* node);
	static ::jdk::internal::jimage::ImageReader$Directory* create(::jdk::internal::jimage::ImageReader$Directory* parent, $String* name, ::java::nio::file::attribute::BasicFileAttributes* fileAttrs);
	virtual ::java::util::List* getChildren() override;
	virtual bool isDirectory() override;
	void walk(::java::util::function::Consumer* consumer);
	::java::util::List* children = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageReader$Directory_h_