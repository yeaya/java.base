#include <java/util/concurrent/SynchronousQueue$Transferer.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void SynchronousQueue$Transferer::init$() {
}

SynchronousQueue$Transferer::SynchronousQueue$Transferer() {
}

$Class* SynchronousQueue$Transferer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$Transferer, init$, void)},
		{"transfer", "(Ljava/lang/Object;ZJ)Ljava/lang/Object;", "(TE;ZJ)TE;", $ABSTRACT, $virtualMethod(SynchronousQueue$Transferer, transfer, $Object*, Object$*, bool, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SynchronousQueue$Transferer", "java.util.concurrent.SynchronousQueue", "Transferer", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.SynchronousQueue$Transferer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.SynchronousQueue"
	};
	$loadClass(SynchronousQueue$Transferer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronousQueue$Transferer);
	});
	return class$;
}

$Class* SynchronousQueue$Transferer::class$ = nullptr;

		} // concurrent
	} // util
} // java