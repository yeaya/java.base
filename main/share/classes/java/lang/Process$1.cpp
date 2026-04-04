#include <java/lang/Process$1.h>
#include <java/lang/Process.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;

namespace java {
	namespace lang {

void Process$1::init$($Process* this$0) {
	$set(this, this$0, this$0);
}

bool Process$1::block() {
	this->this$0->waitFor();
	return true;
}

bool Process$1::isReleasable() {
	return !this->this$0->isAlive();
}

Process$1::Process$1() {
}

$Class* Process$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/Process;", nullptr, $FINAL | $SYNTHETIC, $field(Process$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Process;)V", nullptr, 0, $method(Process$1, init$, void, $Process*)},
		{"block", "()Z", nullptr, $PUBLIC, $virtualMethod(Process$1, block, bool), "java.lang.InterruptedException"},
		{"isReleasable", "()Z", nullptr, $PUBLIC, $virtualMethod(Process$1, isReleasable, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Process",
		"waitForInternal",
		"()Ljava/lang/Process;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Process$1", nullptr, nullptr, 0},
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Process$1",
		"java.lang.Object",
		"java.util.concurrent.ForkJoinPool$ManagedBlocker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Process"
	};
	$loadClass(Process$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Process$1);
	});
	return class$;
}

$Class* Process$1::class$ = nullptr;

	} // lang
} // java