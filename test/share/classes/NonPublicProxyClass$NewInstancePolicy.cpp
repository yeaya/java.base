#include <NonPublicProxyClass$NewInstancePolicy.h>
#include <NonPublicProxyClass.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/reflect/ReflectPermission.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/SecurityPermission.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef DEFAULT_POLICY

using $NonPublicProxyClass = ::NonPublicProxyClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $SecurityPermission = ::java::security::SecurityPermission;
using $Enumeration = ::java::util::Enumeration;

void NonPublicProxyClass$NewInstancePolicy::init$(bool grant) {
	$useLocalObjectStack();
	$Policy::init$();
	$set(this, permissions, $new($Permissions));
	this->grant = grant;
	this->permissions->add($$new($SecurityPermission, "getPolicy"_s));
	if (grant) {
		this->permissions->add($$new($RuntimePermission, "getClassLoader"_s));
		this->permissions->add($$new($ReflectPermission, $$str({"newProxyInPackage."_s, "p"_s})));
		this->permissions->add($$new($ReflectPermission, $$str({"newProxyInPackage."_s, "java.util.zip"_s})));
	}
}

$PermissionCollection* NonPublicProxyClass$NewInstancePolicy::getPermissions($ProtectionDomain* domain) {
	return this->permissions;
}

$PermissionCollection* NonPublicProxyClass$NewInstancePolicy::getPermissions($CodeSource* codesource) {
	return this->permissions;
}

bool NonPublicProxyClass$NewInstancePolicy::implies($ProtectionDomain* domain, $Permission* perm) {
	bool var$0 = this->permissions->implies(perm);
	$init($NonPublicProxyClass);
	return var$0 || $nc($NonPublicProxyClass::DEFAULT_POLICY)->implies(domain, perm);
}

$String* NonPublicProxyClass$NewInstancePolicy::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, "policy: "_s));
	$var($Enumeration, perms, this->permissions->elements());
	while ($nc(perms)->hasMoreElements()) {
		sb->append("\n"_s)->append($($$sure($Permission, perms->nextElement())->toString()));
	}
	return sb->toString();
}

NonPublicProxyClass$NewInstancePolicy::NonPublicProxyClass$NewInstancePolicy() {
}

$Class* NonPublicProxyClass$NewInstancePolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"permissions", "Ljava/security/PermissionCollection;", nullptr, $FINAL, $field(NonPublicProxyClass$NewInstancePolicy, permissions)},
		{"grant", "Z", nullptr, $FINAL, $field(NonPublicProxyClass$NewInstancePolicy, grant)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(NonPublicProxyClass$NewInstancePolicy, init$, void, bool)},
		{"getPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(NonPublicProxyClass$NewInstancePolicy, getPermissions, $PermissionCollection*, $ProtectionDomain*)},
		{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(NonPublicProxyClass$NewInstancePolicy, getPermissions, $PermissionCollection*, $CodeSource*)},
		{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(NonPublicProxyClass$NewInstancePolicy, implies, bool, $ProtectionDomain*, $Permission*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NonPublicProxyClass$NewInstancePolicy, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonPublicProxyClass$NewInstancePolicy", "NonPublicProxyClass", "NewInstancePolicy", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonPublicProxyClass$NewInstancePolicy",
		"java.security.Policy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NonPublicProxyClass"
	};
	$loadClass(NonPublicProxyClass$NewInstancePolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicProxyClass$NewInstancePolicy);
	});
	return class$;
}

$Class* NonPublicProxyClass$NewInstancePolicy::class$ = nullptr;