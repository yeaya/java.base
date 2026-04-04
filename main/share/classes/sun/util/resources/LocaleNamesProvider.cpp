#include <sun/util/resources/LocaleNamesProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {

$Class* LocaleNamesProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.LocaleNamesProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(LocaleNamesProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNamesProvider);
	});
	return class$;
}

$Class* LocaleNamesProvider::class$ = nullptr;

		} // resources
	} // util
} // sun