#ifndef _test_NumberFormatProviderImpl_h_
#define _test_NumberFormatProviderImpl_h_
//$ class test.NumberFormatProviderImpl
//$ extends java.text.spi.NumberFormatProvider

#include <java/lang/Array.h>
#include <java/text/spi/NumberFormatProvider.h>

#pragma push_macro("QAA")
#undef QAA
#pragma push_macro("QAB")
#undef QAB

namespace java {
	namespace text {
		class NumberFormat;
		class NumberFormat$Style;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace test {

class $export NumberFormatProviderImpl : public ::java::text::spi::NumberFormatProvider {
	$class(NumberFormatProviderImpl, 0, ::java::text::spi::NumberFormatProvider)
public:
	NumberFormatProviderImpl();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::NumberFormat* getCompactNumberInstance(::java::util::Locale* locale, ::java::text::NumberFormat$Style* style) override;
	virtual ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* locale) override;
	static ::java::util::Locale* QAA;
	static ::java::util::Locale* QAB;
	static $Array<::java::util::Locale>* locales;
	static $StringArray* oldPattern;
	static $StringArray* newPattern;
};

} // test

#pragma pop_macro("QAA")
#pragma pop_macro("QAB")

#endif // _test_NumberFormatProviderImpl_h_