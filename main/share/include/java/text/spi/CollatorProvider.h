#ifndef _java_text_spi_CollatorProvider_h_
#define _java_text_spi_CollatorProvider_h_
//$ class java.text.spi.CollatorProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace text {
		class Collator;
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

class $import CollatorProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(CollatorProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	CollatorProvider();
	void init$();
	virtual ::java::text::Collator* getInstance(::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_CollatorProvider_h_