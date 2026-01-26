#include <Bug6683975.h>

#include <java/text/DateFormat.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef FULL
#undef LONG
#undef MEDIUM
#undef SEPTEMBER
#undef SHORT
#undef US

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _Bug6683975_FieldInfo_[] = {
	{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, err)},
	{"th", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, th)},
	{"th_TH", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, th_TH)},
	{"expected_th", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, expected_th)},
	{"expected_th_TH", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, expected_th_TH)},
	{"stylePattern", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug6683975, stylePattern)},
	{}
};

$MethodInfo _Bug6683975_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6683975, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6683975, main, void, $StringArray*)},
	{"test", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6683975, test, void, int32_t)},
	{}
};

$ClassInfo _Bug6683975_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6683975",
	"java.lang.Object",
	nullptr,
	_Bug6683975_FieldInfo_,
	_Bug6683975_MethodInfo_
};

$Object* allocate$Bug6683975($Class* clazz) {
	return $of($alloc(Bug6683975));
}

bool Bug6683975::err = false;
$Locale* Bug6683975::th = nullptr;
$Locale* Bug6683975::th_TH = nullptr;
$StringArray* Bug6683975::expected_th = nullptr;
$StringArray* Bug6683975::expected_th_TH = nullptr;
$StringArray* Bug6683975::stylePattern = nullptr;

void Bug6683975::init$() {
}

void Bug6683975::test(int32_t style) {
	$init(Bug6683975);
	$useLocalCurrentObjectStackCache();
	$var($DateFormat, df_th, $DateFormat::getDateTimeInstance(style, style, Bug6683975::th));
	$var($DateFormat, df_th_TH, $DateFormat::getDateTimeInstance(style, style, Bug6683975::th_TH));
	$var($String, str_th, $nc(($cast($SimpleDateFormat, df_th)))->toPattern());
	$var($String, str_th_TH, $nc(($cast($SimpleDateFormat, df_th_TH)))->toPattern());
	if (!$nc(str_th)->equals(str_th_TH)) {
		Bug6683975::err = true;
		$nc($System::err)->println($$str({"Error: Pattern for th locale should be the same as pattern for th_TH locale. ("_s, $nc(Bug6683975::stylePattern)->get(style), ")"_s}));
		$nc($System::err)->println($$str({"\tth: "_s, str_th}));
		$nc($System::err)->println($$str({"\tth_TH: "_s, str_th_TH}));
	}
	$var($Date, date, $new($Date, 2008 - 1900, $Calendar::SEPTEMBER, 30, 8, 0, 0));
	$assign(str_th, $nc(df_th)->format(date));
	if (!$nc($nc(Bug6683975::expected_th)->get(style))->equals(str_th)) {
		Bug6683975::err = true;
		$nc($System::err)->println($$str({"Error: Formatted date in th locale is incorrect in "_s, $nc(Bug6683975::stylePattern)->get(style), " pattern."_s}));
		$nc($System::err)->println($$str({"\tExpected: "_s, $nc(Bug6683975::expected_th)->get(style)}));
		$nc($System::err)->println($$str({"\tGot: "_s, str_th}));
	}
	$assign(str_th_TH, $nc(df_th_TH)->format(date));
	if (!$nc($nc(Bug6683975::expected_th_TH)->get(style))->equals(str_th_TH)) {
		Bug6683975::err = true;
		$nc($System::err)->println($$str({"Error: Formatted date in th_TH locale is incorrect in "_s, $nc(Bug6683975::stylePattern)->get(style), " pattern."_s}));
		$nc($System::err)->println($$str({"\tExpected: "_s, $nc(Bug6683975::expected_th_TH)->get(style)}));
		$nc($System::err)->println($$str({"\tGot: "_s, str_th_TH}));
	}
}

void Bug6683975::main($StringArray* args) {
	$init(Bug6683975);
	$useLocalCurrentObjectStackCache();
	$var($TimeZone, timezone, $TimeZone::getDefault());
	$var($Locale, locale, $Locale::getDefault());
	$TimeZone::setDefault($($TimeZone::getTimeZone("US/Pacific"_s)));
	$Locale::setDefault($Locale::US);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				test($DateFormat::FULL);
				test($DateFormat::LONG);
				test($DateFormat::MEDIUM);
				test($DateFormat::SHORT);
			} catch ($Exception& e) {
				Bug6683975::err = true;
				$nc($System::err)->println($$str({"Unexpected exception was thrown: "_s, e}));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$TimeZone::setDefault(timezone);
			$Locale::setDefault(locale);
			if (Bug6683975::err) {
				$throwNew($RuntimeException, "Failed."_s);
			} else {
				$nc($System::out)->println("Passed."_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$Bug6683975($Class* class$) {
	Bug6683975::err = false;
	$assignStatic(Bug6683975::th, $new($Locale, "th"_s, ""_s));
	$assignStatic(Bug6683975::th_TH, $new($Locale, "th"_s, "TH"_s));
	$assignStatic(Bug6683975::expected_th, $new($StringArray, {
		u"วันอังคารที่ 30 กันยายน ค.ศ. 2008, 8 นาฬิกา 0 นาที 00 วินาที"_s,
		u"30 กันยายน 2008, 8 นาฬิกา 0 นาที"_s,
		u"30 ก.ย. 2008, 8:00:00"_s,
		u"30/9/2008, 8:00 น."_s
	}));
	$assignStatic(Bug6683975::expected_th_TH, $new($StringArray, {
		u"วันอังคารที่ 30 กันยายน พ.ศ. 2551, 8 นาฬิกา 0 นาที 00 วินาที"_s,
		u"30 กันยายน 2551, 8 นาฬิกา 0 นาที"_s,
		u"30 ก.ย. 2551, 8:00:00"_s,
		u"30/9/2551, 8:00 น."_s
	}));
	$assignStatic(Bug6683975::stylePattern, $new($StringArray, {
		"FULL"_s,
		"LONG"_s,
		"MEDIUM"_s,
		"SHORT"_s
	}));
}

Bug6683975::Bug6683975() {
}

$Class* Bug6683975::load$($String* name, bool initialize) {
	$loadClass(Bug6683975, name, initialize, &_Bug6683975_ClassInfo_, clinit$Bug6683975, allocate$Bug6683975);
	return class$;
}

$Class* Bug6683975::class$ = nullptr;