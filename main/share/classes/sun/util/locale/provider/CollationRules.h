#ifndef _sun_util_locale_provider_CollationRules_h_
#define _sun_util_locale_provider_CollationRules_h_
//$ class sun.util.locale.provider.CollationRules
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULTRULES")
#undef DEFAULTRULES

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class CollationRules : public ::java::lang::Object {
	$class(CollationRules, 0, ::java::lang::Object)
public:
	CollationRules();
	void init$();
	static $String* DEFAULTRULES;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("DEFAULTRULES")

#endif // _sun_util_locale_provider_CollationRules_h_