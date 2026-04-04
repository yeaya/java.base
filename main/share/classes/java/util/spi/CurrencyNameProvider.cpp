#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef FORMAT_DEFAULT

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

void CurrencyNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

$String* CurrencyNameProvider::getDisplayName($String* currencyCode, $Locale* locale) {
	$useLocalObjectStack();
	if (currencyCode == nullptr || locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($chars, charray, $nc(currencyCode)->toCharArray());
	if (charray->length != 3) {
		$throwNew($IllegalArgumentException, "The currencyCode is not in the form of three upper-case letters."_s);
	}
	{
		$var($chars, arr$, charray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			if (c < u'A' || c > u'Z') {
				$throwNew($IllegalArgumentException, "The currencyCode is not in the form of three upper-case letters."_s);
			}
		}
	}
	$init($ResourceBundle$Control);
	$var($ResourceBundle$Control, c, $ResourceBundle$Control::getNoFallbackControl($ResourceBundle$Control::FORMAT_DEFAULT));
	{
		$var($LocaleArray, arr$, getAvailableLocales());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Locale, l, arr$->get(i$));
			if ($$nc($nc(c)->getCandidateLocales(""_s, l))->contains(locale)) {
				return nullptr;
			}
		}
	}
	$throwNew($IllegalArgumentException, "The locale is not available"_s);
}

CurrencyNameProvider::CurrencyNameProvider() {
}

$Class* CurrencyNameProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CurrencyNameProvider, init$, void)},
		{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CurrencyNameProvider, getDisplayName, $String*, $String*, $Locale*)},
		{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CurrencyNameProvider, getSymbol, $String*, $String*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.spi.CurrencyNameProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNameProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNameProvider);
	});
	return class$;
}

$Class* CurrencyNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java