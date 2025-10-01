#include <sun/security/jca/ProviderList$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/jca/ProviderList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProviderList = ::sun::security::jca::ProviderList;

namespace sun {
	namespace security {
		namespace jca {

$MethodInfo _ProviderList$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProviderList$2::*)()>(&ProviderList$2::init$))},
	{"run", "()Lsun/security/jca/ProviderList;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProviderList$2_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderList",
	"fromSecurityProperties",
	"()Lsun/security/jca/ProviderList;"
};

$InnerClassInfo _ProviderList$2_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderList$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderList$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderList$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ProviderList$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/jca/ProviderList;>;",
	&_ProviderList$2_EnclosingMethodInfo_,
	_ProviderList$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderList"
};

$Object* allocate$ProviderList$2($Class* clazz) {
	return $of($alloc(ProviderList$2));
}

void ProviderList$2::init$() {
}

$Object* ProviderList$2::run() {
	return $of($new($ProviderList));
}

ProviderList$2::ProviderList$2() {
}

$Class* ProviderList$2::load$($String* name, bool initialize) {
	$loadClass(ProviderList$2, name, initialize, &_ProviderList$2_ClassInfo_, allocate$ProviderList$2);
	return class$;
}

$Class* ProviderList$2::class$ = nullptr;

		} // jca
	} // security
} // sun