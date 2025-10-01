#ifndef _java_util_Formatter$FormatSpecifier_h_
#define _java_util_Formatter$FormatSpecifier_h_
//$ class java.util.Formatter$FormatSpecifier
//$ extends java.util.Formatter$FormatString

#include <java/lang/Array.h>
#include <java/util/Formatter$FormatString.h>

namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
		}
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Formatter;
		class Formatter$Flags;
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
		}
	}
}

namespace java {
	namespace util {

class Formatter$FormatSpecifier : public ::java::util::Formatter$FormatString {
	$class(Formatter$FormatSpecifier, 0, ::java::util::Formatter$FormatString)
public:
	Formatter$FormatSpecifier();
	void init$(::java::util::Formatter* this$0, char16_t conv);
	void init$(::java::util::Formatter* this$0, $String* s, ::java::util::regex::Matcher* m);
	void addZeros(::java::lang::StringBuilder* sb, int32_t prec);
	int32_t adjustWidth(int32_t width, ::java::util::Formatter$Flags* f, bool neg);
	void appendJustified(::java::lang::Appendable* a, ::java::lang::CharSequence* cs);
	void checkBadFlags($Array<::java::util::Formatter$Flags>* badFlags);
	void checkCharacter();
	void checkDateTime();
	void checkFloat();
	void checkGeneral();
	void checkInteger();
	void checkNumeric();
	void checkText();
	void conversion(char16_t conv);
	void failConversion(char16_t c, Object$* arg);
	void failMismatch(::java::util::Formatter$Flags* f, char16_t c);
	void flags($String* s, int32_t start, int32_t end);
	char16_t getZero(::java::util::Locale* l);
	$String* hexDouble(double d, int32_t prec);
	void index($String* s, int32_t start, int32_t end);
	virtual int32_t index() override;
	::java::lang::StringBuilder* leadingSign(::java::lang::StringBuilder* sb, bool neg);
	::java::lang::StringBuilder* localizedMagnitude(::java::lang::StringBuilder* sb, int64_t value, ::java::util::Formatter$Flags* f, int32_t width, ::java::util::Locale* l);
	::java::lang::StringBuilder* localizedMagnitude(::java::lang::StringBuilder* sb, ::java::lang::CharSequence* value, int32_t offset, ::java::util::Formatter$Flags* f, int32_t width, ::java::util::Locale* l);
	void localizedMagnitudeExp(::java::lang::StringBuilder* sb, $chars* value, int32_t offset, ::java::util::Locale* l);
	void precision($String* s, int32_t start, int32_t end);
	virtual void print(Object$* arg, ::java::util::Locale* l) override;
	void print($String* s, ::java::util::Locale* l);
	void print(int8_t value, ::java::util::Locale* l);
	void print(int16_t value, ::java::util::Locale* l);
	void print(int32_t value, ::java::util::Locale* l);
	void print(int64_t value, ::java::util::Locale* l);
	void print(::java::math::BigInteger* value, ::java::util::Locale* l);
	void print(float value, ::java::util::Locale* l);
	void print(double value, ::java::util::Locale* l);
	void print(::java::lang::StringBuilder* sb, double value, ::java::util::Locale* l, ::java::util::Formatter$Flags* f, char16_t c, int32_t precision, bool neg);
	void print(::java::math::BigDecimal* value, ::java::util::Locale* l);
	void print(::java::lang::StringBuilder* sb, ::java::math::BigDecimal* value, ::java::util::Locale* l, ::java::util::Formatter$Flags* f, char16_t c, int32_t precision, bool neg);
	void print(::java::util::Calendar* t, char16_t c, ::java::util::Locale* l);
	::java::lang::Appendable* print(::java::lang::StringBuilder* sb, ::java::util::Calendar* t, char16_t c, ::java::util::Locale* l);
	void print(::java::time::temporal::TemporalAccessor* t, char16_t c, ::java::util::Locale* l);
	::java::lang::Appendable* print(::java::lang::StringBuilder* sb, ::java::time::temporal::TemporalAccessor* t, char16_t c, ::java::util::Locale* l);
	void printBoolean(Object$* arg, ::java::util::Locale* l);
	void printCharacter(Object$* arg, ::java::util::Locale* l);
	void printDateTime(Object$* arg, ::java::util::Locale* l);
	void printFloat(Object$* arg, ::java::util::Locale* l);
	void printHashCode(Object$* arg, ::java::util::Locale* l);
	void printInteger(Object$* arg, ::java::util::Locale* l);
	void printString(Object$* arg, ::java::util::Locale* l);
	virtual $String* toString() override;
	$String* toUpperCaseWithLocale($String* s, ::java::util::Locale* l);
	::java::lang::StringBuilder* trailingSign(::java::lang::StringBuilder* sb, bool neg);
	void trailingZeros(::java::lang::StringBuilder* sb, int32_t nzeros);
	void width($String* s, int32_t start, int32_t end);
	::java::util::Formatter* this$0 = nullptr;
	static bool $assertionsDisabled;
	int32_t index$ = 0;
	::java::util::Formatter$Flags* f = nullptr;
	int32_t width$ = 0;
	int32_t precision$ = 0;
	bool dt = false;
	char16_t c = 0;
};

	} // util
} // java

#endif // _java_util_Formatter$FormatSpecifier_h_