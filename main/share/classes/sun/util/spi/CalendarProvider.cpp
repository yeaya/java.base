#include <sun/util/spi/CalendarProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace util {
		namespace spi {

$MethodInfo _CalendarProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CalendarProvider::*)()>(&CalendarProvider::init$))},
	{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CalendarProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.spi.CalendarProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_CalendarProvider_MethodInfo_
};

$Object* allocate$CalendarProvider($Class* clazz) {
	return $of($alloc(CalendarProvider));
}

void CalendarProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarProvider::CalendarProvider() {
}

$Class* CalendarProvider::load$($String* name, bool initialize) {
	$loadClass(CalendarProvider, name, initialize, &_CalendarProvider_ClassInfo_, allocate$CalendarProvider);
	return class$;
}

$Class* CalendarProvider::class$ = nullptr;

		} // spi
	} // util
} // sun