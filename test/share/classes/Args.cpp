#include <Args.h>

#include <Args$1.h>
#include <Args$2.h>
#include <Args$3.h>
#include <Args$4.h>
#include <Args$5.h>
#include <Args$6.h>
#include <Args$7.h>
#include <Args$Thunk.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $Args$1 = ::Args$1;
using $Args$2 = ::Args$2;
using $Args$3 = ::Args$3;
using $Args$4 = ::Args$4;
using $Args$5 = ::Args$5;
using $Args$6 = ::Args$6;
using $Args$7 = ::Args$7;
using $Args$Thunk = ::Args$Thunk;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;

$MethodInfo _Args_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Args, init$, void)},
	{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Args, fail, void, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Args, main, void, $StringArray*), "java.lang.Exception"},
	{"tryCatch", "(Ljava/lang/Class;LArgs$Thunk;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Args, tryCatch, void, $Class*, $Args$Thunk*)},
	{}
};

$InnerClassInfo _Args_InnerClassesInfo_[] = {
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{"Args$7", nullptr, nullptr, 0},
	{"Args$6", nullptr, nullptr, 0},
	{"Args$5", nullptr, nullptr, 0},
	{"Args$4", nullptr, nullptr, 0},
	{"Args$3", nullptr, nullptr, 0},
	{"Args$2", nullptr, nullptr, 0},
	{"Args$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Args_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Args",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Args_MethodInfo_,
	nullptr,
	nullptr,
	_Args_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Args$Thunk,Args$7,Args$6,Args$5,Args$4,Args$3,Args$2,Args$1"
};

$Object* allocate$Args($Class* clazz) {
	return $of($alloc(Args));
}

void Args::init$() {
}

void Args::fail($String* s) {
	$throwNew($RuntimeException, s);
}

void Args::tryCatch($Class* ex, $Args$Thunk* thunk) {
	$useLocalCurrentObjectStackCache();
	bool caught = false;
	try {
		$nc(thunk)->run();
	} catch ($Throwable& x) {
		if ($nc(ex)->isAssignableFrom($of(x)->getClass())) {
			caught = true;
			$nc($System::err)->println($$str({"Thrown as expected: "_s, x}));
		}
	}
	if (!caught) {
		fail($$str({$($nc(ex)->getName()), " not thrown"_s}));
	}
}

void Args::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $File::createTempFile("foo"_s, nullptr));
	$nc(f)->deleteOnExit();
	$var($FileChannel, fc, $$new($RandomAccessFile, f, "rw"_s)->getChannel());
	$load($IllegalArgumentException);
	tryCatch($IllegalArgumentException::class$, $$new($Args$1, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$2, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$3, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$4, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$5, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$6, fc));
	tryCatch($IllegalArgumentException::class$, $$new($Args$7, fc));
	$nc(fc)->close();
	f->delete$();
}

Args::Args() {
}

$Class* Args::load$($String* name, bool initialize) {
	$loadClass(Args, name, initialize, &_Args_ClassInfo_, allocate$Args);
	return class$;
}

$Class* Args::class$ = nullptr;