#ifndef _sun_util_resources_LocaleData$1_h_
#define _sun_util_resources_LocaleData$1_h_
//$ class sun.util.resources.LocaleData$1
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

class LocaleData$1 : public ::java::security::PrivilegedAction {
	$class(LocaleData$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LocaleData$1();
	void init$($String* val$baseName, ::java::util::Locale* val$locale);
	virtual $Object* run() override;
	::java::util::Locale* val$locale = nullptr;
	$String* val$baseName = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleData$1_h_