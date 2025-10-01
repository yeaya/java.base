#ifndef _sun_util_resources_CalendarData_h_
#define _sun_util_resources_CalendarData_h_
//$ class sun.util.resources.CalendarData
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $import CalendarData : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_CalendarData_h_