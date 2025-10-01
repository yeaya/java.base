#ifndef _sun_util_resources_TimeZoneNames_h_
#define _sun_util_resources_TimeZoneNames_h_
//$ class sun.util.resources.TimeZoneNames
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $import TimeZoneNames : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_TimeZoneNames_h_