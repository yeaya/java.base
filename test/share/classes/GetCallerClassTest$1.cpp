#include <GetCallerClassTest$1.h>

#include <GetCallerClassTest.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

#undef DEFAULT_POLICY

using $GetCallerClassTest = ::GetCallerClassTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

$FieldInfo _GetCallerClassTest$1_FieldInfo_[] = {
	{"val$perms", "Ljava/security/PermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$1, val$perms)},
	{}
};

$MethodInfo _GetCallerClassTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PermissionCollection;)V", nullptr, 0, $method(GetCallerClassTest$1, init$, void, $PermissionCollection*)},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$1, implies, bool, $ProtectionDomain*, $Permission*)},
	{}
};

$EnclosingMethodInfo _GetCallerClassTest$1_EnclosingMethodInfo_ = {
	"GetCallerClassTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _GetCallerClassTest$1_InnerClassesInfo_[] = {
	{"GetCallerClassTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetCallerClassTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$1",
	"java.security.Policy",
	nullptr,
	_GetCallerClassTest$1_FieldInfo_,
	_GetCallerClassTest$1_MethodInfo_,
	nullptr,
	&_GetCallerClassTest$1_EnclosingMethodInfo_,
	_GetCallerClassTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$1($Class* clazz) {
	return $of($alloc(GetCallerClassTest$1));
}

void GetCallerClassTest$1::init$($PermissionCollection* val$perms) {
	$set(this, val$perms, val$perms);
	$Policy::init$();
}

bool GetCallerClassTest$1::implies($ProtectionDomain* domain, $Permission* p) {
	bool var$0 = $nc(this->val$perms)->implies(p);
	$init($GetCallerClassTest);
	return var$0 || $nc($GetCallerClassTest::DEFAULT_POLICY)->implies(domain, p);
}

GetCallerClassTest$1::GetCallerClassTest$1() {
}

$Class* GetCallerClassTest$1::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$1, name, initialize, &_GetCallerClassTest$1_ClassInfo_, allocate$GetCallerClassTest$1);
	return class$;
}

$Class* GetCallerClassTest$1::class$ = nullptr;