#include <sun/util/resources/LocaleDataProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {

$Class* LocaleDataProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.LocaleDataProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(LocaleDataProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleDataProvider);
	});
	return class$;
}

$Class* LocaleDataProvider::class$ = nullptr;

		} // resources
	} // util
} // sun