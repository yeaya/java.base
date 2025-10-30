#include <CloseRace.h>

#include <CloseRace$ExecLoop.h>
#include <CloseRace$OpenLoop.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
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
using $ThreadArray = $Array<::java::lang::Thread>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

class CloseRace$$Lambda$lambda$main$0 : public $Thread$UncaughtExceptionHandler {
	$class(CloseRace$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		CloseRace::lambda$main$0(t, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CloseRace$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CloseRace$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseRace$$Lambda$lambda$main$0::*)()>(&CloseRace$$Lambda$lambda$main$0::init$))},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CloseRace$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"CloseRace$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	methodInfos
};
$Class* CloseRace$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(CloseRace$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CloseRace$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _CloseRace_FieldInfo_[] = {
	{"BIG_FILE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, BIG_FILE)},
	{"procFDs", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, procFDs)},
	{"testDurationSeconds", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, testDurationSeconds)},
	{"threadsStarted", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseRace, threadsStarted)},
	{}
};

$MethodInfo _CloseRace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseRace::*)()>(&CloseRace::init$))},
	{"count", "([Z)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($booleans*)>(&CloseRace::count))},
	{"dumpAllStacks", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&CloseRace::dumpAllStacks))},
	{"fdInUse", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&CloseRace::fdInUse))},
	{"lambda$main$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Thread*,$Throwable*)>(&CloseRace::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseRace::main)), "java.lang.Exception"},
	{"procFDsInUse", "()[Z", nullptr, $STATIC, $method(static_cast<$booleans*(*)()>(&CloseRace::procFDsInUse))},
	{}
};

$InnerClassInfo _CloseRace_InnerClassesInfo_[] = {
	{"CloseRace$ExecLoop", "CloseRace", "ExecLoop", $STATIC},
	{"CloseRace$OpenLoop", "CloseRace", "OpenLoop", $STATIC},
	{}
};

$ClassInfo _CloseRace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseRace",
	"java.lang.Object",
	nullptr,
	_CloseRace_FieldInfo_,
	_CloseRace_MethodInfo_,
	nullptr,
	nullptr,
	_CloseRace_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseRace$ExecLoop,CloseRace$OpenLoop"
};

$Object* allocate$CloseRace($Class* clazz) {
	return $of($alloc(CloseRace));
}

$String* CloseRace::BIG_FILE = nullptr;
$ints* CloseRace::procFDs = nullptr;
int32_t CloseRace::testDurationSeconds = 0;
$CountDownLatch* CloseRace::threadsStarted = nullptr;

void CloseRace::init$() {
}

bool CloseRace::fdInUse(int32_t i) {
	$init(CloseRace);
	$useLocalCurrentObjectStackCache();
	return $$new($File, $$str({"/proc/self/fd/"_s, $$str(i)}))->exists();
}

$booleans* CloseRace::procFDsInUse() {
	$init(CloseRace);
	$var($booleans, inUse, $new($booleans, $nc(CloseRace::procFDs)->length));
	for (int32_t i = 0; i < $nc(CloseRace::procFDs)->length; ++i) {
		inUse->set(i, fdInUse($nc(CloseRace::procFDs)->get(i)));
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
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println("Start of dump"_s);
	$var($Map, allStackTraces, $Thread::getAllStackTraces());
	{
		$var($Iterator, i$, $nc($($nc(allStackTraces)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Thread, thread, $cast($Thread, i$->next()));
			{
				$nc($System::err)->println($$str({"Thread "_s, $($nc(thread)->getName())}));
				{
					$var($StackTraceElementArray, arr$, $cast($StackTraceElementArray, allStackTraces->get(thread)));
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($StackTraceElement, element, arr$->get(i$));
						$nc($System::err)->println($$str({"\t"_s, element}));
					}
				}
			}
		}
	}
	$nc($System::err)->println("End of dump"_s);
}

void CloseRace::main($StringArray* args) {
	$init(CloseRace);
	$useLocalCurrentObjectStackCache();
	if (!($$new($File, "/proc/self/fd"_s)->isDirectory())) {
		return;
	}
	$Thread::setDefaultUncaughtExceptionHandler(static_cast<$Thread$UncaughtExceptionHandler*>($$new(CloseRace$$Lambda$lambda$main$0)));
	{
		$var($RandomAccessFile, f, $new($RandomAccessFile, CloseRace::BIG_FILE, "rw"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					f->setLength($nc($($Runtime::getRuntime()))->maxMemory());
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
	}
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; j < $nc(CloseRace::procFDs)->length; ++i) {
			if (!fdInUse(i)) {
				$nc(CloseRace::procFDs)->set(j++, i);
			}
		}
	}
	$var($ThreadArray, threads, $new($ThreadArray, {
		$$new($Thread, static_cast<$Runnable*>($$new($CloseRace$OpenLoop))),
		$$new($Thread, static_cast<$Runnable*>($$new($CloseRace$ExecLoop)))
	}));
	{
		$var($ThreadArray, arr$, threads);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Thread, thread, arr$->get(i$));
			$nc(thread)->start();
		}
	}
	$nc(CloseRace::threadsStarted)->await();
	$Thread::sleep(CloseRace::testDurationSeconds * 1000);
	{
		$var($ThreadArray, arr$, threads);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Thread, thread, arr$->get(i$));
			$nc(thread)->interrupt();
		}
	}
	{
		$var($ThreadArray, arr$, threads);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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

void clinit$CloseRace($Class* class$) {
	$assignStatic(CloseRace::BIG_FILE, "bigfile"_s);
	$assignStatic(CloseRace::procFDs, $new($ints, 6));
	CloseRace::testDurationSeconds = $nc($($Integer::getInteger("test.duration"_s, 3)))->intValue();
	$assignStatic(CloseRace::threadsStarted, $new($CountDownLatch, 2));
}

CloseRace::CloseRace() {
}

$Class* CloseRace::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CloseRace$$Lambda$lambda$main$0::classInfo$.name)) {
			return CloseRace$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(CloseRace, name, initialize, &_CloseRace_ClassInfo_, clinit$CloseRace, allocate$CloseRace);
	return class$;
}

$Class* CloseRace::class$ = nullptr;