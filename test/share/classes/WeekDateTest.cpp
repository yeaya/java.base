#include <WeekDateTest.h>

#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _WeekDateTest_FieldInfo_[] = {
	{"ymdFormat", "Ljava/text/SimpleDateFormat;", nullptr, $STATIC, $staticField(WeekDateTest, ymdFormat)},
	{"ywdFormat", "Ljava/text/SimpleDateFormat;", nullptr, $STATIC, $staticField(WeekDateTest, ywdFormat)},
	{"roundTripData", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(WeekDateTest, roundTripData)},
	{"leniencyData", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(WeekDateTest, leniencyData)},
	{"invalidData", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(WeekDateTest, invalidData)},
	{}
};

$MethodInfo _WeekDateTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WeekDateTest::*)()>(&WeekDateTest::init$))},
	{"formatTest", "([[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray2*)>(&WeekDateTest::formatTest)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WeekDateTest::main)), "java.lang.Exception"},
	{"newCalendar", "()Ljava/util/GregorianCalendar;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GregorianCalendar*(*)()>(&WeekDateTest::newCalendar))},
	{"noWeekDateSupport", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WeekDateTest::noWeekDateSupport)), "java.lang.Exception"},
	{"nonLenientTest", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WeekDateTest::nonLenientTest))},
	{"parseTest", "([[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray2*)>(&WeekDateTest::parseTest)), "java.lang.Exception"},
	{}
};

$ClassInfo _WeekDateTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WeekDateTest",
	"java.lang.Object",
	nullptr,
	_WeekDateTest_FieldInfo_,
	_WeekDateTest_MethodInfo_
};

$Object* allocate$WeekDateTest($Class* clazz) {
	return $of($alloc(WeekDateTest));
}

$SimpleDateFormat* WeekDateTest::ymdFormat = nullptr;
$SimpleDateFormat* WeekDateTest::ywdFormat = nullptr;
$StringArray2* WeekDateTest::roundTripData = nullptr;
$StringArray2* WeekDateTest::leniencyData = nullptr;
$StringArray* WeekDateTest::invalidData = nullptr;

void WeekDateTest::init$() {
}

void WeekDateTest::main($StringArray* args) {
	$init(WeekDateTest);
	formatTest(WeekDateTest::roundTripData);
	parseTest(WeekDateTest::roundTripData);
	parseTest(WeekDateTest::leniencyData);
	nonLenientTest(WeekDateTest::invalidData);
	noWeekDateSupport();
}

void WeekDateTest::formatTest($StringArray2* data) {
	$init(WeekDateTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray2, arr$, data);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, dates, arr$->get(i$));
			{
				$var($String, regularDate, $nc(dates)->get(0));
				$var($String, weekDate, dates->get(1));
				$var($Date, date, nullptr);
				$assign(date, $nc(WeekDateTest::ymdFormat)->parse(regularDate));
				$var($String, s, $nc(WeekDateTest::ywdFormat)->format(date));
				if (!$nc(s)->equals(weekDate)) {
					$throwNew($RuntimeException, $$str({"format: got="_s, s, ", expecetd="_s, weekDate}));
				}
			}
		}
	}
}

void WeekDateTest::parseTest($StringArray2* data) {
	$init(WeekDateTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray2, arr$, data);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, dates, arr$->get(i$));
			{
				$var($String, regularDate, $nc(dates)->get(0));
				$var($String, weekDate, dates->get(1));
				$var($Date, date1, nullptr);
				$var($Date, date2, nullptr);
				$assign(date1, $nc(WeekDateTest::ymdFormat)->parse(regularDate));
				$assign(date2, $nc(WeekDateTest::ywdFormat)->parse(weekDate));
				if (!$nc(date1)->equals(date2)) {
					$nc($System::err)->println($$str({regularDate, ": date1 = "_s, date1}));
					$nc($System::err)->println($$str({weekDate, ": date2 = "_s, date2}));
					$throwNew($RuntimeException, "parse: date1 != date2"_s);
				}
			}
		}
	}
}

void WeekDateTest::nonLenientTest($StringArray* data) {
	$init(WeekDateTest);
	$useLocalCurrentObjectStackCache();
	$nc(WeekDateTest::ywdFormat)->setLenient(false);
	{
		$var($StringArray, arr$, data);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, date, arr$->get(i$));
			{
				try {
					$var($Date, d, $nc(WeekDateTest::ywdFormat)->parse(date));
					$throwNew($RuntimeException, $$str({"No ParseException thrown with "_s, date}));
				} catch ($ParseException& e) {
				}
			}
		}
	}
	$nc(WeekDateTest::ywdFormat)->setLenient(true);
}

void WeekDateTest::noWeekDateSupport() {
	$init(WeekDateTest);
	$useLocalCurrentObjectStackCache();
	$var($TimeZone, var$0, $TimeZone::getTimeZone("GMT"_s));
	$var($Calendar, jcal, $Calendar::getInstance(var$0, $$new($Locale, "ja"_s, "JP"_s, "JP"_s)));
	$var($String, format, "2-W01-2"_s);
	int32_t expectedYear = 2019;
	if ($System::currentTimeMillis() < (int64_t)0x0000016A70B0DC00) {
		$assign(format, "21-W01-3"_s);
		expectedYear = 2008;
	}
	$nc(jcal)->setFirstDayOfWeek(2);
	jcal->setMinimalDaysInFirstWeek(4);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, "Y-\'W\'ww-u"_s));
	sdf->setCalendar(jcal);
	$var($Date, d, sdf->parse(format));
	$var($GregorianCalendar, gcal, newCalendar());
	$nc(gcal)->setTime(d);
	bool var$2 = gcal->get(1) != expectedYear;
	bool var$1 = var$2 || gcal->get(2) != 11;
	if (var$1 || gcal->get(5) != 31) {
		$var($String, s, $String::format("noWeekDateSupport: got %04d-%02d-%02d, expected %4d-12-31%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(gcal->get(1)))),
			$($of($Integer::valueOf(gcal->get(2) + 1))),
			$($of($Integer::valueOf(gcal->get(5)))),
			$($of($Integer::valueOf(expectedYear)))
		})));
		$throwNew($RuntimeException, s);
	}
}

$GregorianCalendar* WeekDateTest::newCalendar() {
	$init(WeekDateTest);
	$useLocalCurrentObjectStackCache();
	$var($GregorianCalendar, cal, $new($GregorianCalendar, $($TimeZone::getTimeZone("GMT"_s))));
	cal->setFirstDayOfWeek(2);
	cal->setMinimalDaysInFirstWeek(4);
	return cal;
}

void clinit$WeekDateTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$assignStatic(WeekDateTest::ymdFormat, $new($SimpleDateFormat, "yyyy-MM-dd"_s, $Locale::US));
	$assignStatic(WeekDateTest::ywdFormat, $new($SimpleDateFormat, "YYYY-\'W\'ww-u"_s, $Locale::US));
	{
		$nc(WeekDateTest::ymdFormat)->setCalendar($(WeekDateTest::newCalendar()));
		$nc(WeekDateTest::ywdFormat)->setCalendar($(WeekDateTest::newCalendar()));
	}
	$assignStatic(WeekDateTest::roundTripData, $new($StringArray2, {
		$$new($StringArray, {
			"2005-01-01"_s,
			"2004-W53-6"_s
		}),
		$$new($StringArray, {
			"2005-01-02"_s,
			"2004-W53-7"_s
		}),
		$$new($StringArray, {
			"2005-12-31"_s,
			"2005-W52-6"_s
		}),
		$$new($StringArray, {
			"2007-01-01"_s,
			"2007-W01-1"_s
		}),
		$$new($StringArray, {
			"2007-12-30"_s,
			"2007-W52-7"_s
		}),
		$$new($StringArray, {
			"2007-12-31"_s,
			"2008-W01-1"_s
		}),
		$$new($StringArray, {
			"2008-01-01"_s,
			"2008-W01-2"_s
		}),
		$$new($StringArray, {
			"2008-12-29"_s,
			"2009-W01-1"_s
		}),
		$$new($StringArray, {
			"2008-12-31"_s,
			"2009-W01-3"_s
		}),
		$$new($StringArray, {
			"2009-01-01"_s,
			"2009-W01-4"_s
		}),
		$$new($StringArray, {
			"2009-12-31"_s,
			"2009-W53-4"_s
		}),
		$$new($StringArray, {
			"2010-01-03"_s,
			"2009-W53-7"_s
		}),
		$$new($StringArray, {
			"2009-12-31"_s,
			"2009-W53-4"_s
		}),
		$$new($StringArray, {
			"2010-01-01"_s,
			"2009-W53-5"_s
		}),
		$$new($StringArray, {
			"2010-01-02"_s,
			"2009-W53-6"_s
		}),
		$$new($StringArray, {
			"2010-01-03"_s,
			"2009-W53-7"_s
		}),
		$$new($StringArray, {
			"2008-12-28"_s,
			"2008-W52-7"_s
		}),
		$$new($StringArray, {
			"2008-12-29"_s,
			"2009-W01-1"_s
		}),
		$$new($StringArray, {
			"2008-12-30"_s,
			"2009-W01-2"_s
		}),
		$$new($StringArray, {
			"2008-12-31"_s,
			"2009-W01-3"_s
		}),
		$$new($StringArray, {
			"2009-01-01"_s,
			"2009-W01-4"_s
		}),
		$$new($StringArray, {
			"2009-01-01"_s,
			"2009-W01-4"_s
		})
	}));
	$assignStatic(WeekDateTest::leniencyData, $new($StringArray2, {
		$$new($StringArray, {
			"2008-12-28"_s,
			"2009-W01-0"_s
		}),
		$$new($StringArray, {
			"2010-01-04"_s,
			"2009-W53-8"_s
		}),
		$$new($StringArray, {
			"2008-12-29"_s,
			"2008-W53-1"_s
		})
	}));
	$assignStatic(WeekDateTest::invalidData, $new($StringArray, {
		"2010-W00-1"_s,
		"2010-W55-1"_s,
		"2010-W03-0"_s,
		"2010-W04-8"_s,
		"2010-W04-19"_s
	}));
}

WeekDateTest::WeekDateTest() {
}

$Class* WeekDateTest::load$($String* name, bool initialize) {
	$loadClass(WeekDateTest, name, initialize, &_WeekDateTest_ClassInfo_, clinit$WeekDateTest, allocate$WeekDateTest);
	return class$;
}

$Class* WeekDateTest::class$ = nullptr;