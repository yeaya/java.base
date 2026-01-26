#include <sun/nio/fs/DynamicFileAttributeView.h>

#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _DynamicFileAttributeView_MethodInfo_[] = {
	{"readAttributes", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DynamicFileAttributeView, readAttributes, $Map*, $StringArray*), "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicFileAttributeView, setAttribute, void, $String*, Object$*), "java.io.IOException"},
	{}
};

$ClassInfo _DynamicFileAttributeView_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.fs.DynamicFileAttributeView",
	nullptr,
	nullptr,
	nullptr,
	_DynamicFileAttributeView_MethodInfo_
};

$Object* allocate$DynamicFileAttributeView($Class* clazz) {
	return $of($alloc(DynamicFileAttributeView));
}

$Class* DynamicFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(DynamicFileAttributeView, name, initialize, &_DynamicFileAttributeView_ClassInfo_, allocate$DynamicFileAttributeView);
	return class$;
}

$Class* DynamicFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun