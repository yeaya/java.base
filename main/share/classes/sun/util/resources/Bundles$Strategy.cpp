#include <sun/util/resources/Bundles$Strategy.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace util {
		namespace resources {

$Class* Bundles$Strategy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, getCandidateLocales, $List*, $String*, $Locale*)},
		{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class<+Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, getResourceBundleProviderType, $Class*, $String*, $Locale*)},
		{"toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, toBundleName, $String*, $String*, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.Bundles$Strategy", "sun.util.resources.Bundles", "Strategy", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.resources.Bundles$Strategy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.resources.Bundles"
	};
	$loadClass(Bundles$Strategy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bundles$Strategy);
	});
	return class$;
}

$Class* Bundles$Strategy::class$ = nullptr;

		} // resources
	} // util
} // sun