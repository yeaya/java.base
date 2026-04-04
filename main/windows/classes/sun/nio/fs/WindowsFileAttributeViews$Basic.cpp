#include <sun/nio/fs/WindowsFileAttributeViews$Basic.h>
#include <java/io/IOException.h>
#include <java/lang/SecurityException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributeViews.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileStore.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

#undef FAT_EPOCH

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $AbstractBasicFileAttributeView = ::sun::nio::fs::AbstractBasicFileAttributeView;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileStore = ::sun::nio::fs::WindowsFileStore;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsFileAttributeViews$Basic::init$($WindowsPath* file, bool followLinks) {
	$AbstractBasicFileAttributeView::init$();
	$set(this, file, file);
	this->followLinks = followLinks;
}

$BasicFileAttributes* WindowsFileAttributeViews$Basic::readAttributes() {
	$nc(this->file)->checkRead();
	try {
		return $WindowsFileAttributes::get(this->file, this->followLinks);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(this->file);
		return nullptr;
	}
	$shouldNotReachHere();
}

int64_t WindowsFileAttributeViews$Basic::adjustForFatEpoch(int64_t time) {
	int64_t FAT_EPOCH = (int64_t)119600064000000000;
	if (time != -1 && time < FAT_EPOCH) {
		return FAT_EPOCH;
	} else {
		return time;
	}
}

void WindowsFileAttributeViews$Basic::setFileTimes(int64_t createTime, int64_t lastAccessTime, int64_t lastWriteTime) {
	$useLocalObjectStack();
	int64_t handle = -1;
	try {
		int32_t flags = 0x02000000;
		if (!this->followLinks) {
			flags |= 0x00200000;
		}
		handle = $WindowsNativeDispatcher::CreateFile($($nc(this->file)->getPathForWin32Calls()), 256, ((1 | 2) | 4), 3, flags);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(this->file);
	}
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$WindowsNativeDispatcher::SetFileTime(handle, createTime, lastAccessTime, lastWriteTime);
		} catch ($WindowsException& x) {
			if (this->followLinks && x->lastError() == 87) {
				try {
					if ($$nc($$nc($WindowsFileStore::create(this->file))->type())->equals("FAT"_s)) {
						int64_t var$1 = adjustForFatEpoch(createTime);
						int64_t var$2 = adjustForFatEpoch(lastAccessTime);
						$WindowsNativeDispatcher::SetFileTime(handle, var$1, var$2, adjustForFatEpoch(lastWriteTime));
						$assign(x, nullptr);
					}
				} catch ($SecurityException& ignore) {
				} catch ($WindowsException& ignore) {
				} catch ($IOException& ignore) {
				}
			}
			if (x != nullptr) {
				x->rethrowAsIOException(this->file);
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		$WindowsNativeDispatcher::CloseHandle(handle);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WindowsFileAttributeViews$Basic::setTimes($FileTime* lastModifiedTime, $FileTime* lastAccessTime, $FileTime* createTime) {
	if (lastModifiedTime == nullptr && lastAccessTime == nullptr && createTime == nullptr) {
		return;
	}
	$nc(this->file)->checkWrite();
	int64_t t1 = (createTime == nullptr) ? -1 : $WindowsFileAttributes::toWindowsTime(createTime);
	int64_t t2 = (lastAccessTime == nullptr) ? -1 : $WindowsFileAttributes::toWindowsTime(lastAccessTime);
	int64_t t3 = (lastModifiedTime == nullptr) ? -1 : $WindowsFileAttributes::toWindowsTime(lastModifiedTime);
	setFileTimes(t1, t2, t3);
}

WindowsFileAttributeViews$Basic::WindowsFileAttributeViews$Basic() {
}

$Class* WindowsFileAttributeViews$Basic::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Lsun/nio/fs/WindowsPath;", nullptr, $FINAL, $field(WindowsFileAttributeViews$Basic, file)},
		{"followLinks", "Z", nullptr, $FINAL, $field(WindowsFileAttributeViews$Basic, followLinks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsPath;Z)V", nullptr, 0, $method(WindowsFileAttributeViews$Basic, init$, void, $WindowsPath*, bool)},
		{"adjustForFatEpoch", "(J)J", nullptr, $PRIVATE, $method(WindowsFileAttributeViews$Basic, adjustForFatEpoch, int64_t, int64_t)},
		{"readAttributes", "()Lsun/nio/fs/WindowsFileAttributes;", nullptr, $PUBLIC, $virtualMethod(WindowsFileAttributeViews$Basic, readAttributes, $BasicFileAttributes*), "java.io.IOException"},
		{"setFileTimes", "(JJJ)V", nullptr, 0, $virtualMethod(WindowsFileAttributeViews$Basic, setFileTimes, void, int64_t, int64_t, int64_t), "java.io.IOException"},
		{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileAttributeViews$Basic, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileAttributeViews$Basic", "sun.nio.fs.WindowsFileAttributeViews", "Basic", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileAttributeViews$Basic",
		"sun.nio.fs.AbstractBasicFileAttributeView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileAttributeViews"
	};
	$loadClass(WindowsFileAttributeViews$Basic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileAttributeViews$Basic));
	});
	return class$;
}

$Class* WindowsFileAttributeViews$Basic::class$ = nullptr;

		} // fs
	} // nio
} // sun