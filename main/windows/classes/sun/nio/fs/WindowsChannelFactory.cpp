#include <sun/nio/fs/WindowsChannelFactory.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <sun/nio/ch/WindowsAsynchronousFileChannelImpl.h>
#include <sun/nio/fs/WindowsChannelFactory$1.h>
#include <sun/nio/fs/WindowsChannelFactory$Flags.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

#undef OPEN_REPARSE_POINT

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $OpenOption = ::java::nio::file::OpenOption;
using $Set = ::java::util::Set;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $ThreadPool = ::sun::nio::ch::ThreadPool;
using $WindowsAsynchronousFileChannelImpl = ::sun::nio::ch::WindowsAsynchronousFileChannelImpl;
using $WindowsChannelFactory$1 = ::sun::nio::fs::WindowsChannelFactory$1;
using $WindowsChannelFactory$Flags = ::sun::nio::fs::WindowsChannelFactory$Flags;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsChannelFactory_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsChannelFactory, fdAccess)},
	{"OPEN_REPARSE_POINT", "Ljava/nio/file/OpenOption;", nullptr, $STATIC | $FINAL, $staticField(WindowsChannelFactory, OPEN_REPARSE_POINT)},
	{}
};

$MethodInfo _WindowsChannelFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsChannelFactory::*)()>(&WindowsChannelFactory::init$))},
	{"newAsynchronousFileChannel", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;JLsun/nio/ch/ThreadPool;)Ljava/nio/channels/AsynchronousFileChannel;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;JLsun/nio/ch/ThreadPool;)Ljava/nio/channels/AsynchronousFileChannel;", $STATIC, $method(static_cast<$AsynchronousFileChannel*(*)($String*,$String*,$Set*,int64_t,$ThreadPool*)>(&WindowsChannelFactory::newAsynchronousFileChannel)), "java.io.IOException"},
	{"newFileChannel", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;J)Ljava/nio/channels/FileChannel;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;J)Ljava/nio/channels/FileChannel;", $STATIC, $method(static_cast<$FileChannel*(*)($String*,$String*,$Set*,int64_t)>(&WindowsChannelFactory::newFileChannel)), "sun.nio.fs.WindowsException"},
	{"open", "(Ljava/lang/String;Ljava/lang/String;Lsun/nio/fs/WindowsChannelFactory$Flags;J)Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileDescriptor*(*)($String*,$String*,$WindowsChannelFactory$Flags*,int64_t)>(&WindowsChannelFactory::open)), "sun.nio.fs.WindowsException"},
	{}
};

$InnerClassInfo _WindowsChannelFactory_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsChannelFactory$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.nio.fs.WindowsChannelFactory$Flags", "sun.nio.fs.WindowsChannelFactory", "Flags", $PRIVATE | $STATIC},
	{"sun.nio.fs.WindowsChannelFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsChannelFactory_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsChannelFactory",
	"java.lang.Object",
	nullptr,
	_WindowsChannelFactory_FieldInfo_,
	_WindowsChannelFactory_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsChannelFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsChannelFactory$2,sun.nio.fs.WindowsChannelFactory$Flags,sun.nio.fs.WindowsChannelFactory$1"
};

$Object* allocate$WindowsChannelFactory($Class* clazz) {
	return $of($alloc(WindowsChannelFactory));
}

$JavaIOFileDescriptorAccess* WindowsChannelFactory::fdAccess = nullptr;
$OpenOption* WindowsChannelFactory::OPEN_REPARSE_POINT = nullptr;

void WindowsChannelFactory::init$() {
}

$FileChannel* WindowsChannelFactory::newFileChannel($String* pathForWindows, $String* pathToCheck, $Set* options, int64_t pSecurityDescriptor) {
	$init(WindowsChannelFactory);
	$useLocalCurrentObjectStackCache();
	$var($WindowsChannelFactory$Flags, flags, $WindowsChannelFactory$Flags::toFlags(options));
	if (!$nc(flags)->read && !flags->write) {
		if (flags->append) {
			flags->write = true;
		} else {
			flags->read = true;
		}
	}
	if ($nc(flags)->read && flags->append) {
		$throwNew($IllegalArgumentException, "READ + APPEND not allowed"_s);
	}
	if ($nc(flags)->append && flags->truncateExisting) {
		$throwNew($IllegalArgumentException, "APPEND + TRUNCATE_EXISTING not allowed"_s);
	}
	$var($FileDescriptor, fdObj, open(pathForWindows, pathToCheck, flags, pSecurityDescriptor));
	return $FileChannelImpl::open(fdObj, pathForWindows, $nc(flags)->read, flags->write, flags->direct, nullptr);
}

$AsynchronousFileChannel* WindowsChannelFactory::newAsynchronousFileChannel($String* pathForWindows, $String* pathToCheck, $Set* options, int64_t pSecurityDescriptor, $ThreadPool* pool) {
	$init(WindowsChannelFactory);
	$useLocalCurrentObjectStackCache();
	$var($WindowsChannelFactory$Flags, flags, $WindowsChannelFactory$Flags::toFlags(options));
	$nc(flags)->overlapped = true;
	if (!flags->read && !flags->write) {
		flags->read = true;
	}
	if (flags->append) {
		$throwNew($UnsupportedOperationException, "APPEND not allowed"_s);
	}
	$var($FileDescriptor, fdObj, nullptr);
	try {
		$assign(fdObj, open(pathForWindows, pathToCheck, flags, pSecurityDescriptor));
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(pathForWindows);
		return nullptr;
	}
	try {
		return $WindowsAsynchronousFileChannelImpl::open(fdObj, flags->read, flags->write, pool);
	} catch ($IOException& x) {
		$nc(WindowsChannelFactory::fdAccess)->close(fdObj);
		$throw(x);
	}
	$shouldNotReachHere();
}

$FileDescriptor* WindowsChannelFactory::open($String* pathForWindows, $String* pathToCheck, $WindowsChannelFactory$Flags* flags, int64_t pSecurityDescriptor) {
	$init(WindowsChannelFactory);
	$useLocalCurrentObjectStackCache();
	bool truncateAfterOpen = false;
	int32_t dwDesiredAccess = 0;
	if ($nc(flags)->read) {
		dwDesiredAccess |= (int32_t)0x80000000;
	}
	if ($nc(flags)->write) {
		dwDesiredAccess |= 0x40000000;
	}
	int32_t dwShareMode = 0;
	if ($nc(flags)->shareRead) {
		dwShareMode |= 1;
	}
	if ($nc(flags)->shareWrite) {
		dwShareMode |= 2;
	}
	if ($nc(flags)->shareDelete) {
		dwShareMode |= 4;
	}
	int32_t dwFlagsAndAttributes = 128;
	int32_t dwCreationDisposition = 3;
	if ($nc(flags)->write) {
		if (flags->createNew) {
			dwCreationDisposition = 1;
			dwFlagsAndAttributes |= 0x00200000;
		} else {
			if (flags->create) {
				dwCreationDisposition = 4;
			}
			if (flags->truncateExisting) {
				if (dwCreationDisposition == 4) {
					truncateAfterOpen = true;
				} else {
					dwCreationDisposition = 5;
				}
			}
		}
	}
	if ($nc(flags)->dsync || $nc(flags)->sync) {
		dwFlagsAndAttributes |= (int32_t)0x80000000;
	}
	if ($nc(flags)->overlapped) {
		dwFlagsAndAttributes |= 0x40000000;
	}
	if ($nc(flags)->deleteOnClose) {
		dwFlagsAndAttributes |= 0x04000000;
	}
	bool okayToFollowLinks = true;
	if (dwCreationDisposition != 1 && ($nc(flags)->noFollowLinks || $nc(flags)->openReparsePoint || $nc(flags)->deleteOnClose)) {
		if (flags->noFollowLinks || flags->deleteOnClose) {
			okayToFollowLinks = false;
		}
		dwFlagsAndAttributes |= 0x00200000;
	}
	if (pathToCheck != nullptr) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			if ($nc(flags)->read) {
				sm->checkRead(pathToCheck);
			}
			if ($nc(flags)->write) {
				sm->checkWrite(pathToCheck);
			}
			if ($nc(flags)->deleteOnClose) {
				sm->checkDelete(pathToCheck);
			}
		}
	}
	int64_t handle = $WindowsNativeDispatcher::CreateFile(pathForWindows, dwDesiredAccess, dwShareMode, pSecurityDescriptor, dwCreationDisposition, dwFlagsAndAttributes);
	if (!okayToFollowLinks) {
		try {
			if ($nc($($WindowsFileAttributes::readAttributes(handle)))->isSymbolicLink()) {
				$throwNew($WindowsException, "File is symbolic link"_s);
			}
		} catch ($WindowsException& x) {
			$WindowsNativeDispatcher::CloseHandle(handle);
			$throw(x);
		}
	}
	if (truncateAfterOpen) {
		try {
			$WindowsNativeDispatcher::SetEndOfFile(handle);
		} catch ($WindowsException& x) {
			if ($WindowsNativeDispatcher::GetFileSizeEx(handle) != 0) {
				$WindowsNativeDispatcher::CloseHandle(handle);
				$throw(x);
			}
		}
	}
	if (dwCreationDisposition == 1 && $nc(flags)->sparse) {
		try {
			$WindowsNativeDispatcher::DeviceIoControlSetSparse(handle);
		} catch ($WindowsException& x) {
		}
	}
	$var($FileDescriptor, fdObj, $new($FileDescriptor));
	$nc(WindowsChannelFactory::fdAccess)->setHandle(fdObj, handle);
	$nc(WindowsChannelFactory::fdAccess)->setAppend(fdObj, $nc(flags)->append);
	$nc(WindowsChannelFactory::fdAccess)->registerCleanup(fdObj);
	return fdObj;
}

void clinit$WindowsChannelFactory($Class* class$) {
	$assignStatic(WindowsChannelFactory::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
	$assignStatic(WindowsChannelFactory::OPEN_REPARSE_POINT, $new($WindowsChannelFactory$1));
}

WindowsChannelFactory::WindowsChannelFactory() {
}

$Class* WindowsChannelFactory::load$($String* name, bool initialize) {
	$loadClass(WindowsChannelFactory, name, initialize, &_WindowsChannelFactory_ClassInfo_, clinit$WindowsChannelFactory, allocate$WindowsChannelFactory);
	return class$;
}

$Class* WindowsChannelFactory::class$ = nullptr;

		} // fs
	} // nio
} // sun