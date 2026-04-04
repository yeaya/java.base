#include <ExpectedIsDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* ExpectedIsDefault::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedIsDefault, value, bool)},
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
		"ExpectedIsDefault",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ExpectedIsDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpectedIsDefault);
	});
	return class$;
}

$Class* ExpectedIsDefault::class$ = nullptr;