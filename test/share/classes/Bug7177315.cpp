#include <Bug7177315.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DATA
#undef EXPECTED
#undef JANUARY
#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug7177315_FieldInfo_[] = {
	{"EXPECTED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7177315, EXPECTED)},
	{"DATA", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7177315, DATA)},
	{}
};

$MethodInfo _Bug7177315_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug7177315::*)()>(&Bug7177315::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug7177315::main)), "java.text.ParseException"},
	{}
};

$ClassInfo _Bug7177315_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug7177315",
	"java.lang.Object",
	nullptr,
	_Bug7177315_FieldInfo_,
	_Bug7177315_MethodInfo_
};

$Object* allocate$Bug7177315($Class* clazz) {
	return $of($alloc(Bug7177315));
}

$String* Bug7177315::EXPECTED = nullptr;
$StringArray* Bug7177315::DATA = nullptr;

void Bug7177315::init$() {
}

void Bug7177315::main($StringArray* args) {
	$init(Bug7177315);
	$init($Locale);
	$var($SimpleDateFormat, parseFormat, $new($SimpleDateFormat, "MM/dd/yy"_s, $Locale::US));
	$var($Calendar, cal, $new($GregorianCalendar, 2012 - 80, $Calendar::JANUARY, 1));
	parseFormat->set2DigitYearStart($(cal->getTime()));
	$var($SimpleDateFormat, fmtFormat, $new($SimpleDateFormat, "MM/dd/yyyy"_s, $Locale::US));
	{
		$var($StringArray, arr$, Bug7177315::DATA);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, text, arr$->get(i$));
			{
				$var($Date, date, parseFormat->parse(text));
				$var($String, got, fmtFormat->format(date));
				if (!$nc(Bug7177315::EXPECTED)->equals(got)) {
					$throwNew($RuntimeException, $$str({"got: "_s, got, ", expected: "_s, Bug7177315::EXPECTED}));
				}
			}
		}
	}
}

void clinit$Bug7177315($Class* class$) {
	$assignStatic(Bug7177315::EXPECTED, "01/01/2012"_s);
	$assignStatic(Bug7177315::DATA, $new($StringArray, {
		"01/01/12"_s,
		"01/01/ 12"_s,
		"01/01/       12"_s,
		"1/1/12"_s,
		"1/1/  12"_s
	}));
}

Bug7177315::Bug7177315() {
}

$Class* Bug7177315::load$($String* name, bool initialize) {
	$loadClass(Bug7177315, name, initialize, &_Bug7177315_ClassInfo_, clinit$Bug7177315, allocate$Bug7177315);
	return class$;
}

$Class* Bug7177315::class$ = nullptr;