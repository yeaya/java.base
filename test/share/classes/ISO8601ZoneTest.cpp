#include <ISO8601ZoneTest.h>
#include <java/text/ParseException.h>
#include <java/text/ParsePosition.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef TIMESTAMP
#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParseException = ::java::text::ParseException;
using $ParsePosition = ::java::text::ParsePosition;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$Date* ISO8601ZoneTest::TIMESTAMP = nullptr;
$StringArray2* ISO8601ZoneTest::formatData = nullptr;
$StringArray* ISO8601ZoneTest::zones = nullptr;
$StringArray* ISO8601ZoneTest::isoZoneFormats = nullptr;
$StringArray2* ISO8601ZoneTest::badData = nullptr;
$StringArray* ISO8601ZoneTest::badFormats = nullptr;

void ISO8601ZoneTest::init$() {
}

void ISO8601ZoneTest::main($StringArray* args) {
	$init(ISO8601ZoneTest);
	$useLocalObjectStack();
	$var($TimeZone, tz, $TimeZone::getDefault());
	$var($Locale, loc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$var($Throwable, var$0, nullptr);
	try {
		for (int32_t i = 0; i < ISO8601ZoneTest::formatData->length; ++i) {
			$TimeZone::setDefault($($TimeZone::getTimeZone($nc(ISO8601ZoneTest::formatData->get(i))->get(0))));
			formatTest(ISO8601ZoneTest::isoZoneFormats->get($mod(i, ISO8601ZoneTest::isoZoneFormats->length)), $nc(ISO8601ZoneTest::formatData->get(i))->get(1));
		}
		{
			$var($StringArray, arr$, ISO8601ZoneTest::zones);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, zone, arr$->get(i$));
				{
					$TimeZone::setDefault($($TimeZone::getTimeZone(zone)));
					{
						$var($StringArray, arr$, ISO8601ZoneTest::isoZoneFormats);
						for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
							$var($String, fmt, arr$->get(i$));
							{
								roundtripTest(fmt);
								$var($SimpleDateFormat, f, $new($SimpleDateFormat, fmt));
							}
						}
					}
				}
			}
		}
		{
			$var($StringArray2, arr$, ISO8601ZoneTest::badData);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($StringArray, d, arr$->get(i$));
				{
					badDataParsing($nc(d)->get(0), $nc(d)->get(1), $nc($nc(d)->get(2))->length());
				}
			}
		}
		{
			$var($StringArray, arr$, ISO8601ZoneTest::badFormats);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, fmt, arr$->get(i$));
				{
					badFormat(fmt);
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$TimeZone::setDefault(tz);
		$Locale::setDefault(loc);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ISO8601ZoneTest::formatTest($String* fmt, $String* expected) {
	$init(ISO8601ZoneTest);
	$useLocalObjectStack();
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, fmt));
	$var($String, s, sdf->format(ISO8601ZoneTest::TIMESTAMP));
	if (!$nc(expected)->equals(s)) {
		$throwNew($RuntimeException, $$str({"formatTest: got "_s, s, ", expected "_s, expected}));
	}
	$var($Date, d, sdf->parse(s));
	int64_t var$0 = $nc(d)->getTime();
	if (var$0 != ISO8601ZoneTest::TIMESTAMP->getTime()) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("formatTest: parse("_s);
		var$1->append(s);
		var$1->append("), got "_s);
		var$1->append(d->getTime());
		var$1->append(", expected "_s);
		var$1->append(ISO8601ZoneTest::TIMESTAMP->getTime());
		$throwNew($RuntimeException, $$str(var$1));
	}
	$var($ParsePosition, pos, $new($ParsePosition, 0));
	$assign(d, sdf->parse($$str({s, "123"_s}), pos));
	int64_t var$2 = $nc(d)->getTime();
	if (var$2 != ISO8601ZoneTest::TIMESTAMP->getTime()) {
		$var($StringBuilder, var$3, $new($StringBuilder));
		var$3->append("formatTest: parse("_s);
		var$3->append(s);
		var$3->append("), got "_s);
		var$3->append(d->getTime());
		var$3->append(", expected "_s);
		var$3->append(ISO8601ZoneTest::TIMESTAMP->getTime());
		$throwNew($RuntimeException, $$str(var$3));
	}
	int32_t var$4 = pos->getIndex();
	if (var$4 != $nc(s)->length()) {
		$var($StringBuilder, var$5, $new($StringBuilder));
		var$5->append("formatTest: wrong resulting parse position: "_s);
		var$5->append(pos->getIndex());
		var$5->append(", expected "_s);
		var$5->append(s->length());
		$throwNew($RuntimeException, $$str(var$5));
	}
}

void ISO8601ZoneTest::roundtripTest($String* fmt) {
	$init(ISO8601ZoneTest);
	$useLocalObjectStack();
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, fmt));
	$var($Date, date, $new($Date));
	int32_t fractionalHour = $$nc(sdf->getTimeZone())->getOffset(date->getTime());
	$modAssign(fractionalHour, 3600000);
	$var($String, s, sdf->format(date));
	$var($Date, pd, sdf->parse(s));
	int64_t var$0 = $nc(pd)->getTime();
	int64_t diffsInMillis = var$0 - date->getTime();
	if (diffsInMillis != 0) {
		if (diffsInMillis != fractionalHour) {
			$throwNew($RuntimeException, $$str({"fmt= "_s, fmt, ", diff="_s, $$str(diffsInMillis), ", fraction="_s, $$str(fractionalHour)}));
		}
	}
}

void ISO8601ZoneTest::badDataParsing($String* fmt, $String* text, int32_t expectedErrorIndex) {
	$init(ISO8601ZoneTest);
	$useLocalObjectStack();
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, fmt));
	try {
		sdf->parse(text);
		$throwNew($RuntimeException, $$str({"didn\'t throw an exception: fmt="_s, fmt, ", text="_s, text}));
	} catch ($ParseException& e) {
	}
	$var($ParsePosition, pos, $new($ParsePosition, 0));
	$var($Date, d, sdf->parse(text, pos));
	int32_t errorIndex = pos->getErrorIndex();
	if (d != nullptr || errorIndex != expectedErrorIndex) {
		$throwNew($RuntimeException, $$str({"Bad error index="_s, $$str(errorIndex), ", expected="_s, $$str(expectedErrorIndex), ", fmt="_s, fmt, ", text="_s, text}));
	}
}

void ISO8601ZoneTest::badFormat($String* fmt) {
	$init(ISO8601ZoneTest);
	$useLocalObjectStack();
	try {
		$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, fmt));
		$throwNew($RuntimeException, $$str({"Constructor didn\'t throw an exception: fmt="_s, fmt}));
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$var($SimpleDateFormat, sdf, $new($SimpleDateFormat));
		sdf->applyPattern(fmt);
		$throwNew($RuntimeException, $$str({"applyPattern didn\'t throw an exception: fmt="_s, fmt}));
	} catch ($IllegalArgumentException& e) {
	}
}

void ISO8601ZoneTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ISO8601ZoneTest::TIMESTAMP, $new($Date, (int64_t)0x0000012ae5f11fec));
	$assignStatic(ISO8601ZoneTest::formatData, $new($StringArray2, {
		$$new($StringArray, {
			"America/Los_Angeles"_s,
			"2010-09-06T00:27:19.020-07"_s
		}),
		$$new($StringArray, {
			"America/Los_Angeles"_s,
			"2010-09-06T00:27:19.020-0700"_s
		}),
		$$new($StringArray, {
			"America/Los_Angeles"_s,
			"2010-09-06T00:27:19.020-07:00"_s
		}),
		$$new($StringArray, {
			"Australia/Sydney"_s,
			"2010-09-06T17:27:19.020+10"_s
		}),
		$$new($StringArray, {
			"Australia/Sydney"_s,
			"2010-09-06T17:27:19.020+1000"_s
		}),
		$$new($StringArray, {
			"Australia/Sydney"_s,
			"2010-09-06T17:27:19.020+10:00"_s
		}),
		$$new($StringArray, {
			"GMT-07:00"_s,
			"2010-09-06T00:27:19.020-07"_s
		}),
		$$new($StringArray, {
			"GMT-07:00"_s,
			"2010-09-06T00:27:19.020-0700"_s
		}),
		$$new($StringArray, {
			"GMT-07:00"_s,
			"2010-09-06T00:27:19.020-07:00"_s
		}),
		$$new($StringArray, {
			"UTC"_s,
			"2010-09-06T07:27:19.020Z"_s
		}),
		$$new($StringArray, {
			"UTC"_s,
			"2010-09-06T07:27:19.020Z"_s
		}),
		$$new($StringArray, {
			"UTC"_s,
			"2010-09-06T07:27:19.020Z"_s
		})
	}));
	$assignStatic(ISO8601ZoneTest::zones, $new($StringArray, {
		"America/Los_Angeles"_s,
		"Australia/Sydney"_s,
		"GMT-07:00"_s,
		"UTC"_s,
		"GMT+05:30"_s,
		"GMT-01:23"_s
	}));
	$assignStatic(ISO8601ZoneTest::isoZoneFormats, $new($StringArray, {
		"yyyy-MM-dd\'T\'HH:mm:ss.SSSX"_s,
		"yyyy-MM-dd\'T\'HH:mm:ss.SSSXX"_s,
		"yyyy-MM-dd\'T\'HH:mm:ss.SSSXXX"_s
	}));
	$assignStatic(ISO8601ZoneTest::badData, $new($StringArray2, {
		$$new($StringArray, {
			"X"_s,
			"1"_s,
			"1"_s
		}),
		$$new($StringArray, {
			"X"_s,
			"+1"_s,
			"+1"_s
		}),
		$$new($StringArray, {
			"X"_s,
			"-2"_s,
			"-2"_s
		}),
		$$new($StringArray, {
			"X"_s,
			"-24"_s,
			"-2"_s
		}),
		$$new($StringArray, {
			"X"_s,
			"+24"_s,
			"+2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"9"_s,
			"9"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"23"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"234"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"3456"_s,
			"3"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"23456"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"+1"_s,
			"+1"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"-12"_s,
			"-12"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"+123"_s,
			"+123"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"-12:34"_s,
			"-12"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"+12:34"_s,
			"+12"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"-2423"_s,
			"-2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"+2423"_s,
			"+2"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"-1260"_s,
			"-126"_s
		}),
		$$new($StringArray, {
			"XX"_s,
			"+1260"_s,
			"+126"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"9"_s,
			"9"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"23"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"234"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"3456"_s,
			"3"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"23456"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"2:34"_s,
			"2"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"12:4"_s,
			"1"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"12:34"_s,
			"1"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"-1"_s,
			"-1"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+1"_s,
			"+1"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"-12"_s,
			"-12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+12"_s,
			"+12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"-123"_s,
			"-12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+123"_s,
			"+12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"-1234"_s,
			"-12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+1234"_s,
			"+12"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+24:23"_s,
			"+2"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+12:60"_s,
			"+12:6"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+1:23"_s,
			"+1"_s
		}),
		$$new($StringArray, {
			"XXX"_s,
			"+12:3"_s,
			"+12:3"_s
		})
	}));
	$assignStatic(ISO8601ZoneTest::badFormats, $new($StringArray, {
		"XXXX"_s,
		"XXXXX"_s,
		"XXXXXX"_s
	}));
}

ISO8601ZoneTest::ISO8601ZoneTest() {
}

$Class* ISO8601ZoneTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TIMESTAMP", "Ljava/util/Date;", nullptr, $STATIC | $FINAL, $staticField(ISO8601ZoneTest, TIMESTAMP)},
		{"formatData", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ISO8601ZoneTest, formatData)},
		{"zones", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ISO8601ZoneTest, zones)},
		{"isoZoneFormats", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ISO8601ZoneTest, isoZoneFormats)},
		{"badData", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ISO8601ZoneTest, badData)},
		{"badFormats", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ISO8601ZoneTest, badFormats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ISO8601ZoneTest, init$, void)},
		{"badDataParsing", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(ISO8601ZoneTest, badDataParsing, void, $String*, $String*, int32_t)},
		{"badFormat", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ISO8601ZoneTest, badFormat, void, $String*)},
		{"formatTest", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ISO8601ZoneTest, formatTest, void, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ISO8601ZoneTest, main, void, $StringArray*), "java.lang.Exception"},
		{"roundtripTest", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ISO8601ZoneTest, roundtripTest, void, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ISO8601ZoneTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ISO8601ZoneTest, name, initialize, &classInfo$$, ISO8601ZoneTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO8601ZoneTest);
	});
	return class$;
}

$Class* ISO8601ZoneTest::class$ = nullptr;