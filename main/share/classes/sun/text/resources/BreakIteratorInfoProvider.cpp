#include <sun/text/resources/BreakIteratorInfoProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {

$Class* BreakIteratorInfoProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.text.resources.BreakIteratorInfoProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(BreakIteratorInfoProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorInfoProvider);
	});
	return class$;
}

$Class* BreakIteratorInfoProvider::class$ = nullptr;

		} // resources
	} // text
} // sun