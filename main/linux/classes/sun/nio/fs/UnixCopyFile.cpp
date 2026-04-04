#include <sun/nio/fs/UnixCopyFile.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/AtomicMoveNotSupportedException.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkPermission.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/security/Permission.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/nio/fs/Cancellable.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixCopyFile$1.h>
#include <sun/nio/fs/UnixCopyFile$Flags.h>
#include <sun/nio/fs/UnixDirectoryStream.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

#undef EEXIST
#undef EISDIR
#undef ENOTEMPTY
#undef EXDEV
#undef MICROSECONDS
#undef O_CREAT
#undef O_EXCL
#undef O_RDONLY
#undef O_WRONLY

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicMoveNotSupportedException = ::java::nio::file::AtomicMoveNotSupportedException;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $LinkPermission = ::java::nio::file::LinkPermission;
using $Path = ::java::nio::file::Path;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Cancellable = ::sun::nio::fs::Cancellable;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixCopyFile$1 = ::sun::nio::fs::UnixCopyFile$1;
using $UnixCopyFile$Flags = ::sun::nio::fs::UnixCopyFile$Flags;
using $UnixDirectoryStream = ::sun::nio::fs::UnixDirectoryStream;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

class UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0 : public $DirectoryStream$Filter {
	$class(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0, $NO_CLASS_INIT, $DirectoryStream$Filter)
public:
	void init$() {
	}
	virtual bool accept(Object$* e) override {
		 return UnixCopyFile::lambda$ensureEmptyDir$0($cast($Path, e));
	}
};
$Class* UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0, init$, void)},
		{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0, accept, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.fs.UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0",
		"java.lang.Object",
		"java.nio.file.DirectoryStream$Filter",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0);
	});
	return class$;
}
$Class* UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0::class$ = nullptr;

void UnixCopyFile::init$() {
}

void UnixCopyFile::copyDirectory($UnixPath* source, $UnixFileAttributes* attrs, $UnixPath* target, $UnixCopyFile$Flags* flags) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	try {
		$UnixNativeDispatcher::mkdir(target, $nc(attrs)->mode());
	} catch ($UnixException& x) {
		x->rethrowAsIOException(target);
	}
	if (!$nc(flags)->copyBasicAttributes && !flags->copyPosixAttributes && !flags->copyNonPosixAttributes) {
		return;
	}
	int32_t dfd = -1;
	try {
		$init($UnixConstants);
		dfd = $UnixNativeDispatcher::open(target, $UnixConstants::O_RDONLY, 0);
	} catch ($UnixException& x) {
		if (flags->copyNonPosixAttributes && flags->failIfUnableToCopyNonPosix) {
			try {
				$UnixNativeDispatcher::rmdir(target);
			} catch ($UnixException& ignore) {
			}
			x->rethrowAsIOException(target);
		}
	}
	bool done = false;
	$var($Throwable, var$0, nullptr);
	try {
		if (flags->copyPosixAttributes) {
			try {
				if (dfd >= 0) {
					int32_t var$1 = $nc(attrs)->uid();
					$UnixNativeDispatcher::fchown(dfd, var$1, attrs->gid());
					$UnixNativeDispatcher::fchmod(dfd, attrs->mode());
				} else {
					int32_t var$2 = $nc(attrs)->uid();
					$UnixNativeDispatcher::chown(target, var$2, attrs->gid());
					$UnixNativeDispatcher::chmod(target, attrs->mode());
				}
			} catch ($UnixException& x) {
				if (flags->failIfUnableToCopyPosix) {
					x->rethrowAsIOException(target);
				}
			}
		}
		if (flags->copyNonPosixAttributes && (dfd >= 0)) {
			int32_t sfd = -1;
			try {
				$init($UnixConstants);
				sfd = $UnixNativeDispatcher::open(source, $UnixConstants::O_RDONLY, 0);
			} catch ($UnixException& x) {
				if (flags->failIfUnableToCopyNonPosix) {
					x->rethrowAsIOException(source);
				}
			}
			if (sfd >= 0) {
				$$sure($UnixFileSystem, $nc(source)->getFileSystem())->copyNonPosixAttributes(sfd, dfd);
				$UnixNativeDispatcher::close(sfd);
			}
		}
		if (flags->copyBasicAttributes) {
			try {
				if (dfd >= 0 && $UnixNativeDispatcher::futimesSupported()) {
					$init($TimeUnit);
					int64_t var$3 = $$nc($nc(attrs)->lastAccessTime())->to($TimeUnit::MICROSECONDS);
					$UnixNativeDispatcher::futimes(dfd, var$3, $$nc(attrs->lastModifiedTime())->to($TimeUnit::MICROSECONDS));
				} else {
					$init($TimeUnit);
					int64_t var$4 = $$nc($nc(attrs)->lastAccessTime())->to($TimeUnit::MICROSECONDS);
					$UnixNativeDispatcher::utimes(target, var$4, $$nc(attrs->lastModifiedTime())->to($TimeUnit::MICROSECONDS));
				}
			} catch ($UnixException& x) {
				if (flags->failIfUnableToCopyBasic) {
					x->rethrowAsIOException(target);
				}
			}
		}
		done = true;
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} /*finally*/ {
		if (dfd >= 0) {
			$UnixNativeDispatcher::close(dfd);
		}
		if (!done) {
			try {
				$UnixNativeDispatcher::rmdir(target);
			} catch ($UnixException& ignore) {
			}
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixCopyFile::copyFile($UnixPath* source, $UnixFileAttributes* attrs, $UnixPath* target, $UnixCopyFile$Flags* flags, int64_t addressToPollForCancel) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	int32_t fi = -1;
	try {
		$init($UnixConstants);
		fi = $UnixNativeDispatcher::open(source, $UnixConstants::O_RDONLY, 0);
	} catch ($UnixException& x) {
		x->rethrowAsIOException(source);
	}
	$var($Throwable, var$0, nullptr);
	try {
		int32_t fo = -1;
		try {
			$init($UnixConstants);
			fo = $UnixNativeDispatcher::open(target, (($UnixConstants::O_WRONLY | $UnixConstants::O_CREAT) | $UnixConstants::O_EXCL), $nc(attrs)->mode());
		} catch ($UnixException& x) {
			x->rethrowAsIOException(target);
		}
		bool complete = false;
		$var($Throwable, var$1, nullptr);
		try {
			try {
				transfer(fo, fi, addressToPollForCancel);
			} catch ($UnixException& x) {
				x->rethrowAsIOException(source, target);
			}
			if ($nc(flags)->copyPosixAttributes) {
				try {
					int32_t var$2 = $nc(attrs)->uid();
					$UnixNativeDispatcher::fchown(fo, var$2, attrs->gid());
					$UnixNativeDispatcher::fchmod(fo, attrs->mode());
				} catch ($UnixException& x) {
					if (flags->failIfUnableToCopyPosix) {
						x->rethrowAsIOException(target);
					}
				}
			}
			if (flags->copyNonPosixAttributes) {
				$$sure($UnixFileSystem, $nc(source)->getFileSystem())->copyNonPosixAttributes(fi, fo);
			}
			if (flags->copyBasicAttributes) {
				try {
					if ($UnixNativeDispatcher::futimesSupported()) {
						$init($TimeUnit);
						int64_t var$3 = $$nc($nc(attrs)->lastAccessTime())->to($TimeUnit::MICROSECONDS);
						$UnixNativeDispatcher::futimes(fo, var$3, $$nc(attrs->lastModifiedTime())->to($TimeUnit::MICROSECONDS));
					} else {
						$init($TimeUnit);
						int64_t var$4 = $$nc($nc(attrs)->lastAccessTime())->to($TimeUnit::MICROSECONDS);
						$UnixNativeDispatcher::utimes(target, var$4, $$nc(attrs->lastModifiedTime())->to($TimeUnit::MICROSECONDS));
					}
				} catch ($UnixException& x) {
					if (flags->failIfUnableToCopyBasic) {
						x->rethrowAsIOException(target);
					}
				}
			}
			complete = true;
		} catch ($Throwable& var$5) {
			$assign(var$1, var$5);
		} /*finally*/ {
			$UnixNativeDispatcher::close(fo);
			if (!complete) {
				try {
					$UnixNativeDispatcher::unlink(target);
				} catch ($UnixException& ignore) {
				}
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	} catch ($Throwable& var$6) {
		$assign(var$0, var$6);
	} /*finally*/ {
		$UnixNativeDispatcher::close(fi);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixCopyFile::copyLink($UnixPath* source, $UnixFileAttributes* attrs, $UnixPath* target, $UnixCopyFile$Flags* flags) {
	$init(UnixCopyFile);
	$var($bytes, linktarget, nullptr);
	try {
		$assign(linktarget, $UnixNativeDispatcher::readlink(source));
	} catch ($UnixException& x) {
		x->rethrowAsIOException(source);
	}
	try {
		$UnixNativeDispatcher::symlink(linktarget, target);
		if ($nc(flags)->copyPosixAttributes) {
			try {
				int32_t var$0 = $nc(attrs)->uid();
				$UnixNativeDispatcher::lchown(target, var$0, attrs->gid());
			} catch ($UnixException& x) {
			}
		}
	} catch ($UnixException& x) {
		x->rethrowAsIOException(target);
	}
}

void UnixCopyFile::copySpecial($UnixPath* source, $UnixFileAttributes* attrs, $UnixPath* target, $UnixCopyFile$Flags* flags) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	try {
		int32_t var$0 = $nc(attrs)->mode();
		$UnixNativeDispatcher::mknod(target, var$0, attrs->rdev());
	} catch ($UnixException& x) {
		x->rethrowAsIOException(target);
	}
	bool done = false;
	$var($Throwable, var$1, nullptr);
	try {
		if ($nc(flags)->copyPosixAttributes) {
			try {
				int32_t var$2 = $nc(attrs)->uid();
				$UnixNativeDispatcher::chown(target, var$2, attrs->gid());
				$UnixNativeDispatcher::chmod(target, attrs->mode());
			} catch ($UnixException& x) {
				if (flags->failIfUnableToCopyPosix) {
					x->rethrowAsIOException(target);
				}
			}
		}
		if (flags->copyBasicAttributes) {
			try {
				$init($TimeUnit);
				int64_t var$3 = $$nc($nc(attrs)->lastAccessTime())->to($TimeUnit::MICROSECONDS);
				$UnixNativeDispatcher::utimes(target, var$3, $$nc(attrs->lastModifiedTime())->to($TimeUnit::MICROSECONDS));
			} catch ($UnixException& x) {
				if (flags->failIfUnableToCopyBasic) {
					x->rethrowAsIOException(target);
				}
			}
		}
		done = true;
	} catch ($Throwable& var$4) {
		$assign(var$1, var$4);
	} /*finally*/ {
		if (!done) {
			try {
				$UnixNativeDispatcher::unlink(target);
			} catch ($UnixException& ignore) {
			}
		}
	}
	if (var$1 != nullptr) {
		$throw(var$1);
	}
}

void UnixCopyFile::ensureEmptyDir($UnixPath* dir) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	try {
		int64_t ptr = $UnixNativeDispatcher::opendir(dir);
		{
			$var($UnixDirectoryStream, stream, $new($UnixDirectoryStream, dir, ptr, $$new(UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0)));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if ($$nc(stream->iterator())->hasNext()) {
						$throwNew($DirectoryNotEmptyException, $($nc(dir)->getPathForExceptionMessage()));
					}
				} catch ($Throwable& t$) {
					try {
						stream->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				stream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($UnixException& e) {
		e->rethrowAsIOException(dir);
	}
}

void UnixCopyFile::move($UnixPath* source, $UnixPath* target, $CopyOptionArray* options) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc(source)->checkWrite();
		$nc(target)->checkWrite();
	}
	$var($UnixCopyFile$Flags, flags, $UnixCopyFile$Flags::fromMoveOptions(options));
	if ($nc(flags)->atomicMove) {
		try {
			$UnixNativeDispatcher::rename(source, target);
		} catch ($UnixException& x) {
			$init($UnixConstants);
			if (x->errno$() == $UnixConstants::EXDEV) {
				$var($String, var$0, $nc(source)->getPathForExceptionMessage());
				$var($String, var$1, $nc(target)->getPathForExceptionMessage());
				$throwNew($AtomicMoveNotSupportedException, var$0, var$1, $(x->errorString()));
			}
			x->rethrowAsIOException(source, target);
		}
		return;
	}
	$var($UnixFileAttributes, sourceAttrs, nullptr);
	$var($UnixFileAttributes, targetAttrs, nullptr);
	try {
		$assign(sourceAttrs, $UnixFileAttributes::get(source, false));
	} catch ($UnixException& x) {
		x->rethrowAsIOException(source);
	}
	try {
		$assign(targetAttrs, $UnixFileAttributes::get(target, false));
	} catch ($UnixException& x) {
	}
	bool targetExists = (targetAttrs != nullptr);
	if (targetExists) {
		if ($nc(sourceAttrs)->isSameFile(targetAttrs)) {
			return;
		}
		if (!flags->replaceExisting) {
			$throwNew($FileAlreadyExistsException, $($nc(target)->getPathForExceptionMessage()));
		}
		try {
			if ($nc(targetAttrs)->isDirectory()) {
				$UnixNativeDispatcher::rmdir(target);
			} else {
				$UnixNativeDispatcher::unlink(target);
			}
		} catch ($UnixException& x) {
			bool var$2 = $nc(targetAttrs)->isDirectory();
			if (var$2) {
				$init($UnixConstants);
				bool var$3 = x->errno$() == $UnixConstants::EEXIST;
				var$2 = var$3 || x->errno$() == $UnixConstants::ENOTEMPTY;
			}
			if (var$2) {
				$throwNew($DirectoryNotEmptyException, $($nc(target)->getPathForExceptionMessage()));
			}
			x->rethrowAsIOException(target);
		}
	}
	try {
		$UnixNativeDispatcher::rename(source, target);
		return;
	} catch ($UnixException& x) {
		$init($UnixConstants);
		bool var$4 = x->errno$() != $UnixConstants::EXDEV;
		if (var$4 && x->errno$() != $UnixConstants::EISDIR) {
			x->rethrowAsIOException(source, target);
		}
	}
	if ($nc(sourceAttrs)->isDirectory()) {
		ensureEmptyDir(source);
		copyDirectory(source, sourceAttrs, target, flags);
	} else if (sourceAttrs->isSymbolicLink()) {
		copyLink(source, sourceAttrs, target, flags);
	} else if (sourceAttrs->isDevice()) {
		copySpecial(source, sourceAttrs, target, flags);
	} else {
		copyFile(source, sourceAttrs, target, flags, 0);
	}
	try {
		if (sourceAttrs->isDirectory()) {
			$UnixNativeDispatcher::rmdir(source);
		} else {
			$UnixNativeDispatcher::unlink(source);
		}
	} catch ($UnixException& x) {
		try {
			if (sourceAttrs->isDirectory()) {
				$UnixNativeDispatcher::rmdir(target);
			} else {
				$UnixNativeDispatcher::unlink(target);
			}
		} catch ($UnixException& ignore) {
		}
		bool var$5 = sourceAttrs->isDirectory();
		if (var$5) {
			$init($UnixConstants);
			bool var$6 = x->errno$() == $UnixConstants::EEXIST;
			var$5 = var$6 || x->errno$() == $UnixConstants::ENOTEMPTY;
		}
		if (var$5) {
			$throwNew($DirectoryNotEmptyException, $($nc(source)->getPathForExceptionMessage()));
		}
		x->rethrowAsIOException(source);
	}
}

void UnixCopyFile::copy($UnixPath* source, $UnixPath* target, $CopyOptionArray* options) {
	$init(UnixCopyFile);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc(source)->checkRead();
		$nc(target)->checkWrite();
	}
	$var($UnixCopyFile$Flags, flags, $UnixCopyFile$Flags::fromCopyOptions(options));
	$var($UnixFileAttributes, sourceAttrs, nullptr);
	$var($UnixFileAttributes, targetAttrs, nullptr);
	try {
		$assign(sourceAttrs, $UnixFileAttributes::get(source, $nc(flags)->followLinks));
	} catch ($UnixException& x) {
		x->rethrowAsIOException(source);
	}
	if (sm != nullptr && $nc(sourceAttrs)->isSymbolicLink()) {
		sm->checkPermission($$new($LinkPermission, "symbolic"_s));
	}
	try {
		$assign(targetAttrs, $UnixFileAttributes::get(target, false));
	} catch ($UnixException& x) {
	}
	bool targetExists = (targetAttrs != nullptr);
	if (targetExists) {
		if ($nc(sourceAttrs)->isSameFile(targetAttrs)) {
			return;
		}
		if (!$nc(flags)->replaceExisting) {
			$throwNew($FileAlreadyExistsException, $($nc(target)->getPathForExceptionMessage()));
		}
		try {
			if ($nc(targetAttrs)->isDirectory()) {
				$UnixNativeDispatcher::rmdir(target);
			} else {
				$UnixNativeDispatcher::unlink(target);
			}
		} catch ($UnixException& x) {
			bool var$0 = $nc(targetAttrs)->isDirectory();
			if (var$0) {
				$init($UnixConstants);
				bool var$1 = x->errno$() == $UnixConstants::EEXIST;
				var$0 = var$1 || x->errno$() == $UnixConstants::ENOTEMPTY;
			}
			if (var$0) {
				$throwNew($DirectoryNotEmptyException, $($nc(target)->getPathForExceptionMessage()));
			}
			x->rethrowAsIOException(target);
		}
	}
	if ($nc(sourceAttrs)->isDirectory()) {
		copyDirectory(source, sourceAttrs, target, flags);
		return;
	}
	if (sourceAttrs->isSymbolicLink()) {
		copyLink(source, sourceAttrs, target, flags);
		return;
	}
	if (!$nc(flags)->interruptible) {
		copyFile(source, sourceAttrs, target, flags, 0);
		return;
	}
	$var($UnixFileAttributes, attrsToCopy, sourceAttrs);
	$var($Cancellable, copyTask, $new($UnixCopyFile$1, source, attrsToCopy, target, flags));
	try {
		$Cancellable::runInterruptibly(copyTask);
	} catch ($ExecutionException& e) {
		$var($Throwable, t, e->getCause());
		if ($instanceOf($IOException, t)) {
			$throw($cast($IOException, t));
		}
		$throwNew($IOException, t);
	}
}

void UnixCopyFile::transfer(int32_t dst, int32_t src, int64_t addressToPollForCancel) {
	$init(UnixCopyFile);
	$prepareNativeStatic(transfer, void, int32_t dst, int32_t src, int64_t addressToPollForCancel);
	$invokeNativeStatic(dst, src, addressToPollForCancel);
	$finishNativeStatic();
}

bool UnixCopyFile::lambda$ensureEmptyDir$0($Path* e) {
	$init(UnixCopyFile);
	return true;
}

void UnixCopyFile::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("nio"_s);
	}
}

UnixCopyFile::UnixCopyFile() {
}

$Class* UnixCopyFile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.fs.UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0")) {
			return UnixCopyFile$$Lambda$lambda$ensureEmptyDir$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UnixCopyFile, init$, void)},
		{"copy", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(UnixCopyFile, copy, void, $UnixPath*, $UnixPath*, $CopyOptionArray*), "java.io.IOException"},
		{"copyDirectory", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixCopyFile$Flags;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UnixCopyFile, copyDirectory, void, $UnixPath*, $UnixFileAttributes*, $UnixPath*, $UnixCopyFile$Flags*), "java.io.IOException"},
		{"copyFile", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixCopyFile$Flags;J)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UnixCopyFile, copyFile, void, $UnixPath*, $UnixFileAttributes*, $UnixPath*, $UnixCopyFile$Flags*, int64_t), "java.io.IOException"},
		{"copyLink", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixCopyFile$Flags;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UnixCopyFile, copyLink, void, $UnixPath*, $UnixFileAttributes*, $UnixPath*, $UnixCopyFile$Flags*), "java.io.IOException"},
		{"copySpecial", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixCopyFile$Flags;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UnixCopyFile, copySpecial, void, $UnixPath*, $UnixFileAttributes*, $UnixPath*, $UnixCopyFile$Flags*), "java.io.IOException"},
		{"ensureEmptyDir", "(Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixCopyFile, ensureEmptyDir, void, $UnixPath*), "java.io.IOException"},
		{"lambda$ensureEmptyDir$0", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnixCopyFile, lambda$ensureEmptyDir$0, bool, $Path*), "java.io.IOException"},
		{"move", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(UnixCopyFile, move, void, $UnixPath*, $UnixPath*, $CopyOptionArray*), "java.io.IOException"},
		{"transfer", "(IIJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixCopyFile, transfer, void, int32_t, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixCopyFile$Flags", "sun.nio.fs.UnixCopyFile", "Flags", $PRIVATE | $STATIC},
		{"sun.nio.fs.UnixCopyFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixCopyFile",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixCopyFile$Flags,sun.nio.fs.UnixCopyFile$1"
	};
	$loadClass(UnixCopyFile, name, initialize, &classInfo$$, UnixCopyFile::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixCopyFile);
	});
	return class$;
}

$Class* UnixCopyFile::class$ = nullptr;

		} // fs
	} // nio
} // sun