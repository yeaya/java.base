#include <Extrema.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_NORMAL
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Extrema::init$() {
}

void Extrema::main($StringArray* args) {
	if ($Double::MIN_VALUE != $Double::longBitsToDouble(1)) {
		$throwNew($RuntimeException, "Double.MIN_VALUE is not equal to longBitsToDouble(0x1L)."_s);
	}
	if ($Double::MIN_NORMAL != $Double::longBitsToDouble((int64_t)0x0010000000000000)) {
		$throwNew($RuntimeException, "Double.MIN_NORMAL is not equal to longBitsToDouble(0x0010000000000000L)."_s);
	}
	if ($Double::MAX_VALUE != $Double::longBitsToDouble((int64_t)0x7fefffffffffffff)) {
		$throwNew($RuntimeException, "Double.MAX_VALUE is not equal to longBitsToDouble(0x7fefffffffffffffL)."_s);
	}
}

Extrema::Extrema() {
}

$Class* Extrema::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Extrema, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Extrema, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Extrema",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Extrema, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Extrema);
	});
	return class$;
}

$Class* Extrema::class$ = nullptr;