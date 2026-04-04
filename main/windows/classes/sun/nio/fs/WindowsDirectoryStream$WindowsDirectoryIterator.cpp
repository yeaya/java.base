#include <sun/nio/fs/WindowsDirectoryStream$WindowsDirectoryIterator.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/NoSuchElementException.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/WindowsDirectoryStream.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $WindowsDirectoryStream = ::sun::nio::fs::WindowsDirectoryStream;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsDirectoryStream$WindowsDirectoryIterator::init$($WindowsDirectoryStream* this$0, $String* first) {
	$set(this, this$0, this$0);
	this->atEof = false;
	$set(this, first, first);
	if ($nc(this$0->dir)->needsSlashWhenResolving()) {
		$set(this, prefix, $str({$(this$0->dir->toString()), "\\"_s}));
	} else {
		$set(this, prefix, this$0->dir->toString());
	}
}

bool WindowsDirectoryStream$WindowsDirectoryIterator::isSelfOrParent($String* name) {
	bool var$0 = $nc(name)->equals("."_s);
	return var$0 || name->equals(".."_s);
}

$Path* WindowsDirectoryStream$WindowsDirectoryIterator::acceptEntry($String* s, $BasicFileAttributes* attrs) {
	$useLocalObjectStack();
	$var($Path, entry, $WindowsPath::createFromNormalizedPath($$cast($WindowsFileSystem, $nc(this->this$0->dir)->getFileSystem()), $$str({this->prefix, s}), attrs));
	try {
		if ($nc(this->this$0->filter)->accept(entry)) {
			return entry;
		}
	} catch ($IOException& ioe) {
		$throwNew($DirectoryIteratorException, ioe);
	}
	return nullptr;
}

$Path* WindowsDirectoryStream$WindowsDirectoryIterator::readNextEntry() {
	$useLocalObjectStack();
	if (this->first != nullptr) {
		$set(this, nextEntry, isSelfOrParent(this->first) ? ($Path*)nullptr : acceptEntry(this->first, nullptr));
		$set(this, first, nullptr);
		if (this->nextEntry != nullptr) {
			return this->nextEntry;
		}
	}
	for (;;) {
		$var($String, name, nullptr);
		$var($WindowsFileAttributes, attrs, nullptr);
		$synchronized(this->this$0->closeLock) {
			try {
				if (this->this$0->isOpen) {
					$assign(name, $WindowsNativeDispatcher::FindNextFile(this->this$0->handle, $nc(this->this$0->findDataBuffer)->address()));
				}
			} catch ($WindowsException& x) {
				$var($IOException, ioe, x->asIOException(this->this$0->dir));
				$throwNew($DirectoryIteratorException, ioe);
			}
			if (name == nullptr) {
				this->atEof = true;
				return nullptr;
			}
			if (isSelfOrParent(name)) {
				continue;
			}
			$assign(attrs, $WindowsFileAttributes::fromFindData($nc(this->this$0->findDataBuffer)->address()));
		}
		$var($Path, entry, acceptEntry(name, attrs));
		if (entry != nullptr) {
			return entry;
		}
	}
}

bool WindowsDirectoryStream$WindowsDirectoryIterator::hasNext() {
	$synchronized(this) {
		if (this->nextEntry == nullptr && !this->atEof) {
			$set(this, nextEntry, readNextEntry());
		}
		return this->nextEntry != nullptr;
	}
}

$Object* WindowsDirectoryStream$WindowsDirectoryIterator::next() {
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

void WindowsDirectoryStream$WindowsDirectoryIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

WindowsDirectoryStream$WindowsDirectoryIterator::WindowsDirectoryStream$WindowsDirectoryIterator() {
}

$Class* WindowsDirectoryStream$WindowsDirectoryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/WindowsDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsDirectoryStream$WindowsDirectoryIterator, this$0)},
		{"atEof", "Z", nullptr, $PRIVATE, $field(WindowsDirectoryStream$WindowsDirectoryIterator, atEof)},
		{"first", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsDirectoryStream$WindowsDirectoryIterator, first)},
		{"nextEntry", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(WindowsDirectoryStream$WindowsDirectoryIterator, nextEntry)},
		{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsDirectoryStream$WindowsDirectoryIterator, prefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsDirectoryStream;Ljava/lang/String;)V", nullptr, 0, $method(WindowsDirectoryStream$WindowsDirectoryIterator, init$, void, $WindowsDirectoryStream*, $String*)},
		{"acceptEntry", "(Ljava/lang/String;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(WindowsDirectoryStream$WindowsDirectoryIterator, acceptEntry, $Path*, $String*, $BasicFileAttributes*)},
		{"hasNext", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WindowsDirectoryStream$WindowsDirectoryIterator, hasNext, bool)},
		{"isSelfOrParent", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(WindowsDirectoryStream$WindowsDirectoryIterator, isSelfOrParent, bool, $String*)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WindowsDirectoryStream$WindowsDirectoryIterator, next, $Object*)},
		{"readNextEntry", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(WindowsDirectoryStream$WindowsDirectoryIterator, readNextEntry, $Path*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsDirectoryStream$WindowsDirectoryIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsDirectoryStream$WindowsDirectoryIterator", "sun.nio.fs.WindowsDirectoryStream", "WindowsDirectoryIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsDirectoryStream$WindowsDirectoryIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsDirectoryStream"
	};
	$loadClass(WindowsDirectoryStream$WindowsDirectoryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsDirectoryStream$WindowsDirectoryIterator);
	});
	return class$;
}

$Class* WindowsDirectoryStream$WindowsDirectoryIterator::class$ = nullptr;

		} // fs
	} // nio
} // sun