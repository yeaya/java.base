#ifndef _sun_util_resources_LocaleData$LocaleDataStrategy_h_
#define _sun_util_resources_LocaleData$LocaleDataStrategy_h_
//$ class sun.util.resources.LocaleData$LocaleDataStrategy
//$ extends sun.util.resources.Bundles$Strategy

#include <sun/util/resources/Bundles$Strategy.h>

#pragma push_macro("JAVA_BASE_LOCALES")
#undef JAVA_BASE_LOCALES
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class List;
		class Locale;
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class LocaleData$LocaleDataStrategy : public ::sun::util::resources::Bundles$Strategy {
	$class(LocaleData$LocaleDataStrategy, 0, ::sun::util::resources::Bundles$Strategy)
public:
	LocaleData$LocaleDataStrategy();
	void init$();
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) override;
	virtual $Class* getResourceBundleProviderType($String* baseName, ::java::util::Locale* locale) override;
	virtual bool inJavaBaseModule($String* baseName, ::java::util::Locale* locale);
	virtual $String* toBundleName($String* baseName, ::java::util::Locale* locale) override;
	static bool $assertionsDisabled;
	static ::sun::util::resources::LocaleData$LocaleDataStrategy* INSTANCE;
	static ::java::util::Set* JAVA_BASE_LOCALES;
};

		} // resources
	} // util
} // sun

#pragma pop_macro("JAVA_BASE_LOCALES")
#pragma pop_macro("INSTANCE")

#endif // _sun_util_resources_LocaleData$LocaleDataStrategy_h_