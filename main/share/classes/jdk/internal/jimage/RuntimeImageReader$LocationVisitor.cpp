#include <jdk/internal/jimage/RuntimeImageReader$LocationVisitor.h>
#include <jdk/internal/jimage/RuntimeImageLocation.h>
#include <jdk/internal/jimage/RuntimeImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeImageLocation = ::jdk::internal::jimage::RuntimeImageLocation;

namespace jdk {
	namespace internal {
		namespace jimage {

$Class* RuntimeImageReader$LocationVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visit", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeImageReader$LocationVisitor, visit, void, $RuntimeImageLocation*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.RuntimeImageReader$LocationVisitor", "jdk.internal.jimage.RuntimeImageReader", "LocationVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.jimage.RuntimeImageReader$LocationVisitor",
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
		"jdk.internal.jimage.RuntimeImageReader"
	};
	$loadClass(RuntimeImageReader$LocationVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeImageReader$LocationVisitor);
	});
	return class$;
}

$Class* RuntimeImageReader$LocationVisitor::class$ = nullptr;

		} // jimage
	} // internal
} // jdk