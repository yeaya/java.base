#include <java/text/CalendarBuilder.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Calendar.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

#undef MAX_FIELD
#undef COMPUTED
#undef WEEK_YEAR
#undef ISO_DAY_OF_WEEK
#undef UNSET
#undef MINIMUM_USER_STAMP

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $StringJoiner = ::java::util::StringJoiner;

namespace java {
	namespace text {

$FieldInfo _CalendarBuilder_FieldInfo_[] = {
	{"UNSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CalendarBuilder, UNSET)},
	{"COMPUTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CalendarBuilder, COMPUTED)},
	{"MINIMUM_USER_STAMP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CalendarBuilder, MINIMUM_USER_STAMP)},
	{"MAX_FIELD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CalendarBuilder, MAX_FIELD)},
	{"WEEK_YEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CalendarBuilder, WEEK_YEAR)},
	{"ISO_DAY_OF_WEEK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CalendarBuilder, ISO_DAY_OF_WEEK)},
	{"field", "[I", nullptr, $PRIVATE | $FINAL, $field(CalendarBuilder, field)},
	{"nextStamp", "I", nullptr, $PRIVATE, $field(CalendarBuilder, nextStamp)},
	{"maxFieldIndex", "I", nullptr, $PRIVATE, $field(CalendarBuilder, maxFieldIndex)},
	{}
};

$MethodInfo _CalendarBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CalendarBuilder::*)()>(&CalendarBuilder::init$))},
	{"addYear", "(I)Ljava/text/CalendarBuilder;", nullptr, 0},
	{"clear", "(I)Ljava/text/CalendarBuilder;", nullptr, 0},
	{"establish", "(Ljava/util/Calendar;)Ljava/util/Calendar;", nullptr, 0},
	{"isSet", "(I)Z", nullptr, 0},
	{"isValidDayOfWeek", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&CalendarBuilder::isValidDayOfWeek))},
	{"set", "(II)Ljava/text/CalendarBuilder;", nullptr, 0},
	{"toCalendarDayOfWeek", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&CalendarBuilder::toCalendarDayOfWeek))},
	{"toISODayOfWeek", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&CalendarBuilder::toISODayOfWeek))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CalendarBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.CalendarBuilder",
	"java.lang.Object",
	nullptr,
	_CalendarBuilder_FieldInfo_,
	_CalendarBuilder_MethodInfo_
};

$Object* allocate$CalendarBuilder($Class* clazz) {
	return $of($alloc(CalendarBuilder));
}

void CalendarBuilder::init$() {
	$set(this, field, $new($ints, CalendarBuilder::MAX_FIELD * 2));
	this->nextStamp = CalendarBuilder::MINIMUM_USER_STAMP;
	this->maxFieldIndex = -1;
}

CalendarBuilder* CalendarBuilder::set(int32_t index, int32_t value) {
	if (index == CalendarBuilder::ISO_DAY_OF_WEEK) {
		index = 7;
		value = toCalendarDayOfWeek(value);
	}
	$nc(this->field)->set(index, this->nextStamp++);
	$nc(this->field)->set(CalendarBuilder::MAX_FIELD + index, value);
	if (index > this->maxFieldIndex && index < 17) {
		this->maxFieldIndex = index;
	}
	return this;
}

CalendarBuilder* CalendarBuilder::addYear(int32_t value) {
	(*$nc(this->field))[CalendarBuilder::MAX_FIELD + 1] += value;
	(*$nc(this->field))[CalendarBuilder::MAX_FIELD + CalendarBuilder::WEEK_YEAR] += value;
	return this;
}

bool CalendarBuilder::isSet(int32_t index) {
	if (index == CalendarBuilder::ISO_DAY_OF_WEEK) {
		index = 7;
	}
	return $nc(this->field)->get(index) > CalendarBuilder::UNSET;
}

CalendarBuilder* CalendarBuilder::clear(int32_t index) {
	if (index == CalendarBuilder::ISO_DAY_OF_WEEK) {
		index = 7;
	}
	$nc(this->field)->set(index, CalendarBuilder::UNSET);
	$nc(this->field)->set(CalendarBuilder::MAX_FIELD + index, 0);
	return this;
}

$Calendar* CalendarBuilder::establish($Calendar* cal) {
	bool weekDate = isSet(CalendarBuilder::WEEK_YEAR) && $nc(this->field)->get(CalendarBuilder::WEEK_YEAR) > $nc(this->field)->get(1);
	if (weekDate && !$nc(cal)->isWeekDateSupported()) {
		if (!isSet(1)) {
			set(1, $nc(this->field)->get(CalendarBuilder::MAX_FIELD + CalendarBuilder::WEEK_YEAR));
		}
		weekDate = false;
	}
	$nc(cal)->clear();
	for (int32_t stamp = CalendarBuilder::MINIMUM_USER_STAMP; stamp < this->nextStamp; ++stamp) {
		for (int32_t index = 0; index <= this->maxFieldIndex; ++index) {
			if ($nc(this->field)->get(index) == stamp) {
				cal->set(index, $nc(this->field)->get(CalendarBuilder::MAX_FIELD + index));
				break;
			}
		}
	}
	if (weekDate) {
		int32_t weekOfYear = isSet(3) ? $nc(this->field)->get(CalendarBuilder::MAX_FIELD + 3) : 1;
		int32_t dayOfWeek = isSet(7) ? $nc(this->field)->get(CalendarBuilder::MAX_FIELD + 7) : cal->getFirstDayOfWeek();
		bool var$0 = !isValidDayOfWeek(dayOfWeek);
		if (var$0 && cal->isLenient()) {
			if (dayOfWeek >= 8) {
				--dayOfWeek;
				weekOfYear += dayOfWeek / 7;
				dayOfWeek = (dayOfWeek % 7) + 1;
			} else {
				while (dayOfWeek <= 0) {
					dayOfWeek += 7;
					--weekOfYear;
				}
			}
			dayOfWeek = toCalendarDayOfWeek(dayOfWeek);
		}
		cal->setWeekDate($nc(this->field)->get(CalendarBuilder::MAX_FIELD + CalendarBuilder::WEEK_YEAR), weekOfYear, dayOfWeek);
	}
	return cal;
}

$String* CalendarBuilder::toString() {
	$var($StringJoiner, sj, $new($StringJoiner, ","_s, "CalendarBuilder:["_s, "]"_s));
	for (int32_t i = 0; i < CalendarBuilder::MAX_FIELD; ++i) {
		if (isSet(i)) {
			sj->add($$str({$$str(i), "="_s, $$str($nc(this->field)->get(i)), ":"_s, $$str($nc(this->field)->get(CalendarBuilder::MAX_FIELD + i))}));
		}
	}
	return sj->toString();
}

int32_t CalendarBuilder::toISODayOfWeek(int32_t calendarDayOfWeek) {
	return calendarDayOfWeek == 1 ? 7 : calendarDayOfWeek - 1;
}

int32_t CalendarBuilder::toCalendarDayOfWeek(int32_t isoDayOfWeek) {
	if (!isValidDayOfWeek(isoDayOfWeek)) {
		return isoDayOfWeek;
	}
	return isoDayOfWeek == 7 ? 1 : isoDayOfWeek + 1;
}

bool CalendarBuilder::isValidDayOfWeek(int32_t dayOfWeek) {
	return dayOfWeek > 0 && dayOfWeek <= 7;
}

CalendarBuilder::CalendarBuilder() {
}

$Class* CalendarBuilder::load$($String* name, bool initialize) {
	$loadClass(CalendarBuilder, name, initialize, &_CalendarBuilder_ClassInfo_, allocate$CalendarBuilder);
	return class$;
}

$Class* CalendarBuilder::class$ = nullptr;

	} // text
} // java