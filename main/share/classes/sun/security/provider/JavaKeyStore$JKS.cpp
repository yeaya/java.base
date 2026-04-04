#include <sun/security/provider/JavaKeyStore$JKS.h>
#include <java/util/Locale.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;

namespace sun {
	namespace security {
		namespace provider {

void JavaKeyStore$JKS::init$() {
	$JavaKeyStore::init$();
}

$String* JavaKeyStore$JKS::convertAlias($String* alias) {
	$init($Locale);
	return $nc(alias)->toLowerCase($Locale::ENGLISH);
}

JavaKeyStore$JKS::JavaKeyStore$JKS() {
}

$Class* JavaKeyStore$JKS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaKeyStore$JKS, init$, void)},
		{"convertAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(JavaKeyStore$JKS, convertAlias, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.JavaKeyStore$JKS", "sun.security.provider.JavaKeyStore", "JKS", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.JavaKeyStore$JKS",
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
	$loadClass(JavaKeyStore$JKS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaKeyStore$JKS);
	});
	return class$;
}

$Class* JavaKeyStore$JKS::class$ = nullptr;

		} // provider
	} // security
} // sun