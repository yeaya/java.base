#include <UniTest/SingleMemberDoubleArrayDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberDoubleArrayDef::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'D', "17.0"},
		{'-'}
	};

	$Attribute valuedefaultValue$$ = {
		'[', $attribute
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberDoubleArrayDef, value, $doubles*), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberDoubleArrayDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberDoubleArrayDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberDoubleArrayDef);
	});
	return class$;
}

$Class* SingleMemberDoubleArrayDef::class$ = nullptr;

} // UniTest