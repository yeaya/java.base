#include <sun/security/provider/JavaKeyStore$CaseExactJKS.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;

namespace sun {
	namespace security {
		namespace provider {

void JavaKeyStore$CaseExactJKS::init$() {
	$JavaKeyStore::init$();
}

$String* JavaKeyStore$CaseExactJKS::convertAlias($String* alias) {
	return alias;
}

JavaKeyStore$CaseExactJKS::JavaKeyStore$CaseExactJKS() {
}

$Class* JavaKeyStore$CaseExactJKS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaKeyStore$CaseExactJKS, init$, void)},
		{"convertAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(JavaKeyStore$CaseExactJKS, convertAlias, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.JavaKeyStore$CaseExactJKS", "sun.security.provider.JavaKeyStore", "CaseExactJKS", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.JavaKeyStore$CaseExactJKS",
		"sun.security.provider.JavaKeyStore",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.JavaKeyStore"
	};
	$loadClass(JavaKeyStore$CaseExactJKS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaKeyStore$CaseExactJKS);
	});
	return class$;
}

$Class* JavaKeyStore$CaseExactJKS::class$ = nullptr;

		} // provider
	} // security
} // sun