#ifndef _sun_util_calendar_CalendarUtils_h_
#define _sun_util_calendar_CalendarUtils_h_
//$ class sun.util.calendar.CalendarUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
		class StringBuilder;
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $export CalendarUtils : public ::java::lang::Object {
	$class(CalendarUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CalendarUtils();
	void init$();
	static int32_t amod(int32_t x, int32_t y);
	static int64_t amod(int64_t x, int64_t y);
	static int64_t floorDivide(int64_t n, int64_t d);
	static int32_t floorDivide(int32_t n, int32_t d);
	static int32_t floorDivide(int32_t n, int32_t d, $ints* r);
	static int32_t floorDivide(int64_t n, int32_t d, $ints* r);
	static bool isGregorianLeapYear(int32_t gregorianYear);
	static bool isJulianLeapYear(int32_t normalizedJulianYear);
	static int64_t mod(int64_t x, int64_t y);
	static int32_t mod(int32_t x, int32_t y);
	static ::java::lang::StringBuilder* sprintf0d(::java::lang::StringBuilder* sb, int32_t value, int32_t width);
	static ::java::lang::StringBuffer* sprintf0d(::java::lang::StringBuffer* sb, int32_t value, int32_t width);
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_CalendarUtils_h_