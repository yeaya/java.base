#include <WriterLoop.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$PipedOutputStream* WriterLoop::out = nullptr;
$PipedInputStream* WriterLoop::in = nullptr;

void WriterLoop::init$() {
	$Thread::init$();
}

void WriterLoop::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc($System::out)->println("Writer started."_s);
			$nc(WriterLoop::out)->write($$new($bytes, 64 * 1024));
		} catch ($Throwable& e) {
			$nc($System::out)->println("Writer exception:"_s);
			e->printStackTrace();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc($System::out)->println("Writer done."_s);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WriterLoop::main($StringArray* args) {
	$init(WriterLoop);
	$useLocalObjectStack();
	$assignStatic(WriterLoop::in, $new($PipedInputStream));
	$assignStatic(WriterLoop::out, $new($PipedOutputStream, WriterLoop::in));
	$var(WriterLoop, writer, $new(WriterLoop));
	writer->start();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc($System::out)->println("Reader reading..."_s);
			WriterLoop::in->read($$new($bytes, 2048));
			$System::out->println("Reader closing stream..."_s);
			WriterLoop::in->close();
			$System::out->println("Reader sleeping 3 seconds..."_s);
			$Thread::sleep(3000);
		} catch ($Throwable& e) {
			$nc($System::out)->println("Reader exception:"_s);
			e->printStackTrace();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc($System::out)->println("Active threads:"_s);
		$var($ThreadArray, threads, $new($ThreadArray, $Thread::activeCount()));
		$Thread::enumerate(threads);
		for (int32_t i = 0; i < threads->length; ++i) {
			$System::out->println($$str({"  "_s, threads->get(i)}));
		}
		$System::out->println("Waiting for writer..."_s);
		writer->join();
		$System::out->println("Done."_s);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

WriterLoop::WriterLoop() {
}

$Class* WriterLoop::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(WriterLoop, out)},
		{"in", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(WriterLoop, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WriterLoop, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WriterLoop, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WriterLoop, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WriterLoop",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WriterLoop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WriterLoop);
	});
	return class$;
}

$Class* WriterLoop::class$ = nullptr;