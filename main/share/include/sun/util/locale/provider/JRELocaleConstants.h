#ifndef _sun_util_locale_provider_JRELocaleConstants_h_
#define _sun_util_locale_provider_JRELocaleConstants_h_
//$ class sun.util.locale.provider.JRELocaleConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JA_JP_JP")
#undef JA_JP_JP
#pragma push_macro("NO_NO_NY")
#undef NO_NO_NY
#pragma push_macro("TH_TH")
#undef TH_TH
#pragma push_macro("TH_TH_TH")
#undef TH_TH_TH

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import JRELocaleConstants : public ::java::lang::Object {
	$class(JRELocaleConstants, 0, ::java::lang::Object)
public:
	JRELocaleConstants();
	void init$();
	static ::java::util::Locale* JA_JP_JP;
	static ::java::util::Locale* NO_NO_NY;
	static ::java::util::Locale* TH_TH;
	static ::java::util::Locale* TH_TH_TH;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("JA_JP_JP")
#pragma pop_macro("NO_NO_NY")
#pragma pop_macro("TH_TH")
#pragma pop_macro("TH_TH_TH")

#endif // _sun_util_locale_provider_JRELocaleConstants_h_