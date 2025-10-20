#include <java/lang/Process.h>

#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process$1.h>
#include <java/lang/Process$CharsetHolder.h>
#include <java/lang/ProcessHandle$Info.h>
#include <java/lang/ProcessHandle.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef NANOSECONDS

using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process$1 = ::java::lang::Process$1;
using $Process$CharsetHolder = ::java::lang::Process$CharsetHolder;
using $ProcessHandle = ::java::lang::ProcessHandle;
using $ProcessHandle$Info = ::java::lang::ProcessHandle$Info;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Charset = ::java::nio::charset::Charset;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {

class Process$$Lambda$waitForInternal : public $Supplier {
	$class(Process$$Lambda$waitForInternal, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Process* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->waitForInternal());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Process$$Lambda$waitForInternal>());
	}
	Process* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Process$$Lambda$waitForInternal::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Process$$Lambda$waitForInternal, inst$)},
	{}
};
$MethodInfo Process$$Lambda$waitForInternal::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Process;)V", nullptr, $PUBLIC, $method(static_cast<void(Process$$Lambda$waitForInternal::*)(Process*)>(&Process$$Lambda$waitForInternal::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Process$$Lambda$waitForInternal::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Process$$Lambda$waitForInternal",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Process$$Lambda$waitForInternal::load$($String* name, bool initialize) {
	$loadClass(Process$$Lambda$waitForInternal, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Process$$Lambda$waitForInternal::class$ = nullptr;

$FieldInfo _Process_FieldInfo_[] = {
	{"outputWriter", "Ljava/io/BufferedWriter;", nullptr, $PRIVATE, $field(Process, outputWriter$)},
	{"outputCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $field(Process, outputCharset)},
	{"inputReader", "Ljava/io/BufferedReader;", nullptr, $PRIVATE, $field(Process, inputReader$)},
	{"inputCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $field(Process, inputCharset)},
	{"errorReader", "Ljava/io/BufferedReader;", nullptr, $PRIVATE, $field(Process, errorReader$)},
	{"errorCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $field(Process, errorCharset)},
	{}
};

$MethodInfo _Process_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Process::*)()>(&Process::init$))},
	{"children", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC},
	{"descendants", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC},
	{"destroy", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"destroyForcibly", "()Ljava/lang/Process;", nullptr, $PUBLIC},
	{"errorReader", "()Ljava/io/BufferedReader;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedReader*(Process::*)()>(&Process::errorReader))},
	{"errorReader", "(Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedReader*(Process::*)($Charset*)>(&Process::errorReader))},
	{"exitValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasExited", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Process::*)()>(&Process::hasExited))},
	{"info", "()Ljava/lang/ProcessHandle$Info;", nullptr, $PUBLIC},
	{"inputReader", "()Ljava/io/BufferedReader;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedReader*(Process::*)()>(&Process::inputReader))},
	{"inputReader", "(Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedReader*(Process::*)($Charset*)>(&Process::inputReader))},
	{"isAlive", "()Z", nullptr, $PUBLIC},
	{"onExit", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/lang/Process;>;", $PUBLIC},
	{"outputWriter", "()Ljava/io/BufferedWriter;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedWriter*(Process::*)()>(&Process::outputWriter))},
	{"outputWriter", "(Ljava/nio/charset/Charset;)Ljava/io/BufferedWriter;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$BufferedWriter*(Process::*)($Charset*)>(&Process::outputWriter))},
	{"pid", "()J", nullptr, $PUBLIC},
	{"supportsNormalTermination", "()Z", nullptr, $PUBLIC},
	{"toHandle", "()Ljava/lang/ProcessHandle;", nullptr, $PUBLIC},
	{"waitFor", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"waitFor", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"waitForInternal", "()Ljava/lang/Process;", nullptr, $PRIVATE, $method(static_cast<Process*(Process::*)()>(&Process::waitForInternal))},
	{}
};

$InnerClassInfo _Process_InnerClassesInfo_[] = {
	{"java.lang.Process$CharsetHolder", "java.lang.Process", "CharsetHolder", $PRIVATE | $STATIC},
	{"java.lang.Process$PipeInputStream", "java.lang.Process", "PipeInputStream", $STATIC},
	{"java.lang.Process$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Process_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.Process",
	"java.lang.Object",
	nullptr,
	_Process_FieldInfo_,
	_Process_MethodInfo_,
	nullptr,
	nullptr,
	_Process_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Process$CharsetHolder,java.lang.Process$PipeInputStream,java.lang.Process$1"
};

$Object* allocate$Process($Class* clazz) {
	return $of($alloc(Process));
}

void Process::init$() {
}

$BufferedReader* Process::inputReader() {
	return inputReader($($Process$CharsetHolder::nativeCharset()));
}

$BufferedReader* Process::inputReader($Charset* charset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(charset), "charset"_s);
	$synchronized(this) {
		if (this->inputReader$ == nullptr) {
			$set(this, inputCharset, charset);
			$set(this, inputReader$, $new($BufferedReader, $$new($InputStreamReader, $(getInputStream()), charset)));
		} else if (!$nc(this->inputCharset)->equals(charset)) {
			$throwNew($IllegalStateException, $$str({"BufferedReader was created with charset: "_s, this->inputCharset}));
		}
		return this->inputReader$;
	}
}

$BufferedReader* Process::errorReader() {
	return errorReader($($Process$CharsetHolder::nativeCharset()));
}

$BufferedReader* Process::errorReader($Charset* charset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(charset), "charset"_s);
	$synchronized(this) {
		if (this->errorReader$ == nullptr) {
			$set(this, errorCharset, charset);
			$set(this, errorReader$, $new($BufferedReader, $$new($InputStreamReader, $(getErrorStream()), charset)));
		} else if (!$nc(this->errorCharset)->equals(charset)) {
			$throwNew($IllegalStateException, $$str({"BufferedReader was created with charset: "_s, this->errorCharset}));
		}
		return this->errorReader$;
	}
}

$BufferedWriter* Process::outputWriter() {
	return outputWriter($($Process$CharsetHolder::nativeCharset()));
}

$BufferedWriter* Process::outputWriter($Charset* charset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(charset), "charset"_s);
	$synchronized(this) {
		if (this->outputWriter$ == nullptr) {
			$set(this, outputCharset, charset);
			$set(this, outputWriter$, $new($BufferedWriter, $$new($OutputStreamWriter, $(getOutputStream()), charset)));
		} else if (!$nc(this->outputCharset)->equals(charset)) {
			$throwNew($IllegalStateException, $$str({"BufferedWriter was created with charset: "_s, this->outputCharset}));
		}
		return this->outputWriter$;
	}
}

bool Process::waitFor(int64_t timeout, $TimeUnit* unit) {
	int64_t remainingNanos = $nc(unit)->toNanos(timeout);
	if (hasExited()) {
		return true;
	}
	if (timeout <= 0) {
		return false;
	}
	int64_t deadline = $System::nanoTime() + remainingNanos;
	do {
		$Thread::sleep($Math::min($TimeUnit::NANOSECONDS->toMillis(remainingNanos) + 1, (int64_t)100));
		if (hasExited()) {
			return true;
		}
		remainingNanos = deadline - $System::nanoTime();
	} while (remainingNanos > 0);
	return false;
}

Process* Process::destroyForcibly() {
	destroy();
	return this;
}

bool Process::supportsNormalTermination() {
	$throwNew($UnsupportedOperationException, $$str({$of(this)->getClass(), ".supportsNormalTermination() not supported"_s}));
	$shouldNotReachHere();
}

bool Process::isAlive() {
	return !hasExited();
}

bool Process::hasExited() {
	try {
		exitValue();
		return true;
	} catch ($IllegalThreadStateException&) {
		$var($IllegalThreadStateException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int64_t Process::pid() {
	return $nc($(toHandle()))->pid();
}

$CompletableFuture* Process::onExit() {
	return $CompletableFuture::supplyAsync(static_cast<$Supplier*>($$new(Process$$Lambda$waitForInternal, this)));
}

Process* Process::waitForInternal() {
	$useLocalCurrentObjectStackCache();
	bool interrupted = false;
	while (true) {
		try {
			$ForkJoinPool::managedBlock($$new($Process$1, this));
			break;
		} catch ($InterruptedException&) {
			$var($InterruptedException, x, $catch());
			interrupted = true;
		}
	}
	if (interrupted) {
		$($Thread::currentThread())->interrupt();
	}
	return this;
}

$ProcessHandle* Process::toHandle() {
	$throwNew($UnsupportedOperationException, $$str({$of(this)->getClass(), ".toHandle() not supported"_s}));
	$shouldNotReachHere();
}

$ProcessHandle$Info* Process::info() {
	return $nc($(toHandle()))->info();
}

$Stream* Process::children() {
	return $nc($(toHandle()))->children();
}

$Stream* Process::descendants() {
	return $nc($(toHandle()))->descendants();
}

Process::Process() {
}

$Class* Process::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Process$$Lambda$waitForInternal::classInfo$.name)) {
			return Process$$Lambda$waitForInternal::load$(name, initialize);
		}
	}
	$loadClass(Process, name, initialize, &_Process_ClassInfo_, allocate$Process);
	return class$;
}

$Class* Process::class$ = nullptr;

	} // lang
} // java