#ifndef _java_text_NumberFormat_h_
#define _java_text_NumberFormat_h_
//$ class java.text.NumberFormat
//$ extends java.text.Format

#include <java/lang/Array.h>
#include <java/text/Format.h>

#pragma push_macro("COMPACTSTYLE")
#undef COMPACTSTYLE
#pragma push_macro("CURRENCYSTYLE")
#undef CURRENCYSTYLE
#pragma push_macro("FRACTION_FIELD")
#undef FRACTION_FIELD
#pragma push_macro("INTEGERSTYLE")
#undef INTEGERSTYLE
#pragma push_macro("INTEGER_FIELD")
#undef INTEGER_FIELD
#pragma push_macro("NUMBERSTYLE")
#undef NUMBERSTYLE
#pragma push_macro("PERCENTSTYLE")
#undef PERCENTSTYLE
#pragma push_macro("SCIENTIFICSTYLE")
#undef SCIENTIFICSTYLE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Number;
		class StringBuffer;
	}
}
namespace java {
	namespace math {
		class RoundingMode;
	}
}
namespace java {
	namespace text {
		class FieldPosition;
		class NumberFormat$Style;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class Currency;
		class Locale;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter;
			}
		}
	}
}

namespace java {
	namespace text {

class $import NumberFormat : public ::java::text::Format {
	$class(NumberFormat, $NO_CLASS_INIT, ::java::text::Format)
public:
	NumberFormat();
	using ::java::text::Format::format;
	void init$();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual $String* fastFormat(double number);
	virtual ::java::lang::StringBuffer* format(Object$* number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
	$String* format(double number);
	$String* format(int64_t number);
	virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) {return nullptr;}
	virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) {return nullptr;}
	static $Array<::java::util::Locale>* getAvailableLocales();
	static ::java::text::NumberFormat* getCompactNumberInstance();
	static ::java::text::NumberFormat* getCompactNumberInstance(::java::util::Locale* locale, ::java::text::NumberFormat$Style* formatStyle);
	virtual ::java::util::Currency* getCurrency();
	static ::java::text::NumberFormat* getCurrencyInstance();
	static ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* inLocale);
	static ::java::text::NumberFormat* getInstance();
	static ::java::text::NumberFormat* getInstance(::java::util::Locale* inLocale);
	static ::java::text::NumberFormat* getInstance(::java::util::Locale* desiredLocale, ::java::text::NumberFormat$Style* formatStyle, int32_t choice);
	static ::java::text::NumberFormat* getInstance(::sun::util::locale::provider::LocaleProviderAdapter* adapter, ::java::util::Locale* locale, ::java::text::NumberFormat$Style* formatStyle, int32_t choice);
	static ::java::text::NumberFormat* getIntegerInstance();
	static ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* inLocale);
	virtual int32_t getMaximumFractionDigits();
	virtual int32_t getMaximumIntegerDigits();
	virtual int32_t getMinimumFractionDigits();
	virtual int32_t getMinimumIntegerDigits();
	static ::java::text::NumberFormat* getNumberInstance();
	static ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* inLocale);
	static ::java::text::NumberFormat* getPercentInstance();
	static ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* inLocale);
	virtual ::java::math::RoundingMode* getRoundingMode();
	static ::java::text::NumberFormat* getScientificInstance();
	static ::java::text::NumberFormat* getScientificInstance(::java::util::Locale* inLocale);
	virtual int32_t hashCode() override;
	virtual bool isGroupingUsed();
	virtual bool isParseIntegerOnly();
	virtual ::java::lang::Number* parse($String* source, ::java::text::ParsePosition* parsePosition) {return nullptr;}
	virtual ::java::lang::Number* parse($String* source);
	using ::java::text::Format::parseObject;
	virtual $Object* parseObject($String* source, ::java::text::ParsePosition* pos) override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setCurrency(::java::util::Currency* currency);
	virtual void setGroupingUsed(bool newValue);
	virtual void setMaximumFractionDigits(int32_t newValue);
	virtual void setMaximumIntegerDigits(int32_t newValue);
	virtual void setMinimumFractionDigits(int32_t newValue);
	virtual void setMinimumIntegerDigits(int32_t newValue);
	virtual void setParseIntegerOnly(bool value);
	virtual void setRoundingMode(::java::math::RoundingMode* roundingMode);
	void writeObject(::java::io::ObjectOutputStream* stream);
	static const int32_t INTEGER_FIELD = 0;
	static const int32_t FRACTION_FIELD = 1;
	static const int32_t NUMBERSTYLE = 0;
	static const int32_t CURRENCYSTYLE = 1;
	static const int32_t PERCENTSTYLE = 2;
	static const int32_t SCIENTIFICSTYLE = 3;
	static const int32_t INTEGERSTYLE = 4;
	static const int32_t COMPACTSTYLE = 5;
	bool groupingUsed = false;
	int8_t maxIntegerDigits = 0;
	int8_t minIntegerDigits = 0;
	int8_t maxFractionDigits = 0;
	int8_t minFractionDigits = 0;
	bool parseIntegerOnly = false;
	int32_t maximumIntegerDigits = 0;
	int32_t minimumIntegerDigits = 0;
	int32_t maximumFractionDigits = 0;
	int32_t minimumFractionDigits = 0;
	static const int32_t currentSerialVersion = 1;
	int32_t serialVersionOnStream = 0;
	static const int64_t serialVersionUID = (int64_t)0xDFF6B3BF137D07E8;
};

	} // text
} // java

#pragma pop_macro("COMPACTSTYLE")
#pragma pop_macro("CURRENCYSTYLE")
#pragma pop_macro("FRACTION_FIELD")
#pragma pop_macro("INTEGERSTYLE")
#pragma pop_macro("INTEGER_FIELD")
#pragma pop_macro("NUMBERSTYLE")
#pragma pop_macro("PERCENTSTYLE")
#pragma pop_macro("SCIENTIFICSTYLE")

#endif // _java_text_NumberFormat_h_