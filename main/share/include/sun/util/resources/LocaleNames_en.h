#ifndef _sun_util_resources_LocaleNames_en_h_
#define _sun_util_resources_LocaleNames_en_h_
//$ class sun.util.resources.LocaleNames_en
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {

class $import LocaleNames_en : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_en, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_en();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleNames_en_h_