#include <ExecWithLotsOfArgs.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ExecWithLotsOfArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExecWithLotsOfArgs::*)()>(&ExecWithLotsOfArgs::init$))},
	{"failed", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ExecWithLotsOfArgs::failed))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExecWithLotsOfArgs::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ExecWithLotsOfArgs_InnerClassesInfo_[] = {
	{"ExecWithLotsOfArgs$EchoingHelper", "ExecWithLotsOfArgs", "EchoingHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ExecWithLotsOfArgs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExecWithLotsOfArgs",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExecWithLotsOfArgs_MethodInfo_,
	nullptr,
	nullptr,
	_ExecWithLotsOfArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ExecWithLotsOfArgs$EchoingHelper"
};

$Object* allocate$ExecWithLotsOfArgs($Class* clazz) {
	return $of($alloc(ExecWithLotsOfArgs));
}

void ExecWithLotsOfArgs::init$() {
}

void ExecWithLotsOfArgs::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, command, $new($StringArray, 300));
	int32_t n = 0;
	$init($File);
	command->set(n++, $$str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	if ($System::getProperty("java.class.path"_s) != nullptr) {
		command->set(n++, "-classpath"_s);
		command->set(n++, $($System::getProperty("java.class.path"_s)));
	}
	command->set(n++, "ExecWithLotsOfArgs$EchoingHelper"_s);
	for (int32_t i = n; i < command->length; ++i) {
		command->set(i, $$new($String, $($$new($Integer, i)->toString())));
	}
	$var($Process, p, nullptr);
	$assign(p, $nc($($Runtime::getRuntime()))->exec(command));
	$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
	$var($String, s, nullptr);
	int32_t count = n;
	while (($assign(s, in->readLine())) != nullptr) {
		if (count >= command->length) {
			failed($$str({"Was expecting "_s, $$str((command->length - 2)), " strings to be echo\'ed back, but got "_s, $$str((count - 1)), " instead"_s}));
		}
		if (!$nc(s)->equals(command->get(count))) {
			failed($$str({"Exec\'d process returned \""_s, s, "\", was expecting \""_s, command->get(count), "\""_s}));
		}
		++count;
	}
	if (count == n) {
		$assign(in, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getErrorStream()))));
		while (($assign(s, in->readLine())) != nullptr) {
			$nc($System::err)->println($$str({"Error output: "_s, s}));
		}
		failed("Exec\'d process didn\'t writing anything to its stdout"_s);
	}
}

void ExecWithLotsOfArgs::failed($String* s) {
	$throwNew($RuntimeException, $$str({"Failed: "_s, s}));
}

ExecWithLotsOfArgs::ExecWithLotsOfArgs() {
}

$Class* ExecWithLotsOfArgs::load$($String* name, bool initialize) {
	$loadClass(ExecWithLotsOfArgs, name, initialize, &_ExecWithLotsOfArgs_ClassInfo_, allocate$ExecWithLotsOfArgs);
	return class$;
}

$Class* ExecWithLotsOfArgs::class$ = nullptr;