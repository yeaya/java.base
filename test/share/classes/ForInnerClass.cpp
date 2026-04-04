#include <ForInnerClass.h>
#include <ForInnerClass$Inner.h>
#include <ForInnerClass$Protected.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

#undef PRIVATE
#undef PROTECTED
#undef SYNCHRONIZED

using $ForInnerClass$Inner = ::ForInnerClass$Inner;
using $ForInnerClass$Protected = ::ForInnerClass$Protected;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

void ForInnerClass::init$() {
}

void ForInnerClass::main($StringArray* args) {
	int32_t m = 0;
	$load($ForInnerClass$Inner);
	m = $ForInnerClass$Inner::class$->getModifiers() & (~$Modifier::SYNCHRONIZED);
	if (m != $Modifier::PRIVATE) {
		$throwNew($Exception, "Access bits for innerclass not from InnerClasses attribute"_s);
	}
	$load($ForInnerClass$Protected);
	m = $ForInnerClass$Protected::class$->getModifiers() & (~$Modifier::SYNCHRONIZED);
	if (m != $Modifier::PROTECTED) {
		$throwNew($Exception, "Protected inner class wronged modifiers"_s);
	}
}

ForInnerClass::ForInnerClass() {
}

$Class* ForInnerClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ForInnerClass, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ForInnerClass, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ForInnerClass$Protected", "ForInnerClass", "Protected", $PROTECTED},
		{"ForInnerClass$Inner", "ForInnerClass", "Inner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ForInnerClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ForInnerClass$Protected,ForInnerClass$Inner"
	};
	$loadClass(ForInnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForInnerClass);
	});
	return class$;
}

$Class* ForInnerClass::class$ = nullptr;