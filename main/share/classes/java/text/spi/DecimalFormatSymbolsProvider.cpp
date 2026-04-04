#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

void DecimalFormatSymbolsProvider::init$() {
	$LocaleServiceProvider::init$();
}

DecimalFormatSymbolsProvider::DecimalFormatSymbolsProvider() {
}

$Class* DecimalFormatSymbolsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(DecimalFormatSymbolsProvider, init$, void)},
		{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DecimalFormatSymbolsProvider, getInstance, $DecimalFormatSymbols*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.spi.DecimalFormatSymbolsProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DecimalFormatSymbolsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DecimalFormatSymbolsProvider);
	});
	return class$;
}

$Class* DecimalFormatSymbolsProvider::class$ = nullptr;

		} // spi
	} // text
} // java