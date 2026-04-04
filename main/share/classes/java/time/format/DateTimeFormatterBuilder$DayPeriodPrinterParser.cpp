#include <java/time/format/DateTimeFormatterBuilder$DayPeriodPrinterParser.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/format/DateTimeFormatterBuilder$DayPeriod.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DateTimeTextProvider$LocaleStore.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/util/Calendar.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <jcpp.h>

#undef AM_PM
#undef DAYPERIOD_LOCALESTORE
#undef DPCOMPARATOR
#undef HOUR_OF_DAY
#undef MINUTE_OF_HOUR

using $TextStyleArray = $Array<::java::time::format::TextStyle>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DateTimeFormatterBuilder$DayPeriod = ::java::time::format::DateTimeFormatterBuilder$DayPeriod;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DateTimeTextProvider$LocaleStore = ::java::time::format::DateTimeTextProvider$LocaleStore;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $Calendar = ::java::util::Calendar;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0 : public $Predicate {
	$class(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(int64_t val) {
		this->val = val;
	}
	virtual bool test(Object$* k) override {
		 return DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$format$0(val, $cast($DateTimeFormatterBuilder$DayPeriod, k));
	}
	int64_t val = 0;
};
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val", "J", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, val)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, init$, void, int64_t)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0);
	});
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1 : public $Function {
	$class(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Map* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* key) override {
		 return $nc(inst$)->get(key);
	}
	$Map* inst$ = nullptr;
};
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, init$, void, $Map*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1);
	});
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2 : public $Function {
	$class(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* loc) override {
		 return DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$findDayPeriodStore$2($cast($Locale, loc));
	}
};
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2);
	});
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3 : public $BiConsumer {
	$class(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(int32_t calStyle, $Locale* loc, $Map* map, $Map* periodMap) {
		this->calStyle = calStyle;
		$set(this, loc, loc);
		$set(this, map, map);
		$set(this, periodMap, periodMap);
	}
	virtual void accept(Object$* key, Object$* value) override {
		DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$findDayPeriodStore$1(calStyle, loc, map, periodMap, $cast($DateTimeFormatterBuilder$DayPeriod, key), $cast($Long, value));
	}
	int32_t calStyle = 0;
	$Locale* loc = nullptr;
	$Map* map = nullptr;
	$Map* periodMap = nullptr;
};
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"calStyle", "I", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, calStyle)},
		{"loc", "Ljava/util/Locale;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, loc)},
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, map)},
		{"periodMap", "Ljava/util/Map;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, periodMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/util/Locale;Ljava/util/Map;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, init$, void, int32_t, $Locale*, $Map*, $Map*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3);
	});
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3::class$ = nullptr;

$ConcurrentMap* DateTimeFormatterBuilder$DayPeriodPrinterParser::DAYPERIOD_LOCALESTORE = nullptr;

void DateTimeFormatterBuilder$DayPeriodPrinterParser::init$($TextStyle* textStyle) {
	$set(this, textStyle, textStyle);
}

bool DateTimeFormatterBuilder$DayPeriodPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalObjectStack();
	$init($ChronoField);
	$var($Long, hod, $nc(context)->getValue($ChronoField::HOUR_OF_DAY));
	if (hod == nullptr) {
		return false;
	}
	$var($Long, moh, context->getValue($ChronoField::MINUTE_OF_HOUR));
	int32_t var$0 = $Math::floorMod($nc(hod)->longValue(), 24) * 60;
	int64_t value = var$0 + (moh != nullptr ? $Math::floorMod(moh->longValue(), 60) : 0);
	$var($Locale, locale, context->getLocale());
	$var($DateTimeTextProvider$LocaleStore, store, findDayPeriodStore(locale));
	int64_t val = value;
	$var($Map, map, $DateTimeFormatterBuilder$DayPeriod::getDayPeriodMap(locale));
	value = $$sure($Long, $$nc($$nc($$nc($$nc($$nc($nc(map)->keySet())->stream())->filter($$new(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0, val)))->min($DateTimeFormatterBuilder$DayPeriod::DPCOMPARATOR))->map($$new(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1, $nc(map))))->orElse($($Long::valueOf(val / 720))))->longValue();
	$var($String, text, $nc(store)->getText(value, this->textStyle));
	$nc(buf)->append(text);
	return true;
}

int32_t DateTimeFormatterBuilder$DayPeriodPrinterParser::parse($DateTimeParseContext* context, $CharSequence* parseText, int32_t position) {
	$useLocalObjectStack();
	int32_t length = $nc(parseText)->length();
	if (position < 0 || position > length) {
		$throwNew($IndexOutOfBoundsException);
	}
	$TextStyle* style = ($nc(context)->isStrict() ? this->textStyle : ($TextStyle*)nullptr);
	$var($Iterator, it, nullptr);
	$var($DateTimeTextProvider$LocaleStore, store, findDayPeriodStore($(context->getLocale())));
	$assign(it, $nc(store)->getTextIterator(style));
	if (it != nullptr) {
		while (it->hasNext()) {
			$var($Map$Entry, entry, $cast($Map$Entry, it->next()));
			$var($String, itText, $cast($String, $nc(entry)->getKey()));
			if (context->subSequenceEquals(itText, 0, parseText, position, $nc(itText)->length())) {
				$var($Locale, var$0, context->getLocale());
				context->setParsedDayPeriod($($DateTimeFormatterBuilder$DayPeriod::ofLocale(var$0, $$sure($Long, entry->getValue())->longValue())));
				return position + itText->length();
			}
		}
	}
	return ~position;
}

$String* DateTimeFormatterBuilder$DayPeriodPrinterParser::toString() {
	return $str({"DayPeriod("_s, this->textStyle, ")"_s});
}

$DateTimeTextProvider$LocaleStore* DateTimeFormatterBuilder$DayPeriodPrinterParser::findDayPeriodStore($Locale* locale) {
	$init(DateTimeFormatterBuilder$DayPeriodPrinterParser);
	return $cast($DateTimeTextProvider$LocaleStore, DateTimeFormatterBuilder$DayPeriodPrinterParser::DAYPERIOD_LOCALESTORE->computeIfAbsent(locale, $$new(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2)));
}

$DateTimeTextProvider$LocaleStore* DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$findDayPeriodStore$2($Locale* loc) {
	$init(DateTimeFormatterBuilder$DayPeriodPrinterParser);
	$useLocalObjectStack();
	$var($Map, styleMap, $new($HashMap));
	{
		$var($TextStyleArray, arr$, $TextStyle::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$TextStyle* textStyle = arr$->get(i$);
			{
				if ($nc(textStyle)->isStandalone()) {
					continue;
				}
				$var($Map, map, $new($HashMap));
				int32_t calStyle = textStyle->toCalendarStyle();
				$var($Map, periodMap, $DateTimeFormatterBuilder$DayPeriod::getDayPeriodMap(loc));
				$nc(periodMap)->forEach($$new(DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3, calStyle, loc, map, periodMap));
				if (!map->isEmpty()) {
					styleMap->put(textStyle, map);
				}
			}
		}
	}
	return $new($DateTimeTextProvider$LocaleStore, styleMap);
}

void DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$findDayPeriodStore$1(int32_t calStyle, $Locale* loc, $Map* map, $Map* periodMap, $DateTimeFormatterBuilder$DayPeriod* key, $Long* value) {
	$init(DateTimeFormatterBuilder$DayPeriodPrinterParser);
	$var($String, displayName, $CalendarDataUtility::retrieveJavaTimeFieldValueName("gregory"_s, $Calendar::AM_PM, $nc(value)->intValue(), calStyle, loc));
	if (displayName != nullptr) {
		$nc(map)->put(value, displayName);
	} else {
		$nc(periodMap)->remove(key);
	}
}

bool DateTimeFormatterBuilder$DayPeriodPrinterParser::lambda$format$0(int64_t val, $DateTimeFormatterBuilder$DayPeriod* k) {
	$init(DateTimeFormatterBuilder$DayPeriodPrinterParser);
	return $nc(k)->includes(val);
}

void DateTimeFormatterBuilder$DayPeriodPrinterParser::clinit$($Class* clazz) {
	$assignStatic(DateTimeFormatterBuilder$DayPeriodPrinterParser::DAYPERIOD_LOCALESTORE, $new($ConcurrentHashMap));
}

DateTimeFormatterBuilder$DayPeriodPrinterParser::DateTimeFormatterBuilder$DayPeriodPrinterParser() {
}

$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0")) {
			return DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$format$0::load$(name, initialize);
		}
		if (name->equals("java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1")) {
			return DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$get$1::load$(name, initialize);
		}
		if (name->equals("java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2")) {
			return DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$2$2::load$(name, initialize);
		}
		if (name->equals("java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3")) {
			return DateTimeFormatterBuilder$DayPeriodPrinterParser$$Lambda$lambda$findDayPeriodStore$1$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"textStyle", "Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DayPeriodPrinterParser, textStyle)},
		{"DAYPERIOD_LOCALESTORE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/time/format/DateTimeTextProvider$LocaleStore;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$DayPeriodPrinterParser, DAYPERIOD_LOCALESTORE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/format/TextStyle;)V", nullptr, 0, $method(DateTimeFormatterBuilder$DayPeriodPrinterParser, init$, void, $TextStyle*)},
		{"findDayPeriodStore", "(Ljava/util/Locale;)Ljava/time/format/DateTimeTextProvider$LocaleStore;", nullptr, $PRIVATE | $STATIC, $staticMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, findDayPeriodStore, $DateTimeTextProvider$LocaleStore*, $Locale*)},
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"lambda$findDayPeriodStore$1", "(ILjava/util/Locale;Ljava/util/Map;Ljava/util/Map;Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;Ljava/lang/Long;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, lambda$findDayPeriodStore$1, void, int32_t, $Locale*, $Map*, $Map*, $DateTimeFormatterBuilder$DayPeriod*, $Long*)},
		{"lambda$findDayPeriodStore$2", "(Ljava/util/Locale;)Ljava/time/format/DateTimeTextProvider$LocaleStore;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, lambda$findDayPeriodStore$2, $DateTimeTextProvider$LocaleStore*, $Locale*)},
		{"lambda$format$0", "(JLjava/time/format/DateTimeFormatterBuilder$DayPeriod;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, lambda$format$0, bool, int64_t, $DateTimeFormatterBuilder$DayPeriod*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DayPeriodPrinterParser, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser", "java.time.format.DateTimeFormatterBuilder", "DayPeriodPrinterParser", $STATIC | $FINAL},
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser",
		"java.lang.Object",
		"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$DayPeriodPrinterParser, name, initialize, &classInfo$$, DateTimeFormatterBuilder$DayPeriodPrinterParser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DayPeriodPrinterParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$DayPeriodPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java