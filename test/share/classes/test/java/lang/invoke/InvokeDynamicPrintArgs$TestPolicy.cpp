#include <test/java/lang/invoke/InvokeDynamicPrintArgs$TestPolicy.h>

#include <java/io/FilePermission.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <test/java/lang/invoke/InvokeDynamicPrintArgs.h>
#include <jcpp.h>

#undef DEFAULT_POLICY

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _InvokeDynamicPrintArgs$TestPolicy_FieldInfo_[] = {
	{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(InvokeDynamicPrintArgs$TestPolicy, DEFAULT_POLICY)},
	{"permissions", "Ljava/security/PermissionCollection;", nullptr, $FINAL, $field(InvokeDynamicPrintArgs$TestPolicy, permissions)},
	{}
};

$MethodInfo _InvokeDynamicPrintArgs$TestPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(InvokeDynamicPrintArgs$TestPolicy, init$, void)},
	{"getPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(InvokeDynamicPrintArgs$TestPolicy, getPermissions, $PermissionCollection*, $ProtectionDomain*)},
	{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(InvokeDynamicPrintArgs$TestPolicy, getPermissions, $PermissionCollection*, $CodeSource*)},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(InvokeDynamicPrintArgs$TestPolicy, implies, bool, $ProtectionDomain*, $Permission*)},
	{}
};

$InnerClassInfo _InvokeDynamicPrintArgs$TestPolicy_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.InvokeDynamicPrintArgs$TestPolicy", "test.java.lang.invoke.InvokeDynamicPrintArgs", "TestPolicy", $STATIC},
	{}
};

$ClassInfo _InvokeDynamicPrintArgs$TestPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.InvokeDynamicPrintArgs$TestPolicy",
	"java.security.Policy",
	nullptr,
	_InvokeDynamicPrintArgs$TestPolicy_FieldInfo_,
	_InvokeDynamicPrintArgs$TestPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_InvokeDynamicPrintArgs$TestPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.InvokeDynamicPrintArgs"
};

$Object* allocate$InvokeDynamicPrintArgs$TestPolicy($Class* clazz) {
	return $of($alloc(InvokeDynamicPrintArgs$TestPolicy));
}

$Policy* InvokeDynamicPrintArgs$TestPolicy::DEFAULT_POLICY = nullptr;

void InvokeDynamicPrintArgs$TestPolicy::init$() {
	$Policy::init$();
	$set(this, permissions, $new($Permissions));
	$nc(this->permissions)->add($$new($FilePermission, "<<ALL FILES>>"_s, "read"_s));
}

$PermissionCollection* InvokeDynamicPrintArgs$TestPolicy::getPermissions($ProtectionDomain* domain) {
	return this->permissions;
}

$PermissionCollection* InvokeDynamicPrintArgs$TestPolicy::getPermissions($CodeSource* codesource) {
	return this->permissions;
}

bool InvokeDynamicPrintArgs$TestPolicy::implies($ProtectionDomain* domain, $Permission* perm) {
	bool var$0 = $nc(this->permissions)->implies(perm);
	return var$0 || $nc(InvokeDynamicPrintArgs$TestPolicy::DEFAULT_POLICY)->implies(domain, perm);
}

void clinit$InvokeDynamicPrintArgs$TestPolicy($Class* class$) {
	$assignStatic(InvokeDynamicPrintArgs$TestPolicy::DEFAULT_POLICY, $Policy::getPolicy());
}

InvokeDynamicPrintArgs$TestPolicy::InvokeDynamicPrintArgs$TestPolicy() {
}

$Class* InvokeDynamicPrintArgs$TestPolicy::load$($String* name, bool initialize) {
	$loadClass(InvokeDynamicPrintArgs$TestPolicy, name, initialize, &_InvokeDynamicPrintArgs$TestPolicy_ClassInfo_, clinit$InvokeDynamicPrintArgs$TestPolicy, allocate$InvokeDynamicPrintArgs$TestPolicy);
	return class$;
}

$Class* InvokeDynamicPrintArgs$TestPolicy::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test