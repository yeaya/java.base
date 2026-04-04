#include <sun/util/resources/cldr/CalendarDataProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$Class* CalendarDataProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.cldr.CalendarDataProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(CalendarDataProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarDataProvider);
	});
	return class$;
}

$Class* CalendarDataProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun