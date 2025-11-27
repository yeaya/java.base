#include <sun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl.h>

#include <java/lang/SecurityManager.h>
#include <java/nio/file/ClosedDirectoryStreamException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Lock.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixDirectoryStream.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/UnixSecureDirectoryStream.h>
#include <jcpp.h>

#undef MICROSECONDS
#undef O_NOFOLLOW
#undef O_RDONLY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ClosedDirectoryStreamException = ::java::nio::file::ClosedDirectoryStreamException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Lock = ::java::util::concurrent::locks::Lock;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixDirectoryStream = ::sun::nio::fs::UnixDirectoryStream;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $UnixSecureDirectoryStream = ::sun::nio::fs::UnixSecureDirectoryStream;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixSecureDirectoryStream$BasicFileAttributeViewImpl_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixSecureDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, this$0)},
	{"file", "Lsun/nio/fs/UnixPath;", nullptr, $FINAL, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, file)},
	{"followLinks", "Z", nullptr, $FINAL, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, followLinks)},
	{}
};

$MethodInfo _UnixSecureDirectoryStream$BasicFileAttributeViewImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixSecureDirectoryStream;Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(static_cast<void(UnixSecureDirectoryStream$BasicFileAttributeViewImpl::*)($UnixSecureDirectoryStream*,$UnixPath*,bool)>(&UnixSecureDirectoryStream$BasicFileAttributeViewImpl::init$))},
	{"checkWriteAccess", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixSecureDirectoryStream$BasicFileAttributeViewImpl::*)()>(&UnixSecureDirectoryStream$BasicFileAttributeViewImpl::checkWriteAccess))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"open", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _UnixSecureDirectoryStream$BasicFileAttributeViewImpl_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl", "sun.nio.fs.UnixSecureDirectoryStream", "BasicFileAttributeViewImpl", $PRIVATE},
	{}
};

$ClassInfo _UnixSecureDirectoryStream$BasicFileAttributeViewImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributeView",
	_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_FieldInfo_,
	_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_MethodInfo_,
	nullptr,
	nullptr,
	_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixSecureDirectoryStream"
};

$Object* allocate$UnixSecureDirectoryStream$BasicFileAttributeViewImpl($Class* clazz) {
	return $of($alloc(UnixSecureDirectoryStream$BasicFileAttributeViewImpl));
}

void UnixSecureDirectoryStream$BasicFileAttributeViewImpl::init$($UnixSecureDirectoryStream* this$0, $UnixPath* file, bool followLinks) {
	$set(this, this$0, this$0);
	$set(this, file, file);
	this->followLinks = followLinks;
}

int32_t UnixSecureDirectoryStream$BasicFileAttributeViewImpl::open() {
	$init($UnixConstants);
	int32_t oflags = $UnixConstants::O_RDONLY;
	if (!this->followLinks) {
		oflags |= $UnixConstants::O_NOFOLLOW;
	}
	try {
		return $UnixNativeDispatcher::openat(this->this$0->dfd, $($nc(this->file)->asByteArray()), oflags, 0);
	} catch ($UnixException& x) {
		x->rethrowAsIOException(this->file);
		return -1;
	}
	$shouldNotReachHere();
}

void UnixSecureDirectoryStream$BasicFileAttributeViewImpl::checkWriteAccess() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		if (this->file == nullptr) {
			$nc($($nc(this->this$0->ds)->directory()))->checkWrite();
		} else {
			$nc($($nc($($nc(this->this$0->ds)->directory()))->resolve(static_cast<$Path*>(this->file))))->checkWrite();
		}
	}
}

$String* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::name() {
	return "basic"_s;
}

$BasicFileAttributes* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::readAttributes() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->this$0->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($BasicFileAttributes, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!$nc(this->this$0->ds)->isOpen()) {
				$throwNew($ClosedDirectoryStreamException);
			}
			$var($SecurityManager, sm, $System::getSecurityManager());
			if (sm != nullptr) {
				if (this->file == nullptr) {
					$nc($($nc(this->this$0->ds)->directory()))->checkRead();
				} else {
					$nc($($nc($($nc(this->this$0->ds)->directory()))->resolve(static_cast<$Path*>(this->file))))->checkRead();
				}
			}
			try {
				$var($UnixFileAttributes, attrs, (this->file == nullptr) ? $UnixFileAttributes::get(this->this$0->dfd) : $UnixFileAttributes::get(this->this$0->dfd, this->file, this->followLinks));
				$assign(var$2, $nc(attrs)->asBasicFileAttributes());
				return$1 = true;
				goto $finally;
			} catch ($UnixException& x) {
				x->rethrowAsIOException(this->file);
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($nc(this->this$0->ds)->readLock()))->unlock();
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

void UnixSecureDirectoryStream$BasicFileAttributeViewImpl::setTimes($FileTime* lastModifiedTime$renamed, $FileTime* lastAccessTime$renamed, $FileTime* createTime) {
	$useLocalCurrentObjectStackCache();
	$var($FileTime, lastModifiedTime, lastModifiedTime$renamed);
	$var($FileTime, lastAccessTime, lastAccessTime$renamed);
	checkWriteAccess();
	$nc($($nc(this->this$0->ds)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!$nc(this->this$0->ds)->isOpen()) {
				$throwNew($ClosedDirectoryStreamException);
			}
			int32_t fd = (this->file == nullptr) ? this->this$0->dfd : open();
			{
				$var($Throwable, var$1, nullptr);
				try {
					if (lastModifiedTime == nullptr || lastAccessTime == nullptr) {
						try {
							$var($UnixFileAttributes, attrs, $UnixFileAttributes::get(fd));
							if (lastModifiedTime == nullptr) {
								$assign(lastModifiedTime, $nc(attrs)->lastModifiedTime());
							}
							if (lastAccessTime == nullptr) {
								$assign(lastAccessTime, $nc(attrs)->lastAccessTime());
							}
						} catch ($UnixException& x) {
							x->rethrowAsIOException(this->file);
						}
					}
					try {
						int32_t var$2 = fd;
						$init($TimeUnit);
						int64_t var$3 = $nc(lastAccessTime)->to($TimeUnit::MICROSECONDS);
						$UnixNativeDispatcher::futimes(var$2, var$3, $nc(lastModifiedTime)->to($TimeUnit::MICROSECONDS));
					} catch ($UnixException& x) {
						x->rethrowAsIOException(this->file);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					if (this->file != nullptr) {
						$UnixNativeDispatcher::close(fd);
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$nc($($nc(this->this$0->ds)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

UnixSecureDirectoryStream$BasicFileAttributeViewImpl::UnixSecureDirectoryStream$BasicFileAttributeViewImpl() {
}

$Class* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::load$($String* name, bool initialize) {
	$loadClass(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, name, initialize, &_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_ClassInfo_, allocate$UnixSecureDirectoryStream$BasicFileAttributeViewImpl);
	return class$;
}

$Class* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::class$ = nullptr;

		} // fs
	} // nio
} // sun