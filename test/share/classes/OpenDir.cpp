#include <OpenDir.h>

#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpenDir_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OpenDir::*)()>(&OpenDir::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpenDir::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _OpenDir_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpenDir",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OpenDir_MethodInfo_
};

$Object* allocate$OpenDir($Class* clazz) {
	return $of($alloc(OpenDir));
}

void OpenDir::init$() {
}

void OpenDir::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileInputStream, fs, nullptr);
	try {
		$assign(fs, $new($FileInputStream, "."_s));
		$throwNew($Exception, "FileInputStream.open should not work on dirs"_s);
	} catch ($IOException& e) {
	}
	$var($FileOutputStream, fos, nullptr);
	try {
		$assign(fos, $new($FileOutputStream, "."_s));
		$throwNew($Exception, "FileOutputStream.open should\'nt work on dirs"_s);
	} catch ($IOException& e) {
	}
	$var($RandomAccessFile, ras, nullptr);
	try {
		$assign(ras, $new($RandomAccessFile, "."_s, "r"_s));
		$throwNew($Exception, "RandomAccessFile.open should\'nt work on dirs"_s);
	} catch ($IOException& e) {
	}
}

OpenDir::OpenDir() {
}

$Class* OpenDir::load$($String* name, bool initialize) {
	$loadClass(OpenDir, name, initialize, &_OpenDir_ClassInfo_, allocate$OpenDir);
	return class$;
}

$Class* OpenDir::class$ = nullptr;