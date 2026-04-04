#include <sun/nio/fs/WindowsFileSystem$FileStoreIterator.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileStore.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <sun/nio/fs/WindowsFileStore.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStore = ::java::nio::file::FileStore;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $WindowsFileStore = ::sun::nio::fs::WindowsFileStore;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

bool WindowsFileSystem$FileStoreIterator::$assertionsDisabled = false;

void WindowsFileSystem$FileStoreIterator::init$($WindowsFileSystem* this$0) {
	$set(this, this$0, this$0);
	$set(this, roots, $$nc(this$0->getRootDirectories())->iterator());
}

$FileStore* WindowsFileSystem$FileStoreIterator::readNext() {
	$useLocalObjectStack();
	if (!WindowsFileSystem$FileStoreIterator::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	for (;;) {
		if (!$nc(this->roots)->hasNext()) {
			return nullptr;
		}
		$var($WindowsPath, root, $cast($WindowsPath, this->roots->next()));
		try {
			$nc(root)->checkRead();
		} catch ($SecurityException& x) {
			continue;
		}
		try {
			$var($FileStore, fs, $WindowsFileStore::create($($nc(root)->toString()), true));
			if (fs != nullptr) {
				return fs;
			}
		} catch ($IOException& ioe) {
		}
	}
	$shouldNotReachHere();
}

bool WindowsFileSystem$FileStoreIterator::hasNext() {
	$synchronized(this) {
		if (this->next$ != nullptr) {
			return true;
		}
		$set(this, next$, readNext());
		return this->next$ != nullptr;
	}
}

$Object* WindowsFileSystem$FileStoreIterator::next() {
	$synchronized(this) {
		if (this->next$ == nullptr) {
			$set(this, next$, readNext());
		}
		if (this->next$ == nullptr) {
			$throwNew($NoSuchElementException);
		} else {
			$var($FileStore, result, this->next$);
			$set(this, next$, nullptr);
			return result;
		}
	}
}

void WindowsFileSystem$FileStoreIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void WindowsFileSystem$FileStoreIterator::clinit$($Class* clazz) {
	$load($WindowsFileSystem);
	WindowsFileSystem$FileStoreIterator::$assertionsDisabled = !$WindowsFileSystem::class$->desiredAssertionStatus();
}

WindowsFileSystem$FileStoreIterator::WindowsFileSystem$FileStoreIterator() {
}

$Class* WindowsFileSystem$FileStoreIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$FileStoreIterator, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsFileSystem$FileStoreIterator, $assertionsDisabled)},
		{"roots", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(WindowsFileSystem$FileStoreIterator, roots)},
		{"next", "Ljava/nio/file/FileStore;", nullptr, $PRIVATE, $field(WindowsFileSystem$FileStoreIterator, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsFileSystem;)V", nullptr, 0, $method(WindowsFileSystem$FileStoreIterator, init$, void, $WindowsFileSystem*)},
		{"hasNext", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WindowsFileSystem$FileStoreIterator, hasNext, bool)},
		{"next", "()Ljava/nio/file/FileStore;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WindowsFileSystem$FileStoreIterator, next, $Object*)},
		{"readNext", "()Ljava/nio/file/FileStore;", nullptr, $PRIVATE, $method(WindowsFileSystem$FileStoreIterator, readNext, $FileStore*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystem$FileStoreIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystem$FileStoreIterator", "sun.nio.fs.WindowsFileSystem", "FileStoreIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileSystem$FileStoreIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/FileStore;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileSystem"
	};
	$loadClass(WindowsFileSystem$FileStoreIterator, name, initialize, &classInfo$$, WindowsFileSystem$FileStoreIterator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystem$FileStoreIterator);
	});
	return class$;
}

$Class* WindowsFileSystem$FileStoreIterator::class$ = nullptr;

		} // fs
	} // nio
} // sun