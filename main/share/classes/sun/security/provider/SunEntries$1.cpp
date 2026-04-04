#include <sun/security/provider/SunEntries$1.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace provider {

void SunEntries$1::init$() {
}

$Object* SunEntries$1::run() {
	$var($String, egdSource, $System::getProperty("java.security.egd"_s, ""_s));
	if ($nc(egdSource)->length() != 0) {
		return $of(egdSource);
	}
	$assign(egdSource, $Security::getProperty("securerandom.source"_s));
	if (egdSource == nullptr) {
		return $of(""_s);
	}
	return $of(egdSource);
}

SunEntries$1::SunEntries$1() {
}

$Class* SunEntries$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SunEntries$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunEntries$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.SunEntries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SunEntries$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SunEntries$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SunEntries"
	};
	$loadClass(SunEntries$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunEntries$1);
	});
	return class$;
}

$Class* SunEntries$1::class$ = nullptr;

		} // provider
	} // security
} // sun