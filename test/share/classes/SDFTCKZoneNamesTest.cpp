#include <SDFTCKZoneNamesTest.h>

#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

#undef DAY_OF_YEAR
#undef MONTH
#undef ROOT
#undef HOUR
#undef TAIWAN
#undef WEEK_OF_MONTH
#undef AM_PM
#undef DAY_OF_WEEK_IN_MONTH
#undef ZONE_OFFSET
#undef GERMANY
#undef YEAR
#undef WEEK_OF_YEAR
#undef HOUR_OF_DAY
#undef UK
#undef JAPAN
#undef MINUTE
#undef ID
#undef US
#undef DST_OFFSET
#undef CHINA
#undef DATE
#undef ERA
#undef SECOND
#undef MILLISECOND
#undef DAY_OF_WEEK
#undef TIMEZONE_FIELD

using $LocaleArray = $Array<::java::util::Locale>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DateFormat = ::java::text::DateFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $FieldPosition = ::java::text::FieldPosition;
using $NumberFormat = ::java::text::NumberFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

class SDFTCKZoneNamesTest$$Lambda$lambda$main$0 : public $Consumer {
	$class(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(SDFTCKZoneNamesTest* test) {
		$set(this, test, test);
	}
	virtual void accept(Object$* l) override {
		SDFTCKZoneNamesTest::lambda$main$0(test, $cast($Locale, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SDFTCKZoneNamesTest$$Lambda$lambda$main$0>());
	}
	SDFTCKZoneNamesTest* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SDFTCKZoneNamesTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"test", "LSDFTCKZoneNamesTest;", nullptr, $PUBLIC, $field(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, test)},
	{}
};
$MethodInfo SDFTCKZoneNamesTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(LSDFTCKZoneNamesTest;)V", nullptr, $PUBLIC, $method(static_cast<void(SDFTCKZoneNamesTest$$Lambda$lambda$main$0::*)(SDFTCKZoneNamesTest*)>(&SDFTCKZoneNamesTest$$Lambda$lambda$main$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SDFTCKZoneNamesTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SDFTCKZoneNamesTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* SDFTCKZoneNamesTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SDFTCKZoneNamesTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _SDFTCKZoneNamesTest_FieldInfo_[] = {
	{"second", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, second)},
	{"minute", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, minute)},
	{"hour", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, hour)},
	{"day", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, day)},
	{"month", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, month)},
	{"year", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, year)},
	{"someday", "I", nullptr, $STATIC | $FINAL, $constField(SDFTCKZoneNamesTest, someday)},
	{}
};

$MethodInfo _SDFTCKZoneNamesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SDFTCKZoneNamesTest::*)()>(&SDFTCKZoneNamesTest::init$))},
	{"SimpleDateFormat0062", "()V", nullptr, $PUBLIC},
	{"getZoneIndex", "(Ljava/lang/String;Ljava/text/DateFormatSymbols;)I", nullptr, 0},
	{"lambda$main$0", "(LSDFTCKZoneNamesTest;Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(SDFTCKZoneNamesTest*,$Locale*)>(&SDFTCKZoneNamesTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SDFTCKZoneNamesTest::main))},
	{"myFormat", "(Ljava/util/Date;Ljava/text/SimpleDateFormat;)Ljava/lang/StringBuffer;", nullptr, 0},
	{"subFormat", "(CILjava/util/Date;Ljava/text/SimpleDateFormat;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SDFTCKZoneNamesTest::*)(char16_t,int32_t,$Date*,$SimpleDateFormat*)>(&SDFTCKZoneNamesTest::subFormat)), "java.lang.IllegalArgumentException"},
	{"zeroPaddingNumber", "(JIILjava/text/NumberFormat;)Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _SDFTCKZoneNamesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SDFTCKZoneNamesTest",
	"java.lang.Object",
	nullptr,
	_SDFTCKZoneNamesTest_FieldInfo_,
	_SDFTCKZoneNamesTest_MethodInfo_
};

$Object* allocate$SDFTCKZoneNamesTest($Class* clazz) {
	return $of($alloc(SDFTCKZoneNamesTest));
}

void SDFTCKZoneNamesTest::init$() {
}

$StringBuffer* SDFTCKZoneNamesTest::myFormat($Date* date, $SimpleDateFormat* sdf) {
	$var($String, pattern, $nc(sdf)->toPattern());
	$var($StringBuffer, toAppendTo, $new($StringBuffer, ""_s));
	bool inQuote = false;
	char16_t prevCh = (char16_t)0;
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
				$nc(toAppendTo)->append($(subFormat(prevCh, count, date, sdf)));
				count = 0;
				prevCh = (char16_t)0;
			}
		} else if (ch >= u'a' && ch <= u'z' || ch >= u'A' && ch <= u'Z') {
			if (ch != prevCh && count > 0) {
				$nc(toAppendTo)->append($(subFormat(prevCh, count, date, sdf)));
				prevCh = ch;
				count = 1;
			} else {
				if (ch != prevCh) {
					prevCh = ch;
				}
				++count;
			}
		} else if (count > 0) {
			$nc(toAppendTo)->append($(subFormat(prevCh, count, date, sdf)));
			toAppendTo->append(ch);
			prevCh = (char16_t)0;
			count = 0;
		} else {
			$nc(toAppendTo)->append(ch);
		}
	}
	if (count > 0) {
		toAppendTo->append($(subFormat(prevCh, count, date, sdf)));
	}
	return toAppendTo;
}

$String* SDFTCKZoneNamesTest::subFormat(char16_t ch, int32_t count, $Date* date, $SimpleDateFormat* sdf) {
	int32_t value = 0;
	int32_t patternCharIndex = -1;
	int32_t maxIntCount = 10;
	$var($String, current, ""_s);
	$var($DateFormatSymbols, formatData, $nc(sdf)->getDateFormatSymbols());
	$var($Calendar, calendar, sdf->getCalendar());
	$nc(calendar)->setTime(date);
	$var($NumberFormat, nf, sdf->getNumberFormat());
	$nc(nf)->setGroupingUsed(false);
	if ((patternCharIndex = "GyMdkHmsSEDFwWahKz"_s->indexOf((int32_t)ch)) == -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal pattern character \'"_s, $$str(ch), "\'"_s}));
	}
	{
		int32_t zoneIndex = 0;
		switch (patternCharIndex) {
		case 0:
			{
				value = calendar->get($Calendar::ERA);
				$assign(current, $nc($($nc(formatData)->getEras()))->get(value));
				break;
			}
		case 1:
			{
				value = calendar->get($Calendar::YEAR);
				if (count == 2) {
					$assign(current, zeroPaddingNumber(value, 2, 2, nf));
				} else {
					$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				}
				break;
			}
		case 2:
			{
				value = calendar->get($Calendar::MONTH);
				if (count >= 4) {
					$assign(current, $nc($($nc(formatData)->getMonths()))->get(value));
				} else if (count == 3) {
					$assign(current, $nc($($nc(formatData)->getShortMonths()))->get(value));
				} else {
					$assign(current, zeroPaddingNumber(value + 1, count, maxIntCount, nf));
				}
				break;
			}
		case 3:
			{
				value = calendar->get($Calendar::DATE);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 4:
			{
				if ((value = calendar->get($Calendar::HOUR_OF_DAY)) == 0) {
					$assign(current, zeroPaddingNumber(calendar->getMaximum($Calendar::HOUR_OF_DAY) + 1, count, maxIntCount, nf));
				} else {
					$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				}
				break;
			}
		case 5:
			{
				value = calendar->get($Calendar::HOUR_OF_DAY);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 6:
			{
				value = calendar->get($Calendar::MINUTE);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 7:
			{
				value = calendar->get($Calendar::SECOND);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 8:
			{
				value = calendar->get($Calendar::MILLISECOND);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 9:
			{
				value = calendar->get($Calendar::DAY_OF_WEEK);
				if (count >= 4) {
					$assign(current, $nc($($nc(formatData)->getWeekdays()))->get(value));
				} else {
					$assign(current, $nc($($nc(formatData)->getShortWeekdays()))->get(value));
				}
				break;
			}
		case 10:
			{
				value = calendar->get($Calendar::DAY_OF_YEAR);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 11:
			{
				value = calendar->get($Calendar::DAY_OF_WEEK_IN_MONTH);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 12:
			{
				value = calendar->get($Calendar::WEEK_OF_YEAR);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 13:
			{
				value = calendar->get($Calendar::WEEK_OF_MONTH);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 14:
			{
				value = calendar->get($Calendar::AM_PM);
				$assign(current, $nc($($nc(formatData)->getAmPmStrings()))->get(value));
				break;
			}
		case 15:
			{
				if ((value = calendar->get($Calendar::HOUR)) == 0) {
					$assign(current, zeroPaddingNumber(calendar->getLeastMaximum($Calendar::HOUR) + 1, count, maxIntCount, nf));
				} else {
					$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				}
				break;
			}
		case 16:
			{
				value = calendar->get($Calendar::HOUR);
				$assign(current, zeroPaddingNumber(value, count, maxIntCount, nf));
				break;
			}
		case 17:
			{
				zoneIndex = getZoneIndex($($nc($(calendar->getTimeZone()))->getID()), formatData);
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
				} else if ($nc(calendar)->get($Calendar::DST_OFFSET) != 0) {
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
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var(SDFTCKZoneNamesTest, test, $new(SDFTCKZoneNamesTest));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($nc($($List::of($$new($LocaleArray, {
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
			}))))->stream()))->forEach(static_cast<$Consumer*>($$new(SDFTCKZoneNamesTest$$Lambda$lambda$main$0, test)));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Locale::setDefault(defaultLocale);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SDFTCKZoneNamesTest::SimpleDateFormat0062() {
	bool passed = true;
	$var($StringArray, patterns, $new($StringArray, {
		"\'s0mething\'z mm::hh,yyyy zz"_s,
		"zzzz"_s,
		"z"_s
	}));
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat));
	$var($Date, date, $new($Date, (int64_t)0x499602D2));
	{
		$var($StringArray2, arr$, $nc($(sdf->getDateFormatSymbols()))->getZoneStrings());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, tz, arr$->get(i$));
			{
				sdf->setTimeZone($($TimeZone::getTimeZone($nc(tz)->get(0))));
				for (int32_t i = 0; i < patterns->length && passed; ++i) {
					$var($StringBuffer, result, $new($StringBuffer, "qwerty"_s));
					$var($FieldPosition, fp, $new($FieldPosition, $DateFormat::TIMEZONE_FIELD));
					sdf->applyPattern(patterns->get(i));
					$var($String, expected, $$new($StringBuffer, "qwerty"_s)->append($(myFormat(date, sdf)))->toString());
					$var($String, formatted, $nc($(sdf->format(date, result, fp)))->toString());
					if (!$nc(expected)->equals(formatted)) {
						$init($System);
						$nc($System::out)->println("method format(date, StringBuffer, FieldPosition) formats wrong"_s);
						$nc($System::out)->println($$str({"  pattern: "_s, patterns->get(i)}));
						$nc($System::out)->println($$str({"  time zone ID:   "_s, $nc(tz)->get(0)}));
						$nc($System::out)->println($$str({"  expected result:  "_s, expected}));
						$nc($System::out)->println($$str({"  formatted result: "_s, formatted}));
						passed = false;
					}
					if (passed && !$nc(expected)->equals($(result->toString()))) {
						$init($System);
						$nc($System::out)->println("method format(Date date, StringBuffer toAppendTo, FieldPosition fp) toAppendTo is not equal to output"_s);
						$nc($System::out)->println($$str({"  pattern: "_s, patterns->get(i)}));
						$nc($System::out)->println($$str({"  time zone ID:   "_s, $nc(tz)->get(0)}));
						$nc($System::out)->println($$str({"  toAppendTo   : "_s, result}));
						$nc($System::out)->println($$str({"  formatted date: "_s, formatted}));
						passed = false;
					}
				}
			}
		}
	}
	if (passed) {
		$init($System);
		$nc($System::out)->println("PASSED : OKAY"_s);
	} else {
		$throwNew($RuntimeException, "FAILED"_s);
	}
}

void SDFTCKZoneNamesTest::lambda$main$0(SDFTCKZoneNamesTest* test, $Locale* l) {
	$init($System);
	$nc($System::out)->printf("Testing locale: %s%n"_s, $$new($ObjectArray, {$of(l)}));
	$Locale::setDefault(l);
	$nc(test)->SimpleDateFormat0062();
}

SDFTCKZoneNamesTest::SDFTCKZoneNamesTest() {
}

$Class* SDFTCKZoneNamesTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SDFTCKZoneNamesTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return SDFTCKZoneNamesTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(SDFTCKZoneNamesTest, name, initialize, &_SDFTCKZoneNamesTest_ClassInfo_, allocate$SDFTCKZoneNamesTest);
	return class$;
}

$Class* SDFTCKZoneNamesTest::class$ = nullptr;