#include <Zombies.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/ProcessHandle.h>
#include <java/lang/Runtime.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $ProcessHandle = ::java::lang::ProcessHandle;
using $Runtime = ::java::lang::Runtime;
using $Optional = ::java::util::Optional;

$FieldInfo _Zombies_FieldInfo_[] = {
	{"os", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Zombies, os)},
	{"TrueCommand", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Zombies, TrueCommand)},
	{}
};

$MethodInfo _Zombies_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Zombies::*)()>(&Zombies::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Zombies::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _Zombies_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Zombies",
	"java.lang.Object",
	nullptr,
	_Zombies_FieldInfo_,
	_Zombies_MethodInfo_
};

$Object* allocate$Zombies($Class* clazz) {
	return $of($alloc(Zombies));
}

$String* Zombies::os = nullptr;
$String* Zombies::TrueCommand = nullptr;

void Zombies::init$() {
}

void Zombies::main($StringArray* args) {
	$init(Zombies);
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$$new($File, "/usr/bin/perl"_s)->canExecute();
	if (var$0 || !$$new($File, "/bin/ps"_s)->canExecute()) {
		return;
	}
	$nc($System::out)->println("Looks like a Unix system."_s);
	int64_t mypid = $nc($($ProcessHandle::current()))->pid();
	$nc($System::out)->printf("mypid: %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(mypid)))}));
	$var($Runtime, rt, $Runtime::getRuntime());
	try {
		$nc(rt)->exec("no-such-file"_s);
		$throwNew($Error, "expected IOException not thrown"_s);
	} catch ($IOException& expected) {
	}
	try {
		$nc(rt)->exec("."_s);
		$throwNew($Error, "expected IOException not thrown"_s);
	} catch ($IOException& expected) {
	}
	try {
		$nc(rt)->exec(Zombies::TrueCommand, ($StringArray*)nullptr, $$new($File, "no-such-dir"_s));
		$throwNew($Error, "expected IOException not thrown"_s);
	} catch ($IOException& expected) {
	}
	$var($Process, p, $nc(rt)->exec(Zombies::TrueCommand));
	$var($ProcessHandle, pp, $cast($ProcessHandle, $nc($($nc($($nc(p)->toHandle()))->parent()))->orElse(nullptr)));
	$nc($System::out)->printf("%s pid: %d, parent: %s%n"_s, $$new($ObjectArray, {
		$of(Zombies::TrueCommand),
		$($of($Long::valueOf(p->pid()))),
		$of(pp)
	}));
	p->waitFor();
	$var($StringArray, zombieCounter, $new($StringArray, {
		"/usr/bin/perl"_s,
		"-e"_s,
		"$a=`/bin/ps -eo ppid,pid,s,command`;print @b=$a=~/^ *@{[getppid]} +[0-9]+ +Z.*$/mog;exit @b"_s
	}));
	$var($ProcessBuilder, pb, $new($ProcessBuilder, zombieCounter));
	pb->inheritIO();
	int32_t zombies = $nc($(pb->start()))->waitFor();
	if (zombies != 0) {
		$throwNew($Error, $$str({$$str(zombies), " zombies!"_s}));
	}
}

void clinit$Zombies($Class* class$) {
	$assignStatic(Zombies::os, $System::getProperty("os.name"_s));
	$assignStatic(Zombies::TrueCommand, $nc(Zombies::os)->contains("OS X"_s) ? "/usr/bin/true"_s : "/bin/true"_s);
}

Zombies::Zombies() {
}

$Class* Zombies::load$($String* name, bool initialize) {
	$loadClass(Zombies, name, initialize, &_Zombies_ClassInfo_, clinit$Zombies, allocate$Zombies);
	return class$;
}

$Class* Zombies::class$ = nullptr;