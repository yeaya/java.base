#include <jdk/internal/jrtfs/SystemImage$1.h>

#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/jrtfs/SystemImage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $SystemImage = ::jdk::internal::jrtfs::SystemImage;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _SystemImage$1_FieldInfo_[] = {
	{"val$image", "Ljdk/internal/jimage/ImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(SystemImage$1, val$image)},
	{}
};

$MethodInfo _SystemImage$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/ImageReader;)V", nullptr, 0, $method(SystemImage$1, init$, void, $ImageReader*)},
	{"close", "()V", nullptr, 0, $virtualMethod(SystemImage$1, close, void), "java.io.IOException"},
	{"findNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $virtualMethod(SystemImage$1, findNode, $ImageReader$Node*, $String*), "java.io.IOException"},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Node;)[B", nullptr, 0, $virtualMethod(SystemImage$1, getResource, $bytes*, $ImageReader$Node*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SystemImage$1_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.SystemImage",
	"open",
	"()Ljdk/internal/jrtfs/SystemImage;"
};

$InnerClassInfo _SystemImage$1_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.SystemImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SystemImage$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.SystemImage$1",
	"jdk.internal.jrtfs.SystemImage",
	nullptr,
	_SystemImage$1_FieldInfo_,
	_SystemImage$1_MethodInfo_,
	nullptr,
	&_SystemImage$1_EnclosingMethodInfo_,
	_SystemImage$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.SystemImage"
};

$Object* allocate$SystemImage$1($Class* clazz) {
	return $of($alloc(SystemImage$1));
}

void SystemImage$1::init$($ImageReader* val$image) {
	$set(this, val$image, val$image);
	$SystemImage::init$();
}

$ImageReader$Node* SystemImage$1::findNode($String* path) {
	return $nc(this->val$image)->findNode(path);
}

$bytes* SystemImage$1::getResource($ImageReader$Node* node) {
	return $nc(this->val$image)->getResource(node);
}

void SystemImage$1::close() {
	$nc(this->val$image)->close();
}

SystemImage$1::SystemImage$1() {
}

$Class* SystemImage$1::load$($String* name, bool initialize) {
	$loadClass(SystemImage$1, name, initialize, &_SystemImage$1_ClassInfo_, allocate$SystemImage$1);
	return class$;
}

$Class* SystemImage$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk