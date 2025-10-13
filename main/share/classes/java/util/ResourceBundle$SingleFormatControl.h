#ifndef _java_util_ResourceBundle$SingleFormatControl_h_
#define _java_util_ResourceBundle$SingleFormatControl_h_
//$ class java.util.ResourceBundle$SingleFormatControl
//$ extends java.util.ResourceBundle$Control

#include <java/util/ResourceBundle$Control.h>

#pragma push_macro("CLASS_ONLY")
#undef CLASS_ONLY
#pragma push_macro("PROPERTIES_ONLY")
#undef PROPERTIES_ONLY

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class ResourceBundle$SingleFormatControl : public ::java::util::ResourceBundle$Control {
	$class(ResourceBundle$SingleFormatControl, 0, ::java::util::ResourceBundle$Control)
public:
	ResourceBundle$SingleFormatControl();
	void init$(::java::util::List* formats);
	virtual ::java::util::List* getFormats($String* baseName) override;
	static ::java::util::ResourceBundle$Control* PROPERTIES_ONLY;
	static ::java::util::ResourceBundle$Control* CLASS_ONLY;
	::java::util::List* formats = nullptr;
};

	} // util
} // java

#pragma pop_macro("CLASS_ONLY")
#pragma pop_macro("PROPERTIES_ONLY")

#endif // _java_util_ResourceBundle$SingleFormatControl_h_