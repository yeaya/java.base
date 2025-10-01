#ifndef _sun_text_resources_BreakIteratorInfo_h_
#define _sun_text_resources_BreakIteratorInfo_h_
//$ class sun.text.resources.BreakIteratorInfo
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class BreakIteratorInfo : public ::java::util::ListResourceBundle {
	$class(BreakIteratorInfo, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	BreakIteratorInfo();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_BreakIteratorInfo_h_