#include <Bug4208135.h>
#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Locale = ::java::util::Locale;

$DecimalFormat* Bug4208135::df = nullptr;
bool Bug4208135::err = false;

void Bug4208135::init$() {
}

void Bug4208135::main($StringArray* args) {
	$init(Bug4208135);
	$useLocalObjectStack();
	$var($Locale, defaultLoc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$assignStatic(Bug4208135::df, $new($DecimalFormat));
	Bug4208135::df->applyPattern("0.#E0"_s);
	Bug4208135::df->setDecimalSeparatorAlwaysShown(true);
	checkFormat($($Double::valueOf(0.0)), "0.E0"_s);
	checkFormat($($Double::valueOf(10.0)), "1.E1"_s);
	checkFormat($($Double::valueOf(1000.0)), "1.E3"_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0.E0"_s);
	checkFormat($($Long::valueOf(10)), "1.E1"_s);
	checkFormat($($Long::valueOf(1000)), "1.E3"_s);
	checkFormat($$new($BigDecimal, "0.0"_s), "0.E0"_s);
	checkFormat($$new($BigDecimal, "10.0"_s), "1.E1"_s);
	checkFormat($$new($BigDecimal, "1000.0"_s), "1.E3"_s);
	checkFormat($$new($BigInteger, "00"_s), "0.E0"_s);
	checkFormat($$new($BigInteger, "10"_s), "1.E1"_s);
	checkFormat($$new($BigInteger, "1000"_s), "1.E3"_s);
	$nc(Bug4208135::df)->setDecimalSeparatorAlwaysShown(false);
	checkFormat($($Double::valueOf(0.0)), "0E0"_s);
	checkFormat($($Double::valueOf(10.0)), "1E1"_s);
	checkFormat($($Double::valueOf(1000.0)), "1E3"_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0E0"_s);
	checkFormat($($Long::valueOf(10)), "1E1"_s);
	checkFormat($($Long::valueOf(1000)), "1E3"_s);
	checkFormat($$new($BigDecimal, "0.0"_s), "0E0"_s);
	checkFormat($$new($BigDecimal, "10.0"_s), "1E1"_s);
	checkFormat($$new($BigDecimal, "1000.0"_s), "1E3"_s);
	checkFormat($$new($BigInteger, "0"_s), "0E0"_s);
	checkFormat($$new($BigInteger, "10"_s), "1E1"_s);
	checkFormat($$new($BigInteger, "1000"_s), "1E3"_s);
	$nc(Bug4208135::df)->applyPattern("0.###"_s);
	Bug4208135::df->setDecimalSeparatorAlwaysShown(true);
	checkFormat($($Double::valueOf(0.0)), "0."_s);
	checkFormat($($Double::valueOf(10.0)), "10."_s);
	checkFormat($($Double::valueOf(1000.0)), "1000."_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0."_s);
	checkFormat($($Long::valueOf(10)), "10."_s);
	checkFormat($($Long::valueOf(1000)), "1000."_s);
	checkFormat($$new($BigDecimal, "0.0"_s), "0."_s);
	checkFormat($$new($BigDecimal, "10.0"_s), "10."_s);
	checkFormat($$new($BigDecimal, "1000.0"_s), "1000."_s);
	checkFormat($$new($BigInteger, "0"_s), "0."_s);
	checkFormat($$new($BigInteger, "10"_s), "10."_s);
	checkFormat($$new($BigInteger, "1000"_s), "1000."_s);
	$nc(Bug4208135::df)->setDecimalSeparatorAlwaysShown(false);
	checkFormat($($Double::valueOf(0.0)), "0"_s);
	checkFormat($($Double::valueOf(10.0)), "10"_s);
	checkFormat($($Double::valueOf(1000.0)), "1000"_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0"_s);
	checkFormat($($Long::valueOf(10)), "10"_s);
	checkFormat($($Long::valueOf(1000)), "1000"_s);
	checkFormat($$new($BigDecimal, "0.0"_s), "0"_s);
	checkFormat($$new($BigDecimal, "10.0"_s), "10"_s);
	checkFormat($$new($BigDecimal, "1000.0"_s), "1000"_s);
	checkFormat($$new($BigInteger, "0"_s), "0"_s);
	checkFormat($$new($BigInteger, "10"_s), "10"_s);
	checkFormat($$new($BigInteger, "1000"_s), "1000"_s);
	$Locale::setDefault(defaultLoc);
	if (Bug4208135::err) {
		$throwNew($RuntimeException, "Wrong format/parse with DecimalFormat"_s);
	}
}

void Bug4208135::checkFormat($Number* num, $String* expected) {
	$init(Bug4208135);
	$useLocalObjectStack();
	$var($String, got, $nc(Bug4208135::df)->format(num));
	if (!$nc(got)->equals(expected)) {
		Bug4208135::err = true;
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("    DecimalFormat format("_s);
		var$0->append($($nc($of(num))->getClass()->getName()));
		var$0->append(") error:\n\tnumber:           "_s);
		var$0->append(num);
		var$0->append("\n\tSeparatorShown? : "_s);
		var$0->append(Bug4208135::df->isDecimalSeparatorAlwaysShown());
		var$0->append("\n\tgot:              "_s);
		var$0->append(got);
		var$0->append("\n\texpected:         "_s);
		var$0->append(expected);
		$nc($System::err)->println($$str(var$0));
	}
}

void Bug4208135::clinit$($Class* clazz) {
	Bug4208135::err = false;
}

Bug4208135::Bug4208135() {
}

$Class* Bug4208135::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"df", "Ljava/text/DecimalFormat;", nullptr, $STATIC, $staticField(Bug4208135, df)},
		{"err", "Z", nullptr, $STATIC, $staticField(Bug4208135, err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4208135, init$, void)},
		{"checkFormat", "(Ljava/lang/Number;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Bug4208135, checkFormat, void, $Number*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4208135, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4208135",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug4208135, name, initialize, &classInfo$$, Bug4208135::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4208135);
	});
	return class$;
}

$Class* Bug4208135::class$ = nullptr;