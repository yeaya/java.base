#include <java/time/chrono/MinguoEra.h>
#include <java/lang/Enum.h>
#include <java/time/DateTimeException.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/MinguoChronology.h>
#include <java/time/chrono/MinguoDate.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
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
using $MinguoChronology = ::java::time::chrono::MinguoChronology;
using $MinguoDate = ::java::time::chrono::MinguoDate;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace chrono {

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
	$useLocalObjectStack();
	switch (minguoEra) {
	case 0:
		return MinguoEra::BEFORE_ROC;
	case 1:
		return MinguoEra::ROC;
	default:
		$throwNew($DateTimeException, $$str({"Invalid era: "_s, $$str(minguoEra)}));
	}
}

int32_t MinguoEra::getValue() {
	return ordinal();
}

$String* MinguoEra::getDisplayName($TextStyle* style, $Locale* locale) {
	$useLocalObjectStack();
	$init($ChronoField);
	$init($MinguoChronology);
	return $$nc($$nc($$nc($$new($DateTimeFormatterBuilder)->appendText($ChronoField::ERA, style))->toFormatter(locale))->withChronology($MinguoChronology::INSTANCE))->format(this == MinguoEra::ROC ? $($MinguoDate::of(1, 1, 1)) : $($MinguoDate::of(0, 1, 1)));
}

void MinguoEra::clinit$($Class* clazz) {
	$assignStatic(MinguoEra::BEFORE_ROC, $new(MinguoEra, "BEFORE_ROC"_s, 0));
	$assignStatic(MinguoEra::ROC, $new(MinguoEra, "ROC"_s, 1));
	$assignStatic(MinguoEra::$VALUES, MinguoEra::$values());
}

MinguoEra::MinguoEra() {
}

$Class* MinguoEra::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BEFORE_ROC", "Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MinguoEra, BEFORE_ROC)},
		{"ROC", "Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MinguoEra, ROC)},
		{"$VALUES", "[Ljava/time/chrono/MinguoEra;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MinguoEra, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/time/chrono/MinguoEra;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MinguoEra, $values, $MinguoEraArray*)},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MinguoEra, init$, void, $String*, int32_t)},
		{"getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MinguoEra, getDisplayName, $String*, $TextStyle*, $Locale*)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(MinguoEra, getValue, int32_t)},
		{"of", "(I)Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(MinguoEra, of, MinguoEra*, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(MinguoEra, valueOf, MinguoEra*, $String*)},
		{"values", "()[Ljava/time/chrono/MinguoEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(MinguoEra, values, $MinguoEraArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.time.chrono.MinguoEra",
		"java.lang.Enum",
		"java.time.chrono.Era",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/time/chrono/MinguoEra;>;Ljava/time/chrono/Era;"
	};
	$loadClass(MinguoEra, name, initialize, &classInfo$$, MinguoEra::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MinguoEra));
	});
	return class$;
}

$Class* MinguoEra::class$ = nullptr;

		} // chrono
	} // time
} // java