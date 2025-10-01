#ifndef _sun_util_resources_cldr_TimeZoneNames_en_h_
#define _sun_util_resources_cldr_TimeZoneNames_en_h_
//$ class sun.util.resources.cldr.TimeZoneNames_en
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class TimeZoneNames_en : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_en, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_en();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_TimeZoneNames_en_h_