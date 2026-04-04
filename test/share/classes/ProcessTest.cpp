#include <ProcessTest.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ProcessTest::init$() {
}

void ProcessTest::run() {
	$useLocalObjectStack();
	try {
		$var($String, line, nullptr);
		$var($BufferedReader, is, $new($BufferedReader, $$new($InputStreamReader, $($nc(this->p)->getInputStream()))));
		while (($assign(line, is->readLine())) != nullptr) {
			$nc($System::err)->println($$str({"ProcessTrap: "_s, line}));
		}
	} catch ($IOException& e) {
		if (!$$nc(e->getMessage())->matches("[Ss]tream [Cc]losed"_s)) {
			$throwNew($RuntimeException, e);
		}
	}
}

void ProcessTest::runTest() {
	$nc(this->p)->destroyForcibly();
	this->p->waitFor();
	if (this->p->isAlive()) {
		$throwNew($RuntimeException, "Problem terminating the process."_s);
	}
}

ProcessTest::ProcessTest() {
}

$Class* ProcessTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bldr", "Ljava/lang/ProcessBuilder;", nullptr, 0, $field(ProcessTest, bldr)},
		{"p", "Ljava/lang/Process;", nullptr, 0, $field(ProcessTest, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessTest, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessTest, run, void)},
		{"runTest", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessTest, runTest, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"ProcessTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessTest);
	});
	return class$;
}

$Class* ProcessTest::class$ = nullptr;