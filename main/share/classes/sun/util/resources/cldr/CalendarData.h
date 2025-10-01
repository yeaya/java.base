#ifndef _sun_util_resources_cldr_CalendarData_h_
#define _sun_util_resources_cldr_CalendarData_h_
//$ class sun.util.resources.cldr.CalendarData
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class CalendarData : public ::java::util::ListResourceBundle {
	$class(CalendarData, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CalendarData();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_CalendarData_h_