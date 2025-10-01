#ifndef _sun_util_calendar_LocalGregorianCalendar_h_
#define _sun_util_calendar_LocalGregorianCalendar_h_
//$ class sun.util.calendar.LocalGregorianCalendar
//$ extends sun.util.calendar.BaseCalendar

#include <java/lang/Array.h>
#include <sun/util/calendar/BaseCalendar.h>

#pragma push_macro("JAPANESE_ERAS")
#undef JAPANESE_ERAS

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
			class Era;
			class LocalGregorianCalendar$Date;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import LocalGregorianCalendar : public ::sun::util::calendar::BaseCalendar {
	$class(LocalGregorianCalendar, 0, ::sun::util::calendar::BaseCalendar)
public:
	LocalGregorianCalendar();
	using ::sun::util::calendar::BaseCalendar::isLeapYear;
	void init$($String* name, $Array<::sun::util::calendar::Era>* eras);
	::sun::util::calendar::LocalGregorianCalendar$Date* adjustYear(::sun::util::calendar::LocalGregorianCalendar$Date* ldate, int64_t millis, int32_t zoneOffset);
	static $String* convertUnicodeEscape($String* src);
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::java::util::TimeZone* zone) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::sun::util::calendar::CalendarDate* date) override;
	virtual void getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDate* date, int64_t fixedDate) override;
	static ::sun::util::calendar::LocalGregorianCalendar* getLocalGregorianCalendar($String* name);
	virtual $String* getName() override;
	virtual bool isLeapYear(int32_t gregorianYear) override;
	virtual bool isLeapYear(::sun::util::calendar::Era* era, int32_t year);
	static bool isValidEra(::sun::util::calendar::Era* newEra, $Array<::sun::util::calendar::Era>* eras);
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate(::java::util::TimeZone* zone) override;
	virtual bool normalize(::sun::util::calendar::CalendarDate* date) override;
	virtual void normalizeMonth(::sun::util::calendar::CalendarDate* date) override;
	virtual void normalizeYear(::sun::util::calendar::CalendarDate* date);
	static ::sun::util::calendar::Era* parseEraEntry($String* entry);
	virtual bool validate(::sun::util::calendar::CalendarDate* date) override;
	bool validateEra(::sun::util::calendar::Era* era);
	static $Array<::sun::util::calendar::Era>* JAPANESE_ERAS;
	$String* name = nullptr;
	$Array<::sun::util::calendar::Era>* eras = nullptr;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("JAPANESE_ERAS")

#endif // _sun_util_calendar_LocalGregorianCalendar_h_