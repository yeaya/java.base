#include <sun/text/resources/FormatData.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

$MethodInfo _FormatData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData::*)()>(&FormatData::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.FormatData",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_MethodInfo_
};

$Object* allocate$FormatData($Class* clazz) {
	return $of($alloc(FormatData));
}

void FormatData::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, julianEras, $new($StringArray, {
		"BC"_s,
		"AD"_s
	}));
	$var($StringArray, buddhistEras, $new($StringArray, {
		"BC"_s,
		"B.E."_s
	}));
	$var($StringArray, japaneseEraAbbrs, $new($StringArray, {
		""_s,
		"M"_s,
		"T"_s,
		"S"_s,
		"H"_s,
		"R"_s
	}));
	$var($StringArray, japaneseEras, $new($StringArray, {
		""_s,
		"Meiji"_s,
		"Taisho"_s,
		"Showa"_s,
		"Heisei"_s,
		"Reiwa"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
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
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"May"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Oct"_s,
				"Nov"_s,
				"Dec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"1"_s,
				"2"_s,
				"3"_s,
				"4"_s,
				"5"_s,
				"6"_s,
				"7"_s,
				"8"_s,
				"9"_s,
				"10"_s,
				"11"_s,
				"12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Sunday"_s,
				"Monday"_s,
				"Tuesday"_s,
				"Wednesday"_s,
				"Thursday"_s,
				"Friday"_s,
				"Saturday"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
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
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"W"_s,
				"T"_s,
				"F"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"a"_s,
				"p"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(julianEras)
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of(julianEras)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				"B"_s,
				"A"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(buddhistEras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of(buddhistEras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(buddhistEras)
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of(japaneseEras)
		}),
		$$new($ObjectArray, {
			$of("japanese.short.Eras"_s),
			$of(japaneseEraAbbrs)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.Eras"_s),
			$of(japaneseEraAbbrs)
		}),
		$$new($ObjectArray, {
			$of("japanese.FirstYear"_s),
			$of($$new($StringArray, 0))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4 #,##0.00;-\u00a4 #,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of(""_s)
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("arab.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u0660"_s,
				"#"_s,
				"-"_s,
				u"\u0627\u0633"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"\u066b"_s,
				u"\u066c"_s,
				u"\u061b"_s,
				u"\u066a"_s,
				u"\u06f0"_s,
				"#"_s,
				"-"_s,
				u"\u00d7\u06f1\u06f0^"_s,
				u"\u0609"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("bali.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1b50"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("beng.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u09e6"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("cham.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uaa50"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("deva.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0966"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("fullwide.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uff10"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("gujr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ae6"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("guru.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0a66"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua9d0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("kali.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua900"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("khmr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u17e0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("knda.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ce6"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("laoo.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0ed0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("lana.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1a80"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("lanatham.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1a90"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("lepc.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1c40"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("limb.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1946"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("mlym.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0d66"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("mong.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1810"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("mtei.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\uabf0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("mymr.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1040"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("mymrshan.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1090"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("nkoo.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u07c0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("olck.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1c50"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("orya.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0b66"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("saur.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua8d0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("sund.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u1bb0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("talu.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u19d0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("tamldec.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0be6"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("telu.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0c66"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("thai.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0e50"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				u"\ufffd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\u0f20"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("vaii.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"\ua620"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"\u2030"_s,
				u"\u221e"_s,
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"0K"_s,
				"00K"_s,
				"000K"_s,
				"0M"_s,
				"00M"_s,
				"000M"_s,
				"0B"_s,
				"00B"_s,
				"000B"_s,
				"0T"_s,
				"00T"_s,
				"000T"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"0 thousand"_s,
				"00 thousand"_s,
				"000 thousand"_s,
				"0 million"_s,
				"00 million"_s,
				"000 million"_s,
				"0 billion"_s,
				"00 billion"_s,
				"000 billion"_s,
				"0 trillion"_s,
				"00 trillion"_s,
				"000 trillion"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, yyyy"_s,
				"MMMM d, yyyy"_s,
				"MMM d, yyyy"_s,
				"M/d/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of($$new($StringArray, {
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM G yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"d/M/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of($$new($StringArray, {"{1}, {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"GGGG yyyy MMMM d (EEEE)"_s,
				"GGGG yyyy MMMM d"_s,
				"GGGG yyyy MMM d"_s,
				"Gy.MM.dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData::FormatData() {
}

$Class* FormatData::load$($String* name, bool initialize) {
	$loadClass(FormatData, name, initialize, &_FormatData_ClassInfo_, allocate$FormatData);
	return class$;
}

$Class* FormatData::class$ = nullptr;

		} // resources
	} // text
} // sun