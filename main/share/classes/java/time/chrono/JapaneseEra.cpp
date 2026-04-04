#include <java/time/chrono/JapaneseEra.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/time/DateTimeException.h>
#include <java/time/LocalDate.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Era.h>
#include <java/time/chrono/JapaneseChronology.h>
#include <java/time/chrono/JapaneseDate.h>
#include <java/time/chrono/Ser.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/LocalGregorianCalendar.h>
#include <jcpp.h>

#undef ERA
#undef ERA_CONFIG
#undef ERA_OFFSET
#undef HEISEI
#undef INSTANCE
#undef JAPANESE_ERA_TYPE
#undef JCAL
#undef KNOWN_ERAS
#undef MEIJI
#undef MEIJI_6_ISODATE
#undef NARROW
#undef N_ERA_CONSTANTS
#undef REIWA
#undef SHOWA
#undef TAISHO

using $JapaneseEraArray = $Array<::java::time::chrono::JapaneseEra>;
using $EraArray = $Array<::sun::util::calendar::Era>;
using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $LocalDate = ::java::time::LocalDate;
using $Era = ::java::time::chrono::Era;
using $JapaneseChronology = ::java::time::chrono::JapaneseChronology;
using $JapaneseDate = ::java::time::chrono::JapaneseDate;
using $Ser = ::java::time::chrono::Ser;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $1Era = ::sun::util::calendar::Era;

namespace java {
	namespace time {
		namespace chrono {

int32_t JapaneseEra::hashCode() {
	 return this->$Era::hashCode();
}

bool JapaneseEra::equals(Object$* obj) {
	 return this->$Era::equals(obj);
}

$Object* JapaneseEra::clone() {
	 return this->$Era::clone();
}

void JapaneseEra::finalize() {
	this->$Era::finalize();
}

$EraArray* JapaneseEra::ERA_CONFIG = nullptr;
JapaneseEra* JapaneseEra::MEIJI = nullptr;
JapaneseEra* JapaneseEra::TAISHO = nullptr;
JapaneseEra* JapaneseEra::SHOWA = nullptr;
JapaneseEra* JapaneseEra::HEISEI = nullptr;
JapaneseEra* JapaneseEra::REIWA = nullptr;
int32_t JapaneseEra::N_ERA_CONSTANTS = 0;
$JapaneseEraArray* JapaneseEra::KNOWN_ERAS = nullptr;

void JapaneseEra::init$(int32_t eraValue, $LocalDate* since) {
	this->eraValue = eraValue;
	$set(this, since, since);
}

$1Era* JapaneseEra::getPrivateEra() {
	return $nc(JapaneseEra::ERA_CONFIG)->get(ordinal(this->eraValue));
}

JapaneseEra* JapaneseEra::of(int32_t japaneseEra) {
	$init(JapaneseEra);
	$useLocalObjectStack();
	int32_t i = ordinal(japaneseEra);
	if (i < 0 || i >= $nc(JapaneseEra::KNOWN_ERAS)->length) {
		$throwNew($DateTimeException, $$str({"Invalid era: "_s, $$str(japaneseEra)}));
	}
	return $nc(JapaneseEra::KNOWN_ERAS)->get(i);
}

JapaneseEra* JapaneseEra::valueOf($String* japaneseEra) {
	$init(JapaneseEra);
	$useLocalObjectStack();
	$Objects::requireNonNull(japaneseEra, "japaneseEra"_s);
	{
		$var($JapaneseEraArray, arr$, JapaneseEra::KNOWN_ERAS);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var(JapaneseEra, era, arr$->get(i$));
			if ($$nc($nc(era)->getName())->equals(japaneseEra)) {
				return era;
			}
		}
	}
	$throwNew($IllegalArgumentException, "japaneseEra is invalid"_s);
}

$JapaneseEraArray* JapaneseEra::values() {
	$init(JapaneseEra);
	return $cast($JapaneseEraArray, $Arrays::copyOf(JapaneseEra::KNOWN_ERAS, $nc(JapaneseEra::KNOWN_ERAS)->length));
}

$String* JapaneseEra::getDisplayName($TextStyle* style, $Locale* locale) {
	$useLocalObjectStack();
	if (getValue() > JapaneseEra::N_ERA_CONSTANTS - JapaneseEra::ERA_OFFSET) {
		$Objects::requireNonNull(locale, "locale"_s);
		$init($TextStyle);
		return $nc(style)->asNormal() == $TextStyle::NARROW ? getAbbreviation() : getName();
	}
	$init($ChronoField);
	$init($JapaneseChronology);
	$init($JapaneseDate);
	return $$nc($$nc($$nc($$new($DateTimeFormatterBuilder)->appendText($ChronoField::ERA, style))->toFormatter(locale))->withChronology($JapaneseChronology::INSTANCE))->format(this == JapaneseEra::MEIJI ? $JapaneseDate::MEIJI_6_ISODATE : this->since);
}

JapaneseEra* JapaneseEra::from($LocalDate* date) {
	$init(JapaneseEra);
	$useLocalObjectStack();
	$init($JapaneseDate);
	if ($nc(date)->isBefore($JapaneseDate::MEIJI_6_ISODATE)) {
		$throwNew($DateTimeException, "JapaneseDate before Meiji 6 are not supported"_s);
	}
	for (int32_t i = $nc(JapaneseEra::KNOWN_ERAS)->length - 1; i > 0; --i) {
		$var(JapaneseEra, era, JapaneseEra::KNOWN_ERAS->get(i));
		if (date->compareTo($nc(era)->since) >= 0) {
			return era;
		}
	}
	return nullptr;
}

JapaneseEra* JapaneseEra::toJapaneseEra($1Era* privateEra) {
	$init(JapaneseEra);
	for (int32_t i = $nc(JapaneseEra::ERA_CONFIG)->length - 1; i >= 0; --i) {
		if ($nc(JapaneseEra::ERA_CONFIG->get(i))->equals(privateEra)) {
			return $nc(JapaneseEra::KNOWN_ERAS)->get(i);
		}
	}
	return nullptr;
}

$1Era* JapaneseEra::privateEraFrom($LocalDate* isoDate) {
	$init(JapaneseEra);
	$useLocalObjectStack();
	for (int32_t i = $nc(JapaneseEra::KNOWN_ERAS)->length - 1; i > 0; --i) {
		$var(JapaneseEra, era, JapaneseEra::KNOWN_ERAS->get(i));
		if ($nc(isoDate)->compareTo($nc(era)->since) >= 0) {
			return $nc(JapaneseEra::ERA_CONFIG)->get(i);
		}
	}
	return nullptr;
}

int32_t JapaneseEra::ordinal(int32_t eraValue) {
	$init(JapaneseEra);
	return eraValue + JapaneseEra::ERA_OFFSET - 1;
}

int32_t JapaneseEra::getValue() {
	return this->eraValue;
}

$ValueRange* JapaneseEra::range($TemporalField* field) {
	$init($ChronoField);
	if ($equals(field, $ChronoField::ERA)) {
		$init($JapaneseChronology);
		return $nc($JapaneseChronology::INSTANCE)->range($ChronoField::ERA);
	}
	return $Era::range(field);
}

$String* JapaneseEra::getAbbreviation() {
	return $nc($nc(JapaneseEra::ERA_CONFIG)->get(ordinal(getValue())))->getAbbreviation();
}

$String* JapaneseEra::getName() {
	return $nc($nc(JapaneseEra::ERA_CONFIG)->get(ordinal(getValue())))->getName();
}

$String* JapaneseEra::toString() {
	return getName();
}

void JapaneseEra::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

$Object* JapaneseEra::writeReplace() {
	return $new($Ser, $Ser::JAPANESE_ERA_TYPE, this);
}

void JapaneseEra::writeExternal($DataOutput* out) {
	$nc(out)->writeByte(this->getValue());
}

JapaneseEra* JapaneseEra::readExternal($DataInput* in) {
	$init(JapaneseEra);
	int8_t eraValue = $nc(in)->readByte();
	return JapaneseEra::of(eraValue);
}

void JapaneseEra::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JapaneseEra::MEIJI, $new(JapaneseEra, -1, $($LocalDate::of(1868, 1, 1))));
	$assignStatic(JapaneseEra::TAISHO, $new(JapaneseEra, 0, $($LocalDate::of(1912, 7, 30))));
	$assignStatic(JapaneseEra::SHOWA, $new(JapaneseEra, 1, $($LocalDate::of(1926, 12, 25))));
	$assignStatic(JapaneseEra::HEISEI, $new(JapaneseEra, 2, $($LocalDate::of(1989, 1, 8))));
	$assignStatic(JapaneseEra::REIWA, $new(JapaneseEra, 3, $($LocalDate::of(2019, 5, 1))));
	JapaneseEra::N_ERA_CONSTANTS = JapaneseEra::REIWA->getValue() + JapaneseEra::ERA_OFFSET;
	{
		$init($JapaneseChronology);
		$assignStatic(JapaneseEra::ERA_CONFIG, $nc($JapaneseChronology::JCAL)->getEras());
		$assignStatic(JapaneseEra::KNOWN_ERAS, $new($JapaneseEraArray, $nc(JapaneseEra::ERA_CONFIG)->length));
		JapaneseEra::KNOWN_ERAS->set(0, JapaneseEra::MEIJI);
		JapaneseEra::KNOWN_ERAS->set(1, JapaneseEra::TAISHO);
		JapaneseEra::KNOWN_ERAS->set(2, JapaneseEra::SHOWA);
		JapaneseEra::KNOWN_ERAS->set(3, JapaneseEra::HEISEI);
		JapaneseEra::KNOWN_ERAS->set(4, JapaneseEra::REIWA);
		for (int32_t i = JapaneseEra::N_ERA_CONSTANTS; i < JapaneseEra::ERA_CONFIG->length; ++i) {
			$var($CalendarDate, date, $nc(JapaneseEra::ERA_CONFIG->get(i))->getSinceDate());
			int32_t var$0 = $nc(date)->getYear();
			int32_t var$1 = date->getMonth();
			$var($LocalDate, isoDate, $LocalDate::of(var$0, var$1, date->getDayOfMonth()));
			JapaneseEra::KNOWN_ERAS->set(i, $$new(JapaneseEra, i - JapaneseEra::ERA_OFFSET + 1, isoDate));
		}
	}
}

JapaneseEra::JapaneseEra() {
}

$Class* JapaneseEra::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERA_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(JapaneseEra, ERA_OFFSET)},
		{"ERA_CONFIG", "[Lsun/util/calendar/Era;", nullptr, $STATIC | $FINAL, $staticField(JapaneseEra, ERA_CONFIG)},
		{"MEIJI", "Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JapaneseEra, MEIJI)},
		{"TAISHO", "Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JapaneseEra, TAISHO)},
		{"SHOWA", "Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JapaneseEra, SHOWA)},
		{"HEISEI", "Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JapaneseEra, HEISEI)},
		{"REIWA", "Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JapaneseEra, REIWA)},
		{"N_ERA_CONSTANTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JapaneseEra, N_ERA_CONSTANTS)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JapaneseEra, serialVersionUID)},
		{"KNOWN_ERAS", "[Ljava/time/chrono/JapaneseEra;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JapaneseEra, KNOWN_ERAS)},
		{"eraValue", "I", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JapaneseEra, eraValue)},
		{"since", "Ljava/time/LocalDate;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JapaneseEra, since)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(ILjava/time/LocalDate;)V", nullptr, $PRIVATE, $method(JapaneseEra, init$, void, int32_t, $LocalDate*)},
		{"from", "(Ljava/time/LocalDate;)Ljava/time/chrono/JapaneseEra;", nullptr, $STATIC, $staticMethod(JapaneseEra, from, JapaneseEra*, $LocalDate*)},
		{"getAbbreviation", "()Ljava/lang/String;", nullptr, 0, $method(JapaneseEra, getAbbreviation, $String*)},
		{"getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JapaneseEra, getDisplayName, $String*, $TextStyle*, $Locale*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $method(JapaneseEra, getName, $String*)},
		{"getPrivateEra", "()Lsun/util/calendar/Era;", nullptr, 0, $method(JapaneseEra, getPrivateEra, $1Era*)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(JapaneseEra, getValue, int32_t)},
		{"of", "(I)Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseEra, of, JapaneseEra*, int32_t)},
		{"ordinal", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(JapaneseEra, ordinal, int32_t, int32_t)},
		{"privateEraFrom", "(Ljava/time/LocalDate;)Lsun/util/calendar/Era;", nullptr, $STATIC, $staticMethod(JapaneseEra, privateEraFrom, $1Era*, $LocalDate*)},
		{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(JapaneseEra, range, $ValueRange*, $TemporalField*)},
		{"readExternal", "(Ljava/io/DataInput;)Ljava/time/chrono/JapaneseEra;", nullptr, $STATIC, $staticMethod(JapaneseEra, readExternal, JapaneseEra*, $DataInput*), "java.io.IOException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JapaneseEra, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
		{"toJapaneseEra", "(Lsun/util/calendar/Era;)Ljava/time/chrono/JapaneseEra;", nullptr, $STATIC, $staticMethod(JapaneseEra, toJapaneseEra, JapaneseEra*, $1Era*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JapaneseEra, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseEra, valueOf, JapaneseEra*, $String*)},
		{"values", "()[Ljava/time/chrono/JapaneseEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseEra, values, $JapaneseEraArray*)},
		{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(JapaneseEra, writeExternal, void, $DataOutput*), "java.io.IOException"},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(JapaneseEra, writeReplace, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.time.chrono.JapaneseEra",
		"java.lang.Object",
		"java.time.chrono.Era,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JapaneseEra, name, initialize, &classInfo$$, JapaneseEra::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JapaneseEra));
	});
	return class$;
}

$Class* JapaneseEra::class$ = nullptr;

		} // chrono
	} // time
} // java