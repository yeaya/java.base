#include <Constructors.h>

#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Constructors_FieldInfo_[] = {
	{"out", "Ljava/io/PipedWriter;", nullptr, $STATIC, $staticField(Constructors, out)},
	{"in", "Ljava/io/PipedReader;", nullptr, $STATIC, $staticField(Constructors, in)},
	{"totalToWrite", "I", nullptr, $STATIC, $staticField(Constructors, totalToWrite)},
	{"pipeSize", "I", nullptr, $STATIC, $staticField(Constructors, pipeSize)},
	{}
};

$MethodInfo _Constructors_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Constructors::*)()>(&Constructors::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Constructors::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"testPipe", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Constructors::testPipe)), "java.lang.Exception"},
	{}
};

$ClassInfo _Constructors_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Constructors",
	"java.lang.Thread",
	nullptr,
	_Constructors_FieldInfo_,
	_Constructors_MethodInfo_
};

$Object* allocate$Constructors($Class* clazz) {
	return $of($alloc(Constructors));
}

$PipedWriter* Constructors::out = nullptr;
$PipedReader* Constructors::in = nullptr;
int32_t Constructors::totalToWrite = 0;
int32_t Constructors::pipeSize = 0;

void Constructors::init$() {
	$Thread::init$();
}

void Constructors::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (int32_t times = ($div(Constructors::totalToWrite, Constructors::pipeSize)); times > 0; --times) {
					$init($System);
					$nc($System::out)->println("Reader reading..."_s);
					int32_t read = $nc(Constructors::in)->read($$new($chars, Constructors::pipeSize));
					$nc($System::out)->println($$str({"read: "_s, $$str(read)}));
					if (read < Constructors::pipeSize) {
						$throwNew($Exception, $$str({"Pipe Size is not set to:"_s, $$str(Constructors::pipeSize)}));
					}
				}
			} catch ($Throwable&) {
				$var($Throwable, e, $catch());
				$init($System);
				$nc($System::out)->println("Reader exception:"_s);
				e->printStackTrace();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init($System);
			$nc($System::out)->println("Reader done."_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Constructors::main($StringArray* args) {
	$init(Constructors);
	$assignStatic(Constructors::in, $new($PipedReader, Constructors::pipeSize));
	$assignStatic(Constructors::out, $new($PipedWriter, Constructors::in));
	testPipe();
	$assignStatic(Constructors::out, $new($PipedWriter));
	$assignStatic(Constructors::in, $new($PipedReader, Constructors::out, Constructors::pipeSize));
	testPipe();
}

void Constructors::testPipe() {
	$init(Constructors);
	$useLocalCurrentObjectStackCache();
	$var(Constructors, reader, $new(Constructors));
	reader->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$init($System);
				$nc($System::out)->println("Writer started."_s);
				$nc(Constructors::out)->write($$new($chars, Constructors::totalToWrite));
			} catch ($Throwable&) {
				$var($Throwable, e, $catch());
				$init($System);
				$nc($System::out)->println("Writer exception:"_s);
				e->printStackTrace();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(Constructors::out)->close();
			$init($System);
			$nc($System::out)->println("Waiting for reader..."_s);
			reader->join();
			$nc(Constructors::in)->close();
			$nc($System::out)->println("Done."_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$Constructors($Class* class$) {
	Constructors::totalToWrite = (8 * 1024);
	Constructors::pipeSize = Constructors::totalToWrite;
}

Constructors::Constructors() {
}

$Class* Constructors::load$($String* name, bool initialize) {
	$loadClass(Constructors, name, initialize, &_Constructors_ClassInfo_, clinit$Constructors, allocate$Constructors);
	return class$;
}

$Class* Constructors::class$ = nullptr;