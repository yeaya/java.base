#ifndef _jdk_internal_jrtfs_ExplodedImage$PathNode_h_
#define _jdk_internal_jrtfs_ExplodedImage$PathNode_h_
//$ class jdk.internal.jrtfs.ExplodedImage$PathNode
//$ extends jdk.internal.jimage.ImageReader$Node

#include <java/lang/Array.h>
#include <jdk/internal/jimage/ImageReader$Node.h>

namespace java {
	namespace nio {
		namespace file {
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
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class ExplodedImage;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class ExplodedImage$PathNode : public ::jdk::internal::jimage::ImageReader$Node {
	$class(ExplodedImage$PathNode, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageReader$Node)
public:
	ExplodedImage$PathNode();
	void init$(::jdk::internal::jrtfs::ExplodedImage* this$0, $String* name, ::java::nio::file::Path* path, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	void init$(::jdk::internal::jrtfs::ExplodedImage* this$0, $String* name, ::jdk::internal::jimage::ImageReader$Node* link);
	void init$(::jdk::internal::jrtfs::ExplodedImage* this$0, $String* name, ::java::util::List* children);
	virtual ::java::util::List* getChildren() override;
	$bytes* getContent();
	virtual bool isDirectory() override;
	virtual bool isLink() override;
	using ::jdk::internal::jimage::ImageReader$Node::resolveLink;
	virtual ::jdk::internal::jrtfs::ExplodedImage$PathNode* resolveLink(bool recursive) override;
	virtual int64_t size() override;
	::jdk::internal::jrtfs::ExplodedImage* this$0 = nullptr;
	::java::nio::file::Path* path = nullptr;
	::jdk::internal::jrtfs::ExplodedImage$PathNode* link = nullptr;
	::java::util::List* children = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_ExplodedImage$PathNode_h_