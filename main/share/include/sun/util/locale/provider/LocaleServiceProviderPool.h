#ifndef _sun_util_locale_provider_LocaleServiceProviderPool_h_
#define _sun_util_locale_provider_LocaleServiceProviderPool_h_
//$ class sun.util.locale.provider.LocaleServiceProviderPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NULL_LIST")
#undef NULL_LIST

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
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
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleServiceProviderPool$LocalizedObjectGetter;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import LocaleServiceProviderPool : public ::java::lang::Object {
	$class(LocaleServiceProviderPool, 0, ::java::lang::Object)
public:
	LocaleServiceProviderPool();
	void init$($Class* c);
	::java::util::List* findProviders(::java::util::Locale* locale, bool isObjectProvider);
	static $Array<::java::util::Locale>* getAllAvailableLocales();
	::java::util::Set* getAvailableLocaleSet();
	$Array<::java::util::Locale>* getAvailableLocales();
	$Object* getLocalizedObject(::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter* getter, ::java::util::Locale* locale, $ObjectArray* params);
	$Object* getLocalizedObject(::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter* getter, ::java::util::Locale* locale, $String* key, $ObjectArray* params);
	$Object* getLocalizedObject(::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter* getter, ::java::util::Locale* locale, ::java::lang::Boolean* isObjectProvider, $String* key, $ObjectArray* params);
	$Object* getLocalizedObjectImpl(::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter* getter, ::java::util::Locale* locale, bool isObjectProvider, $String* key, $ObjectArray* params);
	static ::java::util::Locale* getLookupLocale(::java::util::Locale* locale);
	static ::java::util::List* getLookupLocales(::java::util::Locale* locale);
	static ::sun::util::locale::provider::LocaleServiceProviderPool* getPool($Class* providerClass);
	static ::java::util::concurrent::ConcurrentMap* poolOfPools;
	::java::util::concurrent::ConcurrentMap* providersCache = nullptr;
	::java::util::Set* availableLocales = nullptr;
	$Class* providerClass = nullptr;
	static $ClassArray* spiClasses;
	static ::java::util::List* NULL_LIST;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("NULL_LIST")

#endif // _sun_util_locale_provider_LocaleServiceProviderPool_h_