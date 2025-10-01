#ifndef _sun_util_resources_LocaleData$2_h_
#define _sun_util_resources_LocaleData$2_h_
//$ class sun.util.resources.LocaleData$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class LocaleData$2 : public ::java::security::PrivilegedAction {
	$class(LocaleData$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LocaleData$2();
	void init$($String* val$baseName, ::java::util::Locale* val$locale);
	virtual $Object* run() override;
	::java::util::Locale* val$locale = nullptr;
	$String* val$baseName = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleData$2_h_