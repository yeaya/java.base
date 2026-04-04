#include <java/lang/invoke/VarHandleBytes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleBytes::init$() {
}

VarHandleBytes::VarHandleBytes() {
}

$Class* VarHandleBytes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleBytes, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$Array", "java.lang.invoke.VarHandleBytes", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite", "java.lang.invoke.VarHandleBytes", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBytes",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleBytes$Array,java.lang.invoke.VarHandleBytes$FieldStaticReadWrite,java.lang.invoke.VarHandleBytes$FieldStaticReadOnly,java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite,java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleBytes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes);
	});
	return class$;
}

$Class* VarHandleBytes::class$ = nullptr;

		} // invoke
	} // lang
} // java