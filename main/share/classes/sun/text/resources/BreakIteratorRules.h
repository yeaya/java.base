#ifndef _sun_text_resources_BreakIteratorRules_h_
#define _sun_text_resources_BreakIteratorRules_h_
//$ class sun.text.resources.BreakIteratorRules
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class BreakIteratorRules : public ::java::util::ListResourceBundle {
	$class(BreakIteratorRules, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	BreakIteratorRules();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_BreakIteratorRules_h_