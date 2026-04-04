#include <sun/text/resources/cldr/FormatDataProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {

$Class* FormatDataProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.text.resources.cldr.FormatDataProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(FormatDataProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatDataProvider);
	});
	return class$;
}

$Class* FormatDataProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // text
} // sun