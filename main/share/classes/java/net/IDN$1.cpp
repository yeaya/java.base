#include <java/net/IDN$1.h>
#include <java/io/InputStream.h>
#include <java/net/IDN.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringPrep = ::jdk::internal::icu::text::StringPrep;

namespace java {
	namespace net {

void IDN$1::init$() {
}

$Object* IDN$1::run() {
	$beforeCallerSensitive();
	$load($StringPrep);
	return $StringPrep::class$->getResourceAsStream("/sun/net/idn/uidna.spp"_s);
}

IDN$1::IDN$1() {
}

$Class* IDN$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IDN$1, init$, void)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(IDN$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.IDN",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.IDN$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.IDN$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.IDN"
	};
	$loadClass(IDN$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IDN$1);
	});
	return class$;
}

$Class* IDN$1::class$ = nullptr;

	} // net
} // java