#ifndef _sun_util_calendar_LocalGregorianCalendar$Date_h_
#define _sun_util_calendar_LocalGregorianCalendar$Date_h_
//$ class sun.util.calendar.LocalGregorianCalendar$Date
//$ extends sun.util.calendar.BaseCalendar$Date

#include <sun/util/calendar/BaseCalendar$Date.h>

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class Era;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import LocalGregorianCalendar$Date : public ::sun::util::calendar::BaseCalendar$Date {
	$class(LocalGregorianCalendar$Date, $NO_CLASS_INIT, ::sun::util::calendar::BaseCalendar$Date)
public:
	LocalGregorianCalendar$Date();
	void init$();
	void init$(::java::util::TimeZone* zone);
	virtual ::sun::util::calendar::LocalGregorianCalendar$Date* addYear(int32_t localYear) override;
	virtual int32_t getNormalizedYear() override;
	virtual ::sun::util::calendar::LocalGregorianCalendar$Date* setEra(::sun::util::calendar::Era* era) override;
	virtual void setLocalEra(::sun::util::calendar::Era* era);
	virtual void setLocalYear(int32_t year);
	virtual void setNormalizedYear(int32_t normalizedYear) override;
	virtual ::sun::util::calendar::LocalGregorianCalendar$Date* setYear(int32_t localYear) override;
	virtual $String* toString() override;
	int32_t gregorianYear = 0;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_LocalGregorianCalendar$Date_h_