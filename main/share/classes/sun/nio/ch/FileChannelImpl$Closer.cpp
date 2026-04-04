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
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

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
	$FieldInfo fieldInfos$$[] = {
		{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(FileChannelImpl$Closer, fd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(FileChannelImpl$Closer, init$, void, $FileDescriptor*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$Closer, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.FileChannelImpl$Closer", "sun.nio.ch.FileChannelImpl", "Closer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.FileChannelImpl$Closer",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.FileChannelImpl"
	};
	$loadClass(FileChannelImpl$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileChannelImpl$Closer);
	});
	return class$;
}

$Class* FileChannelImpl$Closer::class$ = nullptr;

		} // ch
	} // nio
} // sun