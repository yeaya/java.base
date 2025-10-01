#ifndef _sun_text_resources_FormatData_h_
#define _sun_text_resources_FormatData_h_
//$ class sun.text.resources.FormatData
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class FormatData : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_FormatData_h_