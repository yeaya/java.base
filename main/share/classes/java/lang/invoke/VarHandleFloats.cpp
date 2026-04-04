#include <java/lang/invoke/VarHandleFloats.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleFloats::init$() {
}

VarHandleFloats::VarHandleFloats() {
}

$Class* VarHandleFloats::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleFloats, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleFloats$Array", "java.lang.invoke.VarHandleFloats", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleFloats$FieldStaticReadWrite", "java.lang.invoke.VarHandleFloats", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly", "java.lang.invoke.VarHandleFloats", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleFloats",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleFloats$Array,java.lang.invoke.VarHandleFloats$FieldStaticReadWrite,java.lang.invoke.VarHandleFloats$FieldStaticReadOnly,java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite,java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleFloats, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleFloats);
	});
	return class$;
}

$Class* VarHandleFloats::class$ = nullptr;

		} // invoke
	} // lang
} // java