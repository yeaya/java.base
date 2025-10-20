#include <java/time/temporal/IsoFields$Field.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/DayOfWeek.h>
#include <java/time/LocalDate.h>
#include <java/time/temporal/IsoFields$Field$1.h>
#include <java/time/temporal/IsoFields$Field$2.h>
#include <java/time/temporal/IsoFields$Field$3.h>
#include <java/time/temporal/IsoFields$Field$4.h>
#include <java/time/temporal/IsoFields.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

#undef DAY_OF_QUARTER
#undef QUARTER_DAYS
#undef QUARTER_OF_YEAR
#undef THURSDAY
#undef WEDNESDAY
#undef WEEK_BASED_YEAR
#undef WEEK_OF_WEEK_BASED_YEAR

using $IsoFields$FieldArray = $Array<::java::time::temporal::IsoFields$Field>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $DayOfWeek = ::java::time::DayOfWeek;
using $LocalDate = ::java::time::LocalDate;
using $IsoFields = ::java::time::temporal::IsoFields;
using $IsoFields$Field$1 = ::java::time::temporal::IsoFields$Field$1;
using $IsoFields$Field$2 = ::java::time::temporal::IsoFields$Field$2;
using $IsoFields$Field$3 = ::java::time::temporal::IsoFields$Field$3;
using $IsoFields$Field$4 = ::java::time::temporal::IsoFields$Field$4;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _IsoFields$Field_FieldInfo_[] = {
	{"DAY_OF_QUARTER", "Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Field, DAY_OF_QUARTER)},
	{"QUARTER_OF_YEAR", "Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Field, QUARTER_OF_YEAR)},
	{"WEEK_OF_WEEK_BASED_YEAR", "Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Field, WEEK_OF_WEEK_BASED_YEAR)},
	{"WEEK_BASED_YEAR", "Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Field, WEEK_BASED_YEAR)},
	{"$VALUES", "[Ljava/time/temporal/IsoFields$Field;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(IsoFields$Field, $VALUES)},
	{"QUARTER_DAYS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IsoFields$Field, QUARTER_DAYS)},
	{}
};

$MethodInfo _IsoFields$Field_MethodInfo_[] = {
	{"$values", "()[Ljava/time/temporal/IsoFields$Field;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$IsoFields$FieldArray*(*)()>(&IsoFields$Field::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(IsoFields$Field::*)($String*,int32_t)>(&IsoFields$Field::init$))},
	{"ensureIso", "(Ljava/time/temporal/TemporalAccessor;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($TemporalAccessor*)>(&IsoFields$Field::ensureIso))},
	{"getWeek", "(Ljava/time/LocalDate;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($LocalDate*)>(&IsoFields$Field::getWeek))},
	{"getWeekBasedYear", "(Ljava/time/LocalDate;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($LocalDate*)>(&IsoFields$Field::getWeekBasedYear))},
	{"getWeekRange", "(Ljava/time/LocalDate;)Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ValueRange*(*)($LocalDate*)>(&IsoFields$Field::getWeekRange))},
	{"getWeekRange", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&IsoFields$Field::getWeekRange))},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IsoFields$Field*(*)($String*)>(&IsoFields$Field::valueOf))},
	{"values", "()[Ljava/time/temporal/IsoFields$Field;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IsoFields$FieldArray*(*)()>(&IsoFields$Field::values))},
	{}
};

$InnerClassInfo _IsoFields$Field_InnerClassesInfo_[] = {
	{"java.time.temporal.IsoFields$Field", "java.time.temporal.IsoFields", "Field", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"java.time.temporal.IsoFields$Field$4", nullptr, nullptr, $FINAL | $ENUM},
	{"java.time.temporal.IsoFields$Field$3", nullptr, nullptr, $FINAL | $ENUM},
	{"java.time.temporal.IsoFields$Field$2", nullptr, nullptr, $FINAL | $ENUM},
	{"java.time.temporal.IsoFields$Field$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _IsoFields$Field_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"java.time.temporal.IsoFields$Field",
	"java.lang.Enum",
	"java.time.temporal.TemporalField",
	_IsoFields$Field_FieldInfo_,
	_IsoFields$Field_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/temporal/IsoFields$Field;>;Ljava/time/temporal/TemporalField;",
	nullptr,
	_IsoFields$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.IsoFields"
};

$Object* allocate$IsoFields$Field($Class* clazz) {
	return $of($alloc(IsoFields$Field));
}

$String* IsoFields$Field::toString() {
	 return this->$Enum::toString();
}

bool IsoFields$Field::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t IsoFields$Field::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* IsoFields$Field::clone() {
	 return this->$Enum::clone();
}

void IsoFields$Field::finalize() {
	this->$Enum::finalize();
}

IsoFields$Field* IsoFields$Field::DAY_OF_QUARTER = nullptr;
IsoFields$Field* IsoFields$Field::QUARTER_OF_YEAR = nullptr;
IsoFields$Field* IsoFields$Field::WEEK_OF_WEEK_BASED_YEAR = nullptr;
IsoFields$Field* IsoFields$Field::WEEK_BASED_YEAR = nullptr;
$IsoFields$FieldArray* IsoFields$Field::$VALUES = nullptr;
$ints* IsoFields$Field::QUARTER_DAYS = nullptr;

$IsoFields$FieldArray* IsoFields$Field::$values() {
	$init(IsoFields$Field);
	return $new($IsoFields$FieldArray, {
		IsoFields$Field::DAY_OF_QUARTER,
		IsoFields$Field::QUARTER_OF_YEAR,
		IsoFields$Field::WEEK_OF_WEEK_BASED_YEAR,
		IsoFields$Field::WEEK_BASED_YEAR
	});
}

$IsoFields$FieldArray* IsoFields$Field::values() {
	$init(IsoFields$Field);
	return $cast($IsoFields$FieldArray, IsoFields$Field::$VALUES->clone());
}

IsoFields$Field* IsoFields$Field::valueOf($String* name) {
	$init(IsoFields$Field);
	return $cast(IsoFields$Field, $Enum::valueOf(IsoFields$Field::class$, name));
}

void IsoFields$Field::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool IsoFields$Field::isDateBased() {
	return true;
}

bool IsoFields$Field::isTimeBased() {
	return false;
}

$ValueRange* IsoFields$Field::rangeRefinedBy($TemporalAccessor* temporal) {
	return range();
}

void IsoFields$Field::ensureIso($TemporalAccessor* temporal) {
	$init(IsoFields$Field);
	if ($IsoFields::isIso(temporal) == false) {
		$throwNew($DateTimeException, "Resolve requires IsoChronology"_s);
	}
}

$ValueRange* IsoFields$Field::getWeekRange($LocalDate* date) {
	$init(IsoFields$Field);
	int32_t wby = getWeekBasedYear(date);
	return $ValueRange::of(1, getWeekRange(wby));
}

int32_t IsoFields$Field::getWeekRange(int32_t wby) {
	$init(IsoFields$Field);
	$var($LocalDate, date, $LocalDate::of(wby, 1, 1));
	$init($DayOfWeek);
	bool var$0 = $nc(date)->getDayOfWeek() == $DayOfWeek::THURSDAY;
	if (!var$0) {
		bool var$1 = $nc(date)->getDayOfWeek() == $DayOfWeek::WEDNESDAY;
		var$0 = (var$1 && date->isLeapYear());
	}
	if (var$0) {
		return 53;
	}
	return 52;
}

int32_t IsoFields$Field::getWeek($LocalDate* date) {
	$init(IsoFields$Field);
	$useLocalCurrentObjectStackCache();
	int32_t dow0 = $nc($($nc(date)->getDayOfWeek()))->ordinal();
	int32_t doy0 = date->getDayOfYear() - 1;
	int32_t doyThu0 = doy0 + (3 - dow0);
	int32_t alignedWeek = doyThu0 / 7;
	int32_t firstThuDoy0 = doyThu0 - (alignedWeek * 7);
	int32_t firstMonDoy0 = firstThuDoy0 - 3;
	if (firstMonDoy0 < -3) {
		firstMonDoy0 += 7;
	}
	if (doy0 < firstMonDoy0) {
		return (int32_t)$nc($(getWeekRange($($nc($(date->withDayOfYear(180)))->minusYears(1)))))->getMaximum();
	}
	int32_t week = ((doy0 - firstMonDoy0) / 7) + 1;
	if (week == 53) {
		if ((firstMonDoy0 == -3 || (firstMonDoy0 == -2 && date->isLeapYear())) == false) {
			week = 1;
		}
	}
	return week;
}

int32_t IsoFields$Field::getWeekBasedYear($LocalDate* date) {
	$init(IsoFields$Field);
	$useLocalCurrentObjectStackCache();
	int32_t year = $nc(date)->getYear();
	int32_t doy = date->getDayOfYear();
	if (doy <= 3) {
		int32_t dow = $nc($(date->getDayOfWeek()))->ordinal();
		if (doy - dow < -2) {
			--year;
		}
	} else if (doy >= 363) {
		int32_t dow = $nc($(date->getDayOfWeek()))->ordinal();
		doy = doy - 363 - (date->isLeapYear() ? 1 : 0);
		if (doy - dow >= 0) {
			++year;
		}
	}
	return year;
}

void clinit$IsoFields$Field($Class* class$) {
	$assignStatic(IsoFields$Field::DAY_OF_QUARTER, $new($IsoFields$Field$1, "DAY_OF_QUARTER"_s, 0));
	$assignStatic(IsoFields$Field::QUARTER_OF_YEAR, $new($IsoFields$Field$2, "QUARTER_OF_YEAR"_s, 1));
	$assignStatic(IsoFields$Field::WEEK_OF_WEEK_BASED_YEAR, $new($IsoFields$Field$3, "WEEK_OF_WEEK_BASED_YEAR"_s, 2));
	$assignStatic(IsoFields$Field::WEEK_BASED_YEAR, $new($IsoFields$Field$4, "WEEK_BASED_YEAR"_s, 3));
	$assignStatic(IsoFields$Field::$VALUES, IsoFields$Field::$values());
	$assignStatic(IsoFields$Field::QUARTER_DAYS, $new($ints, {
		0,
		90,
		181,
		273,
		0,
		91,
		182,
		274
	}));
}

IsoFields$Field::IsoFields$Field() {
}

$Class* IsoFields$Field::load$($String* name, bool initialize) {
	$loadClass(IsoFields$Field, name, initialize, &_IsoFields$Field_ClassInfo_, clinit$IsoFields$Field, allocate$IsoFields$Field);
	return class$;
}

$Class* IsoFields$Field::class$ = nullptr;

		} // temporal
	} // time
} // java