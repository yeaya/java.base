#include <sun/text/resources/JavaTimeSupplementary_en.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void JavaTimeSupplementary_en::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_en::getContents() {
	$useLocalObjectStack();
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
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"Buddhist Calendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Gregorian Calendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Gregorian Calendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Islamic Calendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Islamic Calendar (tabular, civil epoch)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Islamic Calendar (Umm al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Japanese Calendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Minguo Calendar"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"AM/PM"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"hour"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minute"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"month"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"second"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"week"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"day of the week"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"year"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"time zone"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"BE"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"Before Christ"_s,
				"Anno Domini"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			$$new($StringArray, {
				"Sun"_s,
				"Mon"_s,
				"Tue"_s,
				"Wed"_s,
				"Thu"_s,
				"Fri"_s,
				"Sat"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		})
	});
}

JavaTimeSupplementary_en::JavaTimeSupplementary_en() {
}

$Class* JavaTimeSupplementary_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_en, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_en, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.JavaTimeSupplementary_en",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_en);
	});
	return class$;
}

$Class* JavaTimeSupplementary_en::class$ = nullptr;

		} // resources
	} // text
} // sun