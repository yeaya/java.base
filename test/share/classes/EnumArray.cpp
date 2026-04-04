#include <EnumArray.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <jcpp.h>

using $RetentionPolicyArray = $Array<::java::lang::annotation::RetentionPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* EnumArray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EnumArray, value, $RetentionPolicyArray*)},
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
		"EnumArray",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(EnumArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumArray);
	});
	return class$;
}

$Class* EnumArray::class$ = nullptr;