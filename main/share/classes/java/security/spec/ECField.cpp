#include <java/security/spec/ECField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace spec {

$Class* ECField::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFieldSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ECField, getFieldSize, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.spec.ECField",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ECField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECField);
	});
	return class$;
}

$Class* ECField::class$ = nullptr;

		} // spec
	} // security
} // java