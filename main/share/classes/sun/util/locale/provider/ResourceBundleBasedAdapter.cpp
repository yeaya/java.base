#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $LocaleData = ::sun::util::resources::LocaleData;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Class* ResourceBundleBasedAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ResourceBundleBasedAdapter, getCandidateLocales, $List*, $String*, $Locale*)},
		{"getLocaleData", "()Lsun/util/resources/LocaleData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceBundleBasedAdapter, getLocaleData, $LocaleData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.locale.provider.ResourceBundleBasedAdapter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourceBundleBasedAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundleBasedAdapter);
	});
	return class$;
}

$Class* ResourceBundleBasedAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun