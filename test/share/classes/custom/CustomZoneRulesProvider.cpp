#include <custom/CustomZoneRulesProvider.h>

#include <java/time/ZoneId.h>
#include <java/time/zone/ZoneRules.h>
#include <java/time/zone/ZoneRulesProvider.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneId = ::java::time::ZoneId;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $ZoneRulesProvider = ::java::time::zone::ZoneRulesProvider;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;

namespace custom {

$MethodInfo _CustomZoneRulesProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneRulesProvider, init$, void)},
	{"provideRules", "(Ljava/lang/String;Z)Ljava/time/zone/ZoneRules;", nullptr, $PROTECTED, $virtualMethod(CustomZoneRulesProvider, provideRules, $ZoneRules*, $String*, bool)},
	{"provideVersions", "(Ljava/lang/String;)Ljava/util/NavigableMap;", "(Ljava/lang/String;)Ljava/util/NavigableMap<Ljava/lang/String;Ljava/time/zone/ZoneRules;>;", $PROTECTED, $virtualMethod(CustomZoneRulesProvider, provideVersions, $NavigableMap*, $String*)},
	{"provideZoneIds", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(CustomZoneRulesProvider, provideZoneIds, $Set*)},
	{}
};

$ClassInfo _CustomZoneRulesProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"custom.CustomZoneRulesProvider",
	"java.time.zone.ZoneRulesProvider",
	nullptr,
	nullptr,
	_CustomZoneRulesProvider_MethodInfo_
};

$Object* allocate$CustomZoneRulesProvider($Class* clazz) {
	return $of($alloc(CustomZoneRulesProvider));
}

void CustomZoneRulesProvider::init$() {
	$ZoneRulesProvider::init$();
}

$Set* CustomZoneRulesProvider::provideZoneIds() {
	return $Set::of($of("Custom/Timezone"_s));
}

$ZoneRules* CustomZoneRulesProvider::provideRules($String* zoneId, bool forCaching) {
	return $nc($($ZoneId::of("UTC"_s)))->getRules();
}

$NavigableMap* CustomZoneRulesProvider::provideVersions($String* zoneId) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap, map, $new($TreeMap));
	map->put("bogusVersion"_s, $(getRules(zoneId, false)));
	return map;
}

CustomZoneRulesProvider::CustomZoneRulesProvider() {
}

$Class* CustomZoneRulesProvider::load$($String* name, bool initialize) {
	$loadClass(CustomZoneRulesProvider, name, initialize, &_CustomZoneRulesProvider_ClassInfo_, allocate$CustomZoneRulesProvider);
	return class$;
}

$Class* CustomZoneRulesProvider::class$ = nullptr;

} // custom