#include <Fleeting.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* Fleeting::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Fleeting, value, int32_t)},
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
		"Fleeting",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Fleeting, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Fleeting);
	});
	return class$;
}

$Class* Fleeting::class$ = nullptr;