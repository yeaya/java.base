#include <ToPlainStringTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$MethodInfo _ToPlainStringTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ToPlainStringTests::*)()>(&ToPlainStringTests::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ToPlainStringTests::main))},
	{}
};

$ClassInfo _ToPlainStringTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ToPlainStringTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ToPlainStringTests_MethodInfo_
};

$Object* allocate$ToPlainStringTests($Class* clazz) {
	return $of($alloc(ToPlainStringTests));
}

void ToPlainStringTests::init$() {
}

void ToPlainStringTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray2, testCases, $new($StringArray2, {
		$$new($StringArray, {
			"0"_s,
			"0"_s
		}),
		$$new($StringArray, {
			"1"_s,
			"1"_s
		}),
		$$new($StringArray, {
			"10"_s,
			"10"_s
		}),
		$$new($StringArray, {
			"2e1"_s,
			"20"_s
		}),
		$$new($StringArray, {
			"3e2"_s,
			"300"_s
		}),
		$$new($StringArray, {
			"4e3"_s,
			"4000"_s
		}),
		$$new($StringArray, {
			"5e4"_s,
			"50000"_s
		}),
		$$new($StringArray, {
			"6e5"_s,
			"600000"_s
		}),
		$$new($StringArray, {
			"7e6"_s,
			"7000000"_s
		}),
		$$new($StringArray, {
			"8e7"_s,
			"80000000"_s
		}),
		$$new($StringArray, {
			"9e8"_s,
			"900000000"_s
		}),
		$$new($StringArray, {
			"1e9"_s,
			"1000000000"_s
		}),
		$$new($StringArray, {
			".0"_s,
			"0.0"_s
		}),
		$$new($StringArray, {
			".1"_s,
			"0.1"_s
		}),
		$$new($StringArray, {
			".10"_s,
			"0.10"_s
		}),
		$$new($StringArray, {
			"1e-1"_s,
			"0.1"_s
		}),
		$$new($StringArray, {
			"1e-1"_s,
			"0.1"_s
		}),
		$$new($StringArray, {
			"2e-2"_s,
			"0.02"_s
		}),
		$$new($StringArray, {
			"3e-3"_s,
			"0.003"_s
		}),
		$$new($StringArray, {
			"4e-4"_s,
			"0.0004"_s
		}),
		$$new($StringArray, {
			"5e-5"_s,
			"0.00005"_s
		}),
		$$new($StringArray, {
			"6e-6"_s,
			"0.000006"_s
		}),
		$$new($StringArray, {
			"7e-7"_s,
			"0.0000007"_s
		}),
		$$new($StringArray, {
			"8e-8"_s,
			"0.00000008"_s
		}),
		$$new($StringArray, {
			"9e-9"_s,
			"0.000000009"_s
		}),
		$$new($StringArray, {
			"9000e-12"_s,
			"0.000000009000"_s
		}),
		$$new($StringArray, {
			"9000e-22"_s,
			"0.0000000000000000009000"_s
		}),
		$$new($StringArray, {
			"12345678901234567890"_s,
			"12345678901234567890"_s
		}),
		$$new($StringArray, {
			"12345678901234567890e22"_s,
			"123456789012345678900000000000000000000000"_s
		}),
		$$new($StringArray, {
			"12345678901234567890e-22"_s,
			"0.0012345678901234567890"_s
		})
	}));
	int32_t errors = 0;
	{
		$var($StringArray2, arr$, testCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, testCase, arr$->get(i$));
			{
				$var($BigDecimal, bd, $new($BigDecimal, $nc(testCase)->get(0)));
				$var($String, s, nullptr);
				if (!$nc(($assign(s, bd->toPlainString())))->equals($nc(testCase)->get(1))) {
					++errors;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected plain result ``"_s, s, "\'\' from BigDecimal "_s, bd}));
				}
				$assign(bd, $new($BigDecimal, $$str({"-"_s, $nc(testCase)->get(0)})));
				bool var$0 = bd->signum() != 0;
				if (var$0 && !$nc(($assign(s, bd->toPlainString())))->equals($$str({"-"_s, $nc(testCase)->get(1)}))) {
					++errors;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected plain result ``"_s, s, "\'\' from BigDecimal "_s, bd}));
				}
			}
		}
	}
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " errors during run."_s}));
	}
}

ToPlainStringTests::ToPlainStringTests() {
}

$Class* ToPlainStringTests::load$($String* name, bool initialize) {
	$loadClass(ToPlainStringTests, name, initialize, &_ToPlainStringTests_ClassInfo_, allocate$ToPlainStringTests);
	return class$;
}

$Class* ToPlainStringTests::class$ = nullptr;