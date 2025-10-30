#include <CloseAndAvailableRC.h>

#include <CloseAndAvailableRC$Sink.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $CloseAndAvailableRC$Sink = ::CloseAndAvailableRC$Sink;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _CloseAndAvailableRC_FieldInfo_[] = {
	{"inPipe", "Ljava/io/PipedInputStream;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, inPipe)},
	{"outPipe", "Ljava/io/PipedOutputStream;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, outPipe)},
	{"sink", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(CloseAndAvailableRC, sink)},
	{"stop", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CloseAndAvailableRC, stop)},
	{"stopTest", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CloseAndAvailableRC, stopTest)},
	{}
};

$MethodInfo _CloseAndAvailableRC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseAndAvailableRC::*)()>(&CloseAndAvailableRC::init$))},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(CloseAndAvailableRC::*)()>(&CloseAndAvailableRC::cleanup)), "java.lang.Exception"},
	{"go", "()V", nullptr, $PRIVATE, $method(static_cast<void(CloseAndAvailableRC::*)()>(&CloseAndAvailableRC::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseAndAvailableRC::main)), "java.lang.Exception"},
	{"resetPipes", "()V", nullptr, $PRIVATE, $method(static_cast<void(CloseAndAvailableRC::*)()>(&CloseAndAvailableRC::resetPipes)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CloseAndAvailableRC_InnerClassesInfo_[] = {
	{"CloseAndAvailableRC$Sink", "CloseAndAvailableRC", "Sink", $PRIVATE},
	{}
};

$ClassInfo _CloseAndAvailableRC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseAndAvailableRC",
	"java.lang.Object",
	nullptr,
	_CloseAndAvailableRC_FieldInfo_,
	_CloseAndAvailableRC_MethodInfo_,
	nullptr,
	nullptr,
	_CloseAndAvailableRC_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseAndAvailableRC$Sink"
};

$Object* allocate$CloseAndAvailableRC($Class* clazz) {
	return $of($alloc(CloseAndAvailableRC));
}

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
		$nc(this->sink)->interrupt();
		try {
			$nc(this->sink)->join();
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
	for (int8_t b = (int8_t)0; b < 10; ++b) {
		$nc(this->outPipe)->write((int32_t)b);
	}
	$set(this, sink, $new($CloseAndAvailableRC$Sink, this));
	$nc(this->sink)->start();
}

CloseAndAvailableRC::CloseAndAvailableRC() {
}

$Class* CloseAndAvailableRC::load$($String* name, bool initialize) {
	$loadClass(CloseAndAvailableRC, name, initialize, &_CloseAndAvailableRC_ClassInfo_, allocate$CloseAndAvailableRC);
	return class$;
}

$Class* CloseAndAvailableRC::class$ = nullptr;