#include <NaNInfinityParsing.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

$StringArray* NaNInfinityParsing::NaNStrings = nullptr;
$StringArray* NaNInfinityParsing::infinityStrings = nullptr;
$StringArray* NaNInfinityParsing::invalidStrings = nullptr;

void NaNInfinityParsing::init$() {
}

void NaNInfinityParsing::main($StringArray* argv) {
	$init(NaNInfinityParsing);
	$useLocalObjectStack();
	int32_t i = 0;
	double d = 0.0;
	for (i = 0; i < $nc(NaNInfinityParsing::NaNStrings)->length; ++i) {
		if (!$Double::isNaN(d = $Double::parseDouble(NaNInfinityParsing::NaNStrings->get(i)))) {
			$throwNew($RuntimeException, $$str({"NaN string ``"_s, NaNInfinityParsing::NaNStrings->get(i), "\'\' did not parse as a NaN; returned "_s, $$str(d), " instead."_s}));
		}
	}
	for (i = 0; i < $nc(NaNInfinityParsing::infinityStrings)->length; ++i) {
		if (!$Double::isInfinite(d = $Double::parseDouble(NaNInfinityParsing::infinityStrings->get(i)))) {
			$throwNew($RuntimeException, $$str({"Infinity string ``"_s, NaNInfinityParsing::infinityStrings->get(i), "\'\' did not parse as infinity; returned "_s, $$str(d), "instead."_s}));
		}
		bool negative = ($nc(NaNInfinityParsing::infinityStrings->get(i))->charAt(0) == u'-');
		if (d != (negative ? $Double::NEGATIVE_INFINITY : $Double::POSITIVE_INFINITY)) {
			$throwNew($RuntimeException, $$str({"Infinity has wrong sign;"_s, (negative ? "positive instead of negative."_s : "negative instead of positive."_s)}));
		}
	}
	for (i = 0; i < $nc(NaNInfinityParsing::invalidStrings)->length; ++i) {
		try {
			double result = 0.0;
			d = $Double::parseDouble(NaNInfinityParsing::invalidStrings->get(i));
			$throwNew($RuntimeException, $$str({"Invalid string ``"_s, NaNInfinityParsing::invalidStrings->get(i), "\'\' parsed as "_s, $$str(d), "."_s}));
		} catch ($NumberFormatException& e) {
		}
	}
}

void NaNInfinityParsing::clinit$($Class* clazz) {
	$assignStatic(NaNInfinityParsing::NaNStrings, $new($StringArray, {
		"NaN"_s,
		"+NaN"_s,
		"-NaN"_s
	}));
	$assignStatic(NaNInfinityParsing::infinityStrings, $new($StringArray, {
		"Infinity"_s,
		"+Infinity"_s,
		"-Infinity"_s
	}));
	$assignStatic(NaNInfinityParsing::invalidStrings, $new($StringArray, {
		"+"_s,
		"-"_s,
		"@"_s,
		"N"_s,
		"Na"_s,
		"Nan"_s,
		"NaNf"_s,
		"NaNd"_s,
		"NaNF"_s,
		"NaND"_s,
		"+N"_s,
		"+Na"_s,
		"+Nan"_s,
		"+NaNf"_s,
		"+NaNd"_s,
		"+NaNF"_s,
		"+NaND"_s,
		"-N"_s,
		"-Na"_s,
		"-Nan"_s,
		"-NaNf"_s,
		"-NaNd"_s,
		"-NaNF"_s,
		"-NaND"_s,
		"I"_s,
		"In"_s,
		"Inf"_s,
		"Infi"_s,
		"Infin"_s,
		"Infini"_s,
		"Infinit"_s,
		"InfinitY"_s,
		"Infinityf"_s,
		"InfinityF"_s,
		"Infinityd"_s,
		"InfinityD"_s,
		"+I"_s,
		"+In"_s,
		"+Inf"_s,
		"+Infi"_s,
		"+Infin"_s,
		"+Infini"_s,
		"+Infinit"_s,
		"+InfinitY"_s,
		"+Infinityf"_s,
		"+InfinityF"_s,
		"+Infinityd"_s,
		"+InfinityD"_s,
		"-I"_s,
		"-In"_s,
		"-Inf"_s,
		"-Infi"_s,
		"-Infin"_s,
		"-Infini"_s,
		"-Infinit"_s,
		"-InfinitY"_s,
		"-Infinityf"_s,
		"-InfinityF"_s,
		"-Infinityd"_s,
		"-InfinityD"_s,
		"NaNInfinity"_s,
		"InfinityNaN"_s,
		"nan"_s,
		"infinity"_s
	}));
}

NaNInfinityParsing::NaNInfinityParsing() {
}

$Class* NaNInfinityParsing::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NaNStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, NaNStrings)},
		{"infinityStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, infinityStrings)},
		{"invalidStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, invalidStrings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NaNInfinityParsing, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NaNInfinityParsing, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NaNInfinityParsing",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NaNInfinityParsing, name, initialize, &classInfo$$, NaNInfinityParsing::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NaNInfinityParsing);
	});
	return class$;
}

$Class* NaNInfinityParsing::class$ = nullptr;