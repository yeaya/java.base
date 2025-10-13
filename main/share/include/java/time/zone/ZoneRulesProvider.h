#ifndef _java_time_zone_ZoneRulesProvider_h_
#define _java_time_zone_ZoneRulesProvider_h_
//$ class java.time.zone.ZoneRulesProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PROVIDERS")
#undef PROVIDERS
#pragma push_macro("ZONES")
#undef ZONES
#pragma push_macro("ZONE_IDS")
#undef ZONE_IDS

namespace java {
	namespace time {
		namespace zone {
			class ZoneRules;
		}
	}
}
namespace java {
	namespace util {
		class NavigableMap;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
			class CopyOnWriteArrayList;
		}
	}
}

namespace java {
	namespace time {
		namespace zone {

class $import ZoneRulesProvider : public ::java::lang::Object {
	$class(ZoneRulesProvider, 0, ::java::lang::Object)
public:
	ZoneRulesProvider();
	void init$();
	static ::java::util::Set* getAvailableZoneIds();
	static ::java::time::zone::ZoneRulesProvider* getProvider($String* zoneId);
	static ::java::time::zone::ZoneRules* getRules($String* zoneId, bool forCaching);
	static ::java::util::NavigableMap* getVersions($String* zoneId);
	virtual bool provideRefresh();
	virtual ::java::time::zone::ZoneRules* provideRules($String* zoneId, bool forCaching) {return nullptr;}
	virtual ::java::util::NavigableMap* provideVersions($String* zoneId) {return nullptr;}
	virtual ::java::util::Set* provideZoneIds() {return nullptr;}
	static bool refresh();
	static void registerProvider(::java::time::zone::ZoneRulesProvider* provider);
	static void registerProvider0(::java::time::zone::ZoneRulesProvider* provider);
	static ::java::util::concurrent::CopyOnWriteArrayList* PROVIDERS;
	static ::java::util::concurrent::ConcurrentMap* ZONES;
	static $volatile(::java::util::Set*) ZONE_IDS;
};

		} // zone
	} // time
} // java

#pragma pop_macro("PROVIDERS")
#pragma pop_macro("ZONES")
#pragma pop_macro("ZONE_IDS")

#endif // _java_time_zone_ZoneRulesProvider_h_