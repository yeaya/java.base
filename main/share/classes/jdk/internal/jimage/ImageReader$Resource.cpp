#include <jdk/internal/jimage/ImageReader$Resource.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _ImageReader$Resource_FieldInfo_[] = {
	{"loc", "Ljdk/internal/jimage/ImageLocation;", nullptr, $PRIVATE | $FINAL, $field(ImageReader$Resource, loc)},
	{}
};

$MethodInfo _ImageReader$Resource_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/ImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageReader$Resource::*)($ImageLocation*,$BasicFileAttributes*)>(&ImageReader$Resource::init$))},
	{"compressedSize", "()J", nullptr, $PUBLIC},
	{"contentOffset", "()J", nullptr, $PUBLIC},
	{"create", "(Ljdk/internal/jimage/ImageReader$Directory;Ljdk/internal/jimage/ImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)Ljdk/internal/jimage/ImageReader$Resource;", nullptr, $STATIC, $method(static_cast<ImageReader$Resource*(*)($ImageReader$Directory*,$ImageLocation*,$BasicFileAttributes*)>(&ImageReader$Resource::create))},
	{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocation", "()Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC},
	{"isCompleted", "()Z", nullptr, $PUBLIC},
	{"isResource", "()Z", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageReader$Resource_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageReader$Resource", "jdk.internal.jimage.ImageReader", "Resource", $STATIC},
	{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageReader$Resource_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageReader$Resource",
	"jdk.internal.jimage.ImageReader$Node",
	nullptr,
	_ImageReader$Resource_FieldInfo_,
	_ImageReader$Resource_MethodInfo_,
	nullptr,
	nullptr,
	_ImageReader$Resource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageReader"
};

$Object* allocate$ImageReader$Resource($Class* clazz) {
	return $of($alloc(ImageReader$Resource));
}

void ImageReader$Resource::init$($ImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$ImageReader$Node::init$($($nc(loc)->getFullName(true)), fileAttrs);
	$set(this, loc, loc);
}

ImageReader$Resource* ImageReader$Resource::create($ImageReader$Directory* parent, $ImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$init(ImageReader$Resource);
	$var(ImageReader$Resource, rs, $new(ImageReader$Resource, loc, fileAttrs));
	$nc(parent)->addChild(rs);
	return rs;
}

bool ImageReader$Resource::isCompleted() {
	return true;
}

bool ImageReader$Resource::isResource() {
	return true;
}

$ImageLocation* ImageReader$Resource::getLocation() {
	return this->loc;
}

int64_t ImageReader$Resource::size() {
	return $nc(this->loc)->getUncompressedSize();
}

int64_t ImageReader$Resource::compressedSize() {
	return $nc(this->loc)->getCompressedSize();
}

$String* ImageReader$Resource::extension() {
	return $nc(this->loc)->getExtension();
}

int64_t ImageReader$Resource::contentOffset() {
	return $nc(this->loc)->getContentOffset();
}

ImageReader$Resource::ImageReader$Resource() {
}

$Class* ImageReader$Resource::load$($String* name, bool initialize) {
	$loadClass(ImageReader$Resource, name, initialize, &_ImageReader$Resource_ClassInfo_, allocate$ImageReader$Resource);
	return class$;
}

$Class* ImageReader$Resource::class$ = nullptr;

		} // jimage
	} // internal
} // jdk