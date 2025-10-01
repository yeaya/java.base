#ifndef _java_util_spi_LocaleServiceProvider_h_
#define _java_util_spi_LocaleServiceProvider_h_
//$ class java.util.spi.LocaleServiceProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $export LocaleServiceProvider : public ::java::lang::Object {
	$class(LocaleServiceProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocaleServiceProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	static ::java::lang::Void* checkPermission();
	virtual $Array<::java::util::Locale>* getAvailableLocales() {return nullptr;}
	virtual bool isSupportedLocale(::java::util::Locale* locale);
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_LocaleServiceProvider_h_