#include <UniTest/SingleMemberFloatArrayDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberFloatArrayDef::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'F', "16.0"},
		{'-'}
	};

	$Attribute valuedefaultValue$$ = {
		'[', $attribute
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberFloatArrayDef, value, $floats*), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberFloatArrayDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberFloatArrayDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberFloatArrayDef);
	});
	return class$;
}

$Class* SingleMemberFloatArrayDef::class$ = nullptr;

} // UniTest