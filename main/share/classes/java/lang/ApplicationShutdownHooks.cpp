#include <java/lang/ApplicationShutdownHooks.h>

#include <java/lang/ApplicationShutdownHooks$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Shutdown.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Runnable = ::java::lang::Runnable;
using $Shutdown = ::java::lang::Shutdown;
using $Collection = ::java::util::Collection;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ApplicationShutdownHooks_FieldInfo_[] = {
	{"hooks", "Ljava/util/IdentityHashMap;", "Ljava/util/IdentityHashMap<Ljava/lang/Thread;Ljava/lang/Thread;>;", $PRIVATE | $STATIC, $staticField(ApplicationShutdownHooks, hooks)},
	{}
};

$MethodInfo _ApplicationShutdownHooks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ApplicationShutdownHooks::*)()>(&ApplicationShutdownHooks::init$))},
	{"add", "(Ljava/lang/Thread;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Thread*)>(&ApplicationShutdownHooks::add))},
	{"remove", "(Ljava/lang/Thread;)Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)($Thread*)>(&ApplicationShutdownHooks::remove))},
	{"runHooks", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ApplicationShutdownHooks::runHooks))},
	{}
};

$InnerClassInfo _ApplicationShutdownHooks_InnerClassesInfo_[] = {
	{"java.lang.ApplicationShutdownHooks$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ApplicationShutdownHooks_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ApplicationShutdownHooks",
	"java.lang.Object",
	nullptr,
	_ApplicationShutdownHooks_FieldInfo_,
	_ApplicationShutdownHooks_MethodInfo_,
	nullptr,
	nullptr,
	_ApplicationShutdownHooks_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ApplicationShutdownHooks$1"
};

$Object* allocate$ApplicationShutdownHooks($Class* clazz) {
	return $of($alloc(ApplicationShutdownHooks));
}

$IdentityHashMap* ApplicationShutdownHooks::hooks = nullptr;

void ApplicationShutdownHooks::init$() {
}

void ApplicationShutdownHooks::add($Thread* hook) {
	$load(ApplicationShutdownHooks);
	$synchronized(class$) {
		$init(ApplicationShutdownHooks);
		if (ApplicationShutdownHooks::hooks == nullptr) {
			$throwNew($IllegalStateException, "Shutdown in progress"_s);
		}
		if ($nc(hook)->isAlive()) {
			$throwNew($IllegalArgumentException, "Hook already running"_s);
		}
		if ($nc(ApplicationShutdownHooks::hooks)->containsKey(hook)) {
			$throwNew($IllegalArgumentException, "Hook previously registered"_s);
		}
		$nc(ApplicationShutdownHooks::hooks)->put(hook, hook);
	}
}

bool ApplicationShutdownHooks::remove($Thread* hook) {
	$load(ApplicationShutdownHooks);
	$synchronized(class$) {
		$init(ApplicationShutdownHooks);
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
	$useLocalCurrentObjectStackCache();
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
			{
				while (true) {
					try {
						$nc(hook)->join();
						break;
					} catch ($InterruptedException&) {
						$catch();
					}
				}
			}
		}
	}
}

void clinit$ApplicationShutdownHooks($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		try {
			$Shutdown::add(1, false, $$new($ApplicationShutdownHooks$1));
			$assignStatic(ApplicationShutdownHooks::hooks, $new($IdentityHashMap));
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			$assignStatic(ApplicationShutdownHooks::hooks, nullptr);
		}
	}
}

ApplicationShutdownHooks::ApplicationShutdownHooks() {
}

$Class* ApplicationShutdownHooks::load$($String* name, bool initialize) {
	$loadClass(ApplicationShutdownHooks, name, initialize, &_ApplicationShutdownHooks_ClassInfo_, clinit$ApplicationShutdownHooks, allocate$ApplicationShutdownHooks);
	return class$;
}

$Class* ApplicationShutdownHooks::class$ = nullptr;

	} // lang
} // java