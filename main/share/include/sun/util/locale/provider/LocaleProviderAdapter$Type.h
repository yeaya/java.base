#ifndef _sun_util_locale_provider_LocaleProviderAdapter$Type_h_
#define _sun_util_locale_provider_LocaleProviderAdapter$Type_h_
//$ class sun.util.locale.provider.LocaleProviderAdapter$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FALLBACK")
#undef FALLBACK
#pragma push_macro("CLDR")
#undef CLDR
#pragma push_macro("HOST")
#undef HOST
#pragma push_macro("JRE")
#undef JRE
#pragma push_macro("CLASSNAME")
#undef CLASSNAME
#pragma push_macro("SPI")
#undef SPI
#pragma push_macro("UTIL_RESOURCES_PACKAGE")
#undef UTIL_RESOURCES_PACKAGE
#pragma push_macro("TEXT_RESOURCES_PACKAGE")
#undef TEXT_RESOURCES_PACKAGE

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import LocaleProviderAdapter$Type : public ::java::lang::Enum {
	$class(LocaleProviderAdapter$Type, 0, ::java::lang::Enum)
public:
	LocaleProviderAdapter$Type();
	static $Array<::sun::util::locale::provider::LocaleProviderAdapter$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* className);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* className, $String* util, $String* text);
	virtual $String* getAdapterClassName();
	virtual $String* getTextResourcesPackage();
	virtual $String* getUtilResourcesPackage();
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* valueOf($String* name);
	static $Array<::sun::util::locale::provider::LocaleProviderAdapter$Type>* values();
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* JRE;
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* CLDR;
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* SPI;
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* HOST;
	static ::sun::util::locale::provider::LocaleProviderAdapter$Type* FALLBACK;
	static $Array<::sun::util::locale::provider::LocaleProviderAdapter$Type>* $VALUES;
	$String* CLASSNAME = nullptr;
	$String* UTIL_RESOURCES_PACKAGE = nullptr;
	$String* TEXT_RESOURCES_PACKAGE = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("FALLBACK")
#pragma pop_macro("CLDR")
#pragma pop_macro("HOST")
#pragma pop_macro("JRE")
#pragma pop_macro("CLASSNAME")
#pragma pop_macro("SPI")
#pragma pop_macro("UTIL_RESOURCES_PACKAGE")
#pragma pop_macro("TEXT_RESOURCES_PACKAGE")

#endif // _sun_util_locale_provider_LocaleProviderAdapter$Type_h_