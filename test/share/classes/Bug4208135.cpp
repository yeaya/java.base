#include <Bug4208135.h>

#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _Bug4208135_FieldInfo_[] = {
	{"df", "Ljava/text/DecimalFormat;", nullptr, $STATIC, $staticField(Bug4208135, df)},
	{"err", "Z", nullptr, $STATIC, $staticField(Bug4208135, err)},
	{}
};

$MethodInfo _Bug4208135_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4208135::*)()>(&Bug4208135::init$))},
	{"checkFormat", "(Ljava/lang/Number;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Number*,$String*)>(&Bug4208135::checkFormat))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4208135::main))},
	{}
};

$ClassInfo _Bug4208135_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4208135",
	"java.lang.Object",
	nullptr,
	_Bug4208135_FieldInfo_,
	_Bug4208135_MethodInfo_
};

$Object* allocate$Bug4208135($Class* clazz) {
	return $of($alloc(Bug4208135));
}

$DecimalFormat* Bug4208135::df = nullptr;
bool Bug4208135::err = false;

void Bug4208135::init$() {
}

void Bug4208135::main($StringArray* args) {
	$init(Bug4208135);
	$useLocalCurrentObjectStackCache();
	$var($Locale, defaultLoc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$assignStatic(Bug4208135::df, $new($DecimalFormat));
	$nc(Bug4208135::df)->applyPattern("0.#E0"_s);
	$nc(Bug4208135::df)->setDecimalSeparatorAlwaysShown(true);
	checkFormat($($Double::valueOf(0.0)), "0.E0"_s);
	checkFormat($($Double::valueOf(10.0)), "1.E1"_s);
	checkFormat($($Double::valueOf(1000.0)), "1.E3"_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0.E0"_s);
	checkFormat($($Long::valueOf((int64_t)10)), "1.E1"_s);
	checkFormat($($Long::valueOf((int64_t)1000)), "1.E3"_s);
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
	checkFormat($($Long::valueOf((int64_t)10)), "1E1"_s);
	checkFormat($($Long::valueOf((int64_t)1000)), "1E3"_s);
	checkFormat($$new($BigDecimal, "0.0"_s), "0E0"_s);
	checkFormat($$new($BigDecimal, "10.0"_s), "1E1"_s);
	checkFormat($$new($BigDecimal, "1000.0"_s), "1E3"_s);
	checkFormat($$new($BigInteger, "0"_s), "0E0"_s);
	checkFormat($$new($BigInteger, "10"_s), "1E1"_s);
	checkFormat($$new($BigInteger, "1000"_s), "1E3"_s);
	$nc(Bug4208135::df)->applyPattern("0.###"_s);
	$nc(Bug4208135::df)->setDecimalSeparatorAlwaysShown(true);
	checkFormat($($Double::valueOf(0.0)), "0."_s);
	checkFormat($($Double::valueOf(10.0)), "10."_s);
	checkFormat($($Double::valueOf(1000.0)), "1000."_s);
	checkFormat($($Long::valueOf((int64_t)0)), "0."_s);
	checkFormat($($Long::valueOf((int64_t)10)), "10."_s);
	checkFormat($($Long::valueOf((int64_t)1000)), "1000."_s);
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
	checkFormat($($Long::valueOf((int64_t)10)), "10"_s);
	checkFormat($($Long::valueOf((int64_t)1000)), "1000"_s);
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
	$useLocalCurrentObjectStackCache();
	$var($String, got, $nc(Bug4208135::df)->format(num));
	if (!$nc(got)->equals(expected)) {
		Bug4208135::err = true;
		$var($String, var$4, $$str({"    DecimalFormat format("_s, $($nc($of(num))->getClass()->getName()), ") error:\n\tnumber:           "_s, num, "\n\tSeparatorShown? : "_s}));
		$var($String, var$3, $$concat(var$4, $$str($nc(Bug4208135::df)->isDecimalSeparatorAlwaysShown())));
		$var($String, var$2, $$concat(var$3, "\n\tgot:              "));
		$var($String, var$1, $$concat(var$2, got));
		$var($String, var$0, $$concat(var$1, "\n\texpected:         "));
		$nc($System::err)->println($$concat(var$0, expected));
	}
}

void clinit$Bug4208135($Class* class$) {
	Bug4208135::err = false;
}

Bug4208135::Bug4208135() {
}

$Class* Bug4208135::load$($String* name, bool initialize) {
	$loadClass(Bug4208135, name, initialize, &_Bug4208135_ClassInfo_, clinit$Bug4208135, allocate$Bug4208135);
	return class$;
}

$Class* Bug4208135::class$ = nullptr;