#include <GenerifyStackTraces.h>

#include <GenerifyStackTraces$DumpThread.h>
#include <GenerifyStackTraces$ThreadOne.h>
#include <java/lang/StackTraceElement.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DONE_DEPTH

using $GenerifyStackTraces$DumpThread = ::GenerifyStackTraces$DumpThread;
using $GenerifyStackTraces$ThreadOne = ::GenerifyStackTraces$ThreadOne;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

$FieldInfo _GenerifyStackTraces_FieldInfo_[] = {
	{"go", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, go)},
	{"methodNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, methodNames)},
	{"DONE_DEPTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, DONE_DEPTH)},
	{"testFailed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, testFailed)},
	{"one", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, one)},
	{"trace", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GenerifyStackTraces, trace)},
	{}
};

$MethodInfo _GenerifyStackTraces_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GenerifyStackTraces, init$, void)},
	{"checkStack", "(Ljava/lang/Thread;[Ljava/lang/StackTraceElement;I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerifyStackTraces, checkStack, void, $Thread*, $StackTraceElementArray*, int32_t), "java.lang.Exception"},
	{"dumpStacks", "(I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GenerifyStackTraces, dumpStacks, void, int32_t), "java.lang.Exception"},
	{"finishDump", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerifyStackTraces, finishDump, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GenerifyStackTraces, main, void, $StringArray*), "java.lang.Exception"},
	{"printStack", "(Ljava/lang/Thread;[Ljava/lang/StackTraceElement;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerifyStackTraces, printStack, void, $Thread*, $StackTraceElementArray*)},
	{"waitForDump", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerifyStackTraces, waitForDump, void)},
	{}
};

$InnerClassInfo _GenerifyStackTraces_InnerClassesInfo_[] = {
	{"GenerifyStackTraces$ThreadOne", "GenerifyStackTraces", "ThreadOne", $STATIC},
	{"GenerifyStackTraces$DumpThread", "GenerifyStackTraces", "DumpThread", $STATIC},
	{}
};

$ClassInfo _GenerifyStackTraces_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GenerifyStackTraces",
	"java.lang.Object",
	nullptr,
	_GenerifyStackTraces_FieldInfo_,
	_GenerifyStackTraces_MethodInfo_,
	nullptr,
	nullptr,
	_GenerifyStackTraces_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GenerifyStackTraces$ThreadOne,GenerifyStackTraces$DumpThread"
};

$Object* allocate$GenerifyStackTraces($Class* clazz) {
	return $of($alloc(GenerifyStackTraces));
}

$Object* GenerifyStackTraces::go = nullptr;
$StringArray* GenerifyStackTraces::methodNames = nullptr;
int32_t GenerifyStackTraces::DONE_DEPTH = 0;
bool GenerifyStackTraces::testFailed = false;
$Thread* GenerifyStackTraces::one = nullptr;
bool GenerifyStackTraces::trace = false;

void GenerifyStackTraces::init$() {
}

void GenerifyStackTraces::main($StringArray* args) {
	$init(GenerifyStackTraces);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length > 0 && $nc(args->get(0))->equals("trace"_s)) {
		GenerifyStackTraces::trace = true;
	}
	$assignStatic(GenerifyStackTraces::one, $new($GenerifyStackTraces$ThreadOne));
	$nc(GenerifyStackTraces::one)->start();
	$var($GenerifyStackTraces$DumpThread, dt, $new($GenerifyStackTraces$DumpThread));
	dt->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(GenerifyStackTraces::one)->join();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			dt->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (GenerifyStackTraces::testFailed) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

void GenerifyStackTraces::waitForDump() {
	$init(GenerifyStackTraces);
	$synchronized(GenerifyStackTraces::go) {
		try {
			$nc($of(GenerifyStackTraces::go))->wait();
		} catch ($Exception& e) {
			$throwNew($RuntimeException, $$str({"Unexpected exception"_s, e}));
		}
	}
}

void GenerifyStackTraces::finishDump() {
	$init(GenerifyStackTraces);
	$synchronized(GenerifyStackTraces::go) {
		try {
			$nc($of(GenerifyStackTraces::go))->notifyAll();
		} catch ($Exception& e) {
			$throwNew($RuntimeException, $$str({"Unexpected exception"_s, e}));
		}
	}
}

void GenerifyStackTraces::dumpStacks(int32_t depth) {
	$init(GenerifyStackTraces);
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElementArray, stack, $nc(GenerifyStackTraces::one)->getStackTrace());
	checkStack(GenerifyStackTraces::one, stack, depth);
	{
		$var($Iterator, i$, $nc($($nc($($Thread::getAllStackTraces()))->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Thread, t, $cast($Thread, $nc(entry)->getKey()));
				$assign(stack, $cast($StackTraceElementArray, entry->getValue()));
				if (t == nullptr || stack == nullptr) {
					$throwNew($RuntimeException, "Null thread or stacktrace returned"_s);
				}
				if (t == GenerifyStackTraces::one) {
					checkStack(t, stack, depth);
				}
			}
		}
	}
}

void GenerifyStackTraces::checkStack($Thread* t, $StackTraceElementArray* stack, int32_t depth) {
	$init(GenerifyStackTraces);
	$useLocalCurrentObjectStackCache();
	if (GenerifyStackTraces::trace) {
		printStack(t, stack);
	}
	int32_t frame = $nc(stack)->length - 1;
	for (int32_t i = 0; i < depth && frame >= 0; ++i) {
		if (!$nc($($nc(stack->get(frame))->getMethodName()))->equals($nc(GenerifyStackTraces::methodNames)->get(i))) {
			$throwNew($RuntimeException, $$str({"Expected "_s, $nc(GenerifyStackTraces::methodNames)->get(i), " in frame "_s, $$str(frame), " but got "_s, $($nc(stack->get(frame))->getMethodName())}));
		}
		--frame;
	}
}

void GenerifyStackTraces::printStack($Thread* t, $StackTraceElementArray* stack) {
	$init(GenerifyStackTraces);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({t, " stack: (length = "_s, $$str($nc(stack)->length), ")"_s}));
	if (t != nullptr) {
		for (int32_t j = 0; j < $nc(stack)->length; ++j) {
			$nc($System::out)->println($of(stack->get(j)));
		}
		$nc($System::out)->println();
	}
}

void clinit$GenerifyStackTraces($Class* class$) {
	$assignStatic(GenerifyStackTraces::go, $new($Object));
	$assignStatic(GenerifyStackTraces::methodNames, $new($StringArray, {
		"run"_s,
		"A"_s,
		"B"_s,
		"C"_s,
		"Done"_s
	}));
	GenerifyStackTraces::DONE_DEPTH = 5;
	GenerifyStackTraces::testFailed = false;
	GenerifyStackTraces::trace = false;
}

GenerifyStackTraces::GenerifyStackTraces() {
}

$Class* GenerifyStackTraces::load$($String* name, bool initialize) {
	$loadClass(GenerifyStackTraces, name, initialize, &_GenerifyStackTraces_ClassInfo_, clinit$GenerifyStackTraces, allocate$GenerifyStackTraces);
	return class$;
}

$Class* GenerifyStackTraces::class$ = nullptr;