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

$MethodInfo _NumberFormatProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(NumberFormatProvider, init$, void)},
	{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(NumberFormatProvider, getCompactNumberInstance, $NumberFormat*, $Locale*, $NumberFormat$Style*)},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getCurrencyInstance, $NumberFormat*, $Locale*)},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getIntegerInstance, $NumberFormat*, $Locale*)},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getNumberInstance, $NumberFormat*, $Locale*)},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NumberFormatProvider, getPercentInstance, $NumberFormat*, $Locale*)},
	{}
};

$ClassInfo _NumberFormatProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.spi.NumberFormatProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_NumberFormatProvider_MethodInfo_
};

$Object* allocate$NumberFormatProvider($Class* clazz) {
	return $of($alloc(NumberFormatProvider));
}

void NumberFormatProvider::init$() {
	$LocaleServiceProvider::init$();
}

$NumberFormat* NumberFormatProvider::getCompactNumberInstance($Locale* locale, $NumberFormat$Style* formatStyle) {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"The "_s, $($of(this)->getClass()->getName()), " should override this method to return compact number format instance of "_s, locale, " locale and "_s, formatStyle, " style."_s}));
	$shouldNotReachHere();
}

NumberFormatProvider::NumberFormatProvider() {
}

$Class* NumberFormatProvider::load$($String* name, bool initialize) {
	$loadClass(NumberFormatProvider, name, initialize, &_NumberFormatProvider_ClassInfo_, allocate$NumberFormatProvider);
	return class$;
}

$Class* NumberFormatProvider::class$ = nullptr;

		} // spi
	} // text
} // java