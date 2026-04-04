#include <java/lang/invoke/VarHandleDoubles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleDoubles::init$() {
}

VarHandleDoubles::VarHandleDoubles() {
}

$Class* VarHandleDoubles::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleDoubles, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleDoubles$Array", "java.lang.invoke.VarHandleDoubles", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleDoubles",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleDoubles$Array,java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite,java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly,java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite,java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleDoubles, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleDoubles);
	});
	return class$;
}

$Class* VarHandleDoubles::class$ = nullptr;

		} // invoke
	} // lang
} // java