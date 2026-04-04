#include <java/lang/invoke/VarHandles$1.h>
#include <java/lang/ClassValue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandles$1::init$() {
	$ClassValue::init$();
}

$Object* VarHandles$1::computeValue($Class* type) {
	return $of($new($ConcurrentHashMap));
}

VarHandles$1::VarHandles$1() {
}

$Class* VarHandles$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandles$1, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/util/concurrent/ConcurrentMap;", "(Ljava/lang/Class<*>;)Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Integer;Ljava/lang/invoke/MethodHandle;>;", $PROTECTED, $virtualMethod(VarHandles$1, computeValue, $Object*, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.VarHandles",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandles$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandles$1",
		"java.lang.ClassValue",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ClassValue<Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Integer;Ljava/lang/invoke/MethodHandle;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandles"
	};
	$loadClass(VarHandles$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandles$1);
	});
	return class$;
}

$Class* VarHandles$1::class$ = nullptr;

		} // invoke
	} // lang
} // java