#include <jdk/internal/jimage/ImageStrings.h>

#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _ImageStrings_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"match", "(ILjava/lang/String;I)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageStrings_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.jimage.ImageStrings",
	nullptr,
	nullptr,
	nullptr,
	_ImageStrings_MethodInfo_
};

$Object* allocate$ImageStrings($Class* clazz) {
	return $of($alloc(ImageStrings));
}

int32_t ImageStrings::match(int32_t offset, $String* string, int32_t stringOffset) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* ImageStrings::load$($String* name, bool initialize) {
	$loadClass(ImageStrings, name, initialize, &_ImageStrings_ClassInfo_, allocate$ImageStrings);
	return class$;
}

$Class* ImageStrings::class$ = nullptr;

		} // jimage
	} // internal
} // jdk