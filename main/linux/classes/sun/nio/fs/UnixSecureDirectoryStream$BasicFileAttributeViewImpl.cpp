#include <sun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/file/ClosedDirectoryStreamException.h>
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
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $UnixSecureDirectoryStream = ::sun::nio::fs::UnixSecureDirectoryStream;

namespace sun {
	namespace nio {
		namespace fs {

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
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		if (this->file == nullptr) {
			$$nc($nc(this->this$0->ds)->directory())->checkWrite();
		} else {
			$$nc($$nc($nc(this->this$0->ds)->directory())->resolve(this->file))->checkWrite();
		}
	}
}

$String* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::name() {
	return "basic"_s;
}

$BasicFileAttributes* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::readAttributes() {
	$useLocalObjectStack();
	$$nc($nc(this->this$0->ds)->readLock())->lock();
	$var($Throwable, var$0, nullptr);
	$var($BasicFileAttributes, var$2, nullptr);
	bool return$1 = false;
	try {
		if (!this->this$0->ds->isOpen()) {
			$throwNew($ClosedDirectoryStreamException);
		}
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			if (this->file == nullptr) {
				$$nc(this->this$0->ds->directory())->checkRead();
			} else {
				$$nc($$nc(this->this$0->ds->directory())->resolve(this->file))->checkRead();
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
		$$nc(this->this$0->ds->readLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void UnixSecureDirectoryStream$BasicFileAttributeViewImpl::setTimes($FileTime* lastModifiedTime$renamed, $FileTime* lastAccessTime$renamed, $FileTime* createTime) {
	$useLocalObjectStack();
	$var($FileTime, lastModifiedTime, lastModifiedTime$renamed);
	$var($FileTime, lastAccessTime, lastAccessTime$renamed);
	checkWriteAccess();
	$$nc($nc(this->this$0->ds)->readLock())->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if (!this->this$0->ds->isOpen()) {
			$throwNew($ClosedDirectoryStreamException);
		}
		int32_t fd = (this->file == nullptr) ? this->this$0->dfd : open();
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
				$init($TimeUnit);
				int64_t var$2 = $nc(lastAccessTime)->to($TimeUnit::MICROSECONDS);
				$UnixNativeDispatcher::futimes(fd, var$2, $nc(lastModifiedTime)->to($TimeUnit::MICROSECONDS));
			} catch ($UnixException& x) {
				x->rethrowAsIOException(this->file);
			}
		} catch ($Throwable& var$3) {
			$assign(var$1, var$3);
		} /*finally*/ {
			if (this->file != nullptr) {
				$UnixNativeDispatcher::close(fd);
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		$$nc(this->this$0->ds->readLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

UnixSecureDirectoryStream$BasicFileAttributeViewImpl::UnixSecureDirectoryStream$BasicFileAttributeViewImpl() {
}

$Class* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixSecureDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, this$0)},
		{"file", "Lsun/nio/fs/UnixPath;", nullptr, $FINAL, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, file)},
		{"followLinks", "Z", nullptr, $FINAL, $field(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, followLinks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixSecureDirectoryStream;Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, init$, void, $UnixSecureDirectoryStream*, $UnixPath*, bool)},
		{"checkWriteAccess", "()V", nullptr, $PRIVATE, $method(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, checkWriteAccess, void)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, name, $String*)},
		{"open", "()I", nullptr, 0, $virtualMethod(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, open, int32_t), "java.io.IOException"},
		{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC, $virtualMethod(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, readAttributes, $BasicFileAttributes*), "java.io.IOException"},
		{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, $virtualMethod(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl", "sun.nio.fs.UnixSecureDirectoryStream", "BasicFileAttributeViewImpl", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl",
		"java.lang.Object",
		"java.nio.file.attribute.BasicFileAttributeView",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixSecureDirectoryStream"
	};
	$loadClass(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixSecureDirectoryStream$BasicFileAttributeViewImpl);
	});
	return class$;
}

$Class* UnixSecureDirectoryStream$BasicFileAttributeViewImpl::class$ = nullptr;

		} // fs
	} // nio
} // sun