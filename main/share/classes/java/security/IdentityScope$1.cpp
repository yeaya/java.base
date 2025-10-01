#include <java/security/IdentityScope$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/IdentityScope.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityScope = ::java::security::IdentityScope;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

$MethodInfo _IdentityScope$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IdentityScope$1::*)()>(&IdentityScope$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IdentityScope$1_EnclosingMethodInfo_ = {
	"java.security.IdentityScope",
	"initializeSystemScope",
	"()V"
};

$InnerClassInfo _IdentityScope$1_InnerClassesInfo_[] = {
	{"java.security.IdentityScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IdentityScope$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.IdentityScope$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_IdentityScope$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_IdentityScope$1_EnclosingMethodInfo_,
	_IdentityScope$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.IdentityScope"
};

$Object* allocate$IdentityScope$1($Class* clazz) {
	return $of($alloc(IdentityScope$1));
}

void IdentityScope$1::init$() {
}

$Object* IdentityScope$1::run() {
	return $of($Security::getProperty("system.scope"_s));
}

IdentityScope$1::IdentityScope$1() {
}

$Class* IdentityScope$1::load$($String* name, bool initialize) {
	$loadClass(IdentityScope$1, name, initialize, &_IdentityScope$1_ClassInfo_, allocate$IdentityScope$1);
	return class$;
}

$Class* IdentityScope$1::class$ = nullptr;

	} // security
} // java