#include <CommandRunner.h>

#include <StreamDrainer.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $StreamDrainer = ::StreamDrainer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runtime = ::java::lang::Runtime;
using $Random = ::java::util::Random;

$FieldInfo _CommandRunner_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(CommandRunner, generator)},
	{"exitValue", "I", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, exitValue)},
	{"out", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, out)},
	{"err", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, err)},
	{}
};

$MethodInfo _CommandRunner_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(CommandRunner::*)($StringArray*)>(&CommandRunner::init$)), "java.lang.Exception"},
	{}
};

$ClassInfo _CommandRunner_ClassInfo_ = {
	$ACC_SUPER,
	"CommandRunner",
	"java.lang.Object",
	nullptr,
	_CommandRunner_FieldInfo_,
	_CommandRunner_MethodInfo_
};

$Object* allocate$CommandRunner($Class* clazz) {
	return $of($alloc(CommandRunner));
}

$Random* CommandRunner::generator = nullptr;

void CommandRunner::init$($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Process, p, ($nc(CommandRunner::generator)->nextInt(2) == 0) ? $$new($ProcessBuilder, args)->start() : $nc($($Runtime::getRuntime()))->exec(args));
	$var($StreamDrainer, d1, $new($StreamDrainer, $($nc(p)->getInputStream())));
	$var($StreamDrainer, d2, $new($StreamDrainer, $($nc(p)->getErrorStream())));
	d1->start();
	d2->start();
	$nc(p)->waitFor();
	d1->join();
	d2->join();
	this->exitValue = p->exitValue();
	$set(this, out, d1->toString());
	$set(this, err, d2->toString());
}

void clinit$CommandRunner($Class* class$) {
	$assignStatic(CommandRunner::generator, $new($Random));
}

CommandRunner::CommandRunner() {
}

$Class* CommandRunner::load$($String* name, bool initialize) {
	$loadClass(CommandRunner, name, initialize, &_CommandRunner_ClassInfo_, clinit$CommandRunner, allocate$CommandRunner);
	return class$;
}

$Class* CommandRunner::class$ = nullptr;