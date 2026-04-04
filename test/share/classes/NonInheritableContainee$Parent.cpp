#include <NonInheritableContainee$Parent.h>
#include <NonInheritableContainee.h>
#include <jcpp.h>

using $NonInheritableContainee = ::NonInheritableContainee;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void NonInheritableContainee$Parent::init$($NonInheritableContainee* this$0) {
	$set(this, this$0, this$0);
}

NonInheritableContainee$Parent::NonInheritableContainee$Parent() {
}

$Class* NonInheritableContainee$Parent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LNonInheritableContainee;", nullptr, $FINAL | $SYNTHETIC, $field(NonInheritableContainee$Parent, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LNonInheritableContainee;)V", nullptr, 0, $method(NonInheritableContainee$Parent, init$, void, $NonInheritableContainee*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonInheritableContainee$Parent", "NonInheritableContainee", "Parent", 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"name", 's', "A"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LNonInheritableContainee$NonInheritedAnnotationRepeated;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"name", 's', "B"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LNonInheritableContainee$NonInheritedAnnotationRepeated;", annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$compoundAttribute},
		{'@', &annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LNonInheritableContainee$InheritedAnnotationContainer;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonInheritableContainee$Parent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"NonInheritableContainee"
	};
	$loadClass(NonInheritableContainee$Parent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonInheritableContainee$Parent);
	});
	return class$;
}

$Class* NonInheritableContainee$Parent::class$ = nullptr;