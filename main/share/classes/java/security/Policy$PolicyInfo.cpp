#include <java/security/Policy$PolicyInfo.h>
#include <java/security/Policy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;

namespace java {
	namespace security {

void Policy$PolicyInfo::init$($Policy* policy, bool initialized) {
	$set(this, policy, policy);
	this->initialized = initialized;
}

Policy$PolicyInfo::Policy$PolicyInfo() {
}

$Class* Policy$PolicyInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"policy", "Ljava/security/Policy;", nullptr, $FINAL, $field(Policy$PolicyInfo, policy)},
		{"initialized", "Z", nullptr, $FINAL, $field(Policy$PolicyInfo, initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Policy;Z)V", nullptr, 0, $method(Policy$PolicyInfo, init$, void, $Policy*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$PolicyInfo", "java.security.Policy", "PolicyInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Policy$PolicyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Policy"
	};
	$loadClass(Policy$PolicyInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$PolicyInfo);
	});
	return class$;
}

$Class* Policy$PolicyInfo::class$ = nullptr;

	} // security
} // java