#include <java/lang/invoke/VarHandleChars.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleChars::init$() {
}

VarHandleChars::VarHandleChars() {
}

$Class* VarHandleChars::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleChars, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$Array", "java.lang.invoke.VarHandleChars", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleChars$FieldStaticReadWrite", "java.lang.invoke.VarHandleChars", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite", "java.lang.invoke.VarHandleChars", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleChars",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleChars$Array,java.lang.invoke.VarHandleChars$FieldStaticReadWrite,java.lang.invoke.VarHandleChars$FieldStaticReadOnly,java.lang.invoke.VarHandleChars$FieldInstanceReadWrite,java.lang.invoke.VarHandleChars$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleChars, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars);
	});
	return class$;
}

$Class* VarHandleChars::class$ = nullptr;

		} // invoke
	} // lang
} // java