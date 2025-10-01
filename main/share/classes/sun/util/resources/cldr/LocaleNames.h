#ifndef _sun_util_resources_cldr_LocaleNames_h_
#define _sun_util_resources_cldr_LocaleNames_h_
//$ class sun.util.resources.cldr.LocaleNames
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class LocaleNames : public ::sun::util::resources::OpenListResourceBundle {
	$class(LocaleNames, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	LocaleNames();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_LocaleNames_h_