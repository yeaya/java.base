#ifndef _java_time_zone_TzdbZoneRulesProvider_h_
#define _java_time_zone_TzdbZoneRulesProvider_h_
//$ class java.time.zone.TzdbZoneRulesProvider
//$ extends java.time.zone.ZoneRulesProvider

#include <java/time/zone/ZoneRulesProvider.h>

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace java {
	namespace time {
		namespace zone {
			class ZoneRules;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class NavigableMap;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace zone {

class TzdbZoneRulesProvider : public ::java::time::zone::ZoneRulesProvider {
	$class(TzdbZoneRulesProvider, $NO_CLASS_INIT, ::java::time::zone::ZoneRulesProvider)
public:
	TzdbZoneRulesProvider();
	void init$();
	void load(::java::io::DataInputStream* dis);
	virtual ::java::time::zone::ZoneRules* provideRules($String* zoneId, bool forCaching) override;
	virtual ::java::util::NavigableMap* provideVersions($String* zoneId) override;
	virtual ::java::util::Set* provideZoneIds() override;
	virtual $String* toString() override;
	::java::util::List* regionIds = nullptr;
	$String* versionId = nullptr;
	::java::util::Map* regionToRules = nullptr;
};

		} // zone
	} // time
} // java

#endif // _java_time_zone_TzdbZoneRulesProvider_h_