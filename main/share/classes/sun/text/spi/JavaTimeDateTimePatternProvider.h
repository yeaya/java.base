#ifndef _sun_text_spi_JavaTimeDateTimePatternProvider_h_
#define _sun_text_spi_JavaTimeDateTimePatternProvider_h_
//$ class sun.text.spi.JavaTimeDateTimePatternProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace text {
		namespace spi {

class $export JavaTimeDateTimePatternProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(JavaTimeDateTimePatternProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	JavaTimeDateTimePatternProvider();
	void init$();
	virtual $String* getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // sun

#endif // _sun_text_spi_JavaTimeDateTimePatternProvider_h_