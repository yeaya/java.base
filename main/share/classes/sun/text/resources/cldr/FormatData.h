#ifndef _sun_text_resources_cldr_FormatData_h_
#define _sun_text_resources_cldr_FormatData_h_
//$ class sun.text.resources.cldr.FormatData
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {

class FormatData : public ::java::util::ListResourceBundle {
	$class(FormatData, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_FormatData_h_