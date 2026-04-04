#include <java/lang/invoke/ResolvedMethodName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void ResolvedMethodName::init$() {
}

ResolvedMethodName::ResolvedMethodName() {
}

$Class* ResolvedMethodName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vmtarget", "Ljava/lang/reflect/Executable;", nullptr, 2, $field(ResolvedMethodName, vmtarget)},
		{"vmholder", "Ljava/lang/Class;", nullptr, 2, $field(ResolvedMethodName, vmholder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResolvedMethodName, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.ResolvedMethodName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResolvedMethodName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolvedMethodName);
	});
	return class$;
}

$Class* ResolvedMethodName::class$ = nullptr;

		} // invoke
	} // lang
} // java