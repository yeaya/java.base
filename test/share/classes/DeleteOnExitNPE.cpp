#include <DeleteOnExitNPE.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _DeleteOnExitNPE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeleteOnExitNPE::*)()>(&DeleteOnExitNPE::init$))},
	{"doTest", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&DeleteOnExitNPE::doTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeleteOnExitNPE::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"runTest", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&DeleteOnExitNPE::runTest)), "java.lang.Exception"},
	{}
};

$ClassInfo _DeleteOnExitNPE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeleteOnExitNPE",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_DeleteOnExitNPE_MethodInfo_
};

$Object* allocate$DeleteOnExitNPE($Class* clazz) {
	return $of($alloc(DeleteOnExitNPE));
}

void DeleteOnExitNPE::init$() {
}

void DeleteOnExitNPE::main($StringArray* args) {
	$init(DeleteOnExitNPE);
	if ($nc(args)->length == 0) {
		runTest();
	} else {
		doTest();
	}
}

void DeleteOnExitNPE::runTest() {
	$init(DeleteOnExitNPE);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($String, var$0, $$str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java -classpath "_s}));
	$var($String, cmd, $concat(var$0, $($System::getProperty("test.classes"_s))));
	$var($Process, process, $nc($($Runtime::getRuntime()))->exec($$str({cmd, " DeleteOnExitNPE -test"_s})));
	$var($BufferedReader, isReader, $new($BufferedReader, $$new($InputStreamReader, $($nc(process)->getInputStream()))));
	$var($BufferedReader, esReader, $new($BufferedReader, $$new($InputStreamReader, $($nc(process)->getErrorStream()))));
	$nc(process)->waitFor();
	bool failed = false;
	$var($String, str, nullptr);
	while (($assign(str, isReader->readLine())) != nullptr) {
		failed = true;
		$nc($System::out)->println(str);
	}
	while (($assign(str, esReader->readLine())) != nullptr) {
		failed = true;
		$nc($System::err)->println(str);
	}
	if (failed) {
		$throwNew($RuntimeException, "Failed: No output should have been received from the process"_s);
	}
}

void DeleteOnExitNPE::doTest() {
	$init(DeleteOnExitNPE);
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, file, $File::createTempFile("DeleteOnExitNPE"_s, nullptr));
		$nc(file)->deleteOnExit();
		$var($Thread, thread, $new($Thread, static_cast<$Runnable*>($$new(DeleteOnExitNPE))));
		thread->start();
		try {
			$Thread::sleep(2000);
		} catch ($InterruptedException& ie) {
			ie->printStackTrace();
		}
		$System::exit(0);
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

void DeleteOnExitNPE::run() {
	$var($File, file, $new($File, "xxyyzz"_s));
	try {
		for (;;) {
			file->deleteOnExit();
		}
	} catch ($IllegalStateException& ise) {
	}
}

DeleteOnExitNPE::DeleteOnExitNPE() {
}

$Class* DeleteOnExitNPE::load$($String* name, bool initialize) {
	$loadClass(DeleteOnExitNPE, name, initialize, &_DeleteOnExitNPE_ClassInfo_, allocate$DeleteOnExitNPE);
	return class$;
}

$Class* DeleteOnExitNPE::class$ = nullptr;