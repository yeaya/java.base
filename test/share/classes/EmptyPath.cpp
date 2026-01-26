#include <EmptyPath.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _EmptyPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EmptyPath, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EmptyPath, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _EmptyPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EmptyPath",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EmptyPath_MethodInfo_
};

$Object* allocate$EmptyPath($Class* clazz) {
	return $of($alloc(EmptyPath));
}

void EmptyPath::init$() {
}

void EmptyPath::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, ""_s));
	f->mkdir();
	try {
		f->createNewFile();
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($IOException& ioe) {
	}
	try {
		$var($FileInputStream, fis, $new($FileInputStream, f));
		fis->close();
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($FileNotFoundException& fnfe) {
	}
}

EmptyPath::EmptyPath() {
}

$Class* EmptyPath::load$($String* name, bool initialize) {
	$loadClass(EmptyPath, name, initialize, &_EmptyPath_ClassInfo_, allocate$EmptyPath);
	return class$;
}

$Class* EmptyPath::class$ = nullptr;