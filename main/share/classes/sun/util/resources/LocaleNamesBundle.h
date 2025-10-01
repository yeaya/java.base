#ifndef _sun_util_resources_LocaleNamesBundle_h_
#define _sun_util_resources_LocaleNamesBundle_h_
//$ class sun.util.resources.LocaleNamesBundle
//$ extends sun.util.resources.OpenListResourceBundle

#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $export LocaleNamesBundle : public ::sun::util::resources::OpenListResourceBundle {
	$class(LocaleNamesBundle, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	LocaleNamesBundle();
	void init$();
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleNamesBundle_h_