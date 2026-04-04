#include <sun/security/provider/MD4$2.h>
#include <java/security/Provider.h>
#include <sun/security/provider/MD4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MD4 = ::sun::security::provider::MD4;

namespace sun {
	namespace security {
		namespace provider {

void MD4$2::init$() {
}

$Object* MD4$2::run() {
	$init($MD4);
	$nc($MD4::md4Provider)->put("MessageDigest.MD4"_s, "sun.security.provider.MD4"_s);
	return nullptr;
}

MD4$2::MD4$2() {
}

$Class* MD4$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MD4$2, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(MD4$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.MD4",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.MD4$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.MD4$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.MD4"
	};
	$loadClass(MD4$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MD4$2);
	});
	return class$;
}

$Class* MD4$2::class$ = nullptr;

		} // provider
	} // security
} // sun