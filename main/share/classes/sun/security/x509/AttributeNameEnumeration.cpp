#include <sun/security/x509/AttributeNameEnumeration.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace sun {
	namespace security {
		namespace x509 {

void AttributeNameEnumeration::init$() {
	$Vector::init$(4, 2);
}

AttributeNameEnumeration::AttributeNameEnumeration() {
}

$Class* AttributeNameEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeNameEnumeration, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeNameEnumeration, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.AttributeNameEnumeration",
		"java.util.Vector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/Vector<Ljava/lang/String;>;"
	};
	$loadClass(AttributeNameEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttributeNameEnumeration));
	});
	return class$;
}

$Class* AttributeNameEnumeration::class$ = nullptr;

		} // x509
	} // security
} // sun