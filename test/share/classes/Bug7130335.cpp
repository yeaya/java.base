#include <Bug7130335.h>

#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef LA
#undef LONDON
#undef MOSCOW
#undef US
#undef ZONES

using $TimeZoneArray = $Array<::java::util::TimeZone>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _Bug7130335_FieldInfo_[] = {
	{"MOSCOW", "Ljava/util/TimeZone;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7130335, MOSCOW)},
	{"LONDON", "Ljava/util/TimeZone;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7130335, LONDON)},
	{"LA", "Ljava/util/TimeZone;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7130335, LA)},
	{"ZONES", "[Ljava/util/TimeZone;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7130335, ZONES)},
	{}
};

$MethodInfo _Bug7130335_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug7130335::*)()>(&Bug7130335::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug7130335::main)), "java.lang.Exception"},
	{"test", "(Ljava/text/SimpleDateFormat;Ljava/util/Calendar;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SimpleDateFormat*,$Calendar*)>(&Bug7130335::test)), "java.lang.Exception"},
	{"test8000529", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Bug7130335::test8000529)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug7130335_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug7130335",
	"java.lang.Object",
	nullptr,
	_Bug7130335_FieldInfo_,
	_Bug7130335_MethodInfo_
};

$Object* allocate$Bug7130335($Class* clazz) {
	return $of($alloc(Bug7130335));
}

$TimeZone* Bug7130335::MOSCOW = nullptr;
$TimeZone* Bug7130335::LONDON = nullptr;
$TimeZone* Bug7130335::LA = nullptr;
$TimeZoneArray* Bug7130335::ZONES = nullptr;

void Bug7130335::init$() {
}

void Bug7130335::main($StringArray* args) {
	$init(Bug7130335);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, "yyyy-MM-dd HH:mm:ss.SSS z"_s, $Locale::US));
	sdf->setTimeZone(Bug7130335::MOSCOW);
	$var($Calendar, cal, $new($GregorianCalendar, Bug7130335::MOSCOW, $Locale::US));
	cal->clear();
	cal->set(1922, 8, 30);
	test(sdf, cal);
	cal->add(6, 1);
	test(sdf, cal);
	cal->set(1991, 2, 31);
	test(sdf, cal);
	cal->add(6, 1);
	test(sdf, cal);
	cal->setTimeInMillis($System::currentTimeMillis());
	test(sdf, cal);
	test8000529("yyyy-MM-dd HH:mm:ss.SSS Z (z)"_s);
	test8000529("yyyy-MM-dd HH:mm:ss.SSS Z (zzzz)"_s);
	test8000529("yyyy-MM-dd HH:mm:ss.SSS z (Z)"_s);
	test8000529("yyyy-MM-dd HH:mm:ss.SSS zzzz (Z)"_s);
}

void Bug7130335::test($SimpleDateFormat* sdf, $Calendar* cal) {
	$init(Bug7130335);
	$useLocalCurrentObjectStackCache();
	$var($Date, d, $nc(cal)->getTime());
	$var($String, f, $nc(sdf)->format(d));
	$nc($System::out)->println(f);
	$var($Date, pd, sdf->parse(f));
	$var($String, p, sdf->format(pd));
	bool var$0 = !$nc(d)->equals(pd);
	if (var$0 || !$nc(f)->equals(p)) {
		$throwNew($RuntimeException, $$str({"format: "_s, f, ", parse: "_s, p}));
	}
}

void Bug7130335::test8000529($String* fmt) {
	$init(Bug7130335);
	$useLocalCurrentObjectStackCache();
	{
		$var($TimeZoneArray, arr$, Bug7130335::ZONES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TimeZone, tz, arr$->get(i$));
			{
				$init($Locale);
				$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, fmt, $Locale::US));
				sdf->setTimeZone(tz);
				$var($Calendar, cal, $new($GregorianCalendar, tz, $Locale::US));
				cal->clear();
				cal->set(2012, 5, 22);
				test(sdf, cal);
				cal->set(2012, 11, 22);
				test(sdf, cal);
				cal->setTimeInMillis($System::currentTimeMillis());
				test(sdf, cal);
			}
		}
	}
}

void clinit$Bug7130335($Class* class$) {
	$assignStatic(Bug7130335::MOSCOW, $TimeZone::getTimeZone("Europe/Moscow"_s));
	$assignStatic(Bug7130335::LONDON, $TimeZone::getTimeZone("Europe/London"_s));
	$assignStatic(Bug7130335::LA, $TimeZone::getTimeZone("America/Los_Angeles"_s));
	$assignStatic(Bug7130335::ZONES, $new($TimeZoneArray, {
		Bug7130335::MOSCOW,
		Bug7130335::LONDON,
		Bug7130335::LA
	}));
}

Bug7130335::Bug7130335() {
}

$Class* Bug7130335::load$($String* name, bool initialize) {
	$loadClass(Bug7130335, name, initialize, &_Bug7130335_ClassInfo_, clinit$Bug7130335, allocate$Bug7130335);
	return class$;
}

$Class* Bug7130335::class$ = nullptr;