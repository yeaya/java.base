#include <FloatArray.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* FloatArray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FloatArray, value, $floats*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"FloatArray",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(FloatArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatArray);
	});
	return class$;
}

$Class* FloatArray::class$ = nullptr;