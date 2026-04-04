#include <sun/util/resources/cldr/TimeZoneNamesProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$Class* TimeZoneNamesProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.cldr.TimeZoneNamesProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(TimeZoneNamesProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNamesProvider);
	});
	return class$;
}

$Class* TimeZoneNamesProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun