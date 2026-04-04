#include <UniTest/SingleMemberBooleanArrayDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberBooleanArrayDef::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'Z', "false"},
		{'-'}
	};

	$Attribute valuedefaultValue$$ = {
		'[', $attribute
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()[Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberBooleanArrayDef, value, $booleans*), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberBooleanArrayDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberBooleanArrayDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberBooleanArrayDef);
	});
	return class$;
}

$Class* SingleMemberBooleanArrayDef::class$ = nullptr;

} // UniTest