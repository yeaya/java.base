#include <sun/util/resources/LocaleData$CommonResourceBundleProvider.h>
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

void LocaleData$CommonResourceBundleProvider::init$() {
	$LocaleData$LocaleDataResourceBundleProvider::init$();
}

LocaleData$CommonResourceBundleProvider::LocaleData$CommonResourceBundleProvider() {
}

$Class* LocaleData$CommonResourceBundleProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleData$CommonResourceBundleProvider, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.LocaleData$CommonResourceBundleProvider", "sun.util.resources.LocaleData", "CommonResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
		{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.resources.LocaleData$CommonResourceBundleProvider",
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
	$loadClass(LocaleData$CommonResourceBundleProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleData$CommonResourceBundleProvider);
	});
	return class$;
}

$Class* LocaleData$CommonResourceBundleProvider::class$ = nullptr;

		} // resources
	} // util
} // sun