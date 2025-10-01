#ifndef _java_util_ResourceBundle$NoFallbackControl_h_
#define _java_util_ResourceBundle$NoFallbackControl_h_
//$ class java.util.ResourceBundle$NoFallbackControl
//$ extends java.util.ResourceBundle$SingleFormatControl

#include <java/util/ResourceBundle$SingleFormatControl.h>

#pragma push_macro("CLASS_ONLY_NO_FALLBACK")
#undef CLASS_ONLY_NO_FALLBACK
#pragma push_macro("NO_FALLBACK")
#undef NO_FALLBACK
#pragma push_macro("PROPERTIES_ONLY_NO_FALLBACK")
#undef PROPERTIES_ONLY_NO_FALLBACK

namespace java {
	namespace util {
		class List;
		class Locale;
		class ResourceBundle$Control;
	}
}

namespace java {
	namespace util {

class ResourceBundle$NoFallbackControl : public ::java::util::ResourceBundle$SingleFormatControl {
	$class(ResourceBundle$NoFallbackControl, 0, ::java::util::ResourceBundle$SingleFormatControl)
public:
	ResourceBundle$NoFallbackControl();
	void init$(::java::util::List* formats);
	virtual ::java::util::Locale* getFallbackLocale($String* baseName, ::java::util::Locale* locale) override;
	static ::java::util::ResourceBundle$Control* NO_FALLBACK;
	static ::java::util::ResourceBundle$Control* PROPERTIES_ONLY_NO_FALLBACK;
	static ::java::util::ResourceBundle$Control* CLASS_ONLY_NO_FALLBACK;
};

	} // util
} // java

#pragma pop_macro("CLASS_ONLY_NO_FALLBACK")
#pragma pop_macro("NO_FALLBACK")
#pragma pop_macro("PROPERTIES_ONLY_NO_FALLBACK")

#endif // _java_util_ResourceBundle$NoFallbackControl_h_