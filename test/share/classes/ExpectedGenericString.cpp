#include <ExpectedGenericString.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* ExpectedGenericString::load$($String* name, bool initialize) {

	$Attribute bridgeValuedefaultValue$$ = {
		's', ""
	};
	$MethodInfo methodInfos$$[] = {
		{"bridgeValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedGenericString, bridgeValue, $String*), nullptr, &bridgeValuedefaultValue$$},
		{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedGenericString, value, $String*)},
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
		"ExpectedGenericString",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ExpectedGenericString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpectedGenericString);
	});
	return class$;
}

$Class* ExpectedGenericString::class$ = nullptr;