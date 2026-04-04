#include <sun/security/jca/ServiceId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jca {

void ServiceId::init$($String* type, $String* algorithm) {
	$set(this, type, type);
	$set(this, algorithm, algorithm);
}

ServiceId::ServiceId() {
}

$Class* ServiceId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ServiceId, type)},
		{"algorithm", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ServiceId, algorithm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServiceId, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.jca.ServiceId",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceId);
	});
	return class$;
}

$Class* ServiceId::class$ = nullptr;

		} // jca
	} // security
} // sun