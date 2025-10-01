#ifndef _java_util_Currency$CurrencyNameGetter_h_
#define _java_util_Currency$CurrencyNameGetter_h_
//$ class java.util.Currency$CurrencyNameGetter
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
			class CurrencyNameProvider;
			class LocaleServiceProvider;
		}
	}
}

namespace java {
	namespace util {

class Currency$CurrencyNameGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(Currency$CurrencyNameGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	Currency$CurrencyNameGetter();
	void init$();
	virtual $String* getObject(::java::util::spi::CurrencyNameProvider* currencyNameProvider, ::java::util::Locale* locale, $String* key, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* currencyNameProvider, ::java::util::Locale* locale, $String* key, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::java::util::Currency$CurrencyNameGetter* INSTANCE;
};

	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_Currency$CurrencyNameGetter_h_