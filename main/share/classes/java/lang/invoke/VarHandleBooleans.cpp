#include <java/lang/invoke/VarHandleBooleans.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleBooleans::init$() {
}

VarHandleBooleans::VarHandleBooleans() {
}

$Class* VarHandleBooleans::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleBooleans, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBooleans$Array", "java.lang.invoke.VarHandleBooleans", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBooleans",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleBooleans$Array,java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite,java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly,java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite,java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleBooleans, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBooleans);
	});
	return class$;
}

$Class* VarHandleBooleans::class$ = nullptr;

		} // invoke
	} // lang
} // java