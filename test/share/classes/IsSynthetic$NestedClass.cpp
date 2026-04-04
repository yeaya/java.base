#include <IsSynthetic$NestedClass.h>
#include <IsSynthetic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsSynthetic$NestedClass::init$() {
}

IsSynthetic$NestedClass::IsSynthetic$NestedClass() {
}

$Class* IsSynthetic$NestedClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IsSynthetic$NestedClass, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsSynthetic$NestedClass", "IsSynthetic", "NestedClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IsSynthetic$NestedClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IsSynthetic"
	};
	$loadClass(IsSynthetic$NestedClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsSynthetic$NestedClass);
	});
	return class$;
}

$Class* IsSynthetic$NestedClass::class$ = nullptr;