#include <sun/nio/fs/UnixDirectoryStream.h>

#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <sun/nio/fs/UnixDirectoryStream$UnixDirectoryIterator.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $Iterator = ::java::util::Iterator;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$ReadLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$ReadLock;
using $ReentrantReadWriteLock$WriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$WriteLock;
using $UnixDirectoryStream$UnixDirectoryIterator = ::sun::nio::fs::UnixDirectoryStream$UnixDirectoryIterator;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixDirectoryStream_FieldInfo_[] = {
	{"dir", "Lsun/nio/fs/UnixPath;", nullptr, $PRIVATE | $FINAL, $field(UnixDirectoryStream, dir)},
	{"dp", "J", nullptr, $PRIVATE | $FINAL, $field(UnixDirectoryStream, dp)},
	{"filter", "Ljava/nio/file/DirectoryStream$Filter;", "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(UnixDirectoryStream, filter)},
	{"streamLock", "Ljava/util/concurrent/locks/ReentrantReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(UnixDirectoryStream, streamLock)},
	{"isClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(UnixDirectoryStream, isClosed)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE, $field(UnixDirectoryStream, iterator$)},
	{}
};

$MethodInfo _UnixDirectoryStream_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;JLjava/nio/file/DirectoryStream$Filter;)V", "(Lsun/nio/fs/UnixPath;JLjava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)V", 0, $method(static_cast<void(UnixDirectoryStream::*)($UnixPath*,int64_t,$DirectoryStream$Filter*)>(&UnixDirectoryStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"closeImpl", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(UnixDirectoryStream::*)()>(&UnixDirectoryStream::closeImpl)), "java.io.IOException"},
	{"directory", "()Lsun/nio/fs/UnixPath;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$UnixPath*(UnixDirectoryStream::*)()>(&UnixDirectoryStream::directory))},
	{"isOpen", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(UnixDirectoryStream::*)()>(&UnixDirectoryStream::isOpen))},
	{"iterator", "(Ljava/nio/file/DirectoryStream;)Ljava/util/Iterator;", "(Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;)Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PROTECTED | $FINAL, $method(static_cast<$Iterator*(UnixDirectoryStream::*)($DirectoryStream*)>(&UnixDirectoryStream::iterator))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{"readLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Lock*(UnixDirectoryStream::*)()>(&UnixDirectoryStream::readLock))},
	{"writeLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Lock*(UnixDirectoryStream::*)()>(&UnixDirectoryStream::writeLock))},
	{}
};

$InnerClassInfo _UnixDirectoryStream_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixDirectoryStream$UnixDirectoryIterator", "sun.nio.fs.UnixDirectoryStream", "UnixDirectoryIterator", $PRIVATE},
	{}
};

$ClassInfo _UnixDirectoryStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixDirectoryStream",
	"java.lang.Object",
	"java.nio.file.DirectoryStream",
	_UnixDirectoryStream_FieldInfo_,
	_UnixDirectoryStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
	nullptr,
	_UnixDirectoryStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixDirectoryStream$UnixDirectoryIterator"
};

$Object* allocate$UnixDirectoryStream($Class* clazz) {
	return $of($alloc(UnixDirectoryStream));
}

void UnixDirectoryStream::init$($UnixPath* dir, int64_t dp, $DirectoryStream$Filter* filter) {
	$set(this, streamLock, $new($ReentrantReadWriteLock, true));
	$set(this, dir, dir);
	this->dp = dp;
	$set(this, filter, filter);
}

$UnixPath* UnixDirectoryStream::directory() {
	return this->dir;
}

$Lock* UnixDirectoryStream::readLock() {
	return $nc(this->streamLock)->readLock();
}

$Lock* UnixDirectoryStream::writeLock() {
	return $nc(this->streamLock)->writeLock();
}

bool UnixDirectoryStream::isOpen() {
	return !this->isClosed;
}

bool UnixDirectoryStream::closeImpl() {
	if (!this->isClosed) {
		this->isClosed = true;
		try {
			$UnixNativeDispatcher::closedir(this->dp);
		} catch ($UnixException& x) {
			$throwNew($IOException, $(x->errorString()));
		}
		return true;
	} else {
		return false;
	}
}

void UnixDirectoryStream::close() {
	$useLocalCurrentObjectStackCache();
	$nc($(writeLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			closeImpl();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(writeLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Iterator* UnixDirectoryStream::iterator($DirectoryStream* ds) {
	if (this->isClosed) {
		$throwNew($IllegalStateException, "Directory stream is closed"_s);
	}
	$synchronized(this) {
		if (this->iterator$ != nullptr) {
			$throwNew($IllegalStateException, "Iterator already obtained"_s);
		}
		$set(this, iterator$, $new($UnixDirectoryStream$UnixDirectoryIterator, this));
		return this->iterator$;
	}
}

$Iterator* UnixDirectoryStream::iterator() {
	return iterator(this);
}

UnixDirectoryStream::UnixDirectoryStream() {
}

$Class* UnixDirectoryStream::load$($String* name, bool initialize) {
	$loadClass(UnixDirectoryStream, name, initialize, &_UnixDirectoryStream_ClassInfo_, allocate$UnixDirectoryStream);
	return class$;
}

$Class* UnixDirectoryStream::class$ = nullptr;

		} // fs
	} // nio
} // sun