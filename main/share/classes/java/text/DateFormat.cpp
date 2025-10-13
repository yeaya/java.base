#include <java/text/DateFormat.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DontCareFieldPosition.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/text/ParsePosition.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

#undef AM_PM_FIELD
#undef DATE_FIELD
#undef DAY_OF_WEEK_FIELD
#undef DAY_OF_WEEK_IN_MONTH_FIELD
#undef DAY_OF_YEAR_FIELD
#undef DEFAULT
#undef ERA_FIELD
#undef FORMAT
#undef FULL
#undef HOUR0_FIELD
#undef HOUR1_FIELD
#undef HOUR_OF_DAY0_FIELD
#undef HOUR_OF_DAY1_FIELD
#undef INSTANCE
#undef LONG
#undef MEDIUM
#undef MILLISECOND_FIELD
#undef MINUTE_FIELD
#undef MONTH_FIELD
#undef SECOND_FIELD
#undef SHORT
#undef TIMEZONE_FIELD
#undef WEEK_OF_MONTH_FIELD
#undef WEEK_OF_YEAR_FIELD
#undef YEAR_FIELD

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $DontCareFieldPosition = ::java::text::DontCareFieldPosition;
using $FieldPosition = ::java::text::FieldPosition;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $ParseException = ::java::text::ParseException;
using $ParsePosition = ::java::text::ParsePosition;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $TimeZone = ::java::util::TimeZone;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;

namespace java {
	namespace text {

$FieldInfo _DateFormat_FieldInfo_[] = {
	{"calendar", "Ljava/util/Calendar;", nullptr, $PROTECTED, $field(DateFormat, calendar)},
	{"numberFormat", "Ljava/text/NumberFormat;", nullptr, $PROTECTED, $field(DateFormat, numberFormat)},
	{"ERA_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, ERA_FIELD)},
	{"YEAR_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, YEAR_FIELD)},
	{"MONTH_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, MONTH_FIELD)},
	{"DATE_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, DATE_FIELD)},
	{"HOUR_OF_DAY1_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, HOUR_OF_DAY1_FIELD)},
	{"HOUR_OF_DAY0_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, HOUR_OF_DAY0_FIELD)},
	{"MINUTE_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, MINUTE_FIELD)},
	{"SECOND_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, SECOND_FIELD)},
	{"MILLISECOND_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, MILLISECOND_FIELD)},
	{"DAY_OF_WEEK_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, DAY_OF_WEEK_FIELD)},
	{"DAY_OF_YEAR_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, DAY_OF_YEAR_FIELD)},
	{"DAY_OF_WEEK_IN_MONTH_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, DAY_OF_WEEK_IN_MONTH_FIELD)},
	{"WEEK_OF_YEAR_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, WEEK_OF_YEAR_FIELD)},
	{"WEEK_OF_MONTH_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, WEEK_OF_MONTH_FIELD)},
	{"AM_PM_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, AM_PM_FIELD)},
	{"HOUR1_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, HOUR1_FIELD)},
	{"HOUR0_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, HOUR0_FIELD)},
	{"TIMEZONE_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, TIMEZONE_FIELD)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateFormat, serialVersionUID)},
	{"FULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, FULL)},
	{"LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, LONG)},
	{"MEDIUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, MEDIUM)},
	{"SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, SHORT)},
	{"DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DateFormat, DEFAULT)},
	{}
};

$MethodInfo _DateFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DateFormat::*)()>(&DateFormat::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $FINAL},
	{"format", "(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"format", "(Ljava/util/Date;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(DateFormat::*)($Date*)>(&DateFormat::format))},
	{"get", "(IIILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DateFormat*(*)(int32_t,int32_t,int32_t,$Locale*)>(&DateFormat::get))},
	{"get", "(Lsun/util/locale/provider/LocaleProviderAdapter;IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DateFormat*(*)($LocaleProviderAdapter*,int32_t,int32_t,$Locale*)>(&DateFormat::get))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LocaleArray*(*)()>(&DateFormat::getAvailableLocales))},
	{"getCalendar", "()Ljava/util/Calendar;", nullptr, $PUBLIC},
	{"getDateInstance", "()Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)()>(&DateFormat::getDateInstance))},
	{"getDateInstance", "(I)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t)>(&DateFormat::getDateInstance))},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t,$Locale*)>(&DateFormat::getDateInstance))},
	{"getDateTimeInstance", "()Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)()>(&DateFormat::getDateTimeInstance))},
	{"getDateTimeInstance", "(II)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t,int32_t)>(&DateFormat::getDateTimeInstance))},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t,int32_t,$Locale*)>(&DateFormat::getDateTimeInstance))},
	{"getInstance", "()Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)()>(&DateFormat::getInstance))},
	{"getNumberFormat", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getTimeInstance", "()Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)()>(&DateFormat::getTimeInstance))},
	{"getTimeInstance", "(I)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t)>(&DateFormat::getTimeInstance))},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<DateFormat*(*)(int32_t,$Locale*)>(&DateFormat::getTimeInstance))},
	{"getTimeZone", "()Ljava/util/TimeZone;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isLenient", "()Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setCalendar", "(Ljava/util/Calendar;)V", nullptr, $PUBLIC},
	{"setLenient", "(Z)V", nullptr, $PUBLIC},
	{"setNumberFormat", "(Ljava/text/NumberFormat;)V", nullptr, $PUBLIC},
	{"setTimeZone", "(Ljava/util/TimeZone;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateFormat_InnerClassesInfo_[] = {
	{"java.text.DateFormat$Field", "java.text.DateFormat", "Field", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DateFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.DateFormat",
	"java.text.Format",
	nullptr,
	_DateFormat_FieldInfo_,
	_DateFormat_MethodInfo_,
	nullptr,
	nullptr,
	_DateFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.DateFormat$Field"
};

$Object* allocate$DateFormat($Class* clazz) {
	return $of($alloc(DateFormat));
}

$StringBuffer* DateFormat::format(Object$* obj, $StringBuffer* toAppendTo, $FieldPosition* fieldPosition) {
	if ($instanceOf($Date, obj)) {
		return format($cast($Date, obj), toAppendTo, fieldPosition);
	} else if ($instanceOf($Number, obj)) {
		return format($$new($Date, $nc(($cast($Number, obj)))->longValue()), toAppendTo, fieldPosition);
	} else {
		$throwNew($IllegalArgumentException, "Cannot format given Object as a Date"_s);
	}
}

$String* DateFormat::format($Date* date) {
	$init($DontCareFieldPosition);
	return $nc($(format(date, $$new($StringBuffer), $DontCareFieldPosition::INSTANCE)))->toString();
}

$Date* DateFormat::parse($String* source) {
	$var($ParsePosition, pos, $new($ParsePosition, 0));
	$var($Date, result, parse(source, pos));
	if (pos->index == 0) {
		$throwNew($ParseException, $$str({"Unparseable date: \""_s, source, "\""_s}), pos->errorIndex);
	}
	return result;
}

$Object* DateFormat::parseObject($String* source, $ParsePosition* pos) {
	return $of(parse(source, pos));
}

DateFormat* DateFormat::getTimeInstance() {
	$init(DateFormat);
	$init($Locale$Category);
	return get(DateFormat::DEFAULT, 0, 1, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getTimeInstance(int32_t style) {
	$init(DateFormat);
	$init($Locale$Category);
	return get(style, 0, 1, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getTimeInstance(int32_t style, $Locale* aLocale) {
	$init(DateFormat);
	return get(style, 0, 1, aLocale);
}

DateFormat* DateFormat::getDateInstance() {
	$init(DateFormat);
	$init($Locale$Category);
	return get(0, DateFormat::DEFAULT, 2, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getDateInstance(int32_t style) {
	$init(DateFormat);
	$init($Locale$Category);
	return get(0, style, 2, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getDateInstance(int32_t style, $Locale* aLocale) {
	$init(DateFormat);
	return get(0, style, 2, aLocale);
}

DateFormat* DateFormat::getDateTimeInstance() {
	$init(DateFormat);
	$init($Locale$Category);
	return get(DateFormat::DEFAULT, DateFormat::DEFAULT, 3, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle) {
	$init(DateFormat);
	$init($Locale$Category);
	return get(timeStyle, dateStyle, 3, $($Locale::getDefault($Locale$Category::FORMAT)));
}

DateFormat* DateFormat::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* aLocale) {
	$init(DateFormat);
	return get(timeStyle, dateStyle, 3, aLocale);
}

DateFormat* DateFormat::getInstance() {
	$init(DateFormat);
	return getDateTimeInstance(DateFormat::SHORT, DateFormat::SHORT);
}

$LocaleArray* DateFormat::getAvailableLocales() {
	$init(DateFormat);
	$load($DateFormatProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($DateFormatProvider::class$));
	return $nc(pool)->getAvailableLocales();
}

void DateFormat::setCalendar($Calendar* newCalendar) {
	$set(this, calendar, newCalendar);
}

$Calendar* DateFormat::getCalendar() {
	return this->calendar;
}

void DateFormat::setNumberFormat($NumberFormat* newNumberFormat) {
	$set(this, numberFormat, newNumberFormat);
}

$NumberFormat* DateFormat::getNumberFormat() {
	return this->numberFormat;
}

void DateFormat::setTimeZone($TimeZone* zone) {
	$nc(this->calendar)->setTimeZone(zone);
}

$TimeZone* DateFormat::getTimeZone() {
	return $nc(this->calendar)->getTimeZone();
}

void DateFormat::setLenient(bool lenient) {
	$nc(this->calendar)->setLenient(lenient);
}

bool DateFormat::isLenient() {
	return $nc(this->calendar)->isLenient();
}

int32_t DateFormat::hashCode() {
	return $nc(this->numberFormat)->hashCode();
}

bool DateFormat::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	bool var$0 = obj == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(obj))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(DateFormat, other, $cast(DateFormat, obj));
	int32_t var$5 = $nc(this->calendar)->getFirstDayOfWeek();
	bool var$4 = var$5 == $nc($nc(other)->calendar)->getFirstDayOfWeek();
	if (var$4) {
		int32_t var$6 = $nc(this->calendar)->getMinimalDaysInFirstWeek();
		var$4 = var$6 == $nc(other->calendar)->getMinimalDaysInFirstWeek();
	}
	bool var$3 = var$4;
	if (var$3) {
		bool var$7 = $nc(this->calendar)->isLenient();
		var$3 = var$7 == $nc(other->calendar)->isLenient();
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && $nc($of($($nc(this->calendar)->getTimeZone())))->equals($($nc(other->calendar)->getTimeZone()));
	return (var$1 && $nc(this->numberFormat)->equals(other->numberFormat));
}

$Object* DateFormat::clone() {
	$var(DateFormat, other, $cast(DateFormat, $Format::clone()));
	$set($nc(other), calendar, $cast($Calendar, $nc(this->calendar)->clone()));
	$set(other, numberFormat, $cast($NumberFormat, $nc(this->numberFormat)->clone()));
	return $of(other);
}

DateFormat* DateFormat::get(int32_t timeStyle, int32_t dateStyle, int32_t flags, $Locale* loc) {
	$init(DateFormat);
	if (((int32_t)(flags & (uint32_t)1)) != 0) {
		if (timeStyle < 0 || timeStyle > 3) {
			$throwNew($IllegalArgumentException, $$str({"Illegal time style "_s, $$str(timeStyle)}));
		}
	} else {
		timeStyle = -1;
	}
	if (((int32_t)(flags & (uint32_t)2)) != 0) {
		if (dateStyle < 0 || dateStyle > 3) {
			$throwNew($IllegalArgumentException, $$str({"Illegal date style "_s, $$str(dateStyle)}));
		}
	} else {
		dateStyle = -1;
	}
	$load($DateFormatProvider);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::getAdapter($DateFormatProvider::class$, loc));
	$var(DateFormat, dateFormat, get(adapter, timeStyle, dateStyle, loc));
	if (dateFormat == nullptr) {
		$assign(dateFormat, get($($LocaleProviderAdapter::forJRE()), timeStyle, dateStyle, loc));
	}
	return dateFormat;
}

DateFormat* DateFormat::get($LocaleProviderAdapter* adapter, int32_t timeStyle, int32_t dateStyle, $Locale* loc) {
	$init(DateFormat);
	$var($DateFormatProvider, provider, $nc(adapter)->getDateFormatProvider());
	$var(DateFormat, dateFormat, nullptr);
	if (timeStyle == -1) {
		$assign(dateFormat, $nc(provider)->getDateInstance(dateStyle, loc));
	} else if (dateStyle == -1) {
		$assign(dateFormat, $nc(provider)->getTimeInstance(timeStyle, loc));
	} else {
		$assign(dateFormat, $nc(provider)->getDateTimeInstance(dateStyle, timeStyle, loc));
	}
	return dateFormat;
}

void DateFormat::init$() {
	$Format::init$();
}

DateFormat::DateFormat() {
}

$Class* DateFormat::load$($String* name, bool initialize) {
	$loadClass(DateFormat, name, initialize, &_DateFormat_ClassInfo_, allocate$DateFormat);
	return class$;
}

$Class* DateFormat::class$ = nullptr;

	} // text
} // java