#include <java/time/chrono/MinguoEra.h>

#include <java/lang/Enum.h>
#include <java/time/DateTimeException.h>
#include <java/time/chrono/AbstractChronology.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/MinguoChronology.h>
#include <java/time/chrono/MinguoDate.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef BEFORE_ROC
#undef ERA
#undef INSTANCE
#undef ROC

using $MinguoEraArray = $Array<::java::time::chrono::MinguoEra>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $AbstractChronology = ::java::time::chrono::AbstractChronology;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateImpl = ::java::time::chrono::ChronoLocalDateImpl;
using $Chronology = ::java::time::chrono::Chronology;
using $Era = ::java::time::chrono::Era;
using $MinguoChronology = ::java::time::chrono::MinguoChronology;
using $MinguoDate = ::java::time::chrono::MinguoDate;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _MinguoEra_FieldInfo_[] = {
	{"BEFORE_ROC", "Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MinguoEra, BEFORE_ROC)},
	{"ROC", "Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MinguoEra, ROC)},
	{"$VALUES", "[Ljava/time/chrono/MinguoEra;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MinguoEra, $VALUES)},
	{}
};

$MethodInfo _MinguoEra_MethodInfo_[] = {
	{"$values", "()[Ljava/time/chrono/MinguoEra;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MinguoEraArray*(*)()>(&MinguoEra::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MinguoEra::*)($String*,int32_t)>(&MinguoEra::init$))},
	{"getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"of", "(I)Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MinguoEra*(*)(int32_t)>(&MinguoEra::of))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MinguoEra*(*)($String*)>(&MinguoEra::valueOf))},
	{"values", "()[Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MinguoEraArray*(*)()>(&MinguoEra::values))},
	{}
};

$ClassInfo _MinguoEra_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.chrono.MinguoEra",
	"java.lang.Enum",
	"java.time.chrono.Era",
	_MinguoEra_FieldInfo_,
	_MinguoEra_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/chrono/MinguoEra;>;Ljava/time/chrono/Era;"
};

$Object* allocate$MinguoEra($Class* clazz) {
	return $of($alloc(MinguoEra));
}

$String* MinguoEra::toString() {
	 return this->$Enum::toString();
}

bool MinguoEra::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t MinguoEra::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* MinguoEra::clone() {
	 return this->$Enum::clone();
}

void MinguoEra::finalize() {
	this->$Enum::finalize();
}

MinguoEra* MinguoEra::BEFORE_ROC = nullptr;
MinguoEra* MinguoEra::ROC = nullptr;
$MinguoEraArray* MinguoEra::$VALUES = nullptr;

$MinguoEraArray* MinguoEra::$values() {
	$init(MinguoEra);
	return $new($MinguoEraArray, {
		MinguoEra::BEFORE_ROC,
		MinguoEra::ROC
	});
}

$MinguoEraArray* MinguoEra::values() {
	$init(MinguoEra);
	return $cast($MinguoEraArray, MinguoEra::$VALUES->clone());
}

MinguoEra* MinguoEra::valueOf($String* name) {
	$init(MinguoEra);
	return $cast(MinguoEra, $Enum::valueOf(MinguoEra::class$, name));
}

void MinguoEra::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

MinguoEra* MinguoEra::of(int32_t minguoEra) {
	$init(MinguoEra);
	$useLocalCurrentObjectStackCache();
	switch (minguoEra) {
	case 0:
		{
			return MinguoEra::BEFORE_ROC;
		}
	case 1:
		{
			return MinguoEra::ROC;
		}
	default:
		{
			$throwNew($DateTimeException, $$str({"Invalid era: "_s, $$str(minguoEra)}));
		}
	}
}

int32_t MinguoEra::getValue() {
	return ordinal();
}

$String* MinguoEra::getDisplayName($TextStyle* style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	$init($MinguoChronology);
	return $nc($($nc($($nc($($$new($DateTimeFormatterBuilder)->appendText(static_cast<$TemporalField*>($ChronoField::ERA), style)))->toFormatter(locale)))->withChronology($MinguoChronology::INSTANCE)))->format(this == MinguoEra::ROC ? $(static_cast<$TemporalAccessor*>($MinguoDate::of(1, 1, 1))) : $(static_cast<$TemporalAccessor*>($MinguoDate::of(0, 1, 1))));
}

void clinit$MinguoEra($Class* class$) {
	$assignStatic(MinguoEra::BEFORE_ROC, $new(MinguoEra, "BEFORE_ROC"_s, 0));
	$assignStatic(MinguoEra::ROC, $new(MinguoEra, "ROC"_s, 1));
	$assignStatic(MinguoEra::$VALUES, MinguoEra::$values());
}

MinguoEra::MinguoEra() {
}

$Class* MinguoEra::load$($String* name, bool initialize) {
	$loadClass(MinguoEra, name, initialize, &_MinguoEra_ClassInfo_, clinit$MinguoEra, allocate$MinguoEra);
	return class$;
}

$Class* MinguoEra::class$ = nullptr;

		} // chrono
	} // time
} // java