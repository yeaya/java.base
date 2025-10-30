#include <WriterLoop.h>

#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $ThreadArray = $Array<::java::lang::Thread>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _WriterLoop_FieldInfo_[] = {
	{"out", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(WriterLoop, out)},
	{"in", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(WriterLoop, in)},
	{}
};

$MethodInfo _WriterLoop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriterLoop::*)()>(&WriterLoop::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriterLoop::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WriterLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriterLoop",
	"java.lang.Thread",
	nullptr,
	_WriterLoop_FieldInfo_,
	_WriterLoop_MethodInfo_
};

$Object* allocate$WriterLoop($Class* clazz) {
	return $of($alloc(WriterLoop));
}

$PipedOutputStream* WriterLoop::out = nullptr;
$PipedInputStream* WriterLoop::in = nullptr;

void WriterLoop::init$() {
	$Thread::init$();
}

void WriterLoop::run() {
	$useLocalCurrentObjectStackCache();
	{
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
}

void WriterLoop::main($StringArray* args) {
	$init(WriterLoop);
	$useLocalCurrentObjectStackCache();
	$assignStatic(WriterLoop::in, $new($PipedInputStream));
	$assignStatic(WriterLoop::out, $new($PipedOutputStream, WriterLoop::in));
	$var(WriterLoop, writer, $new(WriterLoop));
	writer->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc($System::out)->println("Reader reading..."_s);
				$nc(WriterLoop::in)->read($$new($bytes, 2048));
				$nc($System::out)->println("Reader closing stream..."_s);
				$nc(WriterLoop::in)->close();
				$nc($System::out)->println("Reader sleeping 3 seconds..."_s);
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
				$nc($System::out)->println($$str({"  "_s, threads->get(i)}));
			}
			$nc($System::out)->println("Waiting for writer..."_s);
			writer->join();
			$nc($System::out)->println("Done."_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

WriterLoop::WriterLoop() {
}

$Class* WriterLoop::load$($String* name, bool initialize) {
	$loadClass(WriterLoop, name, initialize, &_WriterLoop_ClassInfo_, allocate$WriterLoop);
	return class$;
}

$Class* WriterLoop::class$ = nullptr;