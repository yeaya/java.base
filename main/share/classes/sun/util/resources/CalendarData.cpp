#include <sun/util/resources/CalendarData.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _CalendarData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData::*)()>(&CalendarData::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.CalendarData",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_MethodInfo_
};

$Object* allocate$CalendarData($Class* clazz) {
	return $of($alloc(CalendarData));
}

void CalendarData::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("1"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData::CalendarData() {
}

$Class* CalendarData::load$($String* name, bool initialize) {
	$loadClass(CalendarData, name, initialize, &_CalendarData_ClassInfo_, allocate$CalendarData);
	return class$;
}

$Class* CalendarData::class$ = nullptr;

		} // resources
	} // util
} // sun