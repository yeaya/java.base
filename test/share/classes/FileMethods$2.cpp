#include <FileMethods$2.h>

#include <FileMethods.h>
#include <java/io/File.h>
#include <jcpp.h>

using $FileMethods = ::FileMethods;
using $File = ::java::io::File;
using $FileFilter = ::java::io::FileFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FileMethods$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileMethods$2::*)()>(&FileMethods$2::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileMethods$2_EnclosingMethodInfo_ = {
	"FileMethods",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _FileMethods$2_InnerClassesInfo_[] = {
	{"FileMethods$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileMethods$2_ClassInfo_ = {
	$ACC_SUPER,
	"FileMethods$2",
	"java.lang.Object",
	"java.io.FileFilter",
	nullptr,
	_FileMethods$2_MethodInfo_,
	nullptr,
	&_FileMethods$2_EnclosingMethodInfo_,
	_FileMethods$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FileMethods"
};

$Object* allocate$FileMethods$2($Class* clazz) {
	return $of($alloc(FileMethods$2));
}

void FileMethods$2::init$() {
}

bool FileMethods$2::accept($File* f) {
	return $nc($($nc(f)->getPath()))->endsWith(".class"_s);
}

FileMethods$2::FileMethods$2() {
}

$Class* FileMethods$2::load$($String* name, bool initialize) {
	$loadClass(FileMethods$2, name, initialize, &_FileMethods$2_ClassInfo_, allocate$FileMethods$2);
	return class$;
}

$Class* FileMethods$2::class$ = nullptr;