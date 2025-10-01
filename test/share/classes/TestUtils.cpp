#include <TestUtils.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/util/Calendar.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $Calendar = ::java::util::Calendar;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;

$MethodInfo _TestUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUtils::*)()>(&TestUtils::init$))},
	{"hasSpecialVariant", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Locale*)>(&TestUtils::hasSpecialVariant))},
	{"usesAsciiDigits", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Locale*)>(&TestUtils::usesAsciiDigits))},
	{"usesGregorianCalendar", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Locale*)>(&TestUtils::usesGregorianCalendar))},
	{}
};

$ClassInfo _TestUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestUtils_MethodInfo_
};

$Object* allocate$TestUtils($Class* clazz) {
	return $of($alloc(TestUtils));
}

void TestUtils::init$() {
}

bool TestUtils::usesGregorianCalendar($Locale* locale) {
	$load($GregorianCalendar);
	return $nc($of($($Calendar::getInstance(locale))))->getClass() == $GregorianCalendar::class$;
}

bool TestUtils::usesAsciiDigits($Locale* locale) {
	return $nc($($DecimalFormatSymbols::getInstance(locale)))->getZeroDigit() == u'0';
}

bool TestUtils::hasSpecialVariant($Locale* locale) {
	$var($String, variant, $nc(locale)->getVariant());
	bool var$2 = !$nc(variant)->isEmpty();
	bool var$1 = var$2 && "JP"_s->equals(variant);
	bool var$0 = var$1 || "NY"_s->equals(variant);
	return var$0 || "TH"_s->equals(variant);
}

TestUtils::TestUtils() {
}

$Class* TestUtils::load$($String* name, bool initialize) {
	$loadClass(TestUtils, name, initialize, &_TestUtils_ClassInfo_, allocate$TestUtils);
	return class$;
}

$Class* TestUtils::class$ = nullptr;