#include <jdk/internal/jimage/ImageStrings.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace jdk {
	namespace internal {
		namespace jimage {

int32_t ImageStrings::match(int32_t offset, $String* string, int32_t stringOffset) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* ImageStrings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageStrings, add, int32_t, $String*)},
		{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageStrings, get, $String*, int32_t)},
		{"match", "(ILjava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(ImageStrings, match, int32_t, int32_t, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.jimage.ImageStrings",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageStrings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageStrings);
	});
	return class$;
}

$Class* ImageStrings::class$ = nullptr;

		} // jimage
	} // internal
} // jdk