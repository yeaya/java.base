#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {

void TimeZoneNamesBundle::init$() {
	$OpenListResourceBundle::init$();
}

$Object* TimeZoneNamesBundle::handleGetObject($String* key) {
	$useLocalObjectStack();
	$var($Object, val, $OpenListResourceBundle::handleGetObject(key));
	if ($instanceOf($StringArray, val)) {
		$var($StringArray, contents, $cast($StringArray, val));
		int32_t clen = contents->length;
		$var($StringArray, tmpobj, $new($StringArray, 7));
		tmpobj->set(0, key);
		$System::arraycopy(contents, 0, tmpobj, 1, clen);
		return tmpobj;
	}
	return val;
}

$Map* TimeZoneNamesBundle::createMap(int32_t size) {
	return $new($LinkedHashMap, size);
}

$Set* TimeZoneNamesBundle::createSet() {
	return $new($LinkedHashSet);
}

TimeZoneNamesBundle::TimeZoneNamesBundle() {
}

$Class* TimeZoneNamesBundle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContents", "()[[L[Ljava/lang/Object;;", nullptr, $PROTECTED | $ABSTRACT},
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNamesBundle, init$, void)},
		{"createMap", "(I)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(I)Ljava/util/Map<TK;TV;>;", $PROTECTED, $virtualMethod(TimeZoneNamesBundle, createMap, $Map*, int32_t)},
		{"createSet", "()Ljava/util/Set;", "<E:Ljava/lang/Object;>()Ljava/util/Set<TE;>;", $PROTECTED, $virtualMethod(TimeZoneNamesBundle, createSet, $Set*)},
		{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TimeZoneNamesBundle, handleGetObject, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.resources.TimeZoneNamesBundle",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNamesBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNamesBundle);
	});
	return class$;
}

$Class* TimeZoneNamesBundle::class$ = nullptr;

		} // resources
	} // util
} // sun