#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>
#include <java/lang/Appendable.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$Class* FloatingDecimal$BinaryToASCIIConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appendTo", "(Ljava/lang/Appendable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, appendTo, void, $Appendable*)},
		{"decimalDigitsExact", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, decimalDigitsExact, bool)},
		{"digitsRoundedUp", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, digitsRoundedUp, bool)},
		{"getDecimalExponent", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, getDecimalExponent, int32_t)},
		{"getDigits", "([C)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, getDigits, int32_t, $chars*)},
		{"isExceptional", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, isExceptional, bool)},
		{"isNegative", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, isNegative, bool)},
		{"toJavaFormatString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatingDecimal$BinaryToASCIIConverter, toJavaFormatString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter",
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
	$loadClass(FloatingDecimal$BinaryToASCIIConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$BinaryToASCIIConverter);
	});
	return class$;
}

$Class* FloatingDecimal$BinaryToASCIIConverter::class$ = nullptr;

		} // math
	} // internal
} // jdk