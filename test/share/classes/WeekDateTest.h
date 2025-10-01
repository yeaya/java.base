#ifndef _WeekDateTest_h_
#define _WeekDateTest_h_
//$ class WeekDateTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class SimpleDateFormat;
	}
}
namespace java {
	namespace util {
		class GregorianCalendar;
	}
}

class $export WeekDateTest : public ::java::lang::Object {
	$class(WeekDateTest, 0, ::java::lang::Object)
public:
	WeekDateTest();
	void init$();
	static void formatTest($Array<::java::lang::String, 2>* data);
	static void main($StringArray* args);
	static ::java::util::GregorianCalendar* newCalendar();
	static void noWeekDateSupport();
	static void nonLenientTest($StringArray* data);
	static void parseTest($Array<::java::lang::String, 2>* data);
	static ::java::text::SimpleDateFormat* ymdFormat;
	static ::java::text::SimpleDateFormat* ywdFormat;
	static $Array<::java::lang::String, 2>* roundTripData;
	static $Array<::java::lang::String, 2>* leniencyData;
	static $StringArray* invalidData;
};

#endif // _WeekDateTest_h_