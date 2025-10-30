#include <java/lang/Float2/NaNInfinityParsing.h>

#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace Float2 {

$FieldInfo _NaNInfinityParsing_FieldInfo_[] = {
	{"NaNStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, NaNStrings)},
	{"infinityStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, infinityStrings)},
	{"invalidStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(NaNInfinityParsing, invalidStrings)},
	{}
};

$MethodInfo _NaNInfinityParsing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NaNInfinityParsing::*)()>(&NaNInfinityParsing::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NaNInfinityParsing::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NaNInfinityParsing_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Float2.NaNInfinityParsing",
	"java.lang.Object",
	nullptr,
	_NaNInfinityParsing_FieldInfo_,
	_NaNInfinityParsing_MethodInfo_
};

$Object* allocate$NaNInfinityParsing($Class* clazz) {
	return $of($alloc(NaNInfinityParsing));
}

$StringArray* NaNInfinityParsing::NaNStrings = nullptr;
$StringArray* NaNInfinityParsing::infinityStrings = nullptr;
$StringArray* NaNInfinityParsing::invalidStrings = nullptr;

void NaNInfinityParsing::init$() {
}

void NaNInfinityParsing::main($StringArray* argv) {
	$init(NaNInfinityParsing);
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	float d = 0.0;
	for (i = 0; i < $nc(NaNInfinityParsing::NaNStrings)->length; ++i) {
		if (!$Float::isNaN(d = $Float::parseFloat($nc(NaNInfinityParsing::NaNStrings)->get(i)))) {
			$throwNew($RuntimeException, $$str({"NaN string ``"_s, $nc(NaNInfinityParsing::NaNStrings)->get(i), "\'\' did not parse as a NaN; returned "_s, $$str(d), " instead."_s}));
		}
	}
	for (i = 0; i < $nc(NaNInfinityParsing::infinityStrings)->length; ++i) {
		if (!$Float::isInfinite(d = $Float::parseFloat($nc(NaNInfinityParsing::infinityStrings)->get(i)))) {
			$throwNew($RuntimeException, $$str({"Infinity string ``"_s, $nc(NaNInfinityParsing::infinityStrings)->get(i), "\'\' did not parse as infinity; returned "_s, $$str(d), "instead."_s}));
		}
		bool negative = ($nc($nc(NaNInfinityParsing::infinityStrings)->get(i))->charAt(0) == u'-');
		if (d != (negative ? $Float::NEGATIVE_INFINITY : $Float::POSITIVE_INFINITY)) {
			$throwNew($RuntimeException, $$str({"Infinity has wrong sign;"_s, (negative ? "positive instead of negative."_s : "negative instead of positive."_s)}));
		}
	}
	for (i = 0; i < $nc(NaNInfinityParsing::invalidStrings)->length; ++i) {
		try {
			float result = 0.0;
			d = $Float::parseFloat($nc(NaNInfinityParsing::invalidStrings)->get(i));
			$throwNew($RuntimeException, $$str({"Invalid string ``"_s, $nc(NaNInfinityParsing::invalidStrings)->get(i), "\'\' parsed as "_s, $$str(d), "."_s}));
		} catch ($NumberFormatException& e) {
		}
	}
}

void clinit$NaNInfinityParsing($Class* class$) {
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
	$loadClass(NaNInfinityParsing, name, initialize, &_NaNInfinityParsing_ClassInfo_, clinit$NaNInfinityParsing, allocate$NaNInfinityParsing);
	return class$;
}

$Class* NaNInfinityParsing::class$ = nullptr;

		} // Float2
	} // lang
} // java