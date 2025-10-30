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

$MethodInfo _DecimalFormatSymbolsProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DecimalFormatSymbolsProvider::*)()>(&DecimalFormatSymbolsProvider::init$))},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DecimalFormatSymbolsProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.spi.DecimalFormatSymbolsProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_DecimalFormatSymbolsProvider_MethodInfo_
};

$Object* allocate$DecimalFormatSymbolsProvider($Class* clazz) {
	return $of($alloc(DecimalFormatSymbolsProvider));
}

void DecimalFormatSymbolsProvider::init$() {
	$LocaleServiceProvider::init$();
}

DecimalFormatSymbolsProvider::DecimalFormatSymbolsProvider() {
}

$Class* DecimalFormatSymbolsProvider::load$($String* name, bool initialize) {
	$loadClass(DecimalFormatSymbolsProvider, name, initialize, &_DecimalFormatSymbolsProvider_ClassInfo_, allocate$DecimalFormatSymbolsProvider);
	return class$;
}

$Class* DecimalFormatSymbolsProvider::class$ = nullptr;

		} // spi
	} // text
} // java