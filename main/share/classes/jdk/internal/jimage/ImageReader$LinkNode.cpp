#include <jdk/internal/jimage/ImageReader$LinkNode.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageReader$LinkNode_FieldInfo_[] = {
	{"link", "Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE | $FINAL, $field(ImageReader$LinkNode, link)},
	{}
};

$MethodInfo _ImageReader$LinkNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljdk/internal/jimage/ImageReader$Node;)V", nullptr, $PRIVATE, $method(ImageReader$LinkNode, init$, void, $String*, $ImageReader$Node*)},
	{"create", "(Ljdk/internal/jimage/ImageReader$Directory;Ljava/lang/String;Ljdk/internal/jimage/ImageReader$Node;)Ljdk/internal/jimage/ImageReader$LinkNode;", nullptr, $STATIC, $staticMethod(ImageReader$LinkNode, create, ImageReader$LinkNode*, $ImageReader$Directory*, $String*, $ImageReader$Node*)},
	{"isCompleted", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$LinkNode, isCompleted, bool)},
	{"isLink", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$LinkNode, isLink, bool)},
	{"resolveLink", "(Z)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC, $virtualMethod(ImageReader$LinkNode, resolveLink, $ImageReader$Node*, bool)},
	{}
};

$InnerClassInfo _ImageReader$LinkNode_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageReader$LinkNode", "jdk.internal.jimage.ImageReader", "LinkNode", $STATIC},
	{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageReader$LinkNode_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageReader$LinkNode",
	"jdk.internal.jimage.ImageReader$Node",
	nullptr,
	_ImageReader$LinkNode_FieldInfo_,
	_ImageReader$LinkNode_MethodInfo_,
	nullptr,
	nullptr,
	_ImageReader$LinkNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageReader"
};

$Object* allocate$ImageReader$LinkNode($Class* clazz) {
	return $of($alloc(ImageReader$LinkNode));
}

void ImageReader$LinkNode::init$($String* name, $ImageReader$Node* link) {
	$ImageReader$Node::init$(name, $($nc(link)->getFileAttributes()));
	$set(this, link, link);
}

ImageReader$LinkNode* ImageReader$LinkNode::create($ImageReader$Directory* parent, $String* name, $ImageReader$Node* link) {
	$init(ImageReader$LinkNode);
	$var(ImageReader$LinkNode, ln, $new(ImageReader$LinkNode, name, link));
	$nc(parent)->addChild(ln);
	return ln;
}

bool ImageReader$LinkNode::isCompleted() {
	return true;
}

$ImageReader$Node* ImageReader$LinkNode::resolveLink(bool recursive) {
	return (recursive && $instanceOf(ImageReader$LinkNode, this->link)) ? $nc(($cast(ImageReader$LinkNode, this->link)))->resolveLink(true) : this->link;
}

bool ImageReader$LinkNode::isLink() {
	return true;
}

ImageReader$LinkNode::ImageReader$LinkNode() {
}

$Class* ImageReader$LinkNode::load$($String* name, bool initialize) {
	$loadClass(ImageReader$LinkNode, name, initialize, &_ImageReader$LinkNode_ClassInfo_, allocate$ImageReader$LinkNode);
	return class$;
}

$Class* ImageReader$LinkNode::class$ = nullptr;

		} // jimage
	} // internal
} // jdk