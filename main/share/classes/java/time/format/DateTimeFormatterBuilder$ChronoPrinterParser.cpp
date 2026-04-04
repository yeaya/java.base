#include <java/time/format/DateTimeFormatterBuilder$ChronoPrinterParser.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Chronology = ::java::time::chrono::Chronology;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DateTimeTextProvider = ::java::time::format::DateTimeTextProvider;
using $TextStyle = ::java::time::format::TextStyle;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0 : public $Supplier {
	$class(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Chronology* chrono) {
		$set(this, chrono, chrono);
	}
	virtual $Object* get() override {
		 return $of(DateTimeFormatterBuilder$ChronoPrinterParser::lambda$getChronologyName$0(chrono));
	}
	$Chronology* chrono = nullptr;
};
$Class* DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chrono", "Ljava/time/chrono/Chronology;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, chrono)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/chrono/Chronology;)V", nullptr, $PUBLIC, $method(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, init$, void, $Chronology*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.format.DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0);
	});
	return class$;
}
$Class* DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0::class$ = nullptr;

void DateTimeFormatterBuilder$ChronoPrinterParser::init$($TextStyle* textStyle) {
	$set(this, textStyle, textStyle);
}

bool DateTimeFormatterBuilder$ChronoPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalObjectStack();
	$var($Chronology, chrono, $cast($Chronology, $nc(context)->getValue($($TemporalQueries::chronology()))));
	if (chrono == nullptr) {
		return false;
	}
	if (this->textStyle == nullptr) {
		$nc(buf)->append($($nc(chrono)->getId()));
	} else {
		$nc(buf)->append($(getChronologyName(chrono, $(context->getLocale()))));
	}
	return true;
}

int32_t DateTimeFormatterBuilder$ChronoPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalObjectStack();
	if (position < 0 || position > $nc(text)->length()) {
		$throwNew($IndexOutOfBoundsException);
	}
	$var($Set, chronos, $Chronology::getAvailableChronologies());
	$var($Chronology, bestMatch, nullptr);
	int32_t matchLen = -1;
	{
		$var($Iterator, i$, $nc(chronos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Chronology, chrono, $cast($Chronology, i$->next()));
			{
				$var($String, name, nullptr);
				if (this->textStyle == nullptr) {
					$assign(name, $nc(chrono)->getId());
				} else {
					$assign(name, getChronologyName(chrono, $($nc(context)->getLocale())));
				}
				int32_t nameLen = $nc(name)->length();
				if (nameLen > matchLen && $nc(context)->subSequenceEquals(text, position, name, 0, nameLen)) {
					$assign(bestMatch, chrono);
					matchLen = nameLen;
				}
			}
		}
	}
	if (bestMatch == nullptr) {
		return ~position;
	}
	$nc(context)->setParsed(bestMatch);
	return position + matchLen;
}

$String* DateTimeFormatterBuilder$ChronoPrinterParser::getChronologyName($Chronology* chrono, $Locale* locale) {
	$useLocalObjectStack();
	$var($String, key, $str({"calendarname."_s, $($nc(chrono)->getCalendarType())}));
	$var($String, name, $cast($String, $DateTimeTextProvider::getLocalizedResource(key, locale)));
	return $cast($String, $Objects::requireNonNullElseGet(name, $$new(DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0, chrono)));
}

$String* DateTimeFormatterBuilder$ChronoPrinterParser::lambda$getChronologyName$0($Chronology* chrono) {
	$init(DateTimeFormatterBuilder$ChronoPrinterParser);
	return $nc(chrono)->getId();
}

DateTimeFormatterBuilder$ChronoPrinterParser::DateTimeFormatterBuilder$ChronoPrinterParser() {
}

$Class* DateTimeFormatterBuilder$ChronoPrinterParser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.time.format.DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0")) {
			return DateTimeFormatterBuilder$ChronoPrinterParser$$Lambda$lambda$getChronologyName$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"textStyle", "Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$ChronoPrinterParser, textStyle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/format/TextStyle;)V", nullptr, 0, $method(DateTimeFormatterBuilder$ChronoPrinterParser, init$, void, $TextStyle*)},
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$ChronoPrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"getChronologyName", "(Ljava/time/chrono/Chronology;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DateTimeFormatterBuilder$ChronoPrinterParser, getChronologyName, $String*, $Chronology*, $Locale*)},
		{"lambda$getChronologyName$0", "(Ljava/time/chrono/Chronology;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DateTimeFormatterBuilder$ChronoPrinterParser, lambda$getChronologyName$0, $String*, $Chronology*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$ChronoPrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$ChronoPrinterParser", "java.time.format.DateTimeFormatterBuilder", "ChronoPrinterParser", $STATIC | $FINAL},
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$ChronoPrinterParser",
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
	$loadClass(DateTimeFormatterBuilder$ChronoPrinterParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$ChronoPrinterParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$ChronoPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java