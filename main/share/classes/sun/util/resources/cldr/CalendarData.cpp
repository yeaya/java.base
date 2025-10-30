#include <sun/util/resources/cldr/CalendarData.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$MethodInfo _CalendarData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarData::*)()>(&CalendarData::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CalendarData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.CalendarData",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CalendarData_MethodInfo_
};

$Object* allocate$CalendarData($Class* clazz) {
	return $of($alloc(CalendarData));
}

void CalendarData::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CalendarData::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("1: AG AS AU BD BR BS BT BW BZ CA CN CO DM DO ET GT GU HK HN ID IL IN JM JP KE KH KR LA MH MM MO MT MX MZ NI NP PA PE PH PK PR PT PY SA SG SV TH TT TW UM US VE VI WS YE ZA ZW;2: 001 AD AI AL AM AN AR AT AX AZ BA BE BG BM BN BY CH CL CM CR CY CZ DE DK EC EE ES FI FJ FO FR GB GE GF GP GR HR HU IE IS IT KG KZ LB LI LK LT LU LV MC MD ME MK MN MQ MY NL NO NZ PL RE RO RS RU SE SI SK SM TJ TM TR UA UY UZ VA VN XK;6: MV;7: AE AF BH DJ DZ EG IQ IR JO KW LY OM QA SD SY"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1: 001 GU UM US VI;4: AD AN AT AX BE BG CH CZ DE DK EE ES FI FJ FO FR GB GF GG GI GP GR HU IE IM IS IT JE LI LT LU MC MQ NL NO PL PT RE RU SE SJ SK SM VA"_s)
		})
	}));
	return data;
}

CalendarData::CalendarData() {
}

$Class* CalendarData::load$($String* name, bool initialize) {
	$loadClass(CalendarData, name, initialize, &_CalendarData_ClassInfo_, allocate$CalendarData);
	return class$;
}

$Class* CalendarData::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun