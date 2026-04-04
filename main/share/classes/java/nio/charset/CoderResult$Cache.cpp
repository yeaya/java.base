#include <java/nio/charset/CoderResult$Cache.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace nio {
		namespace charset {

CoderResult$Cache* CoderResult$Cache::INSTANCE = nullptr;

void CoderResult$Cache::init$() {
	$set(this, unmappable, $cast($AbstractMap, $new($ConcurrentHashMap)));
	$set(this, malformed, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

void CoderResult$Cache::clinit$($Class* clazz) {
	$assignStatic(CoderResult$Cache::INSTANCE, $new(CoderResult$Cache));
}

CoderResult$Cache::CoderResult$Cache() {
}

$Class* CoderResult$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/nio/charset/CoderResult$Cache;", nullptr, $STATIC | $FINAL, $staticField(CoderResult$Cache, INSTANCE)},
		{"unmappable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/charset/CoderResult;>;", $FINAL, $field(CoderResult$Cache, unmappable)},
		{"malformed", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/charset/CoderResult;>;", $FINAL, $field(CoderResult$Cache, malformed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CoderResult$Cache, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.charset.CoderResult$Cache", "java.nio.charset.CoderResult", "Cache", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.nio.charset.CoderResult$Cache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.charset.CoderResult"
	};
	$loadClass(CoderResult$Cache, name, initialize, &classInfo$$, CoderResult$Cache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CoderResult$Cache);
	});
	return class$;
}

$Class* CoderResult$Cache::class$ = nullptr;

		} // charset
	} // nio
} // java