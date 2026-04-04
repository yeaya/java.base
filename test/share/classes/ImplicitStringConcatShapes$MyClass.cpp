#include <ImplicitStringConcatShapes$MyClass.h>
#include <ImplicitStringConcatShapes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcatShapes$MyClass::init$(int32_t i) {
	this->i = i;
}

$String* ImplicitStringConcatShapes$MyClass::toString() {
	return $$new($StringBuilder, "C("_s)->append(this->i)->append(")"_s)->toString();
}

ImplicitStringConcatShapes$MyClass::ImplicitStringConcatShapes$MyClass() {
}

$Class* ImplicitStringConcatShapes$MyClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "I", nullptr, $PRIVATE | $FINAL, $field(ImplicitStringConcatShapes$MyClass, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ImplicitStringConcatShapes$MyClass, init$, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcatShapes$MyClass, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcatShapes$MyClass", "ImplicitStringConcatShapes", "MyClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImplicitStringConcatShapes$MyClass",
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
		"ImplicitStringConcatShapes"
	};
	$loadClass(ImplicitStringConcatShapes$MyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatShapes$MyClass);
	});
	return class$;
}

$Class* ImplicitStringConcatShapes$MyClass::class$ = nullptr;