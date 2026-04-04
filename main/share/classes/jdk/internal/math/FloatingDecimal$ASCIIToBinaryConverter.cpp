#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$Class* FloatingDecimal$ASCIIToBinaryConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doubleValue", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$ASCIIToBinaryConverter, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$ASCIIToBinaryConverter, floatValue, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter",
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
		"jdk.internal.math.FloatingDecimal"
	};
	$loadClass(FloatingDecimal$ASCIIToBinaryConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$ASCIIToBinaryConverter);
	});
	return class$;
}

$Class* FloatingDecimal$ASCIIToBinaryConverter::class$ = nullptr;

		} // math
	} // internal
} // jdk