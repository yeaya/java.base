#include <ModPowPowersof2.h>

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
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ModPowPowersof2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModPowPowersof2::*)()>(&ModPowPowersof2::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ModPowPowersof2::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ModPowPowersof2_InnerClassesInfo_[] = {
	{"ModPowPowersof2$ModTester", "ModPowPowersof2", "ModTester", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ModPowPowersof2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ModPowPowersof2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ModPowPowersof2_MethodInfo_,
	nullptr,
	nullptr,
	_ModPowPowersof2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ModPowPowersof2$ModTester"
};

$Object* allocate$ModPowPowersof2($Class* clazz) {
	return $of($alloc(ModPowPowersof2));
}

void ModPowPowersof2::init$() {
}

void ModPowPowersof2::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, command, $new($StringArray, 4));
	int32_t n = 0;
	$init($File);
	command->set(n++, $$str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	if ($System::getProperty("java.class.path"_s) != nullptr) {
		command->set(n++, "-classpath"_s);
		command->set(n++, $($System::getProperty("java.class.path"_s)));
	}
	command->set(n++, "ModPowPowersof2$ModTester"_s);
	$var($Process, p, nullptr);
	$assign(p, $nc($($Runtime::getRuntime()))->exec(command));
	$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
	$var($String, s, nullptr);
	$assign(s, in->readLine());
	if (s == nullptr) {
		$throwNew($RuntimeException, "ModPow causes vm crash"_s);
	}
}

ModPowPowersof2::ModPowPowersof2() {
}

$Class* ModPowPowersof2::load$($String* name, bool initialize) {
	$loadClass(ModPowPowersof2, name, initialize, &_ModPowPowersof2_ClassInfo_, allocate$ModPowPowersof2);
	return class$;
}

$Class* ModPowPowersof2::class$ = nullptr;