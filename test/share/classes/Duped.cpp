#include <Duped.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

#undef HELLO

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$FieldInfo _Duped_FieldInfo_[] = {
	{"HELLO", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Duped, HELLO)},
	{}
};

$MethodInfo _Duped_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Duped::*)()>(&Duped::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Duped::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Duped_InnerClassesInfo_[] = {
	{"Duped$Echo", "Duped", "Echo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Duped_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Duped",
	"java.lang.Object",
	nullptr,
	_Duped_FieldInfo_,
	_Duped_MethodInfo_,
	nullptr,
	nullptr,
	_Duped_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Duped$Echo"
};

$Object* allocate$Duped($Class* clazz) {
	return $of($alloc(Duped));
}

$String* Duped::HELLO = nullptr;

void Duped::init$() {
}

void Duped::main($StringArray* args) {
	$init(Duped);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($String, var$1, $$str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java -classpath "_s}));
	$var($String, var$0, $$concat(var$1, $($System::getProperty("java.class.path"_s))));
	$var($String, command, $concat(var$0, " Duped$Echo"));
	if ($nc(args)->length == 1 && $nc(args->get(0))->equals("-dont"_s)) {
	} else {
		$nc($System::in)->close();
	}
	$var($Process, p, $nc($($Runtime::getRuntime()))->exec(command));
	$var($PrintStream, out, $new($PrintStream, $($nc(p)->getOutputStream())));
	out->println(Duped::HELLO);
	out->close();
	$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
	$var($String, read, in->readLine());
	if (!$nc(Duped::HELLO)->equals(read)) {
		$throwNew($Exception, $$str({"Failed, read ``"_s, read, "\'\'"_s}));
	}
}

Duped::Duped() {
}

void clinit$Duped($Class* class$) {
	$assignStatic(Duped::HELLO, "Hello, world!"_s);
}

$Class* Duped::load$($String* name, bool initialize) {
	$loadClass(Duped, name, initialize, &_Duped_ClassInfo_, clinit$Duped, allocate$Duped);
	return class$;
}

$Class* Duped::class$ = nullptr;