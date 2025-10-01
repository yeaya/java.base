#ifndef _sun_util_resources_Bundles$Strategy_h_
#define _sun_util_resources_Bundles$Strategy_h_
//$ interface sun.util.resources.Bundles$Strategy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $export Bundles$Strategy : public ::java::lang::Object {
	$interface(Bundles$Strategy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) {return nullptr;}
	virtual $Class* getResourceBundleProviderType($String* baseName, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* toBundleName($String* baseName, ::java::util::Locale* locale) {return nullptr;}
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$Strategy_h_