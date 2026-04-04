#include <sun/util/resources/cldr/CurrencyNamesProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$Class* CurrencyNamesProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.cldr.CurrencyNamesProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(CurrencyNamesProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNamesProvider);
	});
	return class$;
}

$Class* CurrencyNamesProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun