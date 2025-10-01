#include <sun/nio/fs/UnixChannelFactory.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <sun/nio/ch/SimpleAsynchronousFileChannelImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <sun/nio/fs/UnixChannelFactory$Flags.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

#undef EEXIST
#undef O_DSYNC
#undef O_NOFOLLOW
#undef O_CREAT
#undef O_EXCL
#undef ENOENT
#undef O_APPEND
#undef O_RDWR
#undef O_TRUNC
#undef O_RDONLY
#undef EISDIR
#undef O_DIRECT
#undef ELOOP
#undef O_SYNC
#undef O_WRONLY

using $FileDescriptor = ::java::io::FileDescriptor;
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
using $Set = ::java::util::Set;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $SimpleAsynchronousFileChannelImpl = ::sun::nio::ch::SimpleAsynchronousFileChannelImpl;
using $ThreadPool = ::sun::nio::ch::ThreadPool;
using $UnixChannelFactory$Flags = ::sun::nio::fs::UnixChannelFactory$Flags;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixChannelFactory_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixChannelFactory, fdAccess)},
	{}
};

$MethodInfo _UnixChannelFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(UnixChannelFactory::*)()>(&UnixChannelFactory::init$))},
	{"newAsynchronousFileChannel", "(Lsun/nio/fs/UnixPath;Ljava/util/Set;ILsun/nio/ch/ThreadPool;)Ljava/nio/channels/AsynchronousFileChannel;", "(Lsun/nio/fs/UnixPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;ILsun/nio/ch/ThreadPool;)Ljava/nio/channels/AsynchronousFileChannel;", $STATIC, $method(static_cast<$AsynchronousFileChannel*(*)($UnixPath*,$Set*,int32_t,$ThreadPool*)>(&UnixChannelFactory::newAsynchronousFileChannel)), "sun.nio.fs.UnixException"},
	{"newFileChannel", "(ILsun/nio/fs/UnixPath;Ljava/lang/String;Ljava/util/Set;I)Ljava/nio/channels/FileChannel;", "(ILsun/nio/fs/UnixPath;Ljava/lang/String;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;I)Ljava/nio/channels/FileChannel;", $STATIC, $method(static_cast<$FileChannel*(*)(int32_t,$UnixPath*,$String*,$Set*,int32_t)>(&UnixChannelFactory::newFileChannel)), "sun.nio.fs.UnixException"},
	{"newFileChannel", "(Lsun/nio/fs/UnixPath;Ljava/util/Set;I)Ljava/nio/channels/FileChannel;", "(Lsun/nio/fs/UnixPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;I)Ljava/nio/channels/FileChannel;", $STATIC, $method(static_cast<$FileChannel*(*)($UnixPath*,$Set*,int32_t)>(&UnixChannelFactory::newFileChannel)), "sun.nio.fs.UnixException"},
	{"open", "(ILsun/nio/fs/UnixPath;Ljava/lang/String;Lsun/nio/fs/UnixChannelFactory$Flags;I)Ljava/io/FileDescriptor;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$FileDescriptor*(*)(int32_t,$UnixPath*,$String*,$UnixChannelFactory$Flags*,int32_t)>(&UnixChannelFactory::open)), "sun.nio.fs.UnixException"},
	{}
};

$InnerClassInfo _UnixChannelFactory_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixChannelFactory$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.nio.fs.UnixChannelFactory$Flags", "sun.nio.fs.UnixChannelFactory", "Flags", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _UnixChannelFactory_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixChannelFactory",
	"java.lang.Object",
	nullptr,
	_UnixChannelFactory_FieldInfo_,
	_UnixChannelFactory_MethodInfo_,
	nullptr,
	nullptr,
	_UnixChannelFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixChannelFactory$1,sun.nio.fs.UnixChannelFactory$Flags"
};

$Object* allocate$UnixChannelFactory($Class* clazz) {
	return $of($alloc(UnixChannelFactory));
}

$JavaIOFileDescriptorAccess* UnixChannelFactory::fdAccess = nullptr;

void UnixChannelFactory::init$() {
}

$FileChannel* UnixChannelFactory::newFileChannel(int32_t dfd, $UnixPath* path, $String* pathForPermissionCheck, $Set* options, int32_t mode) {
	$init(UnixChannelFactory);
	$var($UnixChannelFactory$Flags, flags, $UnixChannelFactory$Flags::toFlags(options));
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
	$var($FileDescriptor, fdObj, open(dfd, path, pathForPermissionCheck, flags, mode));
	return $FileChannelImpl::open(fdObj, $($nc(path)->toString()), $nc(flags)->read, flags->write, flags->direct, nullptr);
}

$FileChannel* UnixChannelFactory::newFileChannel($UnixPath* path, $Set* options, int32_t mode) {
	$init(UnixChannelFactory);
	return newFileChannel(-1, path, nullptr, options, mode);
}

$AsynchronousFileChannel* UnixChannelFactory::newAsynchronousFileChannel($UnixPath* path, $Set* options, int32_t mode, $ThreadPool* pool) {
	$init(UnixChannelFactory);
	$var($UnixChannelFactory$Flags, flags, $UnixChannelFactory$Flags::toFlags(options));
	if (!$nc(flags)->read && !flags->write) {
		flags->read = true;
	}
	if ($nc(flags)->append) {
		$throwNew($UnsupportedOperationException, "APPEND not allowed"_s);
	}
	$var($FileDescriptor, fdObj, open(-1, path, nullptr, flags, mode));
	return $SimpleAsynchronousFileChannelImpl::open(fdObj, $nc(flags)->read, flags->write, pool);
}

$FileDescriptor* UnixChannelFactory::open(int32_t dfd, $UnixPath* path, $String* pathForPermissionCheck$renamed, $UnixChannelFactory$Flags* flags, int32_t mode) {
	$init(UnixChannelFactory);
	$var($String, pathForPermissionCheck, pathForPermissionCheck$renamed);
	int32_t oflags = 0;
	if ($nc(flags)->read && flags->write) {
		$init($UnixConstants);
		oflags = $UnixConstants::O_RDWR;
	} else {
		$init($UnixConstants);
		oflags = (flags->write) ? $UnixConstants::O_WRONLY : $UnixConstants::O_RDONLY;
	}
	if ($nc(flags)->write) {
		if (flags->truncateExisting) {
			$init($UnixConstants);
			oflags |= $UnixConstants::O_TRUNC;
		}
		if (flags->append) {
			$init($UnixConstants);
			oflags |= $UnixConstants::O_APPEND;
		}
		if (flags->createNew) {
			$var($bytes, pathForSysCall, $nc(path)->asByteArray());
			if (($nc(pathForSysCall)->get(pathForSysCall->length - 1) == u'.') && (pathForSysCall->length == 1 || ($nc(pathForSysCall)->get(pathForSysCall->length - 2) == u'/'))) {
				$init($UnixConstants);
				$throwNew($UnixException, $UnixConstants::EEXIST);
			}
			$init($UnixConstants);
			oflags |= ($UnixConstants::O_CREAT | $UnixConstants::O_EXCL);
		} else if ($nc(flags)->create) {
			$init($UnixConstants);
			oflags |= $UnixConstants::O_CREAT;
		}
	}
	bool followLinks = true;
	if (!$nc(flags)->createNew && (flags->noFollowLinks || $nc(flags)->deleteOnClose)) {
		$init($UnixConstants);
		if (flags->deleteOnClose && $UnixConstants::O_NOFOLLOW == 0) {
			try {
				if ($nc($($UnixFileAttributes::get(path, false)))->isSymbolicLink()) {
					$throwNew($UnixException, "DELETE_ON_CLOSE specified and file is a symbolic link"_s);
				}
			} catch ($UnixException&) {
				$var($UnixException, x, $catch());
				if (!flags->create || x->errno$() != $UnixConstants::ENOENT) {
					$throw(x);
				}
			}
		}
		followLinks = false;
		oflags |= $UnixConstants::O_NOFOLLOW;
	}
	if ($nc(flags)->dsync) {
		$init($UnixConstants);
		oflags |= $UnixConstants::O_DSYNC;
	}
	if ($nc(flags)->sync) {
		$init($UnixConstants);
		oflags |= $UnixConstants::O_SYNC;
	}
	if ($nc(flags)->direct) {
		$init($UnixConstants);
		oflags |= $UnixConstants::O_DIRECT;
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		if (pathForPermissionCheck == nullptr) {
			$assign(pathForPermissionCheck, $nc(path)->getPathForPermissionCheck());
		}
		if ($nc(flags)->read) {
			sm->checkRead(pathForPermissionCheck);
		}
		if ($nc(flags)->write) {
			sm->checkWrite(pathForPermissionCheck);
		}
		if ($nc(flags)->deleteOnClose) {
			sm->checkDelete(pathForPermissionCheck);
		}
	}
	int32_t fd = 0;
	try {
		if (dfd >= 0) {
			fd = $UnixNativeDispatcher::openat(dfd, $($nc(path)->asByteArray()), oflags, mode);
		} else {
			fd = $UnixNativeDispatcher::open(path, oflags, mode);
		}
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		$init($UnixConstants);
		if ($nc(flags)->createNew && (x->errno$() == $UnixConstants::EISDIR)) {
			x->setError($UnixConstants::EEXIST);
		}
		if (!followLinks && (x->errno$() == $UnixConstants::ELOOP)) {
			$assign(x, $new($UnixException, $$str({$(x->getMessage()), " (NOFOLLOW_LINKS specified)"_s})));
		}
		$throw(x);
	}
	if ($nc(flags)->deleteOnClose) {
		try {
			if (dfd >= 0) {
				$UnixNativeDispatcher::unlinkat(dfd, $($nc(path)->asByteArray()), 0);
			} else {
				$UnixNativeDispatcher::unlink(path);
			}
		} catch ($UnixException&) {
			$catch();
		}
	}
	$var($FileDescriptor, fdObj, $new($FileDescriptor));
	$nc(UnixChannelFactory::fdAccess)->set(fdObj, fd);
	$nc(UnixChannelFactory::fdAccess)->setAppend(fdObj, $nc(flags)->append);
	return fdObj;
}

void clinit$UnixChannelFactory($Class* class$) {
	$assignStatic(UnixChannelFactory::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

UnixChannelFactory::UnixChannelFactory() {
}

$Class* UnixChannelFactory::load$($String* name, bool initialize) {
	$loadClass(UnixChannelFactory, name, initialize, &_UnixChannelFactory_ClassInfo_, clinit$UnixChannelFactory, allocate$UnixChannelFactory);
	return class$;
}

$Class* UnixChannelFactory::class$ = nullptr;

		} // fs
	} // nio
} // sun