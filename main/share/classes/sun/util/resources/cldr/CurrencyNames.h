#ifndef _sun_util_resources_cldr_CurrencyNames_h_
#define _sun_util_resources_cldr_CurrencyNames_h_
//$ class sun.util.resources.cldr.CurrencyNames
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class CurrencyNames : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_CurrencyNames_h_