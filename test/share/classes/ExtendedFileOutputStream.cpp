#include <ExtendedFileOutputStream.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExtendedFileOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(ExtendedFileOutputStream::*)($File*)>(&ExtendedFileOutputStream::init$)), "java.io.FileNotFoundException"},
	{}
};

$ClassInfo _ExtendedFileOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"ExtendedFileOutputStream",
	"java.io.FileOutputStream",
	nullptr,
	nullptr,
	_ExtendedFileOutputStream_MethodInfo_
};

$Object* allocate$ExtendedFileOutputStream($Class* clazz) {
	return $of($alloc(ExtendedFileOutputStream));
}

void ExtendedFileOutputStream::init$($File* file) {
	$FileOutputStream::init$(file);
}

ExtendedFileOutputStream::ExtendedFileOutputStream() {
}

$Class* ExtendedFileOutputStream::load$($String* name, bool initialize) {
	$loadClass(ExtendedFileOutputStream, name, initialize, &_ExtendedFileOutputStream_ClassInfo_, allocate$ExtendedFileOutputStream);
	return class$;
}

$Class* ExtendedFileOutputStream::class$ = nullptr;