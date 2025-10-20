#include <Bug6645292.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$MethodInfo _Bug6645292_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6645292::*)()>(&Bug6645292::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6645292::main))},
	{}
};

$ClassInfo _Bug6645292_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6645292",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug6645292_MethodInfo_
};

$Object* allocate$Bug6645292($Class* clazz) {
	return $of($alloc(Bug6645292));
}

void Bug6645292::init$() {
}

void Bug6645292::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, loc, $Locale::getDefault());
	$var($TimeZone, zone, $TimeZone::getDefault());
	{
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
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
			if (!$nc(d1)->equals(d2)) {
				$throwNew($RuntimeException, $$str({"d1 ("_s, d1, ") != d2 ("_s, d2, ")"_s}));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Locale::setDefault(loc);
			$TimeZone::setDefault(zone);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Bug6645292::Bug6645292() {
}

$Class* Bug6645292::load$($String* name, bool initialize) {
	$loadClass(Bug6645292, name, initialize, &_Bug6645292_ClassInfo_, allocate$Bug6645292);
	return class$;
}

$Class* Bug6645292::class$ = nullptr;