#include <ProbablePrime.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void ProbablePrime::init$() {
}

void ProbablePrime::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($BigInteger, num, $new($BigInteger, "4"_s));
	$var($ints, certainties, $new($ints, {
		-1,
		0,
		1,
		2,
		100,
		$Integer::MAX_VALUE - 1,
		$Integer::MAX_VALUE
	}));
	$var($booleans, expectations, $new($booleans, {
		true,
		true,
		false,
		false,
		false,
		false,
		false
	}));
	for (int32_t i = 0; i < certainties->length; ++i) {
		bool b = false;
		if ((b = num->isProbablePrime(certainties->get(i))) != expectations->get(i)) {
			$throwNew($RuntimeException, $$str({"Unexpected answer "_s, $$str(b), " for certainty "_s, $$str(certainties->get(i))}));
		}
	}
}

ProbablePrime::ProbablePrime() {
}

$Class* ProbablePrime::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProbablePrime, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProbablePrime, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ProbablePrime",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ProbablePrime, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProbablePrime);
	});
	return class$;
}

$Class* ProbablePrime::class$ = nullptr;