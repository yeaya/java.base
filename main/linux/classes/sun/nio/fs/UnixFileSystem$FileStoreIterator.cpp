#include <sun/nio/fs/UnixFileSystem$FileStoreIterator.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileStore.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStore = ::java::nio::file::FileStore;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileSystem$FileStoreIterator_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$FileStoreIterator, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileSystem$FileStoreIterator, $assertionsDisabled)},
	{"entries", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lsun/nio/fs/UnixMountEntry;>;", $PRIVATE | $FINAL, $field(UnixFileSystem$FileStoreIterator, entries)},
	{"next", "Ljava/nio/file/FileStore;", nullptr, $PRIVATE, $field(UnixFileSystem$FileStoreIterator, next$)},
	{}
};

$MethodInfo _UnixFileSystem$FileStoreIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;)V", nullptr, 0, $method(UnixFileSystem$FileStoreIterator, init$, void, $UnixFileSystem*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UnixFileSystem$FileStoreIterator, hasNext, bool)},
	{"next", "()Ljava/nio/file/FileStore;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UnixFileSystem$FileStoreIterator, next, $Object*)},
	{"readNext", "()Ljava/nio/file/FileStore;", nullptr, $PRIVATE, $method(UnixFileSystem$FileStoreIterator, readNext, $FileStore*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem$FileStoreIterator, remove, void)},
	{}
};

$InnerClassInfo _UnixFileSystem$FileStoreIterator_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystem$FileStoreIterator", "sun.nio.fs.UnixFileSystem", "FileStoreIterator", $PRIVATE},
	{}
};

$ClassInfo _UnixFileSystem$FileStoreIterator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystem$FileStoreIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_UnixFileSystem$FileStoreIterator_FieldInfo_,
	_UnixFileSystem$FileStoreIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/FileStore;>;",
	nullptr,
	_UnixFileSystem$FileStoreIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystem"
};

$Object* allocate$UnixFileSystem$FileStoreIterator($Class* clazz) {
	return $of($alloc(UnixFileSystem$FileStoreIterator));
}

bool UnixFileSystem$FileStoreIterator::$assertionsDisabled = false;

void UnixFileSystem$FileStoreIterator::init$($UnixFileSystem* this$0) {
	$set(this, this$0, this$0);
	$set(this, entries, $nc($(this$0->getMountEntries()))->iterator());
}

$FileStore* UnixFileSystem$FileStoreIterator::readNext() {
	$useLocalCurrentObjectStackCache();
	if (!UnixFileSystem$FileStoreIterator::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	for (;;) {
		if (!$nc(this->entries)->hasNext()) {
			return nullptr;
		}
		$var($UnixMountEntry, entry, $cast($UnixMountEntry, $nc(this->entries)->next()));
		if ($nc(entry)->isIgnored()) {
			continue;
		}
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			try {
				sm->checkRead($($Util::toString($($nc(entry)->dir()))));
			} catch ($SecurityException& x) {
				continue;
			}
		}
		try {
			return this->this$0->getFileStore(entry);
		} catch ($IOException& ignore) {
		}
	}
	$shouldNotReachHere();
}

bool UnixFileSystem$FileStoreIterator::hasNext() {
	$synchronized(this) {
		if (this->next$ != nullptr) {
			return true;
		}
		$set(this, next$, readNext());
		return this->next$ != nullptr;
	}
}

$Object* UnixFileSystem$FileStoreIterator::next() {
	$synchronized(this) {
		if (this->next$ == nullptr) {
			$set(this, next$, readNext());
		}
		if (this->next$ == nullptr) {
			$throwNew($NoSuchElementException);
		} else {
			$var($FileStore, result, this->next$);
			$set(this, next$, nullptr);
			return $of(result);
		}
	}
}

void UnixFileSystem$FileStoreIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void clinit$UnixFileSystem$FileStoreIterator($Class* class$) {
	$load($UnixFileSystem);
	UnixFileSystem$FileStoreIterator::$assertionsDisabled = !$UnixFileSystem::class$->desiredAssertionStatus();
}

UnixFileSystem$FileStoreIterator::UnixFileSystem$FileStoreIterator() {
}

$Class* UnixFileSystem$FileStoreIterator::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem$FileStoreIterator, name, initialize, &_UnixFileSystem$FileStoreIterator_ClassInfo_, clinit$UnixFileSystem$FileStoreIterator, allocate$UnixFileSystem$FileStoreIterator);
	return class$;
}

$Class* UnixFileSystem$FileStoreIterator::class$ = nullptr;

		} // fs
	} // nio
} // sun