#include <ForStaticInnerClass.h>
#include <ForStaticInnerClass$Static.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $ForStaticInnerClass$Static = ::ForStaticInnerClass$Static;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

void ForStaticInnerClass::init$() {
}

void ForStaticInnerClass::main($StringArray* args) {
	$load($ForStaticInnerClass$Static);
	if (!$Modifier::isStatic($ForStaticInnerClass$Static::class$->getModifiers())) {
		$throwNew($Exception, "VM lost static modifier of innerclass."_s);
	}
}

ForStaticInnerClass::ForStaticInnerClass() {
}

$Class* ForStaticInnerClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ForStaticInnerClass, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ForStaticInnerClass, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ForStaticInnerClass$Static", "ForStaticInnerClass", "Static", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ForStaticInnerClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ForStaticInnerClass$Static"
	};
	$loadClass(ForStaticInnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForStaticInnerClass);
	});
	return class$;
}

$Class* ForStaticInnerClass::class$ = nullptr;