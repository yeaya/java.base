#ifndef _sun_text_resources_FormatData_en_h_
#define _sun_text_resources_FormatData_en_h_
//$ class sun.text.resources.FormatData_en
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class FormatData_en : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData_en, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData_en();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_FormatData_en_h_