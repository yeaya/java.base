#ifndef _sun_util_resources_CurrencyNames_en_US_h_
#define _sun_util_resources_CurrencyNames_en_US_h_
//$ class sun.util.resources.CurrencyNames_en_US
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $export CurrencyNames_en_US : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_en_US, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_en_US();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_CurrencyNames_en_US_h_