#include <sun/util/calendar/CalendarUtils.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _CalendarUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CalendarUtils::*)()>(&CalendarUtils::init$))},
	{"amod", "(II)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&CalendarUtils::amod))},
	{"amod", "(JJ)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&CalendarUtils::amod))},
	{"floorDivide", "(JJ)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&CalendarUtils::floorDivide))},
	{"floorDivide", "(II)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&CalendarUtils::floorDivide))},
	{"floorDivide", "(II[I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t,$ints*)>(&CalendarUtils::floorDivide))},
	{"floorDivide", "(JI[I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int64_t,int32_t,$ints*)>(&CalendarUtils::floorDivide))},
	{"isGregorianLeapYear", "(I)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CalendarUtils::isGregorianLeapYear))},
	{"isJulianLeapYear", "(I)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CalendarUtils::isJulianLeapYear))},
	{"mod", "(JJ)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&CalendarUtils::mod))},
	{"mod", "(II)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&CalendarUtils::mod))},
	{"sprintf0d", "(Ljava/lang/StringBuilder;II)Ljava/lang/StringBuilder;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$StringBuilder*(*)($StringBuilder*,int32_t,int32_t)>(&CalendarUtils::sprintf0d))},
	{"sprintf0d", "(Ljava/lang/StringBuffer;II)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$StringBuffer*(*)($StringBuffer*,int32_t,int32_t)>(&CalendarUtils::sprintf0d))},
	{}
};

$ClassInfo _CalendarUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.calendar.CalendarUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CalendarUtils_MethodInfo_
};

$Object* allocate$CalendarUtils($Class* clazz) {
	return $of($alloc(CalendarUtils));
}

void CalendarUtils::init$() {
}

bool CalendarUtils::isGregorianLeapYear(int32_t gregorianYear) {
	return (((gregorianYear % 4) == 0) && (((gregorianYear % 100) != 0) || ((gregorianYear % 400) == 0)));
}

bool CalendarUtils::isJulianLeapYear(int32_t normalizedJulianYear) {
	return (normalizedJulianYear % 4) == 0;
}

int64_t CalendarUtils::floorDivide(int64_t n, int64_t d) {
	return ((n >= 0) ? ($div(n, d)) : (($div((n + (int64_t)1), d)) - (int64_t)1));
}

int32_t CalendarUtils::floorDivide(int32_t n, int32_t d) {
	return ((n >= 0) ? ($div(n, d)) : (($div((n + 1), d)) - 1));
}

int32_t CalendarUtils::floorDivide(int32_t n, int32_t d, $ints* r) {
	if (n >= 0) {
		$nc(r)->set(0, $mod(n, d));
		return $div(n, d);
	}
	int32_t q = ($div((n + 1), d)) - 1;
	$nc(r)->set(0, n - (q * d));
	return q;
}

int32_t CalendarUtils::floorDivide(int64_t n, int32_t d, $ints* r) {
	if (n >= 0) {
		$nc(r)->set(0, (int32_t)($mod(n, d)));
		return (int32_t)($div(n, d));
	}
	int32_t q = (int32_t)(($div((n + 1), d)) - 1);
	$nc(r)->set(0, (int32_t)(n - (q * d)));
	return q;
}

int64_t CalendarUtils::mod(int64_t x, int64_t y) {
	return (x - y * floorDivide(x, y));
}

int32_t CalendarUtils::mod(int32_t x, int32_t y) {
	return (x - y * floorDivide(x, y));
}

int32_t CalendarUtils::amod(int32_t x, int32_t y) {
	int32_t z = mod(x, y);
	return (z == 0) ? y : z;
}

int64_t CalendarUtils::amod(int64_t x, int64_t y) {
	int64_t z = mod(x, y);
	return (z == 0) ? y : z;
}

$StringBuilder* CalendarUtils::sprintf0d($StringBuilder* sb, int32_t value, int32_t width) {
	int64_t d = value;
	if (d < 0) {
		$nc(sb)->append(u'-');
		d = -d;
		--width;
	}
	int32_t n = 10;
	for (int32_t i = 2; i < width; ++i) {
		n *= 10;
	}
	for (int32_t i = 1; i < width && d < n; ++i) {
		$nc(sb)->append(u'0');
		n /= 10;
	}
	$nc(sb)->append(d);
	return sb;
}

$StringBuffer* CalendarUtils::sprintf0d($StringBuffer* sb, int32_t value, int32_t width) {
	int64_t d = value;
	if (d < 0) {
		$nc(sb)->append(u'-');
		d = -d;
		--width;
	}
	int32_t n = 10;
	for (int32_t i = 2; i < width; ++i) {
		n *= 10;
	}
	for (int32_t i = 1; i < width && d < n; ++i) {
		$nc(sb)->append(u'0');
		n /= 10;
	}
	$nc(sb)->append(d);
	return sb;
}

CalendarUtils::CalendarUtils() {
}

$Class* CalendarUtils::load$($String* name, bool initialize) {
	$loadClass(CalendarUtils, name, initialize, &_CalendarUtils_ClassInfo_, allocate$CalendarUtils);
	return class$;
}

$Class* CalendarUtils::class$ = nullptr;

		} // calendar
	} // util
} // sun