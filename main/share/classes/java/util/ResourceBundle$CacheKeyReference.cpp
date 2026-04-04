#include <java/util/ResourceBundle$CacheKeyReference.h>
#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle$CacheKey = ::java::util::ResourceBundle$CacheKey;

namespace java {
	namespace util {

$Class* ResourceBundle$CacheKeyReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCacheKey", "()Ljava/util/ResourceBundle$CacheKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceBundle$CacheKeyReference, getCacheKey, $ResourceBundle$CacheKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.ResourceBundle$CacheKeyReference",
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
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$CacheKeyReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$CacheKeyReference);
	});
	return class$;
}

$Class* ResourceBundle$CacheKeyReference::class$ = nullptr;

	} // util
} // java