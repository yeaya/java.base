#include <sun/text/resources/JavaTimeSupplementary_en.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

$MethodInfo _JavaTimeSupplementary_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaTimeSupplementary_en::*)()>(&JavaTimeSupplementary_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _JavaTimeSupplementary_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.JavaTimeSupplementary_en",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_en_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_en($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_en));
}

void JavaTimeSupplementary_en::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_en::getContents() {
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1st quarter"_s,
		"2nd quarter"_s,
		"3rd quarter"_s,
		"4th quarter"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y GGGG"_s,
		"MMMM d, y GGGG"_s,
		"MMM d, y GGGG"_s,
		"M/d/y G"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"Sunday"_s,
		"Monday"_s,
		"Tuesday"_s,
		"Wednesday"_s,
		"Thursday"_s,
		"Friday"_s,
		"Saturday"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y G"_s,
		"MMMM d, y G"_s,
		"MMM d, y G"_s,
		"M/d/y GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("Buddhist Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Gregorian Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Gregorian Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Islamic Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Islamic Calendar (tabular, civil epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Islamic Calendar (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japanese Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Minguo Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("hour"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minute"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("month"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("second"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("week"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("day of the week"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("year"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("time zone"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"Before Christ"_s,
				"Anno Domini"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sun"_s,
				"Mon"_s,
				"Tue"_s,
				"Wed"_s,
				"Thu"_s,
				"Fri"_s,
				"Sat"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"January"_s,
				"February"_s,
				"March"_s,
				"April"_s,
				"May"_s,
				"June"_s,
				"July"_s,
				"August"_s,
				"September"_s,
				"October"_s,
				"November"_s,
				"December"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_en::JavaTimeSupplementary_en() {
}

$Class* JavaTimeSupplementary_en::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_en, name, initialize, &_JavaTimeSupplementary_en_ClassInfo_, allocate$JavaTimeSupplementary_en);
	return class$;
}

$Class* JavaTimeSupplementary_en::class$ = nullptr;

		} // resources
	} // text
} // sun