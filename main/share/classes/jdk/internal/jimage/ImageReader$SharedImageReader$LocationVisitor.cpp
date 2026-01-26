#include <jdk/internal/jimage/ImageReader$SharedImageReader$LocationVisitor.h>

#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader$SharedImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _ImageReader$SharedImageReader$LocationVisitor_MethodInfo_[] = {
	{"visit", "(Ljdk/internal/jimage/ImageLocation;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader$SharedImageReader$LocationVisitor, visit, void, $ImageLocation*)},
	{}
};

$InnerClassInfo _ImageReader$SharedImageReader$LocationVisitor_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageReader$SharedImageReader", "jdk.internal.jimage.ImageReader", "SharedImageReader", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor", "jdk.internal.jimage.ImageReader$SharedImageReader", "LocationVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageReader$SharedImageReader$LocationVisitor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor",
	nullptr,
	nullptr,
	nullptr,
	_ImageReader$SharedImageReader$LocationVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_ImageReader$SharedImageReader$LocationVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageReader"
};

$Object* allocate$ImageReader$SharedImageReader$LocationVisitor($Class* clazz) {
	return $of($alloc(ImageReader$SharedImageReader$LocationVisitor));
}

$Class* ImageReader$SharedImageReader$LocationVisitor::load$($String* name, bool initialize) {
	$loadClass(ImageReader$SharedImageReader$LocationVisitor, name, initialize, &_ImageReader$SharedImageReader$LocationVisitor_ClassInfo_, allocate$ImageReader$SharedImageReader$LocationVisitor);
	return class$;
}

$Class* ImageReader$SharedImageReader$LocationVisitor::class$ = nullptr;

		} // jimage
	} // internal
} // jdk