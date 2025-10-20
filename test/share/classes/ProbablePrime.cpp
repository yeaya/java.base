#include <ProbablePrime.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _ProbablePrime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProbablePrime::*)()>(&ProbablePrime::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ProbablePrime::main))},
	{}
};

$ClassInfo _ProbablePrime_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ProbablePrime",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ProbablePrime_MethodInfo_
};

$Object* allocate$ProbablePrime($Class* clazz) {
	return $of($alloc(ProbablePrime));
}

void ProbablePrime::init$() {
}

void ProbablePrime::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(ProbablePrime, name, initialize, &_ProbablePrime_ClassInfo_, allocate$ProbablePrime);
	return class$;
}

$Class* ProbablePrime::class$ = nullptr;