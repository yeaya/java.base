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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Pipe = ::java::nio::channels::Pipe;

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
	$useLocalObjectStack();
	if (this->testPipe != nullptr) {
		$$nc(this->testPipe->sink())->close();
		$$nc($nc(this->testPipe)->source())->close();
	}
}

PipeInterrupt$1::PipeInterrupt$1() {
}

$Class* PipeInterrupt$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPipeInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(PipeInterrupt$1, this$0)},
		{"testPipe", "Ljava/nio/channels/Pipe;", nullptr, $PRIVATE, $field(PipeInterrupt$1, testPipe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPipeInterrupt;Ljava/lang/String;)V", nullptr, 0, $method(PipeInterrupt$1, init$, void, $PipeInterrupt*, $String*)},
		{"close", "()V", nullptr, $PRIVATE, $method(PipeInterrupt$1, close, void), "java.io.IOException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PipeInterrupt$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PipeInterrupt",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PipeInterrupt$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PipeInterrupt$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PipeInterrupt"
	};
	$loadClass(PipeInterrupt$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PipeInterrupt$1);
	});
	return class$;
}

$Class* PipeInterrupt$1::class$ = nullptr;