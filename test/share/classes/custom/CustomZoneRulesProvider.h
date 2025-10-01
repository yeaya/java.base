#ifndef _custom_CustomZoneRulesProvider_h_
#define _custom_CustomZoneRulesProvider_h_
//$ class custom.CustomZoneRulesProvider
//$ extends java.time.zone.ZoneRulesProvider

#include <java/time/zone/ZoneRulesProvider.h>

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

namespace custom {

class $export CustomZoneRulesProvider : public ::java::time::zone::ZoneRulesProvider {
	$class(CustomZoneRulesProvider, $NO_CLASS_INIT, ::java::time::zone::ZoneRulesProvider)
public:
	CustomZoneRulesProvider();
	void init$();
	virtual ::java::time::zone::ZoneRules* provideRules($String* zoneId, bool forCaching) override;
	virtual ::java::util::NavigableMap* provideVersions($String* zoneId) override;
	virtual ::java::util::Set* provideZoneIds() override;
};

} // custom

#endif // _custom_CustomZoneRulesProvider_h_