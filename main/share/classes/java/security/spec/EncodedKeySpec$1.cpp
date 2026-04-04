#include <java/security/spec/EncodedKeySpec$1.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

void EncodedKeySpec$1::init$() {
}

void EncodedKeySpec$1::clearEncodedKeySpec($EncodedKeySpec* keySpec) {
	$nc(keySpec)->clear();
}

EncodedKeySpec$1::EncodedKeySpec$1() {
}

$Class* EncodedKeySpec$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EncodedKeySpec$1, init$, void)},
		{"clearEncodedKeySpec", "(Ljava/security/spec/EncodedKeySpec;)V", nullptr, $PUBLIC, $virtualMethod(EncodedKeySpec$1, clearEncodedKeySpec, void, $EncodedKeySpec*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.spec.EncodedKeySpec",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.spec.EncodedKeySpec$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.spec.EncodedKeySpec$1",
		"java.lang.Object",
		"jdk.internal.access.JavaSecuritySpecAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.spec.EncodedKeySpec"
	};
	$loadClass(EncodedKeySpec$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncodedKeySpec$1);
	});
	return class$;
}

$Class* EncodedKeySpec$1::class$ = nullptr;

		} // spec
	} // security
} // java