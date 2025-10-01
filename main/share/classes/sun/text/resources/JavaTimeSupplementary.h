#ifndef _sun_text_resources_JavaTimeSupplementary_h_
#define _sun_text_resources_JavaTimeSupplementary_h_
//$ class sun.text.resources.JavaTimeSupplementary
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class JavaTimeSupplementary : public ::sun::util::resources::OpenListResourceBundle {
	$class(JavaTimeSupplementary, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	JavaTimeSupplementary();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_JavaTimeSupplementary_h_