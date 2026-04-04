#include <LotsOfCancels4WatchService.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/ClosedWatchServiceException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/List.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef ENTRY_CREATE
#undef ENTRY_DELETE
#undef MINUTES

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ClosedWatchServiceException = ::java::nio::file::ClosedWatchServiceException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

class LotsOfCancels4WatchService$$Lambda$lambda$main$0 : public $Runnable {
	$class(LotsOfCancels4WatchService$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int32_t id, $Path* dir, $WatchService* watcher) {
		this->id = id;
		$set(this, dir, dir);
		$set(this, watcher, watcher);
	}
	virtual void run() override {
		LotsOfCancels4WatchService::lambda$main$0(id, dir, watcher);
	}
	int32_t id = 0;
	$Path* dir = nullptr;
	$WatchService* watcher = nullptr;
};
$Class* LotsOfCancels4WatchService$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"id", "I", nullptr, $PUBLIC, $field(LotsOfCancels4WatchService$$Lambda$lambda$main$0, id)},
		{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(LotsOfCancels4WatchService$$Lambda$lambda$main$0, dir)},
		{"watcher", "Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $field(LotsOfCancels4WatchService$$Lambda$lambda$main$0, watcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, $PUBLIC, $method(LotsOfCancels4WatchService$$Lambda$lambda$main$0, init$, void, int32_t, $Path*, $WatchService*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LotsOfCancels4WatchService$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LotsOfCancels4WatchService$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LotsOfCancels4WatchService$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfCancels4WatchService$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* LotsOfCancels4WatchService$$Lambda$lambda$main$0::class$ = nullptr;

class LotsOfCancels4WatchService$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int32_t id, $WatchService* watcher) {
		this->id = id;
		$set(this, watcher, watcher);
	}
	virtual void run() override {
		LotsOfCancels4WatchService::lambda$main$1(id, watcher);
	}
	int32_t id = 0;
	$WatchService* watcher = nullptr;
};
$Class* LotsOfCancels4WatchService$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"id", "I", nullptr, $PUBLIC, $field(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, id)},
		{"watcher", "Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $field(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, watcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/nio/file/WatchService;)V", nullptr, $PUBLIC, $method(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, init$, void, int32_t, $WatchService*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LotsOfCancels4WatchService$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* LotsOfCancels4WatchService$$Lambda$lambda$main$1$1::class$ = nullptr;

$volatile(bool) LotsOfCancels4WatchService::failed = false;

void LotsOfCancels4WatchService::init$() {
}

void LotsOfCancels4WatchService::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ExecutorService, pool, $Executors::newCachedThreadPool());
	$var($Throwable, var$0, nullptr);
	try {
		$var($Path, testDir, $Paths::get($($System::getProperty("test.dir"_s, "."_s)), $$new($StringArray, 0)));
		$var($Path, top, $Files::createTempDirectory(testDir, "LotsOfCancels"_s, $$new($FileAttributeArray, 0)));
		for (int32_t i = 1; i <= 16; ++i) {
			int32_t id = i;
			$var($Path, dir, $Files::createDirectory($($nc(top)->resolve($$str({"dir-"_s, $$str(i)}))), $$new($FileAttributeArray, 0)));
			$var($WatchService, watcher, $$nc($FileSystems::getDefault())->newWatchService());
			$nc(pool)->submit($$new(LotsOfCancels4WatchService$$Lambda$lambda$main$0, id, dir, watcher));
			pool->submit($$new(LotsOfCancels4WatchService$$Lambda$lambda$main$1$1, id, watcher));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(pool)->shutdown();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$init($TimeUnit);
	if (!$nc(pool)->awaitTermination(5, $TimeUnit::MINUTES)) {
		$throwNew($RuntimeException, "Thread pool did not terminate"_s);
	}
	$init(LotsOfCancels4WatchService);
	if (LotsOfCancels4WatchService::failed) {
		$throwNew($RuntimeException, "Test failed, see log for details"_s);
	}
}

void LotsOfCancels4WatchService::handle(int32_t id, $Path* dir, $WatchService* watcher) {
	$useLocalObjectStack();
	$nc($System::out)->printf("begin handle %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
	try {
		$var($Throwable, var$0, nullptr);
		try {
			$var($Path, file, $nc(dir)->resolve("anyfile"_s));
			for (int32_t i = 0; i < 2000; ++i) {
				$init($StandardWatchEventKinds);
				$var($WatchKey, key, dir->register$(watcher, $$new($WatchEvent$KindArray, {
					$StandardWatchEventKinds::ENTRY_CREATE,
					$StandardWatchEventKinds::ENTRY_DELETE
				})));
				$Files::createFile(file, $$new($FileAttributeArray, 0));
				$Files::delete$(file);
				$nc(key)->cancel();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$System::out->printf("WatchService %d closing ...%n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
			$nc(watcher)->close();
			$System::out->printf("WatchService %d closed %n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($Exception& e) {
		e->printStackTrace();
		$init(LotsOfCancels4WatchService);
		LotsOfCancels4WatchService::failed = true;
	}
	$System::out->printf("end handle %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
}

void LotsOfCancels4WatchService::poll(int32_t id, $WatchService* watcher) {
	$useLocalObjectStack();
	$nc($System::out)->printf("begin poll %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
	try {
		for (;;) {
			$var($WatchKey, key, $nc(watcher)->take());
			if (key != nullptr) {
				key->pollEvents();
				key->reset();
			}
		}
	} catch ($ClosedWatchServiceException& expected) {
		$System::out->printf("poll %d expected exception %s%n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(id)),
			expected
		}));
	} catch ($Exception& e) {
		e->printStackTrace();
		$init(LotsOfCancels4WatchService);
		LotsOfCancels4WatchService::failed = true;
	}
	$System::out->printf("end poll %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(id))}));
}

void LotsOfCancels4WatchService::lambda$main$1(int32_t id, $WatchService* watcher) {
	poll(id, watcher);
}

void LotsOfCancels4WatchService::lambda$main$0(int32_t id, $Path* dir, $WatchService* watcher) {
	handle(id, dir, watcher);
}

LotsOfCancels4WatchService::LotsOfCancels4WatchService() {
}

$Class* LotsOfCancels4WatchService::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("LotsOfCancels4WatchService$$Lambda$lambda$main$0")) {
			return LotsOfCancels4WatchService$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("LotsOfCancels4WatchService$$Lambda$lambda$main$1$1")) {
			return LotsOfCancels4WatchService$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(LotsOfCancels4WatchService, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LotsOfCancels4WatchService, init$, void)},
		{"handle", "(ILjava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, $STATIC, $staticMethod(LotsOfCancels4WatchService, handle, void, int32_t, $Path*, $WatchService*)},
		{"lambda$main$0", "(ILjava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LotsOfCancels4WatchService, lambda$main$0, void, int32_t, $Path*, $WatchService*)},
		{"lambda$main$1", "(ILjava/nio/file/WatchService;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LotsOfCancels4WatchService, lambda$main$1, void, int32_t, $WatchService*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LotsOfCancels4WatchService, main, void, $StringArray*), "java.lang.Exception"},
		{"poll", "(ILjava/nio/file/WatchService;)V", nullptr, $STATIC, $staticMethod(LotsOfCancels4WatchService, poll, void, int32_t, $WatchService*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LotsOfCancels4WatchService",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LotsOfCancels4WatchService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfCancels4WatchService);
	});
	return class$;
}

$Class* LotsOfCancels4WatchService::class$ = nullptr;