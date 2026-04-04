#include <java/util/Collections$UnmodifiableNavigableMap$EmptyNavigableMap.h>
#include <java/util/Collections$UnmodifiableNavigableMap.h>
#include <java/util/Collections.h>
#include <java/util/NavigableSet.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef EMPTY_NAVIGABLE_MAP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableNavigableMap = ::java::util::Collections$UnmodifiableNavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $TreeMap = ::java::util::TreeMap;

namespace java {
	namespace util {

void Collections$UnmodifiableNavigableMap$EmptyNavigableMap::init$() {
	$Collections$UnmodifiableNavigableMap::init$($$new($TreeMap));
}

$NavigableSet* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::navigableKeySet() {
	return $Collections::emptyNavigableSet();
}

$Object* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::readResolve() {
	$init($Collections$UnmodifiableNavigableMap);
	return $of($Collections$UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP);
}

Collections$UnmodifiableNavigableMap$EmptyNavigableMap::Collections$UnmodifiableNavigableMap$EmptyNavigableMap() {
}

$Class* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, init$, void)},
		{"navigableKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, navigableKeySet, $NavigableSet*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, readResolve, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$UnmodifiableNavigableMap", "java.util.Collections", "UnmodifiableNavigableMap", $STATIC},
		{"java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap", "java.util.Collections$UnmodifiableNavigableMap", "EmptyNavigableMap", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap",
		"java.util.Collections$UnmodifiableNavigableMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableNavigableMap<TK;TV;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collections$UnmodifiableNavigableMap$EmptyNavigableMap));
	});
	return class$;
}

$Class* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::class$ = nullptr;

	} // util
} // java