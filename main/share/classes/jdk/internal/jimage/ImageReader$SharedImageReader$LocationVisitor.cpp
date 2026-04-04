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

$Class* ImageReader$SharedImageReader$LocationVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visit", "(Ljdk/internal/jimage/ImageLocation;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader$SharedImageReader$LocationVisitor, visit, void, $ImageLocation*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageReader$SharedImageReader", "jdk.internal.jimage.ImageReader", "SharedImageReader", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor", "jdk.internal.jimage.ImageReader$SharedImageReader", "LocationVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.ImageReader"
	};
	$loadClass(ImageReader$SharedImageReader$LocationVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReader$SharedImageReader$LocationVisitor);
	});
	return class$;
}

$Class* ImageReader$SharedImageReader$LocationVisitor::class$ = nullptr;

		} // jimage
	} // internal
} // jdk