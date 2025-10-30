#include <sun/nio/fs/UnixFileAttributeViews$Basic.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributeViews.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

#undef EINVAL
#undef ELOOP
#undef ENXIO
#undef MICROSECONDS
#undef NANOSECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractBasicFileAttributeView = ::sun::nio::fs::AbstractBasicFileAttributeView;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributeViews = ::sun::nio::fs::UnixFileAttributeViews;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileAttributeViews$Basic_FieldInfo_[] = {
	{"file", "Lsun/nio/fs/UnixPath;", nullptr, $PROTECTED | $FINAL, $field(UnixFileAttributeViews$Basic, file)},
	{"followLinks", "Z", nullptr, $PROTECTED | $FINAL, $field(UnixFileAttributeViews$Basic, followLinks)},
	{}
};

$MethodInfo _UnixFileAttributeViews$Basic_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(static_cast<void(UnixFileAttributeViews$Basic::*)($UnixPath*,bool)>(&UnixFileAttributeViews$Basic::init$))},
	{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _UnixFileAttributeViews$Basic_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileAttributeViews$Basic", "sun.nio.fs.UnixFileAttributeViews", "Basic", $STATIC},
	{}
};

$ClassInfo _UnixFileAttributeViews$Basic_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileAttributeViews$Basic",
	"sun.nio.fs.AbstractBasicFileAttributeView",
	nullptr,
	_UnixFileAttributeViews$Basic_FieldInfo_,
	_UnixFileAttributeViews$Basic_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileAttributeViews$Basic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileAttributeViews"
};

$Object* allocate$UnixFileAttributeViews$Basic($Class* clazz) {
	return $of($alloc(UnixFileAttributeViews$Basic));
}

void UnixFileAttributeViews$Basic::init$($UnixPath* file, bool followLinks) {
	$AbstractBasicFileAttributeView::init$();
	$set(this, file, file);
	this->followLinks = followLinks;
}

$BasicFileAttributes* UnixFileAttributeViews$Basic::readAttributes() {
	$nc(this->file)->checkRead();
	try {
		$var($UnixFileAttributes, attrs, $UnixFileAttributes::get(this->file, this->followLinks));
		return $nc(attrs)->asBasicFileAttributes();
	} catch ($UnixException& x) {
		x->rethrowAsIOException(this->file);
		return nullptr;
	}
	$shouldNotReachHere();
}

void UnixFileAttributeViews$Basic::setTimes($FileTime* lastModifiedTime$renamed, $FileTime* lastAccessTime$renamed, $FileTime* createTime) {
	$useLocalCurrentObjectStackCache();
	$var($FileTime, lastModifiedTime, lastModifiedTime$renamed);
	$var($FileTime, lastAccessTime, lastAccessTime$renamed);
	if (lastModifiedTime == nullptr && lastAccessTime == nullptr) {
		return;
	}
	$nc(this->file)->checkWrite();
	bool haveFd = false;
	bool useFutimes = false;
	bool useFutimens = false;
	bool useLutimes = false;
	int32_t fd = -1;
	try {
		if (!this->followLinks) {
			bool var$0 = $UnixNativeDispatcher::lutimesSupported();
			useLutimes = var$0 && $nc($($UnixFileAttributes::get(this->file, false)))->isSymbolicLink();
		}
		if (!useLutimes) {
			fd = $nc(this->file)->openForAttributeAccess(this->followLinks);
			if (fd != -1) {
				haveFd = true;
				if (!(useFutimens = $UnixNativeDispatcher::futimensSupported())) {
					useFutimes = $UnixNativeDispatcher::futimesSupported();
				}
			}
		}
	} catch ($UnixException& x) {
		$init($UnixConstants);
		bool var$1 = x->errno$() == $UnixConstants::ENXIO;
		if (!(var$1 || (x->errno$() == $UnixConstants::ELOOP && useLutimes))) {
			x->rethrowAsIOException(this->file);
		}
	}
	{
		$var($Throwable, var$2, nullptr);
		try {
			if (lastModifiedTime == nullptr || lastAccessTime == nullptr) {
				try {
					$var($UnixFileAttributes, attrs, haveFd ? $UnixFileAttributes::get(fd) : $UnixFileAttributes::get(this->file, this->followLinks));
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
			$init($TimeUnit);
			$TimeUnit* timeUnit = useFutimens ? $TimeUnit::NANOSECONDS : $TimeUnit::MICROSECONDS;
			int64_t modValue = $nc(lastModifiedTime)->to(timeUnit);
			int64_t accessValue = $nc(lastAccessTime)->to(timeUnit);
			bool retry = false;
			try {
				if (useFutimens) {
					$UnixNativeDispatcher::futimens(fd, accessValue, modValue);
				} else if (useFutimes) {
					$UnixNativeDispatcher::futimes(fd, accessValue, modValue);
				} else if (useLutimes) {
					$UnixNativeDispatcher::lutimes(this->file, accessValue, modValue);
				} else {
					$UnixNativeDispatcher::utimes(this->file, accessValue, modValue);
				}
			} catch ($UnixException& x) {
				$init($UnixConstants);
				if (x->errno$() == $UnixConstants::EINVAL && (modValue < (int64_t)0 || accessValue < (int64_t)0)) {
					retry = true;
				} else {
					x->rethrowAsIOException(this->file);
				}
			}
			if (retry) {
				if (modValue < (int64_t)0) {
					modValue = 0;
				}
				if (accessValue < (int64_t)0) {
					accessValue = 0;
				}
				try {
					if (useFutimens) {
						$UnixNativeDispatcher::futimens(fd, accessValue, modValue);
					} else if (useFutimes) {
						$UnixNativeDispatcher::futimes(fd, accessValue, modValue);
					} else if (useLutimes) {
						$UnixNativeDispatcher::lutimes(this->file, accessValue, modValue);
					} else {
						$UnixNativeDispatcher::utimes(this->file, accessValue, modValue);
					}
				} catch ($UnixException& x) {
					x->rethrowAsIOException(this->file);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$UnixNativeDispatcher::close(fd);
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

UnixFileAttributeViews$Basic::UnixFileAttributeViews$Basic() {
}

$Class* UnixFileAttributeViews$Basic::load$($String* name, bool initialize) {
	$loadClass(UnixFileAttributeViews$Basic, name, initialize, &_UnixFileAttributeViews$Basic_ClassInfo_, allocate$UnixFileAttributeViews$Basic);
	return class$;
}

$Class* UnixFileAttributeViews$Basic::class$ = nullptr;

		} // fs
	} // nio
} // sun