#include <sun/nio/fs/UnixDirectoryStream$UnixDirectoryIterator.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/Path.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/locks/Lock.h>
#include <sun/nio/fs/UnixDirectoryStream.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $Path = ::java::nio::file::Path;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Lock = ::java::util::concurrent::locks::Lock;
using $UnixDirectoryStream = ::sun::nio::fs::UnixDirectoryStream;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixDirectoryStream$UnixDirectoryIterator_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(UnixDirectoryStream$UnixDirectoryIterator, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixDirectoryStream$UnixDirectoryIterator, $assertionsDisabled)},
	{"atEof", "Z", nullptr, $PRIVATE, $field(UnixDirectoryStream$UnixDirectoryIterator, atEof)},
	{"nextEntry", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(UnixDirectoryStream$UnixDirectoryIterator, nextEntry)},
	{}
};

$MethodInfo _UnixDirectoryStream$UnixDirectoryIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixDirectoryStream;)V", nullptr, 0, $method(UnixDirectoryStream$UnixDirectoryIterator, init$, void, $UnixDirectoryStream*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UnixDirectoryStream$UnixDirectoryIterator, hasNext, bool)},
	{"isSelfOrParent", "([B)Z", nullptr, $PRIVATE, $method(UnixDirectoryStream$UnixDirectoryIterator, isSelfOrParent, bool, $bytes*)},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UnixDirectoryStream$UnixDirectoryIterator, next, $Object*)},
	{"readNextEntry", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(UnixDirectoryStream$UnixDirectoryIterator, readNextEntry, $Path*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(UnixDirectoryStream$UnixDirectoryIterator, remove, void)},
	{}
};

$InnerClassInfo _UnixDirectoryStream$UnixDirectoryIterator_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixDirectoryStream$UnixDirectoryIterator", "sun.nio.fs.UnixDirectoryStream", "UnixDirectoryIterator", $PRIVATE},
	{}
};

$ClassInfo _UnixDirectoryStream$UnixDirectoryIterator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixDirectoryStream$UnixDirectoryIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_UnixDirectoryStream$UnixDirectoryIterator_FieldInfo_,
	_UnixDirectoryStream$UnixDirectoryIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	nullptr,
	_UnixDirectoryStream$UnixDirectoryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixDirectoryStream"
};

$Object* allocate$UnixDirectoryStream$UnixDirectoryIterator($Class* clazz) {
	return $of($alloc(UnixDirectoryStream$UnixDirectoryIterator));
}

bool UnixDirectoryStream$UnixDirectoryIterator::$assertionsDisabled = false;

void UnixDirectoryStream$UnixDirectoryIterator::init$($UnixDirectoryStream* this$0) {
	$set(this, this$0, this$0);
	this->atEof = false;
}

bool UnixDirectoryStream$UnixDirectoryIterator::isSelfOrParent($bytes* nameAsBytes) {
	if ($nc(nameAsBytes)->get(0) == u'.') {
		if ((nameAsBytes->length == 1) || (nameAsBytes->length == 2 && nameAsBytes->get(1) == u'.')) {
			return true;
		}
	}
	return false;
}

$Path* UnixDirectoryStream$UnixDirectoryIterator::readNextEntry() {
	$useLocalCurrentObjectStackCache();
	if (!UnixDirectoryStream$UnixDirectoryIterator::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	for (;;) {
		$var($bytes, nameAsBytes, nullptr);
		$nc($(this->this$0->readLock()))->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (this->this$0->isOpen()) {
						$assign(nameAsBytes, $UnixNativeDispatcher::readdir(this->this$0->dp));
					}
				} catch ($UnixException& x) {
					$var($IOException, ioe, x->asIOException(this->this$0->dir));
					$throwNew($DirectoryIteratorException, ioe);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($(this->this$0->readLock()))->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		if (nameAsBytes == nullptr) {
			this->atEof = true;
			return nullptr;
		}
		if (!isSelfOrParent(nameAsBytes)) {
			$var($Path, entry, $nc(this->this$0->dir)->resolve(nameAsBytes));
			try {
				if (this->this$0->filter == nullptr || $nc(this->this$0->filter)->accept(entry)) {
					return entry;
				}
			} catch ($IOException& ioe) {
				$throwNew($DirectoryIteratorException, ioe);
			}
		}
	}
	$shouldNotReachHere();
}

bool UnixDirectoryStream$UnixDirectoryIterator::hasNext() {
	$synchronized(this) {
		if (this->nextEntry == nullptr && !this->atEof) {
			$set(this, nextEntry, readNextEntry());
		}
		return this->nextEntry != nullptr;
	}
}

$Object* UnixDirectoryStream$UnixDirectoryIterator::next() {
	$synchronized(this) {
		$var($Path, result, nullptr);
		if (this->nextEntry == nullptr && !this->atEof) {
			$assign(result, readNextEntry());
		} else {
			$assign(result, this->nextEntry);
			$set(this, nextEntry, nullptr);
		}
		if (result == nullptr) {
			$throwNew($NoSuchElementException);
		}
		return $of(result);
	}
}

void UnixDirectoryStream$UnixDirectoryIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void clinit$UnixDirectoryStream$UnixDirectoryIterator($Class* class$) {
	$load($UnixDirectoryStream);
	UnixDirectoryStream$UnixDirectoryIterator::$assertionsDisabled = !$UnixDirectoryStream::class$->desiredAssertionStatus();
}

UnixDirectoryStream$UnixDirectoryIterator::UnixDirectoryStream$UnixDirectoryIterator() {
}

$Class* UnixDirectoryStream$UnixDirectoryIterator::load$($String* name, bool initialize) {
	$loadClass(UnixDirectoryStream$UnixDirectoryIterator, name, initialize, &_UnixDirectoryStream$UnixDirectoryIterator_ClassInfo_, clinit$UnixDirectoryStream$UnixDirectoryIterator, allocate$UnixDirectoryStream$UnixDirectoryIterator);
	return class$;
}

$Class* UnixDirectoryStream$UnixDirectoryIterator::class$ = nullptr;

		} // fs
	} // nio
} // sun