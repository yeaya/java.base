#include <NonInheritableContainee$Sample.h>
#include <NonInheritableContainee$Parent.h>
#include <NonInheritableContainee.h>
#include <jcpp.h>

using $NonInheritableContainee = ::NonInheritableContainee;
using $NonInheritableContainee$Parent = ::NonInheritableContainee$Parent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NonInheritableContainee$Sample::init$($NonInheritableContainee* this$0) {
	$set(this, this$0, this$0);
	$NonInheritableContainee$Parent::init$(this$0);
}

NonInheritableContainee$Sample::NonInheritableContainee$Sample() {
}

$Class* NonInheritableContainee$Sample::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LNonInheritableContainee;", nullptr, $FINAL | $SYNTHETIC, $field(NonInheritableContainee$Sample, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LNonInheritableContainee;)V", nullptr, 0, $method(NonInheritableContainee$Sample, init$, void, $NonInheritableContainee*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonInheritableContainee$Sample", "NonInheritableContainee", "Sample", 0},
		{"NonInheritableContainee$Parent", "NonInheritableContainee", "Parent", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonInheritableContainee$Sample",
		"NonInheritableContainee$Parent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NonInheritableContainee"
	};
	$loadClass(NonInheritableContainee$Sample, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonInheritableContainee$Sample);
	});
	return class$;
}

$Class* NonInheritableContainee$Sample::class$ = nullptr;