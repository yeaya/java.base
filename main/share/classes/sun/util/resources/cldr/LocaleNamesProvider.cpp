#include <sun/util/resources/cldr/LocaleNamesProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$Class* LocaleNamesProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.cldr.LocaleNamesProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(LocaleNamesProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNamesProvider);
	});
	return class$;
}

$Class* LocaleNamesProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun