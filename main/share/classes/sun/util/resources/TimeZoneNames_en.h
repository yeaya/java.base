#ifndef _sun_util_resources_TimeZoneNames_en_h_
#define _sun_util_resources_TimeZoneNames_en_h_
//$ class sun.util.resources.TimeZoneNames_en
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $export TimeZoneNames_en : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_en, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_en();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_TimeZoneNames_en_h_