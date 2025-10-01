#include <FileMethods$1.h>

#include <FileMethods.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FileMethods = ::FileMethods;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FileMethods$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileMethods$1::*)()>(&FileMethods$1::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileMethods$1_EnclosingMethodInfo_ = {
	"FileMethods",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _FileMethods$1_InnerClassesInfo_[] = {
	{"FileMethods$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileMethods$1_ClassInfo_ = {
	$ACC_SUPER,
	"FileMethods$1",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_FileMethods$1_MethodInfo_,
	nullptr,
	&_FileMethods$1_EnclosingMethodInfo_,
	_FileMethods$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FileMethods"
};

$Object* allocate$FileMethods$1($Class* clazz) {
	return $of($alloc(FileMethods$1));
}

void FileMethods$1::init$() {
}

bool FileMethods$1::accept($File* dir, $String* name) {
	return $nc(name)->endsWith(".class"_s);
}

FileMethods$1::FileMethods$1() {
}

$Class* FileMethods$1::load$($String* name, bool initialize) {
	$loadClass(FileMethods$1, name, initialize, &_FileMethods$1_ClassInfo_, allocate$FileMethods$1);
	return class$;
}

$Class* FileMethods$1::class$ = nullptr;