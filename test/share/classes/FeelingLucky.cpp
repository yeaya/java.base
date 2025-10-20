#include <FeelingLucky.h>

#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$MethodInfo _FeelingLucky_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FeelingLucky::*)()>(&FeelingLucky::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FeelingLucky::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _FeelingLucky_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FeelingLucky",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FeelingLucky_MethodInfo_
};

$Object* allocate$FeelingLucky($Class* clazz) {
	return $of($alloc(FeelingLucky));
}

void FeelingLucky::init$() {
}

void FeelingLucky::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Runtime, rt, $Runtime::getRuntime());
	$var($StringArray, pidPrinter, $new($StringArray, {
		"/bin/sh"_s,
		"-c"_s,
		"echo $$"_s
	}));
	$var($Process, minedProcess, $nc(rt)->exec(pidPrinter));
	int32_t minedPid = 0;
	$var($InputStream, is, $nc(minedProcess)->getInputStream());
	int32_t c = 0;
	while ((c = $nc(is)->read()) >= u'0' && c <= u'9') {
		minedPid = 10 * minedPid + (c - u'0');
	}
	$init($System);
	$nc($System::out)->printf("minedPid=%d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(minedPid)))}));
	minedProcess->waitFor();
	$var($StringArray, magnum, $new($StringArray, {
		"perl"_s,
		"-e"_s,
		$$str({"my $punk = getppid();open TTY, \'> /dev/tty\';print TTY \"punk=$punk\\n\";for (my $i = 0; $i < 32768; $i++) {  my $pid = fork();  if ($pid == 0) {    if ($$ == "_s, $$str(minedPid), ") {      print TTY \"MATCH $$ $punk\\n\";      $SIG{TERM} = sub {        print TTY \"Got TERM $$ $punk\\n\";        kill 9, $punk;        exit; };      $| = 1; print \'Go ahead.  Make my day.\';      sleep 100;    }    exit;  } else {     waitpid($pid,0);    break if $pid == "_s, $$str(minedPid), ";  }}"_s})
	}));
	$var($Process, p, rt->exec(magnum));
	if ($nc($($nc(p)->getInputStream()))->read() != -1) {
		$nc($System::out)->println("got a char"_s);
		minedProcess->destroy();
		$Thread::sleep(1000);
	}
}

FeelingLucky::FeelingLucky() {
}

$Class* FeelingLucky::load$($String* name, bool initialize) {
	$loadClass(FeelingLucky, name, initialize, &_FeelingLucky_ClassInfo_, allocate$FeelingLucky);
	return class$;
}

$Class* FeelingLucky::class$ = nullptr;