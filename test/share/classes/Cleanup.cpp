#include <Cleanup.h>

#include <java/io/BufferedWriter.h>
#include <java/io/IOException.h>
#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $BufferedWriter = ::java::io::BufferedWriter;
using $IOException = ::java::io::IOException;
using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Cleanup_FieldInfo_[] = {
	{"w", "Ljava/io/PipedWriter;", nullptr, $STATIC, $staticField(Cleanup, w)},
	{"r", "Ljava/io/PipedReader;", nullptr, $STATIC, $staticField(Cleanup, r)},
	{"isWriterClosed", "Z", nullptr, $STATIC, $staticField(Cleanup, isWriterClosed)},
	{}
};

$MethodInfo _Cleanup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Cleanup, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Cleanup, main, void, $StringArray*), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Cleanup, run, void)},
	{}
};

$ClassInfo _Cleanup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Cleanup",
	"java.lang.Thread",
	nullptr,
	_Cleanup_FieldInfo_,
	_Cleanup_MethodInfo_
};

$Object* allocate$Cleanup($Class* clazz) {
	return $of($alloc(Cleanup));
}

$PipedWriter* Cleanup::w = nullptr;
$PipedReader* Cleanup::r = nullptr;
bool Cleanup::isWriterClosed = false;

void Cleanup::init$() {
	$Thread::init$();
}

void Cleanup::run() {
	try {
		$nc($System::out)->println("Reader reading..."_s);
		$nc(Cleanup::r)->read($$new($chars, 2048), 0, 2048);
		$nc($System::out)->println("Reader closing stream..."_s);
		$nc(Cleanup::r)->close();
		$Thread::sleep(3000);
	} catch ($Throwable& e) {
		$nc($System::out)->println("Reader exception:"_s);
		e->printStackTrace();
	}
}

void Cleanup::main($StringArray* args) {
	$init(Cleanup);
	$useLocalCurrentObjectStackCache();
	$assignStatic(Cleanup::r, $new($PipedReader));
	$assignStatic(Cleanup::w, $new($PipedWriter, Cleanup::r));
	$var(Cleanup, reader, $new(Cleanup));
	reader->start();
	$var($BufferedWriter, bw, $new($BufferedWriter, Cleanup::w));
	bool isWriterClosed = false;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc($System::out)->println("Writer started."_s);
				for (int32_t i = 0; i < 3; ++i) {
					bw->write($$new($chars, 1024), 0, (1024));
				}
				bw->close();
			} catch ($Throwable& e) {
				try {
					e->printStackTrace();
					bw->write((int32_t)u'a');
				} catch ($IOException& ex) {
					ex->printStackTrace();
					isWriterClosed = true;
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($System::out)->println("Writer done."_s);
			reader->join();
			if (!isWriterClosed) {
				$throwNew($Exception, "BufferedWriter is not closed properly"_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$Cleanup($Class* class$) {
	Cleanup::isWriterClosed = false;
}

Cleanup::Cleanup() {
}

$Class* Cleanup::load$($String* name, bool initialize) {
	$loadClass(Cleanup, name, initialize, &_Cleanup_ClassInfo_, clinit$Cleanup, allocate$Cleanup);
	return class$;
}

$Class* Cleanup::class$ = nullptr;