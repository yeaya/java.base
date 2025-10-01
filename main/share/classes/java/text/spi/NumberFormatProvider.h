#ifndef _java_text_spi_NumberFormatProvider_h_
#define _java_text_spi_NumberFormatProvider_h_
//$ class java.text.spi.NumberFormatProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

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

namespace java {
	namespace text {
		namespace spi {

class $export NumberFormatProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(NumberFormatProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	NumberFormatProvider();
	void init$();
	virtual ::java::text::NumberFormat* getCompactNumberInstance(::java::util::Locale* locale, ::java::text::NumberFormat$Style* formatStyle);
	virtual ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_NumberFormatProvider_h_