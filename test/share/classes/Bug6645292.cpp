#include <Bug6645292.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

void Bug6645292::init$() {
}

void Bug6645292::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Locale, loc, $Locale::getDefault());
	$var($TimeZone, zone, $TimeZone::getDefault());
	$var($Throwable, var$0, nullptr);
	try {
		$Locale::setDefault($Locale::US);
		$TimeZone::setDefault($($TimeZone::getTimeZone("Asia/Shanghai"_s)));
		$var($Calendar, cal, $Calendar::getInstance());
		$nc(cal)->clear();
		cal->set(1986, 5, 1);
		$var($Date, d1, cal->getTime());
		$var($SimpleDateFormat, df, $new($SimpleDateFormat, "yyyy-MM-dd HH:mm:ss zzzz"_s));
		$var($String, s, df->format(d1));
		$var($Date, d2, nullptr);
		try {
			$assign(d2, df->parse(s));
		} catch ($Exception& e) {
			$throwNew($RuntimeException, e);
		}
		if (!$nc(d1)->equals(d2)) {
			$throwNew($RuntimeException, $$str({"d1 ("_s, d1, ") != d2 ("_s, d2, ")"_s}));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Locale::setDefault(loc);
		$TimeZone::setDefault(zone);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Bug6645292::Bug6645292() {
}

$Class* Bug6645292::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6645292, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6645292, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6645292",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug6645292, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6645292);
	});
	return class$;
}

$Class* Bug6645292::class$ = nullptr;