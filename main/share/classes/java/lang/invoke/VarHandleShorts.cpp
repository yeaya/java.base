#include <java/lang/invoke/VarHandleShorts.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleShorts::init$() {
}

VarHandleShorts::VarHandleShorts() {
}

$Class* VarHandleShorts::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleShorts, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleShorts$Array", "java.lang.invoke.VarHandleShorts", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite", "java.lang.invoke.VarHandleShorts", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleShorts",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleShorts$Array,java.lang.invoke.VarHandleShorts$FieldStaticReadWrite,java.lang.invoke.VarHandleShorts$FieldStaticReadOnly,java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite,java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleShorts, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleShorts);
	});
	return class$;
}

$Class* VarHandleShorts::class$ = nullptr;

		} // invoke
	} // lang
} // java