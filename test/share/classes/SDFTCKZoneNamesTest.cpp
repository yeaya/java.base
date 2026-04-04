#include <SDFTCKZoneNamesTest.h>
#include <java/io/Serializable.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/DateFormat.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/FieldPosition.h>
#include <java/text/NumberFormat.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef AM_PM
#undef CHINA
#undef DATE
#undef DAY_OF_WEEK
#undef DAY_OF_WEEK_IN_MONTH
#undef DAY_OF_YEAR
#undef DST_OFFSET
#undef ERA
#undef GERMANY
#undef HOUR
#undef HOUR_OF_DAY
#undef ID
#undef JAPAN
#undef MILLISECOND
#undef MINUTE
#undef MONTH
#undef ROOT
#undef SECOND
#undef TAIWAN
#undef TIMEZONE_FIELD
#undef UK
#undef US
#undef WEEK_OF_MONTH
#undef WEEK_OF_YEAR
#undef YEAR
#undef ZONE_OFFSET

using $LocaleArray = $Array<::java::util::Locale>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DateFormat = ::java::text::DateFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $FieldPosition = ::java::text::FieldPosition;
using $NumberFormat = ::java::text::NumberFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $Consumer = ::java::util::function::Consumer;

class SDFTCKZoneNamesTest$$Lambda$lambda$main$0 : public $Consumer {
	$class(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(SDFTCKZoneNamesTest* test) {
		$set(this, test, test);
	}
	virtual void accept(Object$* l) override {
		SDFTCKZoneNamesTest::lambda$main$0(test, $cast($Locale, l));
	}
	SDFTCKZoneNamesTest* test = nullptr;
};
$Class* SDFTCKZoneNamesTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LSDFTCKZoneNamesTest;", nullptr, $PUBLIC, $field(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSDFTCKZoneNamesTest;)V", nullptr, $PUBLIC, $method(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, init$, void, SDFTCKZoneNamesTest*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SDFTCKZoneNamesTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SDFTCKZoneNamesTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SDFTCKZoneNamesTest$$Lambda$lambda$main$0::class$ = nullptr;

void SDFTCKZoneNamesTest::init$() {
}

$StringBuffer* SDFTCKZoneNamesTest::myFormat($Date* date, $SimpleDateFormat* sdf) {
	$useLocalObjectStack();
	$var($String, pattern, $nc(sdf)->toPattern());
	$var($StringBuffer, toAppendTo, $new($StringBuffer, ""_s));
	bool inQuote = false;
	char16_t prevCh = 0;
	char16_t ch = 0;
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(pattern)->length(); ++i) {
		ch = pattern->charAt(i);
		if (inQuote) {
			if (ch == u'\'') {
				inQuote = false;
				if (count == 0) {
					toAppendTo->append(ch);
				} else {
					count = 0;
				}
			} else {
				toAppendTo->append(ch);
				++count;
			}
		} else if (ch == u'\'') {
			inQuote = true;
			if (count > 0) {
				toAppendTo->append($(subFormat(prevCh, count, date, sdf)));
				count = 0;
				prevCh = 0;
			}
		} else if (ch >= u'a' && ch <= u'z' || ch >= u'A' && ch <= u'Z') {
			if (ch != prevCh && count > 0) {
				toAppendTo->append($(subFormat(prevCh, count, date, sdf)));
				prevCh = ch;
				count = 1;
			} else {
				if (ch != prevCh) {
					prevCh = ch;
				}
				++count;
			}
		} else if (count > 0) {
			toAppendTo->append($(subFormat(prevCh, count, date, sdf)));
			toAppendTo->append(ch);
			prevCh = 0;
			count = 0;
		} else {
			toAppendTo->append(ch);
		}
	}
	if (count > 0) {
		toAppendTo->append($(subFormat(prevCh, count, date, sdf)));
	}
	return toAppendTo;
}

$String* SDFTCKZoneNamesTest::subFormat(char16_t ch, int32_t count, $Date* date, $SimpleDateFormat* sdf) {
	$useLocalObjectStack();
	int32_t value = 0;
	int32_t patternCharIndex = -1;
	int32_t maxIntCount = 10;
	$var($String, current, ""_s);
	$var($DateFormatSymbols, formatData, $nc(sdf)->getDateFormatSymbols());
	$var($Calendar, calendar, sdf->getCalendar());
	$nc(calendar)->setTime(date);
	$var($NumberFormat, nf, sdf->getNumberFormat());
	$nc(nf)->setGroupingUsed(false);
	if ((patternCharIndex = "GyMdkHmsSEDFwWahKz"_s->indexOf(ch)) == -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal pattern character \'"_s, $$str(ch), "\'"_s}));
	}
	{
		int32_t zoneIndex = 0;
		switch (patternCharIndex) {
		case 0:
			value = calendar->get($Calendar::ERA);
			$assign(current, $nc($($nc(formatData)->getEras()))->get(value));
			break;
		case 1:
			value = calendar->get($Calendar::YEAR);
			if (count == 2) {
				$assign(current, zeroPaddingNumber(value, 2, 2, nf));
			} else {
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			}
			break;
		case 2:
			value = calendar->get($Calendar::MONTH);
			if (count >= 4) {
				$assign(current, $nc($($nc(formatData)->getMonths()))->get(value));
			} else if (count == 3) {
				$assign(current, $nc($($nc(formatData)->getShortMonths()))->get(value));
			} else {
				$assign(current, zeroPaddingNumber(value + 1, count, maxIntCount, nf));
			}
			break;
		case 3:
			value = calendar->get($Calendar::DATE);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 4:
			if ((value = calendar->get($Calendar::HOUR_OF_DAY)) == 0) {
				$assign(current, zeroPaddingNumber(calendar->getMaximum($Calendar::HOUR_OF_DAY) + 1, count, maxIntCount, nf));
			} else {
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			}
			break;
		case 5:
			value = calendar->get($Calendar::HOUR_OF_DAY);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 6:
			value = calendar->get($Calendar::MINUTE);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 7:
			value = calendar->get($Calendar::SECOND);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 8:
			value = calendar->get($Calendar::MILLISECOND);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 9:
			value = calendar->get($Calendar::DAY_OF_WEEK);
			if (count >= 4) {
				$assign(current, $nc($($nc(formatData)->getWeekdays()))->get(value));
			} else {
				$assign(current, $nc($($nc(formatData)->getShortWeekdays()))->get(value));
			}
			break;
		case 10:
			value = calendar->get($Calendar::DAY_OF_YEAR);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 11:
			value = calendar->get($Calendar::DAY_OF_WEEK_IN_MONTH);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 12:
			value = calendar->get($Calendar::WEEK_OF_YEAR);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 13:
			value = calendar->get($Calendar::WEEK_OF_MONTH);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 14:
			value = calendar->get($Calendar::AM_PM);
			$assign(current, $nc($($nc(formatData)->getAmPmStrings()))->get(value));
			break;
		case 15:
			if ((value = calendar->get($Calendar::HOUR)) == 0) {
				$assign(current, zeroPaddingNumber(calendar->getLeastMaximum($Calendar::HOUR) + 1, count, maxIntCount, nf));
			} else {
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			}
			break;
		case 16:
			value = calendar->get($Calendar::HOUR);
			$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
			break;
		case 17:
			zoneIndex = getZoneIndex($($$nc(calendar->getTimeZone())->getID()), formatData);
			if (zoneIndex == -1) {
				$var($StringBuffer, zoneString, $new($StringBuffer));
				int32_t var$0 = calendar->get($Calendar::ZONE_OFFSET);
				value = var$0 + calendar->get($Calendar::DST_OFFSET);
				if (value < 0) {
					zoneString->append("GMT-"_s);
					value = -value;
				} else {
					zoneString->append("GMT+"_s);
				}
				zoneString->append($(zeroPaddingNumber(($div(value, (60 * 60 * 1000))), 2, 2, nf)));
				zoneString->append(u':');
				zoneString->append($(zeroPaddingNumber(($div(($mod(value, (60 * 60 * 1000))), (60 * 1000))), 2, 2, nf)));
				$assign(current, zoneString->toString());
			} else if (calendar->get($Calendar::DST_OFFSET) != 0) {
				if (count >= 4) {
					$assign(current, $nc($nc($($nc(formatData)->getZoneStrings()))->get(zoneIndex))->get(3));
				} else {
					$assign(current, $nc($nc($($nc(formatData)->getZoneStrings()))->get(zoneIndex))->get(4));
				}
			} else if (count >= 4) {
				$assign(current, $nc($nc($($nc(formatData)->getZoneStrings()))->get(zoneIndex))->get(1));
			} else {
				$assign(current, $nc($nc($($nc(formatData)->getZoneStrings()))->get(zoneIndex))->get(2));
			}
			break;
		}
	}
	return current;
}

$String* SDFTCKZoneNamesTest::zeroPaddingNumber(int64_t value, int32_t minDigits, int32_t maxDigits, $NumberFormat* nf) {
	$nc(nf)->setMinimumIntegerDigits(minDigits);
	nf->setMaximumIntegerDigits(maxDigits);
	return nf->format(value);
}

int32_t SDFTCKZoneNamesTest::getZoneIndex($String* ID, $DateFormatSymbols* dfs) {
	$var($StringArray2, zoneStrings, $nc(dfs)->getZoneStrings());
	for (int32_t index = 0; index < $nc(zoneStrings)->length; ++index) {
		if ($nc(ID)->equalsIgnoreCase($nc(zoneStrings->get(index))->get(0))) {
			return index;
		}
	}
	return -1;
}

void SDFTCKZoneNamesTest::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var(SDFTCKZoneNamesTest, test, $new(SDFTCKZoneNamesTest));
	$var($Throwable, var$0, nullptr);
	try {
		$$nc($$nc($List::of($$new($LocaleArray, {
			$Locale::ROOT,
			$Locale::CHINA,
			$($Locale::forLanguageTag("es-419"_s)),
			$Locale::GERMANY,
			$($Locale::forLanguageTag("hi-IN"_s)),
			$Locale::JAPAN,
			$Locale::TAIWAN,
			$Locale::UK,
			$Locale::US,
			$($Locale::forLanguageTag("uz-Cyrl-UZ"_s)),
			$($Locale::forLanguageTag("zh-SG"_s)),
			$($Locale::forLanguageTag("zh-HK"_s)),
			$($Locale::forLanguageTag("zh-MO"_s))
		})))->stream())->forEach($$new(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, test));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Locale::setDefault(defaultLocale);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SDFTCKZoneNamesTest::SimpleDateFormat0062() {
	$useLocalObjectStack();
	bool passed = true;
	$var($StringArray, patterns, $new($StringArray, {
		"\'s0mething\'z mm::hh,yyyy zz"_s,
		"zzzz"_s,
		"z"_s
	}));
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat));
	$var($Date, date, $new($Date, 0x499602d2));
	{
		$var($StringArray2, arr$, $$nc(sdf->getDateFormatSymbols())->getZoneStrings());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($StringArray, tz, arr$->get(i$));
			{
				sdf->setTimeZone($($TimeZone::getTimeZone($nc(tz)->get(0))));
				for (int32_t i = 0; i < patterns->length && passed; ++i) {
					$var($StringBuffer, result, $new($StringBuffer, "qwerty"_s));
					$var($FieldPosition, fp, $new($FieldPosition, $DateFormat::TIMEZONE_FIELD));
					sdf->applyPattern(patterns->get(i));
					$var($String, expected, $$new($StringBuffer, "qwerty"_s)->append($(myFormat(date, sdf)))->toString());
					$var($String, formatted, $$nc(sdf->format(date, result, fp))->toString());
					if (!expected->equals(formatted)) {
						$nc($System::out)->println("method format(date, StringBuffer, FieldPosition) formats wrong"_s);
						$System::out->println($$str({"  pattern: "_s, patterns->get(i)}));
						$System::out->println($$str({"  time zone ID:   "_s, tz->get(0)}));
						$System::out->println($$str({"  expected result:  "_s, expected}));
						$System::out->println($$str({"  formatted result: "_s, formatted}));
						passed = false;
					}
					if (passed && !expected->equals($(result->toString()))) {
						$nc($System::out)->println("method format(Date date, StringBuffer toAppendTo, FieldPosition fp) toAppendTo is not equal to output"_s);
						$System::out->println($$str({"  pattern: "_s, patterns->get(i)}));
						$System::out->println($$str({"  time zone ID:   "_s, tz->get(0)}));
						$System::out->println($$str({"  toAppendTo   : "_s, result}));
						$System::out->println($$str({"  formatted date: "_s, formatted}));
						passed = false;
					}
				}
			}
		}
	}
	if (passed) {
		$nc($System::out)->println("PASSED : OKAY"_s);
	} else {
		$throwNew($RuntimeException, "FAILED"_s);
	}
}

void SDFTCKZoneNamesTest::lambda$main$0(SDFTCKZoneNamesTest* test, $Locale* l) {
	$nc($System::out)->printf("Testing locale: %s%n"_s, $$new($ObjectArray, {l}));
	$Locale::setDefault(l);
	$nc(test)->SimpleDateFormat0062();
}

SDFTCKZoneNamesTest::SDFTCKZoneNamesTest() {
}

$Class* SDFTCKZoneNamesTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SDFTCKZoneNamesTest$$Lambda$lambda$main$0")) {
			return SDFTCKZoneNamesTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"second", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, second)},
		{"minute", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, minute)},
		{"hour", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, hour)},
		{"day", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, day)},
		{"month", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, month)},
		{"year", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, year)},
		{"someday", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, someday)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SDFTCKZoneNamesTest, init$, void)},
		{"SimpleDateFormat0062", "()V", nullptr, $PUBLIC, $virtualMethod(SDFTCKZoneNamesTest, SimpleDateFormat0062, void)},
		{"getZoneIndex", "(Ljava/lang/String;Ljava/text/DateFormatSymbols;)I", nullptr, 0, $virtualMethod(SDFTCKZoneNamesTest, getZoneIndex, int32_t, $String*, $DateFormatSymbols*)},
		{"lambda$main$0", "(LSDFTCKZoneNamesTest;Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SDFTCKZoneNamesTest, lambda$main$0, void, SDFTCKZoneNamesTest*, $Locale*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SDFTCKZoneNamesTest, main, void, $StringArray*)},
		{"myFormat", "(Ljava/util/Date;Ljava/text/SimpleDateFormat;)Ljava/lang/StringBuffer;", nullptr, 0, $virtualMethod(SDFTCKZoneNamesTest, myFormat, $StringBuffer*, $Date*, $SimpleDateFormat*)},
		{"subFormat", "(CILjava/util/Date;Ljava/text/SimpleDateFormat;)Ljava/lang/String;", nullptr, $PRIVATE, $method(SDFTCKZoneNamesTest, subFormat, $String*, char16_t, int32_t, $Date*, $SimpleDateFormat*), "java.lang.IllegalArgumentException"},
		{"zeroPaddingNumber", "(JIILjava/text/NumberFormat;)Ljava/lang/String;", nullptr, 0, $virtualMethod(SDFTCKZoneNamesTest, zeroPaddingNumber, $String*, int64_t, int32_t, int32_t, $NumberFormat*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SDFTCKZoneNamesTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SDFTCKZoneNamesTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SDFTCKZoneNamesTest);
	});
	return class$;
}

$Class* SDFTCKZoneNamesTest::class$ = nullptr;