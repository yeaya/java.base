#include <ImplicitStringConcatAssignLHS$MyClass.h>
#include <ImplicitStringConcatAssignLHS.h>
#include <jcpp.h>

using $ImplicitStringConcatAssignLHS = ::ImplicitStringConcatAssignLHS;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcatAssignLHS$MyClass::init$() {
	$init($ImplicitStringConcatAssignLHS);
	++$ImplicitStringConcatAssignLHS::x;
}

ImplicitStringConcatAssignLHS$MyClass::ImplicitStringConcatAssignLHS$MyClass() {
}

$Class* ImplicitStringConcatAssignLHS$MyClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"o", "Ljava/lang/Object;", nullptr, 0, $field(ImplicitStringConcatAssignLHS$MyClass, o)},
		{"s", "Ljava/lang/String;", nullptr, 0, $field(ImplicitStringConcatAssignLHS$MyClass, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitStringConcatAssignLHS$MyClass, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcatAssignLHS$MyClass", "ImplicitStringConcatAssignLHS", "MyClass", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImplicitStringConcatAssignLHS$MyClass",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ImplicitStringConcatAssignLHS"
	};
	$loadClass(ImplicitStringConcatAssignLHS$MyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatAssignLHS$MyClass);
	});
	return class$;
}

$Class* ImplicitStringConcatAssignLHS$MyClass::class$ = nullptr;