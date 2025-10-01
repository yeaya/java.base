#ifndef _sun_text_resources_CollationData_h_
#define _sun_text_resources_CollationData_h_
//$ class sun.text.resources.CollationData
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {

class CollationData : public ::java::util::ListResourceBundle {
	$class(CollationData, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_CollationData_h_