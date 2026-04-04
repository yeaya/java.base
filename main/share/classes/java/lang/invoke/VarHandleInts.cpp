#include <java/lang/invoke/VarHandleInts.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleInts::init$() {
}

VarHandleInts::VarHandleInts() {
}

$Class* VarHandleInts::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleInts, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleInts$Array", "java.lang.invoke.VarHandleInts", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleInts$FieldStaticReadWrite", "java.lang.invoke.VarHandleInts", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleInts$FieldStaticReadOnly", "java.lang.invoke.VarHandleInts", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleInts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleInts", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleInts", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleInts",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleInts$Array,java.lang.invoke.VarHandleInts$FieldStaticReadWrite,java.lang.invoke.VarHandleInts$FieldStaticReadOnly,java.lang.invoke.VarHandleInts$FieldInstanceReadWrite,java.lang.invoke.VarHandleInts$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleInts, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleInts);
	});
	return class$;
}

$Class* VarHandleInts::class$ = nullptr;

		} // invoke
	} // lang
} // java