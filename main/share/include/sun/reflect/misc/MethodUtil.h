#ifndef _sun_reflect_misc_MethodUtil_h_
#define _sun_reflect_misc_MethodUtil_h_
//$ class sun.reflect.misc.MethodUtil
//$ extends java.security.SecureClassLoader

#include <java/lang/Array.h>
#include <java/security/SecureClassLoader.h>

#pragma push_macro("MISC_PKG")
#undef MISC_PKG
#pragma push_macro("TRAMPOLINE")
#undef TRAMPOLINE

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class $import MethodUtil : public ::java::security::SecureClassLoader {
	$class(MethodUtil, 0, ::java::security::SecureClassLoader)
public:
	MethodUtil();
	using ::java::security::SecureClassLoader::defineClass;
	using ::java::security::SecureClassLoader::findClass;
	void init$();
	static void addMethod(::java::util::Map* sigs, ::java::lang::reflect::Method* method);
	$Class* defineClass($String* name, $bytes* b);
	virtual $Class* findClass($String* name) override;
	static void getInterfaceMethods($Class* cls, ::java::util::Map* sigs);
	static bool getInternalPublicMethods($Class* cls, ::java::util::Map* sigs);
	static ::java::lang::reflect::Method* getMethod($Class* cls, $String* name, $ClassArray* args);
	static $Array<::java::lang::reflect::Method>* getMethods($Class* cls);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	static $Array<::java::lang::reflect::Method>* getPublicMethods($Class* cls);
	static ::java::lang::reflect::Method* getTrampoline();
	static $Class* getTrampolineClass();
	static $Object* invoke(::java::lang::reflect::Method* m, Object$* obj, $ObjectArray* params);
	using ::java::security::SecureClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	static $String* MISC_PKG;
	static $String* TRAMPOLINE;
	static ::java::lang::reflect::Method* bounce;
};

		} // misc
	} // reflect
} // sun

#pragma pop_macro("MISC_PKG")
#pragma pop_macro("TRAMPOLINE")

#endif // _sun_reflect_misc_MethodUtil_h_