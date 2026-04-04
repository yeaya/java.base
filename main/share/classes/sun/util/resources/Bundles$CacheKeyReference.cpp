#include <sun/util/resources/Bundles$CacheKeyReference.h>
#include <sun/util/resources/Bundles$CacheKey.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bundles$CacheKey = ::sun::util::resources::Bundles$CacheKey;

namespace sun {
	namespace util {
		namespace resources {

$Class* Bundles$CacheKeyReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCacheKey", "()Lsun/util/resources/Bundles$CacheKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$CacheKeyReference, getCacheKey, $Bundles$CacheKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.Bundles$CacheKeyReference", "sun.util.resources.Bundles", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.util.resources.Bundles$CacheKeyReference",
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
	$loadClass(Bundles$CacheKeyReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bundles$CacheKeyReference);
	});
	return class$;
}

$Class* Bundles$CacheKeyReference::class$ = nullptr;

		} // resources
	} // util
} // sun