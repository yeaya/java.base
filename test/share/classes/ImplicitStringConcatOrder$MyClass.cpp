#include <ImplicitStringConcatOrder$MyClass.h>
#include <ImplicitStringConcatOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcatOrder$MyClass::init$() {
}

$String* ImplicitStringConcatOrder$MyClass::toString() {
	return $String::valueOf(++this->x);
}

ImplicitStringConcatOrder$MyClass::ImplicitStringConcatOrder$MyClass() {
}

$Class* ImplicitStringConcatOrder$MyClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "I", nullptr, 0, $field(ImplicitStringConcatOrder$MyClass, x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcatOrder$MyClass, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcatOrder$MyClass, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcatOrder$MyClass", "ImplicitStringConcatOrder", "MyClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImplicitStringConcatOrder$MyClass",
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
		"ImplicitStringConcatOrder"
	};
	$loadClass(ImplicitStringConcatOrder$MyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatOrder$MyClass);
	});
	return class$;
}

$Class* ImplicitStringConcatOrder$MyClass::class$ = nullptr;