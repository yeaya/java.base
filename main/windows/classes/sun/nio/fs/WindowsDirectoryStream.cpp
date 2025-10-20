#include <sun/nio/fs/WindowsDirectoryStream.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/util/Iterator.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/WindowsDirectoryStream$WindowsDirectoryIterator.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsNativeDispatcher$FirstFile.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $Iterator = ::java::util::Iterator;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $WindowsDirectoryStream$WindowsDirectoryIterator = ::sun::nio::fs::WindowsDirectoryStream$WindowsDirectoryIterator;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsNativeDispatcher$FirstFile = ::sun::nio::fs::WindowsNativeDispatcher$FirstFile;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsDirectoryStream_FieldInfo_[] = {
	{"dir", "Lsun/nio/fs/WindowsPath;", nullptr, $PRIVATE | $FINAL, $field(WindowsDirectoryStream, dir)},
	{"filter", "Ljava/nio/file/DirectoryStream$Filter;", "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(WindowsDirectoryStream, filter)},
	{"handle", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsDirectoryStream, handle)},
	{"firstName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsDirectoryStream, firstName)},
	{"findDataBuffer", "Lsun/nio/fs/NativeBuffer;", nullptr, $PRIVATE | $FINAL, $field(WindowsDirectoryStream, findDataBuffer)},
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WindowsDirectoryStream, closeLock)},
	{"isOpen", "Z", nullptr, $PRIVATE, $field(WindowsDirectoryStream, isOpen)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE, $field(WindowsDirectoryStream, iterator$)},
	{}
};

$MethodInfo _WindowsDirectoryStream_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsPath;Ljava/nio/file/DirectoryStream$Filter;)V", "(Lsun/nio/fs/WindowsPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)V", 0, $method(static_cast<void(WindowsDirectoryStream::*)($WindowsPath*,$DirectoryStream$Filter*)>(&WindowsDirectoryStream::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{}
};

$InnerClassInfo _WindowsDirectoryStream_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsDirectoryStream$WindowsDirectoryIterator", "sun.nio.fs.WindowsDirectoryStream", "WindowsDirectoryIterator", $PRIVATE},
	{}
};

$ClassInfo _WindowsDirectoryStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsDirectoryStream",
	"java.lang.Object",
	"java.nio.file.DirectoryStream",
	_WindowsDirectoryStream_FieldInfo_,
	_WindowsDirectoryStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
	nullptr,
	_WindowsDirectoryStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsDirectoryStream$WindowsDirectoryIterator"
};

$Object* allocate$WindowsDirectoryStream($Class* clazz) {
	return $of($alloc(WindowsDirectoryStream));
}

void WindowsDirectoryStream::init$($WindowsPath* dir, $DirectoryStream$Filter* filter) {
	$useLocalCurrentObjectStackCache();
	$set(this, closeLock, $new($Object));
	this->isOpen = true;
	$set(this, dir, dir);
	$set(this, filter, filter);
	try {
		$var($String, search, $nc(dir)->getPathForWin32Calls());
		char16_t last = $nc(search)->charAt(search->length() - 1);
		if (last == u':' || last == u'\\') {
			$plusAssign(search, "*"_s);
		} else {
			$plusAssign(search, "\\*"_s);
		}
		$var($WindowsNativeDispatcher$FirstFile, first, $WindowsNativeDispatcher::FindFirstFile(search));
		this->handle = $nc(first)->handle();
		$set(this, firstName, first->name());
		$set(this, findDataBuffer, $WindowsFileAttributes::getBufferForFindData());
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		if (x->lastError() == 267) {
			$throwNew($NotDirectoryException, $($nc(dir)->getPathForExceptionMessage()));
		}
		x->rethrowAsIOException(dir);
		$throwNew($AssertionError);
	}
}

void WindowsDirectoryStream::close() {
	$synchronized(this->closeLock) {
		if (!this->isOpen) {
			return;
		}
		this->isOpen = false;
	}
	$nc(this->findDataBuffer)->release();
	try {
		$WindowsNativeDispatcher::FindClose(this->handle);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(this->dir);
	}
}

$Iterator* WindowsDirectoryStream::iterator() {
	if (!this->isOpen) {
		$throwNew($IllegalStateException, "Directory stream is closed"_s);
	}
	$synchronized(this) {
		if (this->iterator$ != nullptr) {
			$throwNew($IllegalStateException, "Iterator already obtained"_s);
		}
		$set(this, iterator$, $new($WindowsDirectoryStream$WindowsDirectoryIterator, this, this->firstName));
		return this->iterator$;
	}
}

WindowsDirectoryStream::WindowsDirectoryStream() {
}

$Class* WindowsDirectoryStream::load$($String* name, bool initialize) {
	$loadClass(WindowsDirectoryStream, name, initialize, &_WindowsDirectoryStream_ClassInfo_, allocate$WindowsDirectoryStream);
	return class$;
}

$Class* WindowsDirectoryStream::class$ = nullptr;

		} // fs
	} // nio
} // sun