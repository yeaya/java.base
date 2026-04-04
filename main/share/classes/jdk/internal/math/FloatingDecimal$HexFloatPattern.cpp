#include <jdk/internal/math/FloatingDecimal$HexFloatPattern.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace jdk {
	namespace internal {
		namespace math {

$Pattern* FloatingDecimal$HexFloatPattern::VALUE = nullptr;

void FloatingDecimal$HexFloatPattern::init$() {
}

void FloatingDecimal$HexFloatPattern::clinit$($Class* clazz) {
	$assignStatic(FloatingDecimal$HexFloatPattern::VALUE, $Pattern::compile("([-+])?0[xX](((\\p{XDigit}+)\\.?)|((\\p{XDigit}*)\\.(\\p{XDigit}+)))[pP]([-+])?(\\p{Digit}+)[fFdD]?"_s));
}

FloatingDecimal$HexFloatPattern::FloatingDecimal$HexFloatPattern() {
}

$Class* FloatingDecimal$HexFloatPattern::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"VALUE", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$HexFloatPattern, VALUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FloatingDecimal$HexFloatPattern, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$HexFloatPattern", "jdk.internal.math.FloatingDecimal", "HexFloatPattern", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.math.FloatingDecimal$HexFloatPattern",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FloatingDecimal"
	};
	$loadClass(FloatingDecimal$HexFloatPattern, name, initialize, &classInfo$$, FloatingDecimal$HexFloatPattern::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$HexFloatPattern);
	});
	return class$;
}

$Class* FloatingDecimal$HexFloatPattern::class$ = nullptr;

		} // math
	} // internal
} // jdk