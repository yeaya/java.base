#ifndef _java_security_ProtectionDomain_h_
#define _java_security_ProtectionDomain_h_
//$ class java.security.ProtectionDomain
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class Principal;
		class ProtectionDomain$Key;
	}
}

namespace java {
	namespace security {

class $export ProtectionDomain : public ::java::lang::Object {
	$class(ProtectionDomain, $PRELOAD, ::java::lang::Object)
public:
	ProtectionDomain();
	void init$(::java::security::CodeSource* codesource, ::java::security::PermissionCollection* permissions);
	void init$(::java::security::CodeSource* codesource, ::java::security::PermissionCollection* permissions, ::java::lang::ClassLoader* classloader, $Array<::java::security::Principal>* principals);
	::java::lang::ClassLoader* getClassLoader();
	::java::security::CodeSource* getCodeSource();
	::java::security::PermissionCollection* getPermissions();
	$Array<::java::security::Principal>* getPrincipals();
	virtual bool implies(::java::security::Permission* perm);
	virtual bool impliesWithAltFilePerm(::java::security::Permission* perm);
	::java::security::PermissionCollection* mergePermissions();
	static bool seeAllp();
	bool staticPermissionsOnly();
	virtual $String* toString() override;
	static bool filePermCompatInPD;
	::java::security::CodeSource* codesource = nullptr;
	::java::lang::ClassLoader* classloader = nullptr;
	$Array<::java::security::Principal>* principals = nullptr;
	::java::security::PermissionCollection* permissions = nullptr;
	bool hasAllPerm = false;
	bool staticPermissions = false;
	::java::security::ProtectionDomain$Key* key = nullptr;
};

	} // security
} // java

#endif // _java_security_ProtectionDomain_h_