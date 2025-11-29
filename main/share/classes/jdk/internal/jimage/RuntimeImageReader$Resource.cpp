#include <jdk/internal/jimage/RuntimeImageReader$Resource.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/RuntimeImageLocation.h>
#include <jdk/internal/jimage/RuntimeImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $RuntimeImageLocation = ::jdk::internal::jimage::RuntimeImageLocation;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _RuntimeImageReader$Resource_FieldInfo_[] = {
	{"loc", "Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PRIVATE | $FINAL, $field(RuntimeImageReader$Resource, loc)},
	{}
};

$MethodInfo _RuntimeImageReader$Resource_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/RuntimeImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, $PRIVATE, $method(static_cast<void(RuntimeImageReader$Resource::*)($RuntimeImageLocation*,$BasicFileAttributes*)>(&RuntimeImageReader$Resource::init$))},
	{"compressedSize", "()J", nullptr, $PUBLIC},
	{"contentOffset", "()J", nullptr, $PUBLIC},
	{"create", "(Ljdk/internal/jimage/ImageReader$Directory;Ljdk/internal/jimage/RuntimeImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)Ljdk/internal/jimage/RuntimeImageReader$Resource;", nullptr, $STATIC, $method(static_cast<RuntimeImageReader$Resource*(*)($ImageReader$Directory*,$RuntimeImageLocation*,$BasicFileAttributes*)>(&RuntimeImageReader$Resource::create))},
	{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocation", "()Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PUBLIC},
	{"isCompleted", "()Z", nullptr, $PUBLIC},
	{"isResource", "()Z", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RuntimeImageReader$Resource_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.RuntimeImageReader$Resource", "jdk.internal.jimage.RuntimeImageReader", "Resource", $STATIC},
	{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RuntimeImageReader$Resource_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.RuntimeImageReader$Resource",
	"jdk.internal.jimage.ImageReader$Node",
	nullptr,
	_RuntimeImageReader$Resource_FieldInfo_,
	_RuntimeImageReader$Resource_MethodInfo_,
	nullptr,
	nullptr,
	_RuntimeImageReader$Resource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.RuntimeImageReader"
};

$Object* allocate$RuntimeImageReader$Resource($Class* clazz) {
	return $of($alloc(RuntimeImageReader$Resource));
}

void RuntimeImageReader$Resource::init$($RuntimeImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$ImageReader$Node::init$($($nc(loc)->getFullName(true)), fileAttrs);
	$set(this, loc, loc);
}

RuntimeImageReader$Resource* RuntimeImageReader$Resource::create($ImageReader$Directory* parent, $RuntimeImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$init(RuntimeImageReader$Resource);
	$var(RuntimeImageReader$Resource, rs, $new(RuntimeImageReader$Resource, loc, fileAttrs));
	$nc(parent)->addChild(rs);
	return rs;
}

bool RuntimeImageReader$Resource::isCompleted() {
	return true;
}

bool RuntimeImageReader$Resource::isResource() {
	return true;
}

$ImageLocation* RuntimeImageReader$Resource::getLocation() {
	return this->loc;
}

int64_t RuntimeImageReader$Resource::size() {
	return $nc(this->loc)->getUncompressedSize();
}

int64_t RuntimeImageReader$Resource::compressedSize() {
	return $nc(this->loc)->getCompressedSize();
}

$String* RuntimeImageReader$Resource::extension() {
	return $nc(this->loc)->getExtension();
}

int64_t RuntimeImageReader$Resource::contentOffset() {
	return $nc(this->loc)->getContentOffset();
}

RuntimeImageReader$Resource::RuntimeImageReader$Resource() {
}

$Class* RuntimeImageReader$Resource::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$Resource, name, initialize, &_RuntimeImageReader$Resource_ClassInfo_, allocate$RuntimeImageReader$Resource);
	return class$;
}

$Class* RuntimeImageReader$Resource::class$ = nullptr;

		} // jimage
	} // internal
} // jdk