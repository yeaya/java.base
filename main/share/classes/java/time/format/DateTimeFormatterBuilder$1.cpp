#include <java/time/format/DateTimeFormatterBuilder$1.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeTextProvider$LocaleStore.h>
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/TemporalField.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Chronology = ::java::time::chrono::Chronology;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeTextProvider = ::java::time::format::DateTimeTextProvider;
using $DateTimeTextProvider$LocaleStore = ::java::time::format::DateTimeTextProvider$LocaleStore;
using $TextStyle = ::java::time::format::TextStyle;
using $TemporalField = ::java::time::temporal::TemporalField;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace format {

void DateTimeFormatterBuilder$1::init$($DateTimeFormatterBuilder* this$0, $DateTimeTextProvider$LocaleStore* val$store) {
	$set(this, this$0, this$0);
	$set(this, val$store, val$store);
	$DateTimeTextProvider::init$();
}

$String* DateTimeFormatterBuilder$1::getText($Chronology* chrono, $TemporalField* field, int64_t value, $TextStyle* style, $Locale* locale) {
	return $nc(this->val$store)->getText(value, style);
}

$String* DateTimeFormatterBuilder$1::getText($TemporalField* field, int64_t value, $TextStyle* style, $Locale* locale) {
	return $nc(this->val$store)->getText(value, style);
}

$Iterator* DateTimeFormatterBuilder$1::getTextIterator($Chronology* chrono, $TemporalField* field, $TextStyle* style, $Locale* locale) {
	return $nc(this->val$store)->getTextIterator(style);
}

$Iterator* DateTimeFormatterBuilder$1::getTextIterator($TemporalField* field, $TextStyle* style, $Locale* locale) {
	return $nc(this->val$store)->getTextIterator(style);
}

DateTimeFormatterBuilder$1::DateTimeFormatterBuilder$1() {
}

$Class* DateTimeFormatterBuilder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/time/format/DateTimeFormatterBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimeFormatterBuilder$1, this$0)},
		{"val$store", "Ljava/time/format/DateTimeTextProvider$LocaleStore;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimeFormatterBuilder$1, val$store)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/format/DateTimeFormatterBuilder;Ljava/time/format/DateTimeTextProvider$LocaleStore;)V", nullptr, 0, $method(DateTimeFormatterBuilder$1, init$, void, $DateTimeFormatterBuilder*, $DateTimeTextProvider$LocaleStore*)},
		{"getText", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;JLjava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$1, getText, $String*, $Chronology*, $TemporalField*, int64_t, $TextStyle*, $Locale*)},
		{"getText", "(Ljava/time/temporal/TemporalField;JLjava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$1, getText, $String*, $TemporalField*, int64_t, $TextStyle*, $Locale*)},
		{"getTextIterator", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator;", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;>;", $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$1, getTextIterator, $Iterator*, $Chronology*, $TemporalField*, $TextStyle*, $Locale*)},
		{"getTextIterator", "(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator;", "(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;>;", $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$1, getTextIterator, $Iterator*, $TemporalField*, $TextStyle*, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.format.DateTimeFormatterBuilder",
		"appendText",
		"(Ljava/time/temporal/TemporalField;Ljava/util/Map;)Ljava/time/format/DateTimeFormatterBuilder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$1",
		"java.time.format.DateTimeTextProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$1);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$1::class$ = nullptr;

		} // format
	} // time
} // java