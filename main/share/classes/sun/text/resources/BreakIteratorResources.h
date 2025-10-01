#ifndef _sun_text_resources_BreakIteratorResources_h_
#define _sun_text_resources_BreakIteratorResources_h_
//$ class sun.text.resources.BreakIteratorResources
//$ extends sun.util.resources.BreakIteratorResourceBundle

#include <sun/util/resources/BreakIteratorResourceBundle.h>

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace text {
		namespace resources {

class BreakIteratorResources : public ::sun::util::resources::BreakIteratorResourceBundle {
	$class(BreakIteratorResources, $NO_CLASS_INIT, ::sun::util::resources::BreakIteratorResourceBundle)
public:
	BreakIteratorResources();
	void init$();
	virtual ::java::util::ResourceBundle* getBreakIteratorInfo() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_BreakIteratorResources_h_