#include <PipeInterrupt$1.h>

#include <PipeInterrupt.h>
#include <java/io/IOException.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $PipeInterrupt = ::PipeInterrupt;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;

$FieldInfo _PipeInterrupt$1_FieldInfo_[] = {
	{"this$0", "LPipeInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(PipeInterrupt$1, this$0)},
	{"testPipe", "Ljava/nio/channels/Pipe;", nullptr, $PRIVATE, $field(PipeInterrupt$1, testPipe)},
	{}
};

$MethodInfo _PipeInterrupt$1_MethodInfo_[] = {
	{"<init>", "(LPipeInterrupt;Ljava/lang/String;)V", nullptr, 0, $method(PipeInterrupt$1, init$, void, $PipeInterrupt*, $String*)},
	{"close", "()V", nullptr, $PRIVATE, $method(PipeInterrupt$1, close, void), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PipeInterrupt$1, run, void)},
	{}
};

$EnclosingMethodInfo _PipeInterrupt$1_EnclosingMethodInfo_ = {
	"PipeInterrupt",
	"test",
	"()V"
};

$InnerClassInfo _PipeInterrupt$1_InnerClassesInfo_[] = {
	{"PipeInterrupt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PipeInterrupt$1_ClassInfo_ = {
	$ACC_SUPER,
	"PipeInterrupt$1",
	"java.lang.Thread",
	nullptr,
	_PipeInterrupt$1_FieldInfo_,
	_PipeInterrupt$1_MethodInfo_,
	nullptr,
	&_PipeInterrupt$1_EnclosingMethodInfo_,
	_PipeInterrupt$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PipeInterrupt"
};

$Object* allocate$PipeInterrupt$1($Class* clazz) {
	return $of($alloc(PipeInterrupt$1));
}

void PipeInterrupt$1::init$($PipeInterrupt* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$Thread::init$(arg0);
	$set(this, testPipe, nullptr);
}

void PipeInterrupt$1::run() {
	for (;;) {
		bool interrupted = this->isInterrupted();
		try {
			$set(this, testPipe, $Pipe::open());
			close();
			if (interrupted) {
				if (!this->isInterrupted()) {
					$set(this->this$0, exc, $new($RuntimeException, "interrupt status reset"_s));
				}
				break;
			}
		} catch ($IOException& ioe) {
			$set(this->this$0, exc, ioe);
		}
	}
}

void PipeInterrupt$1::close() {
	$useLocalCurrentObjectStackCache();
	if (this->testPipe != nullptr) {
		$nc($($nc(this->testPipe)->sink()))->close();
		$nc($($nc(this->testPipe)->source()))->close();
	}
}

PipeInterrupt$1::PipeInterrupt$1() {
}

$Class* PipeInterrupt$1::load$($String* name, bool initialize) {
	$loadClass(PipeInterrupt$1, name, initialize, &_PipeInterrupt$1_ClassInfo_, allocate$PipeInterrupt$1);
	return class$;
}

$Class* PipeInterrupt$1::class$ = nullptr;