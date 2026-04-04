#include <sun/text/resources/CollationDataProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {

$Class* CollationDataProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.text.resources.CollationDataProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(CollationDataProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationDataProvider);
	});
	return class$;
}

$Class* CollationDataProvider::class$ = nullptr;

		} // resources
	} // text
} // sun