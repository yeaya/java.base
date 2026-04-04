#include <GroupOfOne$2.h>
#include <GroupOfOne.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void GroupOfOne$2::init$() {
}

$Thread* GroupOfOne$2::newThread($Runnable* r) {
	return $new($Thread, r);
}

GroupOfOne$2::GroupOfOne$2() {
}

$Class* GroupOfOne$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GroupOfOne$2, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$2, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GroupOfOne",
		"test",
		"(Ljava/net/SocketAddress;ZZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GroupOfOne$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GroupOfOne$2",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GroupOfOne"
	};
	$loadClass(GroupOfOne$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupOfOne$2);
	});
	return class$;
}

$Class* GroupOfOne$2::class$ = nullptr;