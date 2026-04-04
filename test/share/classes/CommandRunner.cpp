#include <CommandRunner.h>
#include <StreamDrainer.h>
#include <java/io/InputStream.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/Runtime.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $StreamDrainer = ::StreamDrainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runtime = ::java::lang::Runtime;
using $Random = ::java::util::Random;

$Random* CommandRunner::generator = nullptr;

void CommandRunner::init$($StringArray* args) {
	$useLocalObjectStack();
	$var($Process, p, ($nc(CommandRunner::generator)->nextInt(2) == 0) ? $$new($ProcessBuilder, args)->start() : $$nc($Runtime::getRuntime())->exec(args));
	$var($StreamDrainer, d1, $new($StreamDrainer, $($nc(p)->getInputStream())));
	$var($StreamDrainer, d2, $new($StreamDrainer, $(p->getErrorStream())));
	d1->start();
	d2->start();
	p->waitFor();
	d1->join();
	d2->join();
	this->exitValue = p->exitValue();
	$set(this, out, d1->toString());
	$set(this, err, d2->toString());
}

void CommandRunner::clinit$($Class* clazz) {
	$assignStatic(CommandRunner::generator, $new($Random));
}

CommandRunner::CommandRunner() {
}

$Class* CommandRunner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(CommandRunner, generator)},
		{"exitValue", "I", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, exitValue)},
		{"out", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, out)},
		{"err", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandRunner, err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(CommandRunner, init$, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CommandRunner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CommandRunner, name, initialize, &classInfo$$, CommandRunner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CommandRunner);
	});
	return class$;
}

$Class* CommandRunner::class$ = nullptr;