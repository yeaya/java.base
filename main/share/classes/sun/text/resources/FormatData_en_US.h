#ifndef _sun_text_resources_FormatData_en_US_h_
#define _sun_text_resources_FormatData_en_US_h_
//$ class sun.text.resources.FormatData_en_US
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class FormatData_en_US : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData_en_US, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData_en_US();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_FormatData_en_US_h_