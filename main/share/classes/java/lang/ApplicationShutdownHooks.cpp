#include <java/lang/ApplicationShutdownHooks.h>
#include <java/lang/ApplicationShutdownHooks$1.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Shutdown.h>
#include <java/util/Collection.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ApplicationShutdownHooks$1 = ::java::lang::ApplicationShutdownHooks$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Shutdown = ::java::lang::Shutdown;
using $Collection = ::java::util::Collection;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace lang {

$IdentityHashMap* ApplicationShutdownHooks::hooks = nullptr;

void ApplicationShutdownHooks::init$() {
}

void ApplicationShutdownHooks::add($Thread* hook) {
	$init(ApplicationShutdownHooks);
	$synchronized(class$) {
		if (ApplicationShutdownHooks::hooks == nullptr) {
			$throwNew($IllegalStateException, "Shutdown in progress"_s);
		}
		if ($nc(hook)->isAlive()) {
			$throwNew($IllegalArgumentException, "Hook already running"_s);
		}
		if ($nc(ApplicationShutdownHooks::hooks)->containsKey(hook)) {
			$throwNew($IllegalArgumentException, "Hook previously registered"_s);
		}
		ApplicationShutdownHooks::hooks->put(hook, hook);
	}
}

bool ApplicationShutdownHooks::remove($Thread* hook) {
	$init(ApplicationShutdownHooks);
	$synchronized(class$) {
		if (ApplicationShutdownHooks::hooks == nullptr) {
			$throwNew($IllegalStateException, "Shutdown in progress"_s);
		}
		if (hook == nullptr) {
			$throwNew($NullPointerException);
		}
		return $nc(ApplicationShutdownHooks::hooks)->remove(hook) != nullptr;
	}
}

void ApplicationShutdownHooks::runHooks() {
	$init(ApplicationShutdownHooks);
	$useLocalObjectStack();
	$var($Collection, threads, nullptr);
	$synchronized(ApplicationShutdownHooks::class$) {
		$assign(threads, $nc(ApplicationShutdownHooks::hooks)->keySet());
		$assignStatic(ApplicationShutdownHooks::hooks, nullptr);
	}
	{
		$var($Iterator, i$, $nc(threads)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Thread, hook, $cast($Thread, i$->next()));
			{
				$nc(hook)->start();
			}
		}
	}
	{
		$var($Iterator, i$, threads->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Thread, hook, $cast($Thread, i$->next()));
			while (true) {
				try {
					$nc(hook)->join();
					break;
				} catch ($InterruptedException& ignored) {
				}
			}
		}
	}
}

void ApplicationShutdownHooks::clinit$($Class* clazz) {
	{
		try {
			$Shutdown::add(1, false, $$new($ApplicationShutdownHooks$1));
			$assignStatic(ApplicationShutdownHooks::hooks, $new($IdentityHashMap));
		} catch ($IllegalStateException& e) {
			$assignStatic(ApplicationShutdownHooks::hooks, nullptr);
		}
	}
}

ApplicationShutdownHooks::ApplicationShutdownHooks() {
}

$Class* ApplicationShutdownHooks::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hooks", "Ljava/util/IdentityHashMap;", "Ljava/util/IdentityHashMap<Ljava/lang/Thread;Ljava/lang/Thread;>;", $PRIVATE | $STATIC, $staticField(ApplicationShutdownHooks, hooks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ApplicationShutdownHooks, init$, void)},
		{"add", "(Ljava/lang/Thread;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(ApplicationShutdownHooks, add, void, $Thread*)},
		{"remove", "(Ljava/lang/Thread;)Z", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(ApplicationShutdownHooks, remove, bool, $Thread*)},
		{"runHooks", "()V", nullptr, $STATIC, $staticMethod(ApplicationShutdownHooks, runHooks, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ApplicationShutdownHooks$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ApplicationShutdownHooks",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ApplicationShutdownHooks$1"
	};
	$loadClass(ApplicationShutdownHooks, name, initialize, &classInfo$$, ApplicationShutdownHooks::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ApplicationShutdownHooks);
	});
	return class$;
}

$Class* ApplicationShutdownHooks::class$ = nullptr;

	} // lang
} // java