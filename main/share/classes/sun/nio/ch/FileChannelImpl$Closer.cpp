#include <sun/nio/ch/FileChannelImpl$Closer.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _FileChannelImpl$Closer_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(FileChannelImpl$Closer, fd)},
	{}
};

$MethodInfo _FileChannelImpl$Closer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(FileChannelImpl$Closer, init$, void, $FileDescriptor*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$Closer, run, void)},
	{}
};

$InnerClassInfo _FileChannelImpl$Closer_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileChannelImpl$Closer", "sun.nio.ch.FileChannelImpl", "Closer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileChannelImpl$Closer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileChannelImpl$Closer",
	"java.lang.Object",
	"java.lang.Runnable",
	_FileChannelImpl$Closer_FieldInfo_,
	_FileChannelImpl$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_FileChannelImpl$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileChannelImpl"
};

$Object* allocate$FileChannelImpl$Closer($Class* clazz) {
	return $of($alloc(FileChannelImpl$Closer));
}

void FileChannelImpl$Closer::init$($FileDescriptor* fd) {
	$set(this, fd, fd);
}

void FileChannelImpl$Closer::run() {
	try {
		$init($FileChannelImpl);
		$nc($FileChannelImpl::fdAccess)->close(this->fd);
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, "close"_s, ioe);
	}
}

FileChannelImpl$Closer::FileChannelImpl$Closer() {
}

$Class* FileChannelImpl$Closer::load$($String* name, bool initialize) {
	$loadClass(FileChannelImpl$Closer, name, initialize, &_FileChannelImpl$Closer_ClassInfo_, allocate$FileChannelImpl$Closer);
	return class$;
}

$Class* FileChannelImpl$Closer::class$ = nullptr;

		} // ch
	} // nio
} // sun