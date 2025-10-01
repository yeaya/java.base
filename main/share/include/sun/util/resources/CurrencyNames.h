#ifndef _sun_util_resources_CurrencyNames_h_
#define _sun_util_resources_CurrencyNames_h_
//$ class sun.util.resources.CurrencyNames
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $import CurrencyNames : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_CurrencyNames_h_