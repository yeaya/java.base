#include <sun/security/jca/ProviderList$2.h>
#include <sun/security/jca/ProviderList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProviderList = ::sun::security::jca::ProviderList;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$2::init$() {
}

$Object* ProviderList$2::run() {
	return $new($ProviderList);
}

ProviderList$2::ProviderList$2() {
}

$Class* ProviderList$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProviderList$2, init$, void)},
		{"run", "()Lsun/security/jca/ProviderList;", nullptr, $PUBLIC, $virtualMethod(ProviderList$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderList",
		"fromSecurityProperties",
		"()Lsun/security/jca/ProviderList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderList$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/jca/ProviderList;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderList$2);
	});
	return class$;
}

$Class* ProviderList$2::class$ = nullptr;

		} // jca
	} // security
} // sun