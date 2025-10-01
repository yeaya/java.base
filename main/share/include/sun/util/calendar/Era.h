#ifndef _sun_util_calendar_Era_h_
#define _sun_util_calendar_Era_h_
//$ class sun.util.calendar.Era
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import Era : public ::java::lang::Object {
	$class(Era, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Era();
	void init$($String* name, $String* abbr, int64_t since, bool localTime);
	virtual bool equals(Object$* o) override;
	$String* getAbbreviation();
	$String* getDiaplayAbbreviation(::java::util::Locale* locale);
	$String* getDisplayName(::java::util::Locale* locale);
	$String* getName();
	int64_t getSince(::java::util::TimeZone* zone);
	::sun::util::calendar::CalendarDate* getSinceDate();
	virtual int32_t hashCode() override;
	bool isLocalTime();
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* abbr = nullptr;
	int64_t since = 0;
	::sun::util::calendar::CalendarDate* sinceDate = nullptr;
	bool localTime = false;
	int32_t hash = 0;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_Era_h_