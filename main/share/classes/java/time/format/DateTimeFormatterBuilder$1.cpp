#include <java/time/format/DateTimeFormatterBuilder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DateTimeFormatterBuilder$1_FieldInfo_[] = {
	{"this$0", "Ljava/time/format/DateTimeFormatterBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimeFormatterBuilder$1, this$0)},
	{"val$store", "Ljava/time/format/DateTimeTextProvider$LocaleStore;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimeFormatterBuilder$1, val$store)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/time/format/DateTimeFormatterBuilder;Ljava/time/format/DateTimeTextProvider$LocaleStore;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$1::*)($DateTimeFormatterBuilder*,$DateTimeTextProvider$LocaleStore*)>(&DateTimeFormatterBuilder$1::init$))},
	{"getText", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;JLjava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getText", "(Ljava/time/temporal/TemporalField;JLjava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextIterator", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator;", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;>;", $PUBLIC},
	{"getTextIterator", "(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator;", "(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DateTimeFormatterBuilder$1_EnclosingMethodInfo_ = {
	"java.time.format.DateTimeFormatterBuilder",
	"appendText",
	"(Ljava/time/temporal/TemporalField;Ljava/util/Map;)Ljava/time/format/DateTimeFormatterBuilder;"
};

$InnerClassInfo _DateTimeFormatterBuilder$1_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$1",
	"java.time.format.DateTimeTextProvider",
	nullptr,
	_DateTimeFormatterBuilder$1_FieldInfo_,
	_DateTimeFormatterBuilder$1_MethodInfo_,
	nullptr,
	&_DateTimeFormatterBuilder$1_EnclosingMethodInfo_,
	_DateTimeFormatterBuilder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$1($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$1));
}

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
	$loadClass(DateTimeFormatterBuilder$1, name, initialize, &_DateTimeFormatterBuilder$1_ClassInfo_, allocate$DateTimeFormatterBuilder$1);
	return class$;
}

$Class* DateTimeFormatterBuilder$1::class$ = nullptr;

		} // format
	} // time
} // java