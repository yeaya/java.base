#include <jdk/internal/jrtfs/RuntimeImage.h>

#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/RuntimeImageReader.h>
#include <jdk/internal/jrtfs/SystemImage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $RuntimeImageReader = ::jdk::internal::jimage::RuntimeImageReader;
using $SystemImage = ::jdk::internal::jrtfs::SystemImage;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _RuntimeImage_FieldInfo_[] = {
	{"reader", "Ljdk/internal/jimage/RuntimeImageReader;", nullptr, 0, $field(RuntimeImage, reader)},
	{}
};

$MethodInfo _RuntimeImage_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/RuntimeImageReader;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeImage::*)($RuntimeImageReader*)>(&RuntimeImage::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"findNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Node;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _RuntimeImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jrtfs.RuntimeImage",
	"jdk.internal.jrtfs.SystemImage",
	nullptr,
	_RuntimeImage_FieldInfo_,
	_RuntimeImage_MethodInfo_
};

$Object* allocate$RuntimeImage($Class* clazz) {
	return $of($alloc(RuntimeImage));
}

void RuntimeImage::init$($RuntimeImageReader* reader) {
	$SystemImage::init$();
	$set(this, reader, nullptr);
	$set(this, reader, reader);
}

$ImageReader$Node* RuntimeImage::findNode($String* path) {
	return $nc(this->reader)->findNode(path);
}

$bytes* RuntimeImage::getResource($ImageReader$Node* node) {
	return $nc(this->reader)->getResource(node);
}

void RuntimeImage::close() {
	$nc(this->reader)->close();
}

RuntimeImage::RuntimeImage() {
}

$Class* RuntimeImage::load$($String* name, bool initialize) {
	$loadClass(RuntimeImage, name, initialize, &_RuntimeImage_ClassInfo_, allocate$RuntimeImage);
	return class$;
}

$Class* RuntimeImage::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk