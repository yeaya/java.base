#include <sun/util/resources/CalendarData_en.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _CalendarData_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_en, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_en, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_en_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.CalendarData_en",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_en_MethodInfo_
};

$Object* allocate$CalendarData_en($Class* clazz) {
	return $of($alloc(CalendarData_en));
}

void CalendarData_en::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_en::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_en::CalendarData_en() {
}

$Class* CalendarData_en::load$($String* name, bool initialize) {
	$loadClass(CalendarData_en, name, initialize, &_CalendarData_en_ClassInfo_, allocate$CalendarData_en);
	return class$;
}

$Class* CalendarData_en::class$ = nullptr;

		} // resources
	} // util
} // sun