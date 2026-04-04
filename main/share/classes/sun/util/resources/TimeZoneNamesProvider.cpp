#include <sun/util/resources/TimeZoneNamesProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {

$Class* TimeZoneNamesProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.TimeZoneNamesProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(TimeZoneNamesProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNamesProvider);
	});
	return class$;
}

$Class* TimeZoneNamesProvider::class$ = nullptr;

		} // resources
	} // util
} // sun