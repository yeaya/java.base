#ifndef _sun_util_resources_cldr_CurrencyNames_en_h_
#define _sun_util_resources_cldr_CurrencyNames_en_h_
//$ class sun.util.resources.cldr.CurrencyNames_en
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class CurrencyNames_en : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_en, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_en();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_CurrencyNames_en_h_