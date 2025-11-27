#include <sun/nio/fs/UnixSecureDirectoryStream.h>

#include <java/lang/SecurityManager.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AtomicMoveNotSupportedException.h>
#include <java/nio/file/ClosedDirectoryStreamException.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/SecureDirectoryStream.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/Lock.h>
#include <sun/nio/fs/UnixChannelFactory.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixDirectoryStream.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileModeAttribute.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl.h>
#include <sun/nio/fs/UnixSecureDirectoryStream$PosixFileAttributeViewImpl.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef ALL_READWRITE
#undef AT_REMOVEDIR
#undef EEXIST
#undef ENOTDIR
#undef ENOTEMPTY
#undef EXDEV
#undef O_NOFOLLOW
#undef O_RDONLY

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $AtomicMoveNotSupportedException = ::java::nio::file::AtomicMoveNotSupportedException;
using $ClosedDirectoryStreamException = ::java::nio::file::ClosedDirectoryStreamException;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $Path = ::java::nio::file::Path;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $SecureDirectoryStream = ::java::nio::file::SecureDirectoryStream;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Lock = ::java::util::concurrent::locks::Lock;
using $UnixChannelFactory = ::sun::nio::fs::UnixChannelFactory;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixDirectoryStream = ::sun::nio::fs::UnixDirectoryStream;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileModeAttribute = ::sun::nio::fs::UnixFileModeAttribute;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $UnixSecureDirectoryStream$BasicFileAttributeViewImpl = ::sun::nio::fs::UnixSecureDirectoryStream$BasicFileAttributeViewImpl;
using $UnixSecureDirectoryStream$PosixFileAttributeViewImpl = ::sun::nio::fs::UnixSecureDirectoryStream$PosixFileAttributeViewImpl;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixSecureDirectoryStream_FieldInfo_[] = {
	{"ds", "Lsun/nio/fs/UnixDirectoryStream;", nullptr, $PRIVATE | $FINAL, $field(UnixSecureDirectoryStream, ds)},
	{"dfd", "I", nullptr, $PRIVATE | $FINAL, $field(UnixSecureDirectoryStream, dfd)},
	{}
};

$MethodInfo _UnixSecureDirectoryStream_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;JILjava/nio/file/DirectoryStream$Filter;)V", "(Lsun/nio/fs/UnixPath;JILjava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)V", 0, $method(static_cast<void(UnixSecureDirectoryStream::*)($UnixPath*,int64_t,int32_t,$DirectoryStream$Filter*)>(&UnixSecureDirectoryStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"deleteDirectory", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"deleteDirectory", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"deleteFile", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"deleteFile", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getFileAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/nio/file/Path;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT},
	{"getFileAttributeView", "(Ljava/lang/Object;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFileAttributeViewImpl", "(Lsun/nio/fs/UnixPath;Ljava/lang/Class;Z)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Lsun/nio/fs/UnixPath;Ljava/lang/Class<TV;>;Z)TV;", $PRIVATE, $method(static_cast<$FileAttributeView*(UnixSecureDirectoryStream::*)($UnixPath*,$Class*,bool)>(&UnixSecureDirectoryStream::getFileAttributeViewImpl))},
	{"getName", "(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;", nullptr, $PRIVATE, $method(static_cast<$UnixPath*(UnixSecureDirectoryStream::*)($Path*)>(&UnixSecureDirectoryStream::getName))},
	{"implDelete", "(Ljava/nio/file/Path;ZI)V", nullptr, $PRIVATE, $method(static_cast<void(UnixSecureDirectoryStream::*)($Path*,bool,int32_t)>(&UnixSecureDirectoryStream::implDelete)), "java.io.IOException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{"move", "(Ljava/nio/file/Path;Ljava/nio/file/SecureDirectoryStream;Ljava/nio/file/Path;)V", "(Ljava/nio/file/Path;Ljava/nio/file/SecureDirectoryStream<Ljava/nio/file/Path;>;Ljava/nio/file/Path;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"move", "(Ljava/lang/Object;Ljava/nio/file/SecureDirectoryStream;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newByteChannel", "(Ljava/lang/Object;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream;", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _UnixSecureDirectoryStream_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixSecureDirectoryStream$PosixFileAttributeViewImpl", "sun.nio.fs.UnixSecureDirectoryStream", "PosixFileAttributeViewImpl", $PRIVATE},
	{"sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl", "sun.nio.fs.UnixSecureDirectoryStream", "BasicFileAttributeViewImpl", $PRIVATE},
	{}
};

$ClassInfo _UnixSecureDirectoryStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixSecureDirectoryStream",
	"java.lang.Object",
	"java.nio.file.SecureDirectoryStream",
	_UnixSecureDirectoryStream_FieldInfo_,
	_UnixSecureDirectoryStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/SecureDirectoryStream<Ljava/nio/file/Path;>;",
	nullptr,
	_UnixSecureDirectoryStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixSecureDirectoryStream$PosixFileAttributeViewImpl,sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl"
};

$Object* allocate$UnixSecureDirectoryStream($Class* clazz) {
	return $of($alloc(UnixSecureDirectoryStream));
}

void UnixSecureDirectoryStream::init$($UnixPath* dir, int64_t dp, int32_t dfd, $DirectoryStream$Filter* filter) {
	$set(this, ds, $new($UnixDirectoryStream, dir, dp, filter));
	this->dfd = dfd;
}

void UnixSecureDirectoryStream::close() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->ds)->writeLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(this->ds)->closeImpl()) {
				$UnixNativeDispatcher::close(this->dfd);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($nc(this->ds)->writeLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Iterator* UnixSecureDirectoryStream::iterator() {
	return $nc(this->ds)->iterator(this);
}

$UnixPath* UnixSecureDirectoryStream::getName($Path* obj) {
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($UnixPath, obj))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast($UnixPath, obj);
}

$SecureDirectoryStream* UnixSecureDirectoryStream::newDirectoryStream($Path* obj, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($UnixPath, file, getName(obj));
	$var($UnixPath, child, $nc($($nc(this->ds)->directory()))->resolve(static_cast<$Path*>(file)));
	bool followLinks = $Util::followLinks(options);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc(child)->checkRead();
	}
	$nc($($nc(this->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SecureDirectoryStream, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!$nc(this->ds)->isOpen()) {
				$throwNew($ClosedDirectoryStreamException);
			}
			int32_t newdfd1 = -1;
			int32_t newdfd2 = -1;
			int64_t ptr = 0;
			try {
				$init($UnixConstants);
				int32_t flags = $UnixConstants::O_RDONLY;
				if (!followLinks) {
					flags |= $UnixConstants::O_NOFOLLOW;
				}
				newdfd1 = $UnixNativeDispatcher::openat(this->dfd, $($nc(file)->asByteArray()), flags, 0);
				newdfd2 = $UnixNativeDispatcher::dup(newdfd1);
				ptr = $UnixNativeDispatcher::fdopendir(newdfd1);
			} catch ($UnixException& x) {
				if (newdfd1 != -1) {
					$UnixNativeDispatcher::close(newdfd1);
				}
				if (newdfd2 != -1) {
					$UnixNativeDispatcher::close(newdfd2);
				}
				$init($UnixConstants);
				if (x->errno$() == $UnixConstants::ENOTDIR) {
					$throwNew($NotDirectoryException, $($nc(file)->toString()));
				}
				x->rethrowAsIOException(file);
			}
			$assign(var$2, $new(UnixSecureDirectoryStream, child, ptr, newdfd2, nullptr));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($nc(this->ds)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$SeekableByteChannel* UnixSecureDirectoryStream::newByteChannel($Path* obj, $Set* options, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($UnixPath, file, getName(obj));
	$init($UnixFileModeAttribute);
	int32_t mode = $UnixFileModeAttribute::toUnixMode($UnixFileModeAttribute::ALL_READWRITE, attrs);
	$var($String, pathToCheck, $nc($($nc($($nc(this->ds)->directory()))->resolve(static_cast<$Path*>(file))))->getPathForPermissionCheck());
	$nc($($nc(this->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SeekableByteChannel, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!$nc(this->ds)->isOpen()) {
				$throwNew($ClosedDirectoryStreamException);
			}
			try {
				$assign(var$2, $UnixChannelFactory::newFileChannel(this->dfd, file, pathToCheck, options, mode));
				return$1 = true;
				goto $finally;
			} catch ($UnixException& x) {
				x->rethrowAsIOException(file);
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($nc(this->ds)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void UnixSecureDirectoryStream::implDelete($Path* obj, bool haveFlags, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$var($UnixPath, file, getName(obj));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc($($nc($($nc(this->ds)->directory()))->resolve(static_cast<$Path*>(file))))->checkDelete();
	}
	$nc($($nc(this->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!$nc(this->ds)->isOpen()) {
				$throwNew($ClosedDirectoryStreamException);
			}
			if (!haveFlags) {
				$var($UnixFileAttributes, attrs, nullptr);
				try {
					$assign(attrs, $UnixFileAttributes::get(this->dfd, file, false));
				} catch ($UnixException& x) {
					x->rethrowAsIOException(file);
				}
				$init($UnixConstants);
				flags = ($nc(attrs)->isDirectory()) ? $UnixConstants::AT_REMOVEDIR : 0;
			}
			try {
				$UnixNativeDispatcher::unlinkat(this->dfd, $($nc(file)->asByteArray()), flags);
			} catch ($UnixException& x) {
				$init($UnixConstants);
				if (((int32_t)(flags & (uint32_t)$UnixConstants::AT_REMOVEDIR)) != 0) {
					bool var$1 = x->errno$() == $UnixConstants::EEXIST;
					if (var$1 || x->errno$() == $UnixConstants::ENOTEMPTY) {
						$throwNew($DirectoryNotEmptyException, nullptr);
					}
				}
				x->rethrowAsIOException(file);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc($($nc(this->ds)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixSecureDirectoryStream::deleteFile($Path* file) {
	implDelete(file, true, 0);
}

void UnixSecureDirectoryStream::deleteDirectory($Path* dir) {
	$init($UnixConstants);
	implDelete(dir, true, $UnixConstants::AT_REMOVEDIR);
}

void UnixSecureDirectoryStream::move($Path* fromObj, $SecureDirectoryStream* dir, $Path* toObj) {
	$useLocalCurrentObjectStackCache();
	$var($UnixPath, from, getName(fromObj));
	$var($UnixPath, to, getName(toObj));
	if (dir == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf(UnixSecureDirectoryStream, dir))) {
		$throwNew($ProviderMismatchException);
	}
	$var(UnixSecureDirectoryStream, that, $cast(UnixSecureDirectoryStream, dir));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc($($nc($($nc(this->ds)->directory()))->resolve(static_cast<$Path*>(from))))->checkWrite();
		$nc($($nc($($nc($nc(that)->ds)->directory()))->resolve(static_cast<$Path*>(to))))->checkWrite();
	}
	$nc($($nc(this->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($nc($nc(that)->ds)->readLock()))->lock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					bool var$2 = !$nc(this->ds)->isOpen();
					if (var$2 || !$nc(that->ds)->isOpen()) {
						$throwNew($ClosedDirectoryStreamException);
					}
					try {
						int32_t var$3 = this->dfd;
						$var($bytes, var$4, $nc(from)->asByteArray());
						int32_t var$5 = that->dfd;
						$UnixNativeDispatcher::renameat(var$3, var$4, var$5, $($nc(to)->asByteArray()));
					} catch ($UnixException& x) {
						$init($UnixConstants);
						if (x->errno$() == $UnixConstants::EXDEV) {
							$var($String, var$6, $nc(from)->toString());
							$var($String, var$7, $nc(to)->toString());
							$throwNew($AtomicMoveNotSupportedException, var$6, var$7, $(x->errorString()));
						}
						x->rethrowAsIOException(from, to);
					}
				} catch ($Throwable& var$8) {
					$assign(var$1, var$8);
				} /*finally*/ {
					$nc($($nc(that->ds)->readLock()))->unlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
		} /*finally*/ {
			$nc($($nc(this->ds)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$FileAttributeView* UnixSecureDirectoryStream::getFileAttributeViewImpl($UnixPath* file, $Class* type, bool followLinks) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* c = type;
	$load($BasicFileAttributeView);
	if (c == $BasicFileAttributeView::class$) {
		return static_cast<$FileAttributeView*>($new($UnixSecureDirectoryStream$BasicFileAttributeViewImpl, this, file, followLinks));
	}
	$load($PosixFileAttributeView);
	$load($FileOwnerAttributeView);
	if (c == $PosixFileAttributeView::class$ || c == $FileOwnerAttributeView::class$) {
		return static_cast<$FileAttributeView*>(static_cast<$BasicFileAttributeView*>(static_cast<$UnixSecureDirectoryStream$BasicFileAttributeViewImpl*>($new($UnixSecureDirectoryStream$PosixFileAttributeViewImpl, this, file, followLinks))));
	}
	return ($FileAttributeView*)nullptr;
}

$FileAttributeView* UnixSecureDirectoryStream::getFileAttributeView($Class* type) {
	return getFileAttributeViewImpl(nullptr, type, false);
}

$FileAttributeView* UnixSecureDirectoryStream::getFileAttributeView($Path* obj, $Class* type, $LinkOptionArray* options) {
	$var($UnixPath, file, getName(obj));
	bool followLinks = $Util::followLinks(options);
	return getFileAttributeViewImpl(file, type, followLinks);
}

$FileAttributeView* UnixSecureDirectoryStream::getFileAttributeView(Object$* obj, $Class* type, $LinkOptionArray* options) {
	return this->getFileAttributeView($cast($Path, obj), type, options);
}

void UnixSecureDirectoryStream::move(Object$* fromObj, $SecureDirectoryStream* dir, Object$* toObj) {
	this->move($cast($Path, fromObj), dir, $cast($Path, toObj));
}

void UnixSecureDirectoryStream::deleteDirectory(Object$* dir) {
	this->deleteDirectory($cast($Path, dir));
}

void UnixSecureDirectoryStream::deleteFile(Object$* file) {
	this->deleteFile($cast($Path, file));
}

$SeekableByteChannel* UnixSecureDirectoryStream::newByteChannel(Object$* obj, $Set* options, $FileAttributeArray* attrs) {
	return this->newByteChannel($cast($Path, obj), options, attrs);
}

$SecureDirectoryStream* UnixSecureDirectoryStream::newDirectoryStream(Object$* obj, $LinkOptionArray* options) {
	return this->newDirectoryStream($cast($Path, obj), options);
}

UnixSecureDirectoryStream::UnixSecureDirectoryStream() {
}

$Class* UnixSecureDirectoryStream::load$($String* name, bool initialize) {
	$loadClass(UnixSecureDirectoryStream, name, initialize, &_UnixSecureDirectoryStream_ClassInfo_, allocate$UnixSecureDirectoryStream);
	return class$;
}

$Class* UnixSecureDirectoryStream::class$ = nullptr;

		} // fs
	} // nio
} // sun