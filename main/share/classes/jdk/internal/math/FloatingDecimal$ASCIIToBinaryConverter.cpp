#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter.h>

#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace jdk {
	namespace internal {
		namespace math {

$MethodInfo _FloatingDecimal$ASCIIToBinaryConverter_MethodInfo_[] = {
	{"doubleValue", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"floatValue", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _FloatingDecimal$ASCIIToBinaryConverter_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$ASCIIToBinaryConverter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter",
	nullptr,
	nullptr,
	nullptr,
	_FloatingDecimal$ASCIIToBinaryConverter_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$ASCIIToBinaryConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$ASCIIToBinaryConverter($Class* clazz) {
	return $of($alloc(FloatingDecimal$ASCIIToBinaryConverter));
}

$Class* FloatingDecimal$ASCIIToBinaryConverter::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$ASCIIToBinaryConverter, name, initialize, &_FloatingDecimal$ASCIIToBinaryConverter_ClassInfo_, allocate$FloatingDecimal$ASCIIToBinaryConverter);
	return class$;
}

$Class* FloatingDecimal$ASCIIToBinaryConverter::class$ = nullptr;

		} // math
	} // internal
} // jdk