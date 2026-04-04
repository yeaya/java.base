#include <java/text/spi/NumberFormatProvider.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

void NumberFormatProvider::init$() {
	$LocaleServiceProvider::init$();
}

$NumberFormat* NumberFormatProvider::getCompactNumberInstance($Locale* locale, $NumberFormat$Style* formatStyle) {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"The "_s, $(this->getClass()->getName()), " should override this method to return compact number format instance of "_s, locale, " locale and "_s, formatStyle, " style."_s}));
	$shouldNotReachHere();
}

NumberFormatProvider::NumberFormatProvider() {
}

$Class* NumberFormatProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(NumberFormatProvider, init$, void)},
		{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(NumberFormatProvider, getCompactNumberInstance, $NumberFormat*, $Locale*, $NumberFormat$Style*)},
		{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getCurrencyInstance, $NumberFormat*, $Locale*)},
		{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getIntegerInstance, $NumberFormat*, $Locale*)},
		{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getNumberInstance, $NumberFormat*, $Locale*)},
		{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getPercentInstance, $NumberFormat*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.spi.NumberFormatProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NumberFormatProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NumberFormatProvider);
	});
	return class$;
}

$Class* NumberFormatProvider::class$ = nullptr;

		} // spi
	} // text
} // java