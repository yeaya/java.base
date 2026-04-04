#include <java/lang/invoke/VarHandleLongs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleLongs::init$() {
}

VarHandleLongs::VarHandleLongs() {
}

$Class* VarHandleLongs::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleLongs, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$Array", "java.lang.invoke.VarHandleLongs", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite", "java.lang.invoke.VarHandleLongs", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleLongs",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleLongs$Array,java.lang.invoke.VarHandleLongs$FieldStaticReadWrite,java.lang.invoke.VarHandleLongs$FieldStaticReadOnly,java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite,java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleLongs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs);
	});
	return class$;
}

$Class* VarHandleLongs::class$ = nullptr;

		} // invoke
	} // lang
} // java