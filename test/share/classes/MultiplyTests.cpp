#include <MultiplyTests.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$MethodInfo _MultiplyTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiplyTests::*)()>(&MultiplyTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultiplyTests::main))},
	{"multiplyTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&MultiplyTests::multiplyTests))},
	{}
};

$ClassInfo _MultiplyTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiplyTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MultiplyTests_MethodInfo_
};

$Object* allocate$MultiplyTests($Class* clazz) {
	return $of($alloc(MultiplyTests));
}

void MultiplyTests::init$() {
}

int32_t MultiplyTests::multiplyTests() {
	int32_t failures = 0;
	$var($BigDecimalArray, bd1, $new($BigDecimalArray, {
		$$new($BigDecimal, "123456789"_s),
		$$new($BigDecimal, "1234567898"_s),
		$$new($BigDecimal, "12345678987"_s)
	}));
	$var($BigDecimalArray, bd2, $new($BigDecimalArray, {
		$$new($BigDecimal, "987654321"_s),
		$$new($BigDecimal, "8987654321"_s),
		$$new($BigDecimal, "78987654321"_s)
	}));
	$var($BigDecimalArray2, expectedResults, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "121932631112635269"_s),
			$$new($BigDecimal, "1109586943112635269"_s),
			$$new($BigDecimal, "9751562173112635269"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1219326319027587258"_s),
			$$new($BigDecimal, "11095869503027587258"_s),
			$$new($BigDecimal, "97515622363027587258"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "12193263197189452827"_s),
			$$new($BigDecimal, "110958695093189452827"_s),
			$$new($BigDecimal, "975156224183189452827"_s)
		})
	}));
	for (int32_t i = 0; i < bd1->length; ++i) {
		for (int32_t j = 0; j < bd2->length; ++j) {
			if (!$nc($($nc(bd1->get(i))->multiply(bd2->get(j))))->equals($nc(expectedResults->get(i))->get(j))) {
				++failures;
			}
		}
	}
	$var($BigDecimal, x, $BigDecimal::valueOf(8, 1));
	$var($BigDecimal, xPower, $BigDecimal::valueOf((int64_t)-1));
	try {
		for (int32_t i = 0; i < 100; ++i) {
			$assign(xPower, $nc(xPower)->multiply(x));
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		++failures;
	}
	return failures;
}

void MultiplyTests::main($StringArray* args) {
	int32_t failures = 0;
	failures += multiplyTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing multiply."_s}));
	}
}

MultiplyTests::MultiplyTests() {
}

$Class* MultiplyTests::load$($String* name, bool initialize) {
	$loadClass(MultiplyTests, name, initialize, &_MultiplyTests_ClassInfo_, allocate$MultiplyTests);
	return class$;
}

$Class* MultiplyTests::class$ = nullptr;