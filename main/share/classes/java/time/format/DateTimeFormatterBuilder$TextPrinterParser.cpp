#include <java/time/format/DateTimeFormatterBuilder$TextPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Era.h>
#include <java/time/chrono/IsoChronology.h>
#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/format/SignStyle.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

#undef ERA
#undef FULL
#undef INSTANCE
#undef NORMAL

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Chronology = ::java::time::chrono::Chronology;
using $Era = ::java::time::chrono::Era;
using $IsoChronology = ::java::time::chrono::IsoChronology;
using $DateTimeFormatterBuilder$NumberPrinterParser = ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DateTimeTextProvider = ::java::time::format::DateTimeTextProvider;
using $SignStyle = ::java::time::format::SignStyle;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$TextPrinterParser_FieldInfo_[] = {
	{"field", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$TextPrinterParser, field)},
	{"textStyle", "Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$TextPrinterParser, textStyle)},
	{"provider", "Ljava/time/format/DateTimeTextProvider;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$TextPrinterParser, provider)},
	{"numberPrinterParser", "Ljava/time/format/DateTimeFormatterBuilder$NumberPrinterParser;", nullptr, $PRIVATE | $VOLATILE, $field(DateTimeFormatterBuilder$TextPrinterParser, numberPrinterParser$)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$TextPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;Ljava/time/format/DateTimeTextProvider;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$TextPrinterParser::*)($TemporalField*,$TextStyle*,$DateTimeTextProvider*)>(&DateTimeFormatterBuilder$TextPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"numberPrinterParser", "()Ljava/time/format/DateTimeFormatterBuilder$NumberPrinterParser;", nullptr, $PRIVATE, $method(static_cast<$DateTimeFormatterBuilder$NumberPrinterParser*(DateTimeFormatterBuilder$TextPrinterParser::*)()>(&DateTimeFormatterBuilder$TextPrinterParser::numberPrinterParser))},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$TextPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$TextPrinterParser", "java.time.format.DateTimeFormatterBuilder", "TextPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$TextPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$TextPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$TextPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$TextPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$TextPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$TextPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$TextPrinterParser));
}

void DateTimeFormatterBuilder$TextPrinterParser::init$($TemporalField* field, $TextStyle* textStyle, $DateTimeTextProvider* provider) {
	$set(this, field, field);
	$set(this, textStyle, textStyle);
	$set(this, provider, provider);
}

bool DateTimeFormatterBuilder$TextPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$var($Long, value, $nc(context)->getValue(this->field));
	if (value == nullptr) {
		return false;
	}
	$var($String, text, nullptr);
	$var($Chronology, chrono, $cast($Chronology, $nc($(context->getTemporal()))->query($($TemporalQueries::chronology()))));
	$init($IsoChronology);
	if (chrono == nullptr || $equals(chrono, $IsoChronology::INSTANCE)) {
		$var($TemporalField, var$0, this->field);
		int64_t var$1 = $nc(value)->longValue();
		$var($TextStyle, var$2, this->textStyle);
		$assign(text, $nc(this->provider)->getText(var$0, var$1, var$2, $(context->getLocale())));
	} else {
		$var($Chronology, var$3, chrono);
		$var($TemporalField, var$4, this->field);
		int64_t var$5 = $nc(value)->longValue();
		$var($TextStyle, var$6, this->textStyle);
		$assign(text, $nc(this->provider)->getText(var$3, var$4, var$5, var$6, $(context->getLocale())));
	}
	if (text == nullptr) {
		return $nc($(numberPrinterParser()))->format(context, buf);
	}
	$nc(buf)->append(text);
	return true;
}

int32_t DateTimeFormatterBuilder$TextPrinterParser::parse($DateTimeParseContext* context, $CharSequence* parseText, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(parseText)->length();
	if (position < 0 || position > length) {
		$throwNew($IndexOutOfBoundsException);
	}
	$TextStyle* style = ($nc(context)->isStrict() ? this->textStyle : ($TextStyle*)nullptr);
	$var($Chronology, chrono, $nc(context)->getEffectiveChronology());
	$var($Iterator, it, nullptr);
	$init($IsoChronology);
	if (chrono == nullptr || $equals(chrono, $IsoChronology::INSTANCE)) {
		$assign(it, $nc(this->provider)->getTextIterator(this->field, style, $(context->getLocale())));
	} else {
		$assign(it, $nc(this->provider)->getTextIterator(chrono, this->field, style, $(context->getLocale())));
	}
	if (it != nullptr) {
		while (it->hasNext()) {
			$var($Map$Entry, entry, $cast($Map$Entry, it->next()));
			$var($String, itText, $cast($String, $nc(entry)->getKey()));
			if (context->subSequenceEquals(itText, 0, parseText, position, $nc(itText)->length())) {
				$var($TemporalField, var$0, this->field);
				int64_t var$1 = $nc(($cast($Long, $(entry->getValue()))))->longValue();
				int32_t var$2 = position;
				return context->setParsedField(var$0, var$1, var$2, position + $nc(itText)->length());
			}
		}
		$init($ChronoField);
		if ($equals(this->field, $ChronoField::ERA) && !context->isStrict()) {
			$var($List, eras, $nc(chrono)->eras());
			{
				$var($Iterator, i$, $nc(eras)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Era, era, $cast($Era, i$->next()));
					{
						$var($String, name, $nc($of(era))->toString());
						if (context->subSequenceEquals(name, 0, parseText, position, $nc(name)->length())) {
							$var($TemporalField, var$3, this->field);
							int64_t var$4 = (int64_t)era->getValue();
							int32_t var$5 = position;
							return context->setParsedField(var$3, var$4, var$5, position + $nc(name)->length());
						}
					}
				}
			}
		}
		if (context->isStrict()) {
			return ~position;
		}
	}
	return $nc($(numberPrinterParser()))->parse(context, parseText, position);
}

$DateTimeFormatterBuilder$NumberPrinterParser* DateTimeFormatterBuilder$TextPrinterParser::numberPrinterParser() {
	if (this->numberPrinterParser$ == nullptr) {
		$init($SignStyle);
		$set(this, numberPrinterParser$, $new($DateTimeFormatterBuilder$NumberPrinterParser, this->field, 1, 19, $SignStyle::NORMAL));
	}
	return this->numberPrinterParser$;
}

$String* DateTimeFormatterBuilder$TextPrinterParser::toString() {
	$init($TextStyle);
	if (this->textStyle == $TextStyle::FULL) {
		return $str({"Text("_s, this->field, ")"_s});
	}
	return $str({"Text("_s, this->field, ","_s, this->textStyle, ")"_s});
}

DateTimeFormatterBuilder$TextPrinterParser::DateTimeFormatterBuilder$TextPrinterParser() {
}

$Class* DateTimeFormatterBuilder$TextPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$TextPrinterParser, name, initialize, &_DateTimeFormatterBuilder$TextPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$TextPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$TextPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java