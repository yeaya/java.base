#include <sun/util/resources/LocaleData$SupplementaryResourceBundleProvider.h>
#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleData$LocaleDataResourceBundleProvider = ::sun::util::resources::LocaleData$LocaleDataResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

void LocaleData$SupplementaryResourceBundleProvider::init$() {
	$LocaleData$LocaleDataResourceBundleProvider::init$();
}

LocaleData$SupplementaryResourceBundleProvider::LocaleData$SupplementaryResourceBundleProvider() {
}

$Class* LocaleData$SupplementaryResourceBundleProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleData$SupplementaryResourceBundleProvider, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider", "sun.util.resources.LocaleData", "SupplementaryResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
		{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider",
		"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.resources.LocaleData"
	};
	$loadClass(LocaleData$SupplementaryResourceBundleProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleData$SupplementaryResourceBundleProvider);
	});
	return class$;
}

$Class* LocaleData$SupplementaryResourceBundleProvider::class$ = nullptr;

		} // resources
	} // util
} // sun