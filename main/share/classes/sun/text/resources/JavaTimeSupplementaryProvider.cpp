#include <sun/text/resources/JavaTimeSupplementaryProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {

$Class* JavaTimeSupplementaryProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.text.resources.JavaTimeSupplementaryProvider",
		nullptr,
		"java.util.spi.ResourceBundleProvider"
	};
	$loadClass(JavaTimeSupplementaryProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementaryProvider);
	});
	return class$;
}

$Class* JavaTimeSupplementaryProvider::class$ = nullptr;

		} // resources
	} // text
} // sun