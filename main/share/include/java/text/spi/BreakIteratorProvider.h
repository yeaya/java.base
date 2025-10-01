#ifndef _java_text_spi_BreakIteratorProvider_h_
#define _java_text_spi_BreakIteratorProvider_h_
//$ class java.text.spi.BreakIteratorProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace text {
		class BreakIterator;
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

class $import BreakIteratorProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(BreakIteratorProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	BreakIteratorProvider();
	void init$();
	virtual ::java::text::BreakIterator* getCharacterInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::BreakIterator* getLineInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::BreakIterator* getSentenceInstance(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::text::BreakIterator* getWordInstance(::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // text
} // java

#endif // _java_text_spi_BreakIteratorProvider_h_