#include <DeleteOnExitNPE.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($System::getProperty("java.home"_s)));
	$init($File);
	var$0->append($File::separator);
	var$0->append("bin"_s);
	var$0->append($File::separator);
	var$0->append("java -classpath "_s);
	var$0->append($($System::getProperty("test.classes"_s)));
	$var($String, cmd, $str(var$0));
	$var($Process, process, $$nc($Runtime::getRuntime())->exec($$str({cmd, " DeleteOnExitNPE -test"_s})));
	$var($BufferedReader, isReader, $new($BufferedReader, $$new($InputStreamReader, $($nc(process)->getInputStream()))));
	$var($BufferedReader, esReader, $new($BufferedReader, $$new($InputStreamReader, $(process->getErrorStream()))));
	process->waitFor();
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
	$useLocalObjectStack();
	try {
		$var($File, file, $File::createTempFile("DeleteOnExitNPE"_s, nullptr));
		$nc(file)->deleteOnExit();
		$var($Thread, thread, $new($Thread, $$new(DeleteOnExitNPE)));
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeleteOnExitNPE, init$, void)},
		{"doTest", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteOnExitNPE, doTest, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteOnExitNPE, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DeleteOnExitNPE, run, void)},
		{"runTest", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteOnExitNPE, runTest, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DeleteOnExitNPE",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DeleteOnExitNPE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteOnExitNPE);
	});
	return class$;
}

$Class* DeleteOnExitNPE::class$ = nullptr;