#include <sun/nio/fs/DynamicFileAttributeView.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace sun {
	namespace nio {
		namespace fs {

$Class* DynamicFileAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readAttributes", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DynamicFileAttributeView, readAttributes, $Map*, $StringArray*), "java.io.IOException"},
		{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicFileAttributeView, setAttribute, void, $String*, Object$*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.fs.DynamicFileAttributeView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DynamicFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DynamicFileAttributeView);
	});
	return class$;
}

$Class* DynamicFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun