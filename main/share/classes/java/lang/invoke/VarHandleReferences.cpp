#include <java/lang/invoke/VarHandleReferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleReferences::init$() {
}

VarHandleReferences::VarHandleReferences() {
}

$Class* VarHandleReferences::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleReferences, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleReferences$Array", "java.lang.invoke.VarHandleReferences", "Array", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite", "java.lang.invoke.VarHandleReferences", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly", "java.lang.invoke.VarHandleReferences", "FieldStaticReadOnly", $STATIC},
		{"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleReferences",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleReferences$Array,java.lang.invoke.VarHandleReferences$FieldStaticReadWrite,java.lang.invoke.VarHandleReferences$FieldStaticReadOnly,java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite,java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly"
	};
	$loadClass(VarHandleReferences, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleReferences);
	});
	return class$;
}

$Class* VarHandleReferences::class$ = nullptr;

		} // invoke
	} // lang
} // java