#include <sun/util/calendar/LocalGregorianCalendar.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/TimeZone.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/BaseCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/LocalGregorianCalendar$Date.h>
#include <jcpp.h>

#undef DAY_IN_MILLIS
#undef EPOCH_OFFSET
#undef JAPANESE_ERAS

using $EraArray = $Array<::sun::util::calendar::Era>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $TimeZone = ::java::util::TimeZone;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $AbstractCalendar = ::sun::util::calendar::AbstractCalendar;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;
using $LocalGregorianCalendar$Date = ::sun::util::calendar::LocalGregorianCalendar$Date;

namespace sun {
	namespace util {
		namespace calendar {

$EraArray* LocalGregorianCalendar::JAPANESE_ERAS = nullptr;

bool LocalGregorianCalendar::isValidEra($Era* newEra, $EraArray* eras) {
	$init(LocalGregorianCalendar);
	$useLocalObjectStack();
	$var($Era, last, $nc(eras)->get($nc(eras)->length - 1));
	int64_t var$0 = $nc(last)->getSince(nullptr);
	if (var$0 >= $nc(newEra)->getSince(nullptr)) {
		return false;
	}
	$var($String, newName, newEra->getName());
	{
		$var($EraArray, arr$, eras);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Era, era, arr$->get(i$));
			if ($$nc($nc(era)->getName())->equals(newName)) {
				return false;
			}
		}
	}
	return true;
}

LocalGregorianCalendar* LocalGregorianCalendar::getLocalGregorianCalendar($String* name) {
	$init(LocalGregorianCalendar);
	$useLocalObjectStack();
	if (!"japanese"_s->equals(name)) {
		return nullptr;
	}
	$var($String, prop, $GetPropertyAction::privilegedGetProperty("jdk.calendar.japanese.supplemental.era"_s));
	if (prop != nullptr) {
		$var($Era, era, parseEraEntry(prop));
		if (era != nullptr) {
			if (isValidEra(era, LocalGregorianCalendar::JAPANESE_ERAS)) {
				int32_t length = LocalGregorianCalendar::JAPANESE_ERAS->length;
				$var($EraArray, eras, $new($EraArray, length + 1));
				$System::arraycopy(LocalGregorianCalendar::JAPANESE_ERAS, 0, eras, 0, length);
				eras->set(length, era);
				return $new(LocalGregorianCalendar, name, eras);
			}
		}
	}
	return $new(LocalGregorianCalendar, name, LocalGregorianCalendar::JAPANESE_ERAS);
}

$Era* LocalGregorianCalendar::parseEraEntry($String* entry) {
	$init(LocalGregorianCalendar);
	$useLocalObjectStack();
	$var($StringArray, keyValuePairs, $nc(entry)->split(","_s));
	$var($String, eraName, nullptr);
	bool localTime = true;
	int64_t since = 0;
	$var($String, abbr, nullptr);
	{
		$var($StringArray, arr$, keyValuePairs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, item, arr$->get(i$));
			{
				$var($StringArray, keyvalue, $nc(item)->split("="_s));
				if (keyvalue->length != 2) {
					return nullptr;
				}
				$var($String, key, $nc(keyvalue->get(0))->trim());
				$var($String, value, convertUnicodeEscape($($nc(keyvalue->get(1))->trim())));
				{
					$var($String, s5845$, key);
					int32_t tmp5845$ = -1;
					switch (s5845$->hashCode()) {
					case 0x00337a8b:
						if (s5845$->equals("name"_s)) {
							tmp5845$ = 0;
						}
						break;
					case 0x0685f33a:
						if (s5845$->equals("since"_s)) {
							tmp5845$ = 1;
						}
						break;
					case 0x002d9431:
						if (s5845$->equals("abbr"_s)) {
							tmp5845$ = 2;
						}
						break;
					}
					switch (tmp5845$) {
					case 0:
						$assign(eraName, value);
						break;
					case 1:
						if ($nc(value)->endsWith("u"_s)) {
							localTime = false;
							$assign(value, value->substring(0, value->length() - 1));
						}
						try {
							since = $Long::parseLong(value);
						} catch ($NumberFormatException& e) {
							return nullptr;
						}
						break;
					case 2:
						$assign(abbr, value);
						break;
					default:
						return nullptr;
					}
				}
			}
		}
	}
	bool var$0 = eraName == nullptr || eraName->isEmpty() || abbr == nullptr;
	if (var$0 || abbr->isEmpty()) {
		return nullptr;
	}
	return $new($Era, eraName, abbr, since, localTime);
}

$String* LocalGregorianCalendar::convertUnicodeEscape($String* src) {
	$init(LocalGregorianCalendar);
	$useLocalObjectStack();
	$var($Matcher, m, $$nc($Pattern::compile("\\\\u([0-9a-fA-F]{4})"_s))->matcher(src));
	$var($StringBuilder, sb, $new($StringBuilder));
	while ($nc(m)->find()) {
		m->appendReplacement(sb, $($Character::toString((char16_t)$Integer::parseUnsignedInt($(m->group(1)), 16))));
	}
	m->appendTail(sb);
	return sb->toString();
}

void LocalGregorianCalendar::init$($String* name, $EraArray* eras) {
	$BaseCalendar::init$();
	$set(this, name, name);
	$set(this, eras, eras);
	setEras(eras);
}

$String* LocalGregorianCalendar::getName() {
	return this->name;
}

$CalendarDate* LocalGregorianCalendar::getCalendarDate() {
	int64_t var$0 = $System::currentTimeMillis();
	return getCalendarDate(var$0, $(newCalendarDate()));
}

$CalendarDate* LocalGregorianCalendar::getCalendarDate(int64_t millis) {
	return getCalendarDate(millis, $(newCalendarDate()));
}

$CalendarDate* LocalGregorianCalendar::getCalendarDate(int64_t millis, $TimeZone* zone) {
	return getCalendarDate(millis, $(newCalendarDate(zone)));
}

$CalendarDate* LocalGregorianCalendar::getCalendarDate(int64_t millis, $CalendarDate* date) {
	$var($LocalGregorianCalendar$Date, ldate, $cast($LocalGregorianCalendar$Date, $BaseCalendar::getCalendarDate(millis, date)));
	return adjustYear(ldate, millis, $nc(ldate)->getZoneOffset());
}

$LocalGregorianCalendar$Date* LocalGregorianCalendar::adjustYear($LocalGregorianCalendar$Date* ldate, int64_t millis, int32_t zoneOffset) {
	$useLocalObjectStack();
	int32_t i = 0;
	for (i = $nc(this->eras)->length - 1; i >= 0; --i) {
		$var($Era, era, this->eras->get(i));
		int64_t since = $nc(era)->getSince(nullptr);
		if (era->isLocalTime()) {
			since -= zoneOffset;
		}
		if (millis >= since) {
			$nc(ldate)->setLocalEra(era);
			int32_t var$0 = ldate->getNormalizedYear();
			int32_t y = var$0 - $$nc(era->getSinceDate())->getYear() + 1;
			ldate->setLocalYear(y);
			break;
		}
	}
	if (i < 0) {
		$nc(ldate)->setLocalEra(nullptr);
		ldate->setLocalYear(ldate->getNormalizedYear());
	}
	$nc(ldate)->setNormalized(true);
	return ldate;
}

$CalendarDate* LocalGregorianCalendar::newCalendarDate() {
	return $new($LocalGregorianCalendar$Date);
}

$CalendarDate* LocalGregorianCalendar::newCalendarDate($TimeZone* zone) {
	return $new($LocalGregorianCalendar$Date, zone);
}

bool LocalGregorianCalendar::validate($CalendarDate* date) {
	$useLocalObjectStack();
	$var($LocalGregorianCalendar$Date, ldate, $cast($LocalGregorianCalendar$Date, date));
	$var($Era, era, $nc(ldate)->getEra());
	if (era != nullptr) {
		if (!validateEra(era)) {
			return false;
		}
		int32_t var$0 = $$nc(era->getSinceDate())->getYear();
		ldate->setNormalizedYear(var$0 + ldate->getYear() - 1);
		$var($LocalGregorianCalendar$Date, tmp, $cast($LocalGregorianCalendar$Date, newCalendarDate($($nc(date)->getZone()))));
		int32_t var$1 = date->getYear();
		int32_t var$2 = date->getMonth();
		$$nc($nc(tmp)->setEra(era))->setDate(var$1, var$2, date->getDayOfMonth());
		normalize(tmp);
		if ($nc(tmp)->getEra() != era) {
			return false;
		}
	} else {
		int32_t var$3 = $nc(date)->getYear();
		if (var$3 >= $$nc($nc($nc(this->eras)->get(0))->getSinceDate())->getYear()) {
			return false;
		}
		ldate->setNormalizedYear(ldate->getYear());
	}
	return $BaseCalendar::validate(ldate);
}

bool LocalGregorianCalendar::validateEra($Era* era) {
	$useLocalObjectStack();
	$var($EraArray, arr$, this->eras);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Era, era1, arr$->get(i$));
		if (era == era1) {
			return true;
		}
	}
	return false;
}

bool LocalGregorianCalendar::normalize($CalendarDate* date) {
	$useLocalObjectStack();
	if ($nc(date)->isNormalized()) {
		return true;
	}
	normalizeYear(date);
	$var($LocalGregorianCalendar$Date, ldate, $cast($LocalGregorianCalendar$Date, date));
	$BaseCalendar::normalize(ldate);
	bool hasMillis = false;
	int64_t millis = 0;
	int32_t year = ldate->getNormalizedYear();
	int32_t i = 0;
	$var($Era, era, nullptr);
	for (i = $nc(this->eras)->length - 1; i >= 0; --i) {
		$assign(era, this->eras->get(i));
		if ($nc(era)->isLocalTime()) {
			$var($CalendarDate, sinceDate, era->getSinceDate());
			int32_t sinceYear = $nc(sinceDate)->getYear();
			if (year > sinceYear) {
				break;
			}
			if (year == sinceYear) {
				int32_t month = ldate->getMonth();
				int32_t sinceMonth = sinceDate->getMonth();
				if (month > sinceMonth) {
					break;
				}
				if (month == sinceMonth) {
					int32_t day = ldate->getDayOfMonth();
					int32_t sinceDay = sinceDate->getDayOfMonth();
					if (day > sinceDay) {
						break;
					}
					if (day == sinceDay) {
						int64_t timeOfDay = ldate->getTimeOfDay();
						int64_t sinceTimeOfDay = sinceDate->getTimeOfDay();
						if (timeOfDay >= sinceTimeOfDay) {
							break;
						}
						--i;
						break;
					}
				}
			}
		} else {
			if (!hasMillis) {
				millis = $BaseCalendar::getTime(date);
				hasMillis = true;
			}
			int64_t since = era->getSince($(date->getZone()));
			if (millis >= since) {
				break;
			}
		}
	}
	if (i >= 0) {
		ldate->setLocalEra(era);
		int32_t var$0 = ldate->getNormalizedYear();
		int32_t y = var$0 - $$nc($nc(era)->getSinceDate())->getYear() + 1;
		ldate->setLocalYear(y);
	} else {
		ldate->setEra(nullptr);
		ldate->setLocalYear(year);
		ldate->setNormalizedYear(year);
	}
	ldate->setNormalized(true);
	return true;
}

void LocalGregorianCalendar::normalizeMonth($CalendarDate* date) {
	normalizeYear(date);
	$BaseCalendar::normalizeMonth(date);
}

void LocalGregorianCalendar::normalizeYear($CalendarDate* date) {
	$useLocalObjectStack();
	$var($LocalGregorianCalendar$Date, ldate, $cast($LocalGregorianCalendar$Date, date));
	$var($Era, era, $nc(ldate)->getEra());
	if (era == nullptr || !validateEra(era)) {
		ldate->setNormalizedYear(ldate->getYear());
	} else {
		int32_t var$0 = $$nc(era->getSinceDate())->getYear();
		ldate->setNormalizedYear(var$0 + ldate->getYear() - 1);
	}
}

bool LocalGregorianCalendar::isLeapYear(int32_t gregorianYear) {
	return $CalendarUtils::isGregorianLeapYear(gregorianYear);
}

bool LocalGregorianCalendar::isLeapYear($Era* era, int32_t year) {
	if (era == nullptr) {
		return isLeapYear(year);
	}
	int32_t gyear = $$nc($nc(era)->getSinceDate())->getYear() + year - 1;
	return isLeapYear(gyear);
}

void LocalGregorianCalendar::getCalendarDateFromFixedDate($CalendarDate* date, int64_t fixedDate) {
	$var($LocalGregorianCalendar$Date, ldate, $cast($LocalGregorianCalendar$Date, date));
	$BaseCalendar::getCalendarDateFromFixedDate(ldate, fixedDate);
	adjustYear(ldate, (fixedDate - $AbstractCalendar::EPOCH_OFFSET) * $AbstractCalendar::DAY_IN_MILLIS, 0);
}

void LocalGregorianCalendar::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(LocalGregorianCalendar::JAPANESE_ERAS, $new($EraArray, {
		$$new($Era, "Meiji"_s, "M"_s, (int64_t)-3218832000000, true),
		$$new($Era, "Taisho"_s, "T"_s, (int64_t)-1812153600000, true),
		$$new($Era, "Showa"_s, "S"_s, (int64_t)-1357603200000, true),
		$$new($Era, "Heisei"_s, "H"_s, (int64_t)600220800000, true),
		$$new($Era, "Reiwa"_s, "R"_s, (int64_t)1556668800000, true)
	}));
}

LocalGregorianCalendar::LocalGregorianCalendar() {
}

$Class* LocalGregorianCalendar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JAPANESE_ERAS", "[Lsun/util/calendar/Era;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocalGregorianCalendar, JAPANESE_ERAS)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocalGregorianCalendar, name)},
		{"eras", "[Lsun/util/calendar/Era;", nullptr, $PRIVATE, $field(LocalGregorianCalendar, eras)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Lsun/util/calendar/Era;)V", nullptr, $PRIVATE, $method(LocalGregorianCalendar, init$, void, $String*, $EraArray*)},
		{"adjustYear", "(Lsun/util/calendar/LocalGregorianCalendar$Date;JI)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PRIVATE, $method(LocalGregorianCalendar, adjustYear, $LocalGregorianCalendar$Date*, $LocalGregorianCalendar$Date*, int64_t, int32_t)},
		{"convertUnicodeEscape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(LocalGregorianCalendar, convertUnicodeEscape, $String*, $String*)},
		{"getCalendarDate", "()Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getCalendarDate, $CalendarDate*)},
		{"getCalendarDate", "(J)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getCalendarDate, $CalendarDate*, int64_t)},
		{"getCalendarDate", "(JLjava/util/TimeZone;)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getCalendarDate, $CalendarDate*, int64_t, $TimeZone*)},
		{"getCalendarDate", "(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getCalendarDate, $CalendarDate*, int64_t, $CalendarDate*)},
		{"getCalendarDateFromFixedDate", "(Lsun/util/calendar/CalendarDate;J)V", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getCalendarDateFromFixedDate, void, $CalendarDate*, int64_t)},
		{"getLocalGregorianCalendar", "(Ljava/lang/String;)Lsun/util/calendar/LocalGregorianCalendar;", nullptr, $STATIC, $staticMethod(LocalGregorianCalendar, getLocalGregorianCalendar, LocalGregorianCalendar*, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, getName, $String*)},
		{"isLeapYear", "(I)Z", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, isLeapYear, bool, int32_t)},
		{"isLeapYear", "(Lsun/util/calendar/Era;I)Z", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, isLeapYear, bool, $Era*, int32_t)},
		{"isValidEra", "(Lsun/util/calendar/Era;[Lsun/util/calendar/Era;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LocalGregorianCalendar, isValidEra, bool, $Era*, $EraArray*)},
		{"newCalendarDate", "()Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, newCalendarDate, $CalendarDate*)},
		{"newCalendarDate", "(Ljava/util/TimeZone;)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, newCalendarDate, $CalendarDate*, $TimeZone*)},
		{"normalize", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, normalize, bool, $CalendarDate*)},
		{"normalizeMonth", "(Lsun/util/calendar/CalendarDate;)V", nullptr, 0, $virtualMethod(LocalGregorianCalendar, normalizeMonth, void, $CalendarDate*)},
		{"normalizeYear", "(Lsun/util/calendar/CalendarDate;)V", nullptr, 0, $virtualMethod(LocalGregorianCalendar, normalizeYear, void, $CalendarDate*)},
		{"parseEraEntry", "(Ljava/lang/String;)Lsun/util/calendar/Era;", nullptr, $PRIVATE | $STATIC, $staticMethod(LocalGregorianCalendar, parseEraEntry, $Era*, $String*)},
		{"validate", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar, validate, bool, $CalendarDate*)},
		{"validateEra", "(Lsun/util/calendar/Era;)Z", nullptr, $PRIVATE, $method(LocalGregorianCalendar, validateEra, bool, $Era*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.calendar.LocalGregorianCalendar$Date", "sun.util.calendar.LocalGregorianCalendar", "Date", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.calendar.LocalGregorianCalendar",
		"sun.util.calendar.BaseCalendar",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.calendar.LocalGregorianCalendar$Date"
	};
	$loadClass(LocalGregorianCalendar, name, initialize, &classInfo$$, LocalGregorianCalendar::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocalGregorianCalendar);
	});
	return class$;
}

$Class* LocalGregorianCalendar::class$ = nullptr;

		} // calendar
	} // util
} // sun