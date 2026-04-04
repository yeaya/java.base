#include <java/lang/System$CallersHolder.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace lang {

$Map* System$CallersHolder::callers = nullptr;

void System$CallersHolder::init$() {
}

void System$CallersHolder::clinit$($Class* clazz) {
	$assignStatic(System$CallersHolder::callers, $Collections::synchronizedMap($$new($WeakHashMap)));
}

System$CallersHolder::System$CallersHolder() {
}

$Class* System$CallersHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"callers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(System$CallersHolder, callers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(System$CallersHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.System$CallersHolder", "java.lang.System", "CallersHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.System$CallersHolder",
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
		"java.lang.System"
	};
	$loadClass(System$CallersHolder, name, initialize, &classInfo$$, System$CallersHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(System$CallersHolder);
	});
	return class$;
}

$Class* System$CallersHolder::class$ = nullptr;

	} // lang
} // java