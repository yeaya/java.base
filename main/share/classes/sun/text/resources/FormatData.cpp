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

void FormatData::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData::getContents() {
	$useLocalObjectStack();
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
			"MonthNames"_s,
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
			"MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"Sunday"_s,
				"Monday"_s,
				"Tuesday"_s,
				"Wednesday"_s,
				"Thursday"_s,
				"Friday"_s,
				"Saturday"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
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
			"DayNarrows"_s,
			$$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"W"_s,
				"T"_s,
				"F"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			$$new($StringArray, {
				"a"_s,
				"p"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			julianEras
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			julianEras
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			$$new($StringArray, {
				"B"_s,
				"A"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			buddhistEras
		}),
		$$new($ObjectArray, {
			"buddhist.short.Eras"_s,
			buddhistEras
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			buddhistEras
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			japaneseEras
		}),
		$$new($ObjectArray, {
			"japanese.short.Eras"_s,
			japaneseEraAbbrs
		}),
		$$new($ObjectArray, {
			"japanese.narrow.Eras"_s,
			japaneseEraAbbrs
		}),
		$$new($ObjectArray, {
			"japanese.FirstYear"_s,
			$$new($StringArray, 0)
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.00;-¤ #,##0.00"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			""_s
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"arab.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"٠"_s,
				"#"_s,
				"-"_s,
				u"اس"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				"-"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"bali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᭐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"beng.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"০"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"cham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꩐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"deva.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"०"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"fullwide.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"０"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"gujr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"૦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"guru.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"੦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"java.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"kali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꤀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"khmr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"០"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"knda.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"೦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"laoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"໐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"lana.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"lanatham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"lepc.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"limb.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᥆"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"mlym.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"൦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"mong.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᠐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"mtei.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꯰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"mymr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"၀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"႐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"nkoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"߀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"olck.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"orya.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"୦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"saur.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꣐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"sund.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᮰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"talu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"tamldec.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"௦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"telu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"౦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"thai.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"๐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"tibt.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"༠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"vaii.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꘠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s
			})
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, MMMM d, yyyy"_s,
				"MMMM d, yyyy"_s,
				"MMM d, yyyy"_s,
				"M/d/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			$$new($StringArray, {
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM G yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"d/M/yyyy"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DateTimePatterns"_s,
			$$new($StringArray, {"{1}, {0}"_s})
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			$$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				"GGGG yyyy MMMM d (EEEE)"_s,
				"GGGG yyyy MMMM d"_s,
				"GGGG yyyy MMM d"_s,
				"Gy.MM.dd"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData::FormatData() {
}

$Class* FormatData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.FormatData",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData);
	});
	return class$;
}

$Class* FormatData::class$ = nullptr;

		} // resources
	} // text
} // sun