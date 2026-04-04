#include <CloseAndAvailableRC.h>
#include <CloseAndAvailableRC$Sink.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $CloseAndAvailableRC$Sink = ::CloseAndAvailableRC$Sink;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void CloseAndAvailableRC::init$() {
	$set(this, inPipe, nullptr);
	$set(this, outPipe, nullptr);
	$set(this, sink, nullptr);
	this->stop = false;
	this->stopTest = false;
}

void CloseAndAvailableRC::main($StringArray* args) {
	$var(CloseAndAvailableRC, rc, $new(CloseAndAvailableRC));
	rc->go();
}

void CloseAndAvailableRC::go() {
	for (int64_t i = 0; i < 2000; ++i) {
		if (this->stopTest) {
			cleanup();
			$throwNew($RuntimeException, "Test failed"_s);
		}
		resetPipes();
		$nc($System::err)->println("Closing..."_s);
		$nc(this->inPipe)->close();
	}
	cleanup();
}

void CloseAndAvailableRC::cleanup() {
	if (this->sink != nullptr) {
		this->stop = true;
		this->sink->interrupt();
		try {
			this->sink->join();
		} catch ($InterruptedException& e) {
		}
		this->stop = false;
		$nc(this->outPipe)->close();
	}
}

void CloseAndAvailableRC::resetPipes() {
	cleanup();
	$set(this, inPipe, $new($PipedInputStream));
	$set(this, outPipe, $new($PipedOutputStream, this->inPipe));
	for (int8_t b = 0; b < 10; ++b) {
		this->outPipe->write(b);
	}
	$set(this, sink, $new($CloseAndAvailableRC$Sink, this));
	this->sink->start();
}

CloseAndAvailableRC::CloseAndAvailableRC() {
}

$Class* CloseAndAvailableRC::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inPipe", "Ljava/io/PipedInputStream;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, inPipe)},
		{"outPipe", "Ljava/io/PipedOutputStream;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, outPipe)},
		{"sink", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, sink)},
		{"stop", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CloseAndAvailableRC, stop)},
		{"stopTest", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CloseAndAvailableRC, stopTest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseAndAvailableRC, init$, void)},
		{"cleanup", "()V", nullptr, $PRIVATE, $method(CloseAndAvailableRC, cleanup, void), "java.lang.Exception"},
		{"go", "()V", nullptr, $PRIVATE, $method(CloseAndAvailableRC, go, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseAndAvailableRC, main, void, $StringArray*), "java.lang.Exception"},
		{"resetPipes", "()V", nullptr, $PRIVATE, $method(CloseAndAvailableRC, resetPipes, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseAndAvailableRC$Sink", "CloseAndAvailableRC", "Sink", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseAndAvailableRC",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CloseAndAvailableRC$Sink"
	};
	$loadClass(CloseAndAvailableRC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseAndAvailableRC);
	});
	return class$;
}

$Class* CloseAndAvailableRC::class$ = nullptr;