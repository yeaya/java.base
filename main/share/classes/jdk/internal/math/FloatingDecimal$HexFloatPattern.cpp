#include <jdk/internal/math/FloatingDecimal$HexFloatPattern.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal$HexFloatPattern_FieldInfo_[] = {
	{"VALUE", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$HexFloatPattern, VALUE)},
	{}
};

$MethodInfo _FloatingDecimal$HexFloatPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatingDecimal$HexFloatPattern::*)()>(&FloatingDecimal$HexFloatPattern::init$))},
	{}
};

$InnerClassInfo _FloatingDecimal$HexFloatPattern_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$HexFloatPattern", "jdk.internal.math.FloatingDecimal", "HexFloatPattern", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FloatingDecimal$HexFloatPattern_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$HexFloatPattern",
	"java.lang.Object",
	nullptr,
	_FloatingDecimal$HexFloatPattern_FieldInfo_,
	_FloatingDecimal$HexFloatPattern_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$HexFloatPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$HexFloatPattern($Class* clazz) {
	return $of($alloc(FloatingDecimal$HexFloatPattern));
}


$Pattern* FloatingDecimal$HexFloatPattern::VALUE = nullptr;

void FloatingDecimal$HexFloatPattern::init$() {
}

void clinit$FloatingDecimal$HexFloatPattern($Class* class$) {
	$assignStatic(FloatingDecimal$HexFloatPattern::VALUE, $Pattern::compile("([-+])?0[xX](((\\p{XDigit}+)\\.?)|((\\p{XDigit}*)\\.(\\p{XDigit}+)))[pP]([-+])?(\\p{Digit}+)[fFdD]?"_s));
}

FloatingDecimal$HexFloatPattern::FloatingDecimal$HexFloatPattern() {
}

$Class* FloatingDecimal$HexFloatPattern::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$HexFloatPattern, name, initialize, &_FloatingDecimal$HexFloatPattern_ClassInfo_, clinit$FloatingDecimal$HexFloatPattern, allocate$FloatingDecimal$HexFloatPattern);
	return class$;
}

$Class* FloatingDecimal$HexFloatPattern::class$ = nullptr;

		} // math
	} // internal
} // jdk