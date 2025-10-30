#include <BadDriveLetter.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _BadDriveLetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BadDriveLetter::*)()>(&BadDriveLetter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BadDriveLetter::main))},
	{}
};

$ClassInfo _BadDriveLetter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BadDriveLetter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BadDriveLetter_MethodInfo_
};

$Object* allocate$BadDriveLetter($Class* clazz) {
	return $of($alloc(BadDriveLetter));
}

void BadDriveLetter::init$() {
}

void BadDriveLetter::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($($$new($File, ".:"_s)->getAbsolutePath()));
}

BadDriveLetter::BadDriveLetter() {
}

$Class* BadDriveLetter::load$($String* name, bool initialize) {
	$loadClass(BadDriveLetter, name, initialize, &_BadDriveLetter_ClassInfo_, allocate$BadDriveLetter);
	return class$;
}

$Class* BadDriveLetter::class$ = nullptr;