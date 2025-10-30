#include <ExtendedFileInputStream.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExtendedFileInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(ExtendedFileInputStream::*)($File*)>(&ExtendedFileInputStream::init$)), "java.io.FileNotFoundException"},
	{}
};

$ClassInfo _ExtendedFileInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"ExtendedFileInputStream",
	"java.io.FileInputStream",
	nullptr,
	nullptr,
	_ExtendedFileInputStream_MethodInfo_
};

$Object* allocate$ExtendedFileInputStream($Class* clazz) {
	return $of($alloc(ExtendedFileInputStream));
}

void ExtendedFileInputStream::init$($File* file) {
	$FileInputStream::init$(file);
}

ExtendedFileInputStream::ExtendedFileInputStream() {
}

$Class* ExtendedFileInputStream::load$($String* name, bool initialize) {
	$loadClass(ExtendedFileInputStream, name, initialize, &_ExtendedFileInputStream_ClassInfo_, allocate$ExtendedFileInputStream);
	return class$;
}

$Class* ExtendedFileInputStream::class$ = nullptr;