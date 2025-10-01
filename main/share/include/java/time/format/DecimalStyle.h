#ifndef _java_time_format_DecimalStyle_h_
#define _java_time_format_DecimalStyle_h_
//$ class java.time.format.DecimalStyle
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CACHE")
#undef CACHE
#pragma push_macro("STANDARD")
#undef STANDARD

namespace java {
	namespace util {
		class Locale;
		class Set;
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
	namespace time {
		namespace format {

class $import DecimalStyle : public ::java::lang::Object {
	$class(DecimalStyle, 0, ::java::lang::Object)
public:
	DecimalStyle();
	void init$(char16_t zeroChar, char16_t positiveSignChar, char16_t negativeSignChar, char16_t decimalPointChar);
	$String* convertNumberToI18N($String* numericText);
	int32_t convertToDigit(char16_t ch);
	static ::java::time::format::DecimalStyle* create(::java::util::Locale* locale);
	virtual bool equals(Object$* obj) override;
	static ::java::util::Set* getAvailableLocales();
	char16_t getDecimalSeparator();
	char16_t getNegativeSign();
	char16_t getPositiveSign();
	char16_t getZeroDigit();
	virtual int32_t hashCode() override;
	static ::java::time::format::DecimalStyle* of(::java::util::Locale* locale);
	static ::java::time::format::DecimalStyle* ofDefaultLocale();
	virtual $String* toString() override;
	::java::time::format::DecimalStyle* withDecimalSeparator(char16_t decimalSeparator);
	::java::time::format::DecimalStyle* withNegativeSign(char16_t negativeSign);
	::java::time::format::DecimalStyle* withPositiveSign(char16_t positiveSign);
	::java::time::format::DecimalStyle* withZeroDigit(char16_t zeroDigit);
	static ::java::time::format::DecimalStyle* STANDARD;
	static ::java::util::concurrent::ConcurrentMap* CACHE;
	char16_t zeroDigit = 0;
	char16_t positiveSign = 0;
	char16_t negativeSign = 0;
	char16_t decimalSeparator = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("CACHE")
#pragma pop_macro("STANDARD")

#endif // _java_time_format_DecimalStyle_h_