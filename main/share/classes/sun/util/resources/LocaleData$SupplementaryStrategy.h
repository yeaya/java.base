#ifndef _sun_util_resources_LocaleData$SupplementaryStrategy_h_
#define _sun_util_resources_LocaleData$SupplementaryStrategy_h_
//$ class sun.util.resources.LocaleData$SupplementaryStrategy
//$ extends sun.util.resources.LocaleData$LocaleDataStrategy

#include <sun/util/resources/LocaleData$LocaleDataStrategy.h>

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

class LocaleData$SupplementaryStrategy : public ::sun::util::resources::LocaleData$LocaleDataStrategy {
	$class(LocaleData$SupplementaryStrategy, 0, ::sun::util::resources::LocaleData$LocaleDataStrategy)
public:
	LocaleData$SupplementaryStrategy();
	void init$();
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) override;
	virtual $Class* getResourceBundleProviderType($String* baseName, ::java::util::Locale* locale) override;
	virtual bool inJavaBaseModule($String* baseName, ::java::util::Locale* locale) override;
	static ::sun::util::resources::LocaleData$SupplementaryStrategy* INSTANCE;
	static ::java::util::Set* JAVA_BASE_LOCALES;
};

		} // resources
	} // util
} // sun

#pragma pop_macro("JAVA_BASE_LOCALES")
#pragma pop_macro("INSTANCE")

#endif // _sun_util_resources_LocaleData$SupplementaryStrategy_h_