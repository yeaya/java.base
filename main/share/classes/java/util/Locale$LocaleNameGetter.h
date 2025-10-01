#ifndef _java_util_Locale$LocaleNameGetter_h_
#define _java_util_Locale$LocaleNameGetter_h_
//$ class java.util.Locale$LocaleNameGetter
//$ extends sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class LocaleNameProvider;
			class LocaleServiceProvider;
		}
	}
}

namespace java {
	namespace util {

class Locale$LocaleNameGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(Locale$LocaleNameGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	Locale$LocaleNameGetter();
	void init$();
	virtual $String* getObject(::java::util::spi::LocaleNameProvider* localeNameProvider, ::java::util::Locale* locale, $String* key, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* localeNameProvider, ::java::util::Locale* locale, $String* key, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::java::util::Locale$LocaleNameGetter* INSTANCE;
};

	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_Locale$LocaleNameGetter_h_