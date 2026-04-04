#include <DieBeforeComplete$Task.h>
#include <DieBeforeComplete.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Future = ::java::util::concurrent::Future;

$Class* DieBeforeComplete$Task::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DieBeforeComplete$Task, run, $Future*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DieBeforeComplete$Task",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DieBeforeComplete"
	};
	$loadClass(DieBeforeComplete$Task, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DieBeforeComplete$Task);
	});
	return class$;
}

$Class* DieBeforeComplete$Task::class$ = nullptr;