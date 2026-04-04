#include <jdk/internal/misc/InnocuousThread$3.h>
#include <java/lang/ThreadGroup.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace jdk {
	namespace internal {
		namespace misc {

void InnocuousThread$3::init$($ThreadGroup* val$root) {
	$set(this, val$root, val$root);
}

$Object* InnocuousThread$3::run() {
	return $new($ThreadGroup, this->val$root, "InnocuousThreadGroup"_s);
}

InnocuousThread$3::InnocuousThread$3() {
}

$Class* InnocuousThread$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$root", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$3, val$root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;)V", "()V", 0, $method(InnocuousThread$3, init$, void, $ThreadGroup*)},
		{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $virtualMethod(InnocuousThread$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.misc.InnocuousThread",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.InnocuousThread$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.misc.InnocuousThread$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ThreadGroup;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.InnocuousThread"
	};
	$loadClass(InnocuousThread$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InnocuousThread$3);
	});
	return class$;
}

$Class* InnocuousThread$3::class$ = nullptr;

		} // misc
	} // internal
} // jdk