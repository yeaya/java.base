#include <test/NumberFormatProviderImpl.h>

#include <java/text/CompactNumberFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/NumberFormat.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef QAA
#undef QAB

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CompactNumberFormat = ::java::text::CompactNumberFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Locale = ::java::util::Locale;

namespace test {

$FieldInfo _NumberFormatProviderImpl_FieldInfo_[] = {
	{"QAA", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumberFormatProviderImpl, QAA)},
	{"QAB", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumberFormatProviderImpl, QAB)},
	{"locales", "[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumberFormatProviderImpl, locales)},
	{"oldPattern", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumberFormatProviderImpl, oldPattern)},
	{"newPattern", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumberFormatProviderImpl, newPattern)},
	{}
};

$MethodInfo _NumberFormatProviderImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NumberFormatProviderImpl::*)()>(&NumberFormatProviderImpl::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberFormatProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.NumberFormatProviderImpl",
	"java.text.spi.NumberFormatProvider",
	nullptr,
	_NumberFormatProviderImpl_FieldInfo_,
	_NumberFormatProviderImpl_MethodInfo_
};

$Object* allocate$NumberFormatProviderImpl($Class* clazz) {
	return $of($alloc(NumberFormatProviderImpl));
}

$Locale* NumberFormatProviderImpl::QAA = nullptr;
$Locale* NumberFormatProviderImpl::QAB = nullptr;
$LocaleArray* NumberFormatProviderImpl::locales = nullptr;
$StringArray* NumberFormatProviderImpl::oldPattern = nullptr;
$StringArray* NumberFormatProviderImpl::newPattern = nullptr;

void NumberFormatProviderImpl::init$() {
	$NumberFormatProvider::init$();
}

$NumberFormat* NumberFormatProviderImpl::getCurrencyInstance($Locale* locale) {
	return nullptr;
}

$NumberFormat* NumberFormatProviderImpl::getIntegerInstance($Locale* locale) {
	return nullptr;
}

$NumberFormat* NumberFormatProviderImpl::getNumberInstance($Locale* locale) {
	return nullptr;
}

$NumberFormat* NumberFormatProviderImpl::getPercentInstance($Locale* locale) {
	return nullptr;
}

$NumberFormat* NumberFormatProviderImpl::getCompactNumberInstance($Locale* locale, $NumberFormat$Style* style) {
	$useLocalCurrentObjectStackCache();
	if ($nc(locale)->equals(NumberFormatProviderImpl::QAB)) {
		return $new($CompactNumberFormat, "#"_s, $($DecimalFormatSymbols::getInstance(locale)), NumberFormatProviderImpl::newPattern, "one:v = 0 and i % 100 = 1;two:v = 0 and i % 100 = 2;few:v = 0 and i % 100 = 3..4 or v != 0;other:"_s);
	} else if (locale->equals(NumberFormatProviderImpl::QAA)) {
		return $new($CompactNumberFormat, "#"_s, $($DecimalFormatSymbols::getInstance(locale)), NumberFormatProviderImpl::oldPattern);
	} else {
		$throwNew($RuntimeException, "unsupported locale"_s);
	}
}

$LocaleArray* NumberFormatProviderImpl::getAvailableLocales() {
	return NumberFormatProviderImpl::locales;
}

void clinit$NumberFormatProviderImpl($Class* class$) {
	$assignStatic(NumberFormatProviderImpl::QAA, $Locale::forLanguageTag("qaa"_s));
	$assignStatic(NumberFormatProviderImpl::QAB, $Locale::forLanguageTag("qab"_s));
	$assignStatic(NumberFormatProviderImpl::locales, $new($LocaleArray, {
		NumberFormatProviderImpl::QAA,
		NumberFormatProviderImpl::QAB
	}));
	$assignStatic(NumberFormatProviderImpl::oldPattern, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"0K"_s,
		"00K"_s,
		"000K"_s,
		"0M"_s,
		"00M"_s,
		"000M"_s,
		"0B"_s,
		"00B"_s,
		"000B"_s,
		"0T"_s,
		"00T"_s,
		"000T"_s
	}));
	$assignStatic(NumberFormatProviderImpl::newPattern, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"{one:0K;(0K) two:0KK few:0KKK other:0KKKK}"_s,
		""_s,
		""_s,
		"{one:0\' \'M;(0\' \'M) two:0\' \'MM;(0\' \'MM) few:0\' \'MMM other:0\' \'MMMM}"_s
	}));
}

NumberFormatProviderImpl::NumberFormatProviderImpl() {
}

$Class* NumberFormatProviderImpl::load$($String* name, bool initialize) {
	$loadClass(NumberFormatProviderImpl, name, initialize, &_NumberFormatProviderImpl_ClassInfo_, clinit$NumberFormatProviderImpl, allocate$NumberFormatProviderImpl);
	return class$;
}

$Class* NumberFormatProviderImpl::class$ = nullptr;

} // test