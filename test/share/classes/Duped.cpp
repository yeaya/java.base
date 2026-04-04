#include <Duped.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

#undef HELLO

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$String* Duped::HELLO = nullptr;

void Duped::init$() {
}

void Duped::main($StringArray* args) {
	$init(Duped);
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($System::getProperty("java.home"_s)));
	$init($File);
	var$0->append($File::separator);
	var$0->append("bin"_s);
	var$0->append($File::separator);
	var$0->append("java -classpath "_s);
	var$0->append($($System::getProperty("java.class.path"_s)));
	var$0->append(" Duped$Echo"_s);
	$var($String, command, $str(var$0));
	if ($nc(args)->length == 1 && $nc(args->get(0))->equals("-dont"_s)) {
	} else {
		$nc($System::in)->close();
	}
	$var($Process, p, $$nc($Runtime::getRuntime())->exec(command));
	$var($PrintStream, out, $new($PrintStream, $($nc(p)->getOutputStream())));
	out->println(Duped::HELLO);
	out->close();
	$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $(p->getInputStream()))));
	$var($String, read, in->readLine());
	if (!Duped::HELLO->equals(read)) {
		$throwNew($Exception, $$str({"Failed, read ``"_s, read, "\'\'"_s}));
	}
}

Duped::Duped() {
}

void Duped::clinit$($Class* clazz) {
	$assignStatic(Duped::HELLO, "Hello, world!"_s);
}

$Class* Duped::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HELLO", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Duped, HELLO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Duped, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Duped, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Duped$Echo", "Duped", "Echo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Duped",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Duped$Echo"
	};
	$loadClass(Duped, name, initialize, &classInfo$$, Duped::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Duped);
	});
	return class$;
}

$Class* Duped::class$ = nullptr;