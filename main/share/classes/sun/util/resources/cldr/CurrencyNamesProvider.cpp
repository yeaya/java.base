#include <sun/util/resources/cldr/CurrencyNamesProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$ClassInfo _CurrencyNamesProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.cldr.CurrencyNamesProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$CurrencyNamesProvider($Class* clazz) {
	return $of($alloc(CurrencyNamesProvider));
}

$Class* CurrencyNamesProvider::load$($String* name, bool initialize) {
	$loadClass(CurrencyNamesProvider, name, initialize, &_CurrencyNamesProvider_ClassInfo_, allocate$CurrencyNamesProvider);
	return class$;
}

$Class* CurrencyNamesProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun