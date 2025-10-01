#ifndef _java_util_ResourceBundle$4_h_
#define _java_util_ResourceBundle$4_h_
//$ class java.util.ResourceBundle$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle$CacheKey;
		class ServiceLoader;
	}
}

namespace java {
	namespace util {

class ResourceBundle$4 : public ::java::security::PrivilegedAction {
	$class(ResourceBundle$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ResourceBundle$4();
	void init$(::java::util::ServiceLoader* val$providers, ::java::util::ResourceBundle$CacheKey* val$cacheKey, $String* val$baseName, ::java::util::Locale* val$locale);
	virtual $Object* run() override;
	::java::util::Locale* val$locale = nullptr;
	$String* val$baseName = nullptr;
	::java::util::ResourceBundle$CacheKey* val$cacheKey = nullptr;
	::java::util::ServiceLoader* val$providers = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$4_h_