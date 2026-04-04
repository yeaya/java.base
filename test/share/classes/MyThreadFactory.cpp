#include <MyThreadFactory.h>
#include <java/lang/Runnable.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

$Set* MyThreadFactory::threads = nullptr;

bool MyThreadFactory::created($Thread* t) {
	$init(MyThreadFactory);
	$synchronized(MyThreadFactory::threads) {
		return MyThreadFactory::threads->contains(t);
	}
}

void MyThreadFactory::init$() {
}

$Thread* MyThreadFactory::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, r));
	t->setDaemon(true);
	$synchronized(MyThreadFactory::threads) {
		MyThreadFactory::threads->add(t);
	}
	return t;
}

void MyThreadFactory::clinit$($Class* clazz) {
	$assignStatic(MyThreadFactory::threads, $new($HashSet));
}

MyThreadFactory::MyThreadFactory() {
}

$Class* MyThreadFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"threads", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Thread;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MyThreadFactory, threads)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MyThreadFactory, init$, void)},
		{"created", "(Ljava/lang/Thread;)Z", nullptr, $STATIC, $staticMethod(MyThreadFactory, created, bool, $Thread*)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(MyThreadFactory, newThread, $Thread*, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MyThreadFactory",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyThreadFactory, name, initialize, &classInfo$$, MyThreadFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MyThreadFactory);
	});
	return class$;
}

$Class* MyThreadFactory::class$ = nullptr;