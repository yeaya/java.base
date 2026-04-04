#include <Identity$2.h>
#include <Identity$2$1.h>
#include <Identity.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $Identity$2$1 = ::Identity$2$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void Identity$2::init$(int32_t val$groupId) {
	this->val$groupId = val$groupId;
}

$Thread* Identity$2::newThread($Runnable* r) {
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $$new($Identity$2$1, this, r)));
	t->setDaemon(true);
	return t;
}

Identity$2::Identity$2() {
}

$Class* Identity$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$groupId", "I", nullptr, $FINAL | $SYNTHETIC, $field(Identity$2, val$groupId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(Identity$2, init$, void, int32_t)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(Identity$2, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Identity",
		"createThreadFactory",
		"(I)Ljava/util/concurrent/ThreadFactory;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Identity$2", nullptr, nullptr, 0},
		{"Identity$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Identity$2",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Identity"
	};
	$loadClass(Identity$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Identity$2);
	});
	return class$;
}

$Class* Identity$2::class$ = nullptr;