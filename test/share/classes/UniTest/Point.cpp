#include <UniTest/Point.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* Point::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"x", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Point, x, int32_t)},
		{"y", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Point, y, int32_t)},
		{}
	};
	$Attribute $attribute[] = {
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"UniTest.Point",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Point, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Point);
	});
	return class$;
}

$Class* Point::class$ = nullptr;

} // UniTest