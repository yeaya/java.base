#include <sun/security/provider/FileInputStreamPool$UnclosableInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <sun/security/provider/FileInputStreamPool.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _FileInputStreamPool$UnclosableInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(FileInputStreamPool$UnclosableInputStream, init$, void, $InputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileInputStreamPool$UnclosableInputStream, close, void), "java.io.IOException"},
	{"getWrappedStream", "()Ljava/io/InputStream;", nullptr, 0, $method(FileInputStreamPool$UnclosableInputStream, getWrappedStream, $InputStream*)},
	{}
};

$InnerClassInfo _FileInputStreamPool$UnclosableInputStream_InnerClassesInfo_[] = {
	{"sun.security.provider.FileInputStreamPool$UnclosableInputStream", "sun.security.provider.FileInputStreamPool", "UnclosableInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FileInputStreamPool$UnclosableInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.FileInputStreamPool$UnclosableInputStream",
	"java.io.FilterInputStream",
	nullptr,
	nullptr,
	_FileInputStreamPool$UnclosableInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FileInputStreamPool$UnclosableInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.FileInputStreamPool"
};

$Object* allocate$FileInputStreamPool$UnclosableInputStream($Class* clazz) {
	return $of($alloc(FileInputStreamPool$UnclosableInputStream));
}

void FileInputStreamPool$UnclosableInputStream::init$($InputStream* in) {
	$FilterInputStream::init$(in);
}

void FileInputStreamPool$UnclosableInputStream::close() {
}

$InputStream* FileInputStreamPool$UnclosableInputStream::getWrappedStream() {
	return this->in;
}

FileInputStreamPool$UnclosableInputStream::FileInputStreamPool$UnclosableInputStream() {
}

$Class* FileInputStreamPool$UnclosableInputStream::load$($String* name, bool initialize) {
	$loadClass(FileInputStreamPool$UnclosableInputStream, name, initialize, &_FileInputStreamPool$UnclosableInputStream_ClassInfo_, allocate$FileInputStreamPool$UnclosableInputStream);
	return class$;
}

$Class* FileInputStreamPool$UnclosableInputStream::class$ = nullptr;

		} // provider
	} // security
} // sun