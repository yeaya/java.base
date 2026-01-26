#include <java/util/Formatter$DateTime.h>

#include <java/util/Formatter.h>
#include <jcpp.h>

#undef AM_PM
#undef CENTURY
#undef DATE
#undef DATE_TIME
#undef DAY_OF_MONTH
#undef DAY_OF_MONTH_0
#undef DAY_OF_YEAR
#undef HOUR
#undef HOUR_0
#undef HOUR_OF_DAY
#undef HOUR_OF_DAY_0
#undef ISO_STANDARD_DATE
#undef MILLISECOND
#undef MILLISECOND_SINCE_EPOCH
#undef MINUTE
#undef MONTH
#undef NAME_OF_DAY
#undef NAME_OF_DAY_ABBREV
#undef NAME_OF_MONTH
#undef NAME_OF_MONTH_ABBREV
#undef NAME_OF_MONTH_ABBREV_X
#undef NANOSECOND
#undef SECOND
#undef SECONDS_SINCE_EPOCH
#undef TIME
#undef TIME_12_HOUR
#undef TIME_24_HOUR
#undef YEAR_2
#undef YEAR_4
#undef ZONE
#undef ZONE_NUMERIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Formatter$DateTime_FieldInfo_[] = {
	{"HOUR_OF_DAY_0", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, HOUR_OF_DAY_0)},
	{"HOUR_0", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, HOUR_0)},
	{"HOUR_OF_DAY", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, HOUR_OF_DAY)},
	{"HOUR", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, HOUR)},
	{"MINUTE", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, MINUTE)},
	{"NANOSECOND", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NANOSECOND)},
	{"MILLISECOND", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, MILLISECOND)},
	{"MILLISECOND_SINCE_EPOCH", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, MILLISECOND_SINCE_EPOCH)},
	{"AM_PM", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, AM_PM)},
	{"SECONDS_SINCE_EPOCH", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, SECONDS_SINCE_EPOCH)},
	{"SECOND", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, SECOND)},
	{"TIME", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, TIME)},
	{"ZONE_NUMERIC", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, ZONE_NUMERIC)},
	{"ZONE", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, ZONE)},
	{"NAME_OF_DAY_ABBREV", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NAME_OF_DAY_ABBREV)},
	{"NAME_OF_DAY", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NAME_OF_DAY)},
	{"NAME_OF_MONTH_ABBREV", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NAME_OF_MONTH_ABBREV)},
	{"NAME_OF_MONTH", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NAME_OF_MONTH)},
	{"CENTURY", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, CENTURY)},
	{"DAY_OF_MONTH_0", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, DAY_OF_MONTH_0)},
	{"DAY_OF_MONTH", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, DAY_OF_MONTH)},
	{"NAME_OF_MONTH_ABBREV_X", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, NAME_OF_MONTH_ABBREV_X)},
	{"DAY_OF_YEAR", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, DAY_OF_YEAR)},
	{"MONTH", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, MONTH)},
	{"YEAR_2", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, YEAR_2)},
	{"YEAR_4", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, YEAR_4)},
	{"TIME_12_HOUR", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, TIME_12_HOUR)},
	{"TIME_24_HOUR", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, TIME_24_HOUR)},
	{"DATE_TIME", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, DATE_TIME)},
	{"DATE", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, DATE)},
	{"ISO_STANDARD_DATE", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$DateTime, ISO_STANDARD_DATE)},
	{}
};

$MethodInfo _Formatter$DateTime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Formatter$DateTime, init$, void)},
	{"isValid", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$DateTime, isValid, bool, char16_t)},
	{}
};

$InnerClassInfo _Formatter$DateTime_InnerClassesInfo_[] = {
	{"java.util.Formatter$DateTime", "java.util.Formatter", "DateTime", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Formatter$DateTime_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Formatter$DateTime",
	"java.lang.Object",
	nullptr,
	_Formatter$DateTime_FieldInfo_,
	_Formatter$DateTime_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$DateTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$DateTime($Class* clazz) {
	return $of($alloc(Formatter$DateTime));
}

void Formatter$DateTime::init$() {
}

bool Formatter$DateTime::isValid(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$DateTime::HOUR_OF_DAY_0:
		{}
	case Formatter$DateTime::HOUR_0:
		{}
	case Formatter$DateTime::HOUR_OF_DAY:
		{}
	case Formatter$DateTime::HOUR:
		{}
	case Formatter$DateTime::MINUTE:
		{}
	case Formatter$DateTime::NANOSECOND:
		{}
	case Formatter$DateTime::MILLISECOND:
		{}
	case Formatter$DateTime::MILLISECOND_SINCE_EPOCH:
		{}
	case Formatter$DateTime::AM_PM:
		{}
	case Formatter$DateTime::SECONDS_SINCE_EPOCH:
		{}
	case Formatter$DateTime::SECOND:
		{}
	case Formatter$DateTime::TIME:
		{}
	case Formatter$DateTime::ZONE_NUMERIC:
		{}
	case Formatter$DateTime::ZONE:
		{
			var$0 = true;
			break;
		}
	case Formatter$DateTime::NAME_OF_DAY_ABBREV:
		{}
	case Formatter$DateTime::NAME_OF_DAY:
		{}
	case Formatter$DateTime::NAME_OF_MONTH_ABBREV:
		{}
	case Formatter$DateTime::NAME_OF_MONTH:
		{}
	case Formatter$DateTime::CENTURY:
		{}
	case Formatter$DateTime::DAY_OF_MONTH_0:
		{}
	case Formatter$DateTime::DAY_OF_MONTH:
		{}
	case Formatter$DateTime::NAME_OF_MONTH_ABBREV_X:
		{}
	case Formatter$DateTime::DAY_OF_YEAR:
		{}
	case Formatter$DateTime::MONTH:
		{}
	case Formatter$DateTime::YEAR_2:
		{}
	case Formatter$DateTime::YEAR_4:
		{
			var$0 = true;
			break;
		}
	case Formatter$DateTime::TIME_12_HOUR:
		{}
	case Formatter$DateTime::TIME_24_HOUR:
		{}
	case Formatter$DateTime::DATE_TIME:
		{}
	case Formatter$DateTime::DATE:
		{}
	case Formatter$DateTime::ISO_STANDARD_DATE:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

Formatter$DateTime::Formatter$DateTime() {
}

$Class* Formatter$DateTime::load$($String* name, bool initialize) {
	$loadClass(Formatter$DateTime, name, initialize, &_Formatter$DateTime_ClassInfo_, allocate$Formatter$DateTime);
	return class$;
}

$Class* Formatter$DateTime::class$ = nullptr;

	} // util
} // java