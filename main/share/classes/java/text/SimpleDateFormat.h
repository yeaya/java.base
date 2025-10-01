#ifndef _java_text_SimpleDateFormat_h_
#define _java_text_SimpleDateFormat_h_
//$ class java.text.SimpleDateFormat
//$ extends java.text.DateFormat

#include <java/lang/Array.h>
#include <java/text/DateFormat.h>

#pragma push_macro("PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID")
#undef PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID
#pragma push_macro("REST_OF_STYLES")
#undef REST_OF_STYLES
#pragma push_macro("TAG_QUOTE_ASCII_CHAR")
#undef TAG_QUOTE_ASCII_CHAR
#pragma push_macro("TAG_QUOTE_CHARS")
#undef TAG_QUOTE_CHARS
#pragma push_macro("MILLIS_PER_MINUTE")
#undef MILLIS_PER_MINUTE
#pragma push_macro("PATTERN_INDEX_TO_DATE_FORMAT_FIELD")
#undef PATTERN_INDEX_TO_DATE_FORMAT_FIELD
#pragma push_macro("GMT")
#undef GMT
#pragma push_macro("PATTERN_INDEX_TO_CALENDAR_FIELD")
#undef PATTERN_INDEX_TO_CALENDAR_FIELD

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class CalendarBuilder;
		class DateFormat$Field;
		class DateFormatSymbols;
		class FieldPosition;
		class Format$FieldDelegate;
		class NumberFormat;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace text {

class $export SimpleDateFormat : public ::java::text::DateFormat {
	$class(SimpleDateFormat, 0, ::java::text::DateFormat)
public:
	SimpleDateFormat();
	using ::java::text::DateFormat::format;
	void init$();
	void init$($String* pattern);
	void init$($String* pattern, ::java::util::Locale* locale);
	void init$($String* pattern, ::java::text::DateFormatSymbols* formatSymbols);
	virtual void applyLocalizedPattern($String* pattern);
	virtual void applyPattern($String* pattern);
	void applyPatternImpl($String* pattern);
	void checkNegativeNumberExpression();
	virtual $Object* clone() override;
	$chars* compile($String* pattern);
	static void encode(int32_t tag, int32_t length, ::java::lang::StringBuilder* buffer);
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
	::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, ::java::text::Format$FieldDelegate* delegate);
	virtual ::java::text::AttributedCharacterIterator* formatToCharacterIterator(Object$* obj) override;
	virtual ::java::util::Date* get2DigitYearStart();
	virtual ::java::text::DateFormatSymbols* getDateFormatSymbols();
	::java::util::Map* getDisplayContextNamesMap(int32_t field, ::java::util::Locale* locale);
	::java::util::Map* getDisplayNamesMap(int32_t field, ::java::util::Locale* locale);
	virtual int32_t hashCode() override;
	void initialize(::java::util::Locale* loc);
	void initializeCalendar(::java::util::Locale* loc);
	void initializeDefaultCentury();
	bool isDigit(char16_t c);
	bool matchDSTString($String* text, int32_t start, int32_t zoneIndex, int32_t standardIndex, $Array<::java::lang::String, 2>* zoneStrings);
	int32_t matchString($String* text, int32_t start, int32_t field, $StringArray* data, ::java::text::CalendarBuilder* calb);
	int32_t matchString($String* text, int32_t start, int32_t field, ::java::util::Map* data, ::java::text::CalendarBuilder* calb);
	int32_t matchZoneString($String* text, int32_t start, $StringArray* zoneNames);
	using ::java::text::DateFormat::parse;
	virtual ::java::util::Date* parse($String* text, ::java::text::ParsePosition* pos) override;
	void parseAmbiguousDatesAsAfter(::java::util::Date* startDate);
	using ::java::text::DateFormat::parseObject;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void set2DigitYearStart(::java::util::Date* startDate);
	virtual void setDateFormatSymbols(::java::text::DateFormatSymbols* newFormatSymbols);
	bool shouldObeyCount(int32_t tag, int32_t count);
	void subFormat(int32_t patternCharIndex, int32_t count, ::java::text::Format$FieldDelegate* delegate, ::java::lang::StringBuffer* buffer, bool useDateFormatSymbols);
	int32_t subParse($String* text, int32_t start, int32_t patternCharIndex, int32_t count, bool obeyCount, $booleans* ambiguousYear, ::java::text::ParsePosition* origPos, bool useFollowingMinusSignAsDelimiter, ::java::text::CalendarBuilder* calb);
	int32_t subParseNumericZone($String* text, int32_t start, int32_t sign, int32_t count, bool colon, ::java::text::CalendarBuilder* calb);
	int32_t subParseZoneString($String* text, int32_t start, ::java::text::CalendarBuilder* calb);
	virtual $String* toLocalizedPattern();
	virtual $String* toPattern();
	$String* translatePattern($String* pattern, $String* from, $String* to);
	bool useDateFormatSymbols();
	void zeroPaddingNumber(int32_t value, int32_t minDigits, int32_t maxDigits, ::java::lang::StringBuffer* buffer);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x4243C9DA93943590;
	static const int32_t currentSerialVersion = 1;
	int32_t serialVersionOnStream = 0;
	$String* pattern = nullptr;
	::java::text::NumberFormat* originalNumberFormat = nullptr;
	$String* originalNumberPattern = nullptr;
	char16_t minusSign = 0;
	bool hasFollowingMinusSign = false;
	bool forceStandaloneForm = false;
	$chars* compiledPattern = nullptr;
	static const int32_t TAG_QUOTE_ASCII_CHAR = 100;
	static const int32_t TAG_QUOTE_CHARS = 101;
	char16_t zeroDigit = 0;
	::java::text::DateFormatSymbols* formatData = nullptr;
	::java::util::Date* defaultCenturyStart = nullptr;
	int32_t defaultCenturyStartYear = 0;
	static const int32_t MILLIS_PER_MINUTE = 60000; // 60 * 1000
	static $String* GMT;
	static ::java::util::concurrent::ConcurrentMap* cachedNumberFormatData;
	::java::util::Locale* locale = nullptr;
	bool useDateFormatSymbols$ = false;
	static $ints* PATTERN_INDEX_TO_CALENDAR_FIELD;
	static $ints* PATTERN_INDEX_TO_DATE_FORMAT_FIELD;
	static $Array<::java::text::DateFormat$Field>* PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID;
	static $ints* REST_OF_STYLES;
};

	} // text
} // java

#pragma pop_macro("PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID")
#pragma pop_macro("REST_OF_STYLES")
#pragma pop_macro("TAG_QUOTE_ASCII_CHAR")
#pragma pop_macro("TAG_QUOTE_CHARS")
#pragma pop_macro("MILLIS_PER_MINUTE")
#pragma pop_macro("PATTERN_INDEX_TO_DATE_FORMAT_FIELD")
#pragma pop_macro("GMT")
#pragma pop_macro("PATTERN_INDEX_TO_CALENDAR_FIELD")

#endif // _java_text_SimpleDateFormat_h_