#ifndef _jdk_internal_jimage_ImageReader$LinkNode_h_
#define _jdk_internal_jimage_ImageReader$LinkNode_h_
//$ class jdk.internal.jimage.ImageReader$LinkNode
//$ extends jdk.internal.jimage.ImageReader$Node

#include <jdk/internal/jimage/ImageReader$Node.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader$Directory;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import ImageReader$LinkNode : public ::jdk::internal::jimage::ImageReader$Node {
	$class(ImageReader$LinkNode, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageReader$Node)
public:
	ImageReader$LinkNode();
	void init$($String* name, ::jdk::internal::jimage::ImageReader$Node* link);
	static ::jdk::internal::jimage::ImageReader$LinkNode* create(::jdk::internal::jimage::ImageReader$Directory* parent, $String* name, ::jdk::internal::jimage::ImageReader$Node* link);
	virtual bool isCompleted() override;
	virtual bool isLink() override;
	using ::jdk::internal::jimage::ImageReader$Node::resolveLink;
	virtual ::jdk::internal::jimage::ImageReader$Node* resolveLink(bool recursive) override;
	::jdk::internal::jimage::ImageReader$Node* link = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageReader$LinkNode_h_