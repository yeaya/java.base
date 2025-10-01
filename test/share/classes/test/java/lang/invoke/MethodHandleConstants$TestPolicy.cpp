#include <test/java/lang/invoke/MethodHandleConstants$TestPolicy.h>

#include <java/io/FilePermission.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <test/java/lang/invoke/MethodHandleConstants.h>
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
using $MethodHandleConstants = ::test::java::lang::invoke::MethodHandleConstants;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _MethodHandleConstants$TestPolicy_FieldInfo_[] = {
	{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleConstants$TestPolicy, DEFAULT_POLICY)},
	{"permissions", "Ljava/security/PermissionCollection;", nullptr, $FINAL, $field(MethodHandleConstants$TestPolicy, permissions)},
	{}
};

$MethodInfo _MethodHandleConstants$TestPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodHandleConstants$TestPolicy::*)()>(&MethodHandleConstants$TestPolicy::init$))},
	{"getPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodHandleConstants$TestPolicy_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.MethodHandleConstants$TestPolicy", "test.java.lang.invoke.MethodHandleConstants", "TestPolicy", $STATIC},
	{}
};

$ClassInfo _MethodHandleConstants$TestPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.MethodHandleConstants$TestPolicy",
	"java.security.Policy",
	nullptr,
	_MethodHandleConstants$TestPolicy_FieldInfo_,
	_MethodHandleConstants$TestPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleConstants$TestPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.MethodHandleConstants"
};

$Object* allocate$MethodHandleConstants$TestPolicy($Class* clazz) {
	return $of($alloc(MethodHandleConstants$TestPolicy));
}

$Policy* MethodHandleConstants$TestPolicy::DEFAULT_POLICY = nullptr;

void MethodHandleConstants$TestPolicy::init$() {
	$Policy::init$();
	$set(this, permissions, $new($Permissions));
	$nc(this->permissions)->add($$new($FilePermission, "<<ALL FILES>>"_s, "read"_s));
}

$PermissionCollection* MethodHandleConstants$TestPolicy::getPermissions($ProtectionDomain* domain) {
	return this->permissions;
}

$PermissionCollection* MethodHandleConstants$TestPolicy::getPermissions($CodeSource* codesource) {
	return this->permissions;
}

bool MethodHandleConstants$TestPolicy::implies($ProtectionDomain* domain, $Permission* perm) {
	bool var$0 = $nc(this->permissions)->implies(perm);
	return var$0 || $nc(MethodHandleConstants$TestPolicy::DEFAULT_POLICY)->implies(domain, perm);
}

void clinit$MethodHandleConstants$TestPolicy($Class* class$) {
	$assignStatic(MethodHandleConstants$TestPolicy::DEFAULT_POLICY, $Policy::getPolicy());
}

MethodHandleConstants$TestPolicy::MethodHandleConstants$TestPolicy() {
}

$Class* MethodHandleConstants$TestPolicy::load$($String* name, bool initialize) {
	$loadClass(MethodHandleConstants$TestPolicy, name, initialize, &_MethodHandleConstants$TestPolicy_ClassInfo_, clinit$MethodHandleConstants$TestPolicy, allocate$MethodHandleConstants$TestPolicy);
	return class$;
}

$Class* MethodHandleConstants$TestPolicy::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test