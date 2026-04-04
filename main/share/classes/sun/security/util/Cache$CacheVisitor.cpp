#include <sun/security/util/Cache$CacheVisitor.h>
#include <java/util/Map.h>
#include <sun/security/util/Cache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace sun {
	namespace security {
		namespace util {

$Class* Cache$CacheVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visit", "(Ljava/util/Map;)V", "(Ljava/util/Map<TK;TV;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Cache$CacheVisitor, visit, void, $Map*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Cache$CacheVisitor", "sun.security.util.Cache", "CacheVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.Cache$CacheVisitor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.Cache"
	};
	$loadClass(Cache$CacheVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache$CacheVisitor);
	});
	return class$;
}

$Class* Cache$CacheVisitor::class$ = nullptr;

		} // util
	} // security
} // sun