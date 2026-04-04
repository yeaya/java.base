#include <java/io/ObjectInputValidation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* ObjectInputValidation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"validateObject", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputValidation, validateObject, void), "java.io.InvalidObjectException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.ObjectInputValidation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectInputValidation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputValidation);
	});
	return class$;
}

$Class* ObjectInputValidation::class$ = nullptr;

	} // io
} // java