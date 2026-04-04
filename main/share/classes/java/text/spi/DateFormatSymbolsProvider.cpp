#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/text/DateFormatSymbols.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

void DateFormatSymbolsProvider::init$() {
	$LocaleServiceProvider::init$();
}

DateFormatSymbolsProvider::DateFormatSymbolsProvider() {
}

$Class* DateFormatSymbolsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(DateFormatSymbolsProvider, init$, void)},
		{"getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateFormatSymbolsProvider, getInstance, $DateFormatSymbols*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.spi.DateFormatSymbolsProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DateFormatSymbolsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateFormatSymbolsProvider);
	});
	return class$;
}

$Class* DateFormatSymbolsProvider::class$ = nullptr;

		} // spi
	} // text
} // java