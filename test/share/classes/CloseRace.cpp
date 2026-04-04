#include <CloseRace.h>
#include <CloseRace$ExecLoop.h>
#include <CloseRace$OpenLoop.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/Runtime.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef BIG_FILE

using $CloseRace$ExecLoop = ::CloseRace$ExecLoop;
using $CloseRace$OpenLoop = ::CloseRace$OpenLoop;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

class CloseRace$$Lambda$lambda$main$0 : public $Thread$UncaughtExceptionHandler {
	$class(CloseRace$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		CloseRace::lambda$main$0(t, e);
	}
};
$Class* CloseRace$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseRace$$Lambda$lambda$main$0, init$, void)},
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(CloseRace$$Lambda$lambda$main$0, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CloseRace$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Thread$UncaughtExceptionHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(CloseRace$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseRace$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* CloseRace$$Lambda$lambda$main$0::class$ = nullptr;

$String* CloseRace::BIG_FILE = nullptr;
$ints* CloseRace::procFDs = nullptr;
int32_t CloseRace::testDurationSeconds = 0;
$CountDownLatch* CloseRace::threadsStarted = nullptr;

void CloseRace::init$() {
}

bool CloseRace::fdInUse(int32_t i) {
	$init(CloseRace);
	$useLocalObjectStack();
	return $$new($File, $$str({"/proc/self/fd/"_s, $$str(i)}))->exists();
}

$booleans* CloseRace::procFDsInUse() {
	$init(CloseRace);
	$var($booleans, inUse, $new($booleans, CloseRace::procFDs->length));
	for (int32_t i = 0; i < CloseRace::procFDs->length; ++i) {
		inUse->set(i, fdInUse(CloseRace::procFDs->get(i)));
	}
	return inUse;
}

int32_t CloseRace::count($booleans* bits) {
	$init(CloseRace);
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(bits)->length; ++i) {
		count += bits->get(i) ? 1 : 0;
	}
	return count;
}

void CloseRace::dumpAllStacks() {
	$init(CloseRace);
	$useLocalObjectStack();
	$nc($System::err)->println("Start of dump"_s);
	$var($Map, allStackTraces, $Thread::getAllStackTraces());
	{
		$var($Iterator, i$, $$nc($nc(allStackTraces)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Thread, thread, $cast($Thread, i$->next()));
			{
				$System::err->println($$str({"Thread "_s, $($nc(thread)->getName())}));
				{
					$var($StackTraceElementArray, arr$, $cast($StackTraceElementArray, allStackTraces->get(thread)));
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($StackTraceElement, element, arr$->get(i$));
						$System::err->println($$str({"\t"_s, element}));
					}
				}
			}
		}
	}
	$System::err->println("End of dump"_s);
}

void CloseRace::main($StringArray* args) {
	$init(CloseRace);
	$useLocalObjectStack();
	if (!($$new($File, "/proc/self/fd"_s)->isDirectory())) {
		return;
	}
	$Thread::setDefaultUncaughtExceptionHandler($$new(CloseRace$$Lambda$lambda$main$0));
	{
		$var($RandomAccessFile, f, $new($RandomAccessFile, CloseRace::BIG_FILE, "rw"_s));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				f->setLength($$nc($Runtime::getRuntime())->maxMemory());
			} catch ($Throwable& t$) {
				try {
					f->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			f->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	for (int32_t i = 0, j = 0; j < CloseRace::procFDs->length; ++i) {
		if (!fdInUse(i)) {
			CloseRace::procFDs->set(j++, i);
		}
	}
	$var($ThreadArray, threads, $new($ThreadArray, {
		$$new($Thread, $$new($CloseRace$OpenLoop)),
		$$new($Thread, $$new($CloseRace$ExecLoop))
	}));
	{
		$var($ThreadArray, arr$, threads);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Thread, thread, arr$->get(i$));
			$nc(thread)->start();
		}
	}
	CloseRace::threadsStarted->await();
	$Thread::sleep(CloseRace::testDurationSeconds * 1000);
	{
		$var($ThreadArray, arr$, threads);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Thread, thread, arr$->get(i$));
			$nc(thread)->interrupt();
		}
	}
	{
		$var($ThreadArray, arr$, threads);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Thread, thread, arr$->get(i$));
			{
				$nc(thread)->join(10000);
				if (thread->isAlive()) {
					dumpAllStacks();
					$throwNew($Error, $$str({"At least one child thread ("_s, $(thread->getName()), ") failed to finish gracefully"_s}));
				}
			}
		}
	}
}

void CloseRace::lambda$main$0($Thread* t, $Throwable* e) {
	$init(CloseRace);
	$nc(e)->printStackTrace();
	$System::exit(1);
}

void CloseRace::clinit$($Class* clazz) {
	$assignStatic(CloseRace::BIG_FILE, "bigfile"_s);
	$assignStatic(CloseRace::procFDs, $new($ints, 6));
	CloseRace::testDurationSeconds = $$nc($Integer::getInteger("test.duration"_s, 3))->intValue();
	$assignStatic(CloseRace::threadsStarted, $new($CountDownLatch, 2));
}

CloseRace::CloseRace() {
}

$Class* CloseRace::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("CloseRace$$Lambda$lambda$main$0")) {
			return CloseRace$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"BIG_FILE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, BIG_FILE)},
		{"procFDs", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, procFDs)},
		{"testDurationSeconds", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, testDurationSeconds)},
		{"threadsStarted", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, threadsStarted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseRace, init$, void)},
		{"count", "([Z)I", nullptr, $STATIC, $staticMethod(CloseRace, count, int32_t, $booleans*)},
		{"dumpAllStacks", "()V", nullptr, $STATIC, $staticMethod(CloseRace, dumpAllStacks, void)},
		{"fdInUse", "(I)Z", nullptr, $STATIC, $staticMethod(CloseRace, fdInUse, bool, int32_t)},
		{"lambda$main$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CloseRace, lambda$main$0, void, $Thread*, $Throwable*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseRace, main, void, $StringArray*), "java.lang.Exception"},
		{"procFDsInUse", "()[Z", nullptr, $STATIC, $staticMethod(CloseRace, procFDsInUse, $booleans*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseRace$ExecLoop", "CloseRace", "ExecLoop", $STATIC},
		{"CloseRace$OpenLoop", "CloseRace", "OpenLoop", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseRace",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CloseRace$ExecLoop,CloseRace$OpenLoop"
	};
	$loadClass(CloseRace, name, initialize, &classInfo$$, CloseRace::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CloseRace);
	});
	return class$;
}

$Class* CloseRace::class$ = nullptr;