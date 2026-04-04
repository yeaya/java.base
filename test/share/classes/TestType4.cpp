#include <TestType4.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* TestType4::load$($String* name, bool initialize) {
	$NamedAttribute anotherValuemethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute anotherValuemethodAnnotations$$[] = {
		{"LExpectedIsDefault;", anotherValuemethodAnnotations$$$namedAttribute},
		{}
	};

	$Attribute anotherValuedefaultValue$$ = {
		's', ""
	};
	$NamedAttribute valuemethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute valuemethodAnnotations$$[] = {
		{"LExpectedIsDefault;", valuemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"anotherValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType4, anotherValue, $String*), nullptr, &anotherValuedefaultValue$$, anotherValuemethodAnnotations$$},
		{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType4, value, $String*), nullptr, nullptr, valuemethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"TestType4",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestType4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType4);
	});
	return class$;
}

$Class* TestType4::class$ = nullptr;