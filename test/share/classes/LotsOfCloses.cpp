#include <LotsOfCloses.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/ClosedWatchServiceException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef ENTRY_CREATE
#undef ENTRY_DELETE
#undef RAND

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ClosedWatchServiceException = ::java::nio::file::ClosedWatchServiceException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchEvent = ::java::nio::file::WatchEvent;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $Random = ::java::util::Random;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;

class LotsOfCloses$$Lambda$lambda$newCloserTask$0 : public $Callable {
	$class(LotsOfCloses$$Lambda$lambda$newCloserTask$0, $NO_CLASS_INIT, $Callable)
public:
	void init$($WatchService* watcher) {
		$set(this, watcher, watcher);
	}
	virtual $Object* call() override {
		 return $of(LotsOfCloses::lambda$newCloserTask$0(watcher));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LotsOfCloses$$Lambda$lambda$newCloserTask$0>());
	}
	$WatchService* watcher = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LotsOfCloses$$Lambda$lambda$newCloserTask$0::fieldInfos[2] = {
	{"watcher", "Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $field(LotsOfCloses$$Lambda$lambda$newCloserTask$0, watcher)},
	{}
};
$MethodInfo LotsOfCloses$$Lambda$lambda$newCloserTask$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/WatchService;)V", nullptr, $PUBLIC, $method(static_cast<void(LotsOfCloses$$Lambda$lambda$newCloserTask$0::*)($WatchService*)>(&LotsOfCloses$$Lambda$lambda$newCloserTask$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LotsOfCloses$$Lambda$lambda$newCloserTask$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"LotsOfCloses$$Lambda$lambda$newCloserTask$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* LotsOfCloses$$Lambda$lambda$newCloserTask$0::load$($String* name, bool initialize) {
	$loadClass(LotsOfCloses$$Lambda$lambda$newCloserTask$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LotsOfCloses$$Lambda$lambda$newCloserTask$0::class$ = nullptr;

class LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1 : public $Callable {
	$class(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1, $NO_CLASS_INIT, $Callable)
public:
	void init$($Path* dir, $WatchService* watcher) {
		$set(this, dir, dir);
		$set(this, watcher, watcher);
	}
	virtual $Object* call() override {
		 return $of(LotsOfCloses::lambda$newRegisterTask$1(dir, watcher));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1>());
	}
	$Path* dir = nullptr;
	$WatchService* watcher = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::fieldInfos[3] = {
	{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1, dir)},
	{"watcher", "Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $field(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1, watcher)},
	{}
};
$MethodInfo LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, $PUBLIC, $method(static_cast<void(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::*)($Path*,$WatchService*)>(&LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::load$($String* name, bool initialize) {
	$loadClass(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::class$ = nullptr;

$FieldInfo _LotsOfCloses_FieldInfo_[] = {
	{"RAND", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LotsOfCloses, RAND)},
	{}
};

$MethodInfo _LotsOfCloses_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LotsOfCloses::*)()>(&LotsOfCloses::init$))},
	{"lambda$newCloserTask$0", "(Ljava/nio/file/WatchService;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)($WatchService*)>(&LotsOfCloses::lambda$newCloserTask$0)), "java.lang.Exception"},
	{"lambda$newRegisterTask$1", "(Ljava/nio/file/Path;Ljava/nio/file/WatchService;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)($Path*,$WatchService*)>(&LotsOfCloses::lambda$newRegisterTask$1)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LotsOfCloses::main)), "java.lang.Exception"},
	{"newCloserTask", "(Ljava/nio/file/WatchService;)Ljava/util/concurrent/Callable;", "(Ljava/nio/file/WatchService;)Ljava/util/concurrent/Callable<Ljava/lang/Void;>;", $STATIC, $method(static_cast<$Callable*(*)($WatchService*)>(&LotsOfCloses::newCloserTask))},
	{"newRegisterTask", "(Ljava/nio/file/WatchService;Ljava/nio/file/Path;)Ljava/util/concurrent/Callable;", "(Ljava/nio/file/WatchService;Ljava/nio/file/Path;)Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;", $STATIC, $method(static_cast<$Callable*(*)($WatchService*,$Path*)>(&LotsOfCloses::newRegisterTask))},
	{"test", "(Ljava/nio/file/Path;Ljava/util/concurrent/ExecutorService;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*,$ExecutorService*)>(&LotsOfCloses::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _LotsOfCloses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LotsOfCloses",
	"java.lang.Object",
	nullptr,
	_LotsOfCloses_FieldInfo_,
	_LotsOfCloses_MethodInfo_
};

$Object* allocate$LotsOfCloses($Class* clazz) {
	return $of($alloc(LotsOfCloses));
}

$Random* LotsOfCloses::RAND = nullptr;

void LotsOfCloses::init$() {
}

void LotsOfCloses::main($StringArray* args) {
	$init(LotsOfCloses);
	$var($Path, dir, $Files::createTempDirectory("tmp"_s, $$new($FileAttributeArray, 0)));
	$var($ExecutorService, pool, $Executors::newCachedThreadPool());
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t start = $System::currentTimeMillis();
			while (($System::currentTimeMillis() - start) < 5000) {
				test(dir, pool);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(pool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LotsOfCloses::test($Path* dir, $ExecutorService* pool) {
	$init(LotsOfCloses);
	$var($WatchService, watcher, $nc($($FileSystems::getDefault()))->newWatchService());
	$init($StandardWatchEventKinds);
	$nc(dir)->register$(watcher, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_CREATE}));
	$var($Future, closeResult, nullptr);
	$var($Future, registerResult, nullptr);
	if ($nc(LotsOfCloses::RAND)->nextBoolean()) {
		$assign(closeResult, $nc(pool)->submit($(newCloserTask(watcher))));
		$assign(registerResult, pool->submit($(newRegisterTask(watcher, dir))));
	} else {
		$assign(registerResult, $nc(pool)->submit($(newRegisterTask(watcher, dir))));
		$assign(closeResult, pool->submit($(newCloserTask(watcher))));
	}
	$nc(closeResult)->get();
	$nc(registerResult)->get();
}

$Callable* LotsOfCloses::newCloserTask($WatchService* watcher) {
	$init(LotsOfCloses);
	return static_cast<$Callable*>($new(LotsOfCloses$$Lambda$lambda$newCloserTask$0, watcher));
}

$Callable* LotsOfCloses::newRegisterTask($WatchService* watcher, $Path* dir) {
	$init(LotsOfCloses);
	return static_cast<$Callable*>($new(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1, dir, watcher));
}

$Boolean* LotsOfCloses::lambda$newRegisterTask$1($Path* dir, $WatchService* watcher) {
	$init(LotsOfCloses);
	try {
		$init($StandardWatchEventKinds);
		$nc(dir)->register$(watcher, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_DELETE}));
		return $Boolean::valueOf(true);
	} catch ($ClosedWatchServiceException&) {
		$var($ClosedWatchServiceException, e, $catch());
		return $Boolean::valueOf(false);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($UncheckedIOException, ioe);
	}
	$shouldNotReachHere();
}

$Void* LotsOfCloses::lambda$newCloserTask$0($WatchService* watcher) {
	$init(LotsOfCloses);
	try {
		$nc(watcher)->close();
		return nullptr;
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($UncheckedIOException, ioe);
	}
	$shouldNotReachHere();
}

void clinit$LotsOfCloses($Class* class$) {
	$assignStatic(LotsOfCloses::RAND, $new($Random));
}

LotsOfCloses::LotsOfCloses() {
}

$Class* LotsOfCloses::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LotsOfCloses$$Lambda$lambda$newCloserTask$0::classInfo$.name)) {
			return LotsOfCloses$$Lambda$lambda$newCloserTask$0::load$(name, initialize);
		}
		if (name->equals(LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::classInfo$.name)) {
			return LotsOfCloses$$Lambda$lambda$newRegisterTask$1$1::load$(name, initialize);
		}
	}
	$loadClass(LotsOfCloses, name, initialize, &_LotsOfCloses_ClassInfo_, clinit$LotsOfCloses, allocate$LotsOfCloses);
	return class$;
}

$Class* LotsOfCloses::class$ = nullptr;