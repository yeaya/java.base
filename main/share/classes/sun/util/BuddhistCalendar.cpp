#include <sun/util/BuddhistCalendar.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Calendar.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/TimeZone.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <jcpp.h>

#undef YEAR
#undef ERA
#undef BUDDHIST_YEAR_OFFSET

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $TimeZone = ::java::util::TimeZone;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace sun {
	namespace util {

$FieldInfo _BuddhistCalendar_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BuddhistCalendar, serialVersionUID)},
	{"BUDDHIST_YEAR_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BuddhistCalendar, BUDDHIST_YEAR_OFFSET)},
	{"yearOffset", "I", nullptr, $PRIVATE | $TRANSIENT, $field(BuddhistCalendar, yearOffset)},
	{}
};

$MethodInfo _BuddhistCalendar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuddhistCalendar::*)()>(&BuddhistCalendar::init$))},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PUBLIC, $method(static_cast<void(BuddhistCalendar::*)($TimeZone*)>(&BuddhistCalendar::init$))},
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(BuddhistCalendar::*)($Locale*)>(&BuddhistCalendar::init$))},
	{"<init>", "(Ljava/util/TimeZone;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(BuddhistCalendar::*)($TimeZone*,$Locale*)>(&BuddhistCalendar::init$))},
	{"add", "(II)V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)I", nullptr, $PUBLIC},
	{"getActualMaximum", "(I)I", nullptr, $PUBLIC},
	{"getCalendarType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayName", "(IILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayNames", "(IILjava/util/Locale;)Ljava/util/Map;", "(IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BuddhistCalendar::*)($ObjectInputStream*)>(&BuddhistCalendar::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"roll", "(II)V", nullptr, $PUBLIC},
	{"set", "(II)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BuddhistCalendar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.BuddhistCalendar",
	"java.util.GregorianCalendar",
	nullptr,
	_BuddhistCalendar_FieldInfo_,
	_BuddhistCalendar_MethodInfo_
};

$Object* allocate$BuddhistCalendar($Class* clazz) {
	return $of($alloc(BuddhistCalendar));
}

void BuddhistCalendar::init$() {
	$GregorianCalendar::init$();
	this->yearOffset = BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

void BuddhistCalendar::init$($TimeZone* zone) {
	$GregorianCalendar::init$(zone);
	this->yearOffset = BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

void BuddhistCalendar::init$($Locale* aLocale) {
	$GregorianCalendar::init$(aLocale);
	this->yearOffset = BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

void BuddhistCalendar::init$($TimeZone* zone, $Locale* aLocale) {
	$GregorianCalendar::init$(zone, aLocale);
	this->yearOffset = BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

$String* BuddhistCalendar::getCalendarType() {
	return "buddhist"_s;
}

bool BuddhistCalendar::equals(Object$* obj) {
	return $instanceOf(BuddhistCalendar, obj) && $GregorianCalendar::equals(obj);
}

int32_t BuddhistCalendar::hashCode() {
	return $GregorianCalendar::hashCode() ^ BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

int32_t BuddhistCalendar::get(int32_t field) {
	if (field == $Calendar::YEAR) {
		return $GregorianCalendar::get(field) + this->yearOffset;
	}
	return $GregorianCalendar::get(field);
}

void BuddhistCalendar::set(int32_t field, int32_t value) {
	if (field == $Calendar::YEAR) {
		$GregorianCalendar::set(field, value - this->yearOffset);
	} else {
		$GregorianCalendar::set(field, value);
	}
}

void BuddhistCalendar::add(int32_t field, int32_t amount) {
	int32_t savedYearOffset = this->yearOffset;
	this->yearOffset = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$GregorianCalendar::add(field, amount);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->yearOffset = savedYearOffset;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void BuddhistCalendar::roll(int32_t field, int32_t amount) {
	int32_t savedYearOffset = this->yearOffset;
	this->yearOffset = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$GregorianCalendar::roll(field, amount);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->yearOffset = savedYearOffset;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* BuddhistCalendar::getDisplayName(int32_t field, int32_t style, $Locale* locale) {
	if (field != $Calendar::ERA) {
		return $GregorianCalendar::getDisplayName(field, style, locale);
	}
	return $CalendarDataUtility::retrieveFieldValueName("buddhist"_s, field, get(field), style, locale);
}

$Map* BuddhistCalendar::getDisplayNames(int32_t field, int32_t style, $Locale* locale) {
	if (field != $Calendar::ERA) {
		return $GregorianCalendar::getDisplayNames(field, style, locale);
	}
	return $CalendarDataUtility::retrieveFieldValueNames("buddhist"_s, field, style, locale);
}

int32_t BuddhistCalendar::getActualMaximum(int32_t field) {
	int32_t savedYearOffset = this->yearOffset;
	this->yearOffset = 0;
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $GregorianCalendar::getActualMaximum(field);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->yearOffset = savedYearOffset;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* BuddhistCalendar::toString() {
	$var($String, s, $GregorianCalendar::toString());
	if (!isSet($Calendar::YEAR)) {
		return s;
	}
	$var($String, yearField, "YEAR="_s);
	int32_t p = $nc(s)->indexOf(yearField);
	if (p == -1) {
		return s;
	}
	p += yearField->length();
	$var($StringBuilder, sb, $new($StringBuilder, s->length() + 10));
	sb->append(static_cast<$CharSequence*>(s), 0, p);
	while ($Character::isDigit(s->charAt(p++))) {
	}
	int32_t year = internalGet($Calendar::YEAR) + BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
	sb->append(year)->append(static_cast<$CharSequence*>(s), p - 1, s->length());
	return sb->toString();
}

void BuddhistCalendar::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	this->yearOffset = BuddhistCalendar::BUDDHIST_YEAR_OFFSET;
}

BuddhistCalendar::BuddhistCalendar() {
}

$Class* BuddhistCalendar::load$($String* name, bool initialize) {
	$loadClass(BuddhistCalendar, name, initialize, &_BuddhistCalendar_ClassInfo_, allocate$BuddhistCalendar);
	return class$;
}

$Class* BuddhistCalendar::class$ = nullptr;

	} // util
} // sun