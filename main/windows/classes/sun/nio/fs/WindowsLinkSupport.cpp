#include <sun/nio/fs/WindowsLinkSupport.h>
#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/NotLinkException.h>
#include <java/security/AccessController.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsLinkSupport$1.h>
#include <sun/nio/fs/WindowsNativeDispatcher$FirstFile.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

#undef ARRAY_CHAR_BASE_OFFSET
#undef OFFSETOF_PATHBUFFER
#undef OFFSETOF_PATHLENGTH
#undef OFFSETOF_PATHOFFSET
#undef OFFSETOF_REPARSETAG

using $IOError = ::java::io::IOError;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $NotLinkException = ::java::nio::file::NotLinkException;
using $AccessController = ::java::security::AccessController;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsLinkSupport$1 = ::sun::nio::fs::WindowsLinkSupport$1;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsNativeDispatcher$FirstFile = ::sun::nio::fs::WindowsNativeDispatcher$FirstFile;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

bool WindowsLinkSupport::$assertionsDisabled = false;
$Unsafe* WindowsLinkSupport::unsafe = nullptr;

void WindowsLinkSupport::init$() {
}

$String* WindowsLinkSupport::readLink($WindowsPath* path) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	int64_t handle = 0;
	try {
		handle = $nc(path)->openForReadAttributeAccess(false);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(path);
	}
	$var($Throwable, var$0, nullptr);
	$var($String, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, readLinkImpl(handle));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$WindowsNativeDispatcher::CloseHandle(handle);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$String* WindowsLinkSupport::getFinalPath($WindowsPath* input) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	int64_t h = 0;
	try {
		h = $nc(input)->openForReadAttributeAccess(true);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(input);
	}
	$var($Throwable, var$0, nullptr);
	$var($String, var$2, nullptr);
	bool return$1 = false;
	try {
		try {
			$assign(var$2, stripPrefix($($WindowsNativeDispatcher::GetFinalPathNameByHandle(h))));
			return$1 = true;
			goto $finally;
		} catch ($WindowsException& x) {
			if (x->lastError() != 124) {
				x->rethrowAsIOException(input);
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$WindowsNativeDispatcher::CloseHandle(h);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return nullptr;
}

$String* WindowsLinkSupport::getFinalPath($WindowsPath* input, bool followLinks) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(input)->getFileSystem()));
	try {
		if (!followLinks) {
			return input->getPathForWin32Calls();
		}
		if (!$$nc($WindowsFileAttributes::get(input, false))->isSymbolicLink()) {
			return input->getPathForWin32Calls();
		}
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(input);
	}
	$var($String, result, getFinalPath(input));
	if (result != nullptr) {
		return result;
	}
	$var($WindowsPath, target, input);
	int32_t linkCount = 0;
	do {
		try {
			$var($WindowsFileAttributes, attrs, $WindowsFileAttributes::get(target, false));
			if (!$nc(attrs)->isSymbolicLink()) {
				return $nc(target)->getPathForWin32Calls();
			}
		} catch ($WindowsException& x) {
			x->rethrowAsIOException(target);
		}
		$var($WindowsPath, link, $WindowsPath::createFromNormalizedPath(fs, $(readLink(target))));
		$var($WindowsPath, parent, $nc(target)->getParent());
		if (parent == nullptr) {
			$var($WindowsPath, t, target);
			$assign(target, $cast($WindowsPath, $AccessController::doPrivileged($$new($WindowsLinkSupport$1, t))));
			$assign(parent, $nc(target)->getParent());
		}
		$assign(target, $nc(parent)->resolve(link));
	} while (++linkCount < 32);
	$throwNew($FileSystemException, $(input->getPathForExceptionMessage()), nullptr, "Too many links"_s);
	$shouldNotReachHere();
}

$String* WindowsLinkSupport::getRealPath($WindowsPath* input, bool resolveLinks) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(input)->getFileSystem()));
	$var($String, path, nullptr);
	try {
		$assign(path, $$nc(input->toAbsolutePath())->toString());
	} catch ($IOError& x) {
		$throw($$cast($IOException, x->getCause()));
	}
	if ($nc(path)->indexOf(u'.') >= 0) {
		try {
			$assign(path, $WindowsNativeDispatcher::GetFullPathName(path));
		} catch ($WindowsException& x) {
			x->rethrowAsIOException(input);
		}
	}
	$var($StringBuilder, sb, $new($StringBuilder, $nc(path)->length()));
	int32_t start = 0;
	char16_t c0 = path->charAt(0);
	char16_t c1 = path->charAt(1);
	if ((c0 <= u'z' && c0 >= u'a' || c0 <= u'Z' && c0 >= u'A') && c1 == u':' && path->charAt(2) == u'\\') {
		sb->append($Character::toUpperCase(c0));
		sb->append(":\\"_s);
		start = 3;
	} else if (c0 == u'\\' && c1 == u'\\') {
		int32_t last = path->length() - 1;
		int32_t pos = path->indexOf(u'\\', 2);
		if (pos == -1 || (pos == last)) {
			$throwNew($FileSystemException, $(input->getPathForExceptionMessage()), nullptr, "UNC has invalid share"_s);
		}
		pos = path->indexOf(u'\\', pos + 1);
		if (pos < 0) {
			pos = last;
			sb->append(path)->append("\\"_s);
		} else {
			sb->append(path, 0, pos + 1);
		}
		start = pos + 1;
	} else {
		$throwNew($AssertionError, $of("path type not recognized"_s));
	}
	if (start >= path->length()) {
		$var($String, result, sb->toString());
		try {
			$WindowsNativeDispatcher::GetFileAttributes(result);
		} catch ($WindowsException& x) {
			x->rethrowAsIOException(path);
		}
		return result;
	}
	int32_t curr = start;
	while (curr < path->length()) {
		int32_t next = path->indexOf(u'\\', curr);
		int32_t end = (next == -1) ? path->length() : next;
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(sb->toString()));
		var$0->append($(path->substring(curr, end)));
		$var($String, search, $str(var$0));
		try {
			$var($WindowsNativeDispatcher$FirstFile, fileData, $WindowsNativeDispatcher::FindFirstFile($($WindowsPath::addPrefixIfNeeded(search))));
			$WindowsNativeDispatcher::FindClose($nc(fileData)->handle());
			if (resolveLinks && $WindowsFileAttributes::isReparsePoint(fileData->attributes())) {
				$var($String, result, getFinalPath(input));
				if (result == nullptr) {
					$var($WindowsPath, resolved, resolveAllLinks($($WindowsPath::createFromNormalizedPath(fs, path))));
					$assign(result, getRealPath(resolved, false));
				}
				return result;
			}
			sb->append($(fileData->name()));
			if (next != -1) {
				sb->append(u'\\');
			}
		} catch ($WindowsException& e) {
			e->rethrowAsIOException(path);
		}
		curr = end + 1;
	}
	return sb->toString();
}

$String* WindowsLinkSupport::readLinkImpl(int64_t handle) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	int32_t size = 16384;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(size));
	$var($Throwable, var$0, nullptr);
	$var($String, var$2, nullptr);
	bool return$1 = false;
	try {
		try {
			$WindowsNativeDispatcher::DeviceIoControlGetReparsePoint(handle, $nc(buffer)->address(), size);
		} catch ($WindowsException& x) {
			if (x->lastError() == 4390) {
				$throwNew($NotLinkException, nullptr, nullptr, $(x->errorString()));
			}
			x->rethrowAsIOException(($String*)nullptr);
		}
		int16_t OFFSETOF_REPARSETAG = 0;
		int16_t OFFSETOF_PATHOFFSET = 8;
		int16_t OFFSETOF_PATHLENGTH = 10;
		int16_t OFFSETOF_PATHBUFFER = (int16_t)(16 + 4);
		int32_t tag = (int32_t)$nc(WindowsLinkSupport::unsafe)->getLong($nc(buffer)->address() + OFFSETOF_REPARSETAG);
		if (tag != (int32_t)0xa000000c) {
			$throwNew($NotLinkException, nullptr, nullptr, "Reparse point is not a symbolic link"_s);
		}
		int16_t nameOffset = WindowsLinkSupport::unsafe->getShort(buffer->address() + OFFSETOF_PATHOFFSET);
		int16_t nameLengthInBytes = WindowsLinkSupport::unsafe->getShort(buffer->address() + OFFSETOF_PATHLENGTH);
		if ((nameLengthInBytes % 2) != 0) {
			$throwNew($FileSystemException, nullptr, nullptr, "Symbolic link corrupted"_s);
		}
		$var($chars, name, $new($chars, nameLengthInBytes / 2));
		WindowsLinkSupport::unsafe->copyMemory(nullptr, buffer->address() + OFFSETOF_PATHBUFFER + nameOffset, name, $Unsafe::ARRAY_CHAR_BASE_OFFSET, nameLengthInBytes);
		$var($String, target, stripPrefix($$new($String, name)));
		if ($nc(target)->isEmpty()) {
			$throwNew($IOException, "Symbolic link target is invalid"_s);
		}
		$assign(var$2, target);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$WindowsPath* WindowsLinkSupport::resolveAllLinks($WindowsPath* path$renamed) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	$var($WindowsPath, path, path$renamed);
	if (!WindowsLinkSupport::$assertionsDisabled && !$nc(path)->isAbsolute()) {
		$throwNew($AssertionError);
	}
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(path)->getFileSystem()));
	int32_t linkCount = 0;
	int32_t elem = 0;
	while (elem < $nc(path)->getNameCount()) {
		$var($WindowsPath, current, $$nc(path->getRoot())->resolve($(path->subpath(0, elem + 1))));
		$var($WindowsFileAttributes, attrs, nullptr);
		try {
			$assign(attrs, $WindowsFileAttributes::get(current, false));
		} catch ($WindowsException& x) {
			x->rethrowAsIOException(current);
		}
		if ($nc(attrs)->isSymbolicLink()) {
			++linkCount;
			if (linkCount > 32) {
				$throwNew($IOException, "Too many links"_s);
			}
			$var($WindowsPath, target, $WindowsPath::createFromNormalizedPath(fs, $(readLink(current))));
			$var($WindowsPath, remainder, nullptr);
			int32_t count = path->getNameCount();
			if ((elem + 1) < count) {
				$assign(remainder, path->subpath(elem + 1, count));
			}
			$assign(path, $$nc($nc(current)->getParent())->resolve(target));
			try {
				$var($String, full, $WindowsNativeDispatcher::GetFullPathName($($nc(path)->toString())));
				if (!$nc(full)->equals($(path->toString()))) {
					$assign(path, $WindowsPath::createFromNormalizedPath(fs, full));
				}
			} catch ($WindowsException& x) {
				x->rethrowAsIOException(path);
			}
			if (remainder != nullptr) {
				$assign(path, $nc(path)->resolve(remainder));
			}
			elem = 0;
		} else {
			++elem;
		}
	}
	return path;
}

$String* WindowsLinkSupport::stripPrefix($String* path$renamed) {
	$init(WindowsLinkSupport);
	$useLocalObjectStack();
	$var($String, path, path$renamed);
	if ($nc(path)->startsWith("\\\\?\\"_s)) {
		if (path->startsWith("\\\\?\\UNC\\"_s)) {
			$assign(path, $str({"\\"_s, $(path->substring(7))}));
		} else {
			$assign(path, path->substring(4));
		}
		return path;
	}
	if (path->startsWith("\\??\\"_s)) {
		if (path->startsWith("\\??\\UNC\\"_s)) {
			$assign(path, $str({"\\"_s, $(path->substring(7))}));
		} else {
			$assign(path, path->substring(4));
		}
		return path;
	}
	return path;
}

void WindowsLinkSupport::clinit$($Class* clazz) {
	WindowsLinkSupport::$assertionsDisabled = !WindowsLinkSupport::class$->desiredAssertionStatus();
	$assignStatic(WindowsLinkSupport::unsafe, $Unsafe::getUnsafe());
}

WindowsLinkSupport::WindowsLinkSupport() {
}

$Class* WindowsLinkSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLinkSupport, $assertionsDisabled)},
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsLinkSupport, unsafe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsLinkSupport, init$, void)},
		{"getFinalPath", "(Lsun/nio/fs/WindowsPath;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(WindowsLinkSupport, getFinalPath, $String*, $WindowsPath*), "java.io.IOException"},
		{"getFinalPath", "(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(WindowsLinkSupport, getFinalPath, $String*, $WindowsPath*, bool), "java.io.IOException"},
		{"getRealPath", "(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(WindowsLinkSupport, getRealPath, $String*, $WindowsPath*, bool), "java.io.IOException"},
		{"readLink", "(Lsun/nio/fs/WindowsPath;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(WindowsLinkSupport, readLink, $String*, $WindowsPath*), "java.io.IOException"},
		{"readLinkImpl", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsLinkSupport, readLinkImpl, $String*, int64_t), "java.io.IOException"},
		{"resolveAllLinks", "(Lsun/nio/fs/WindowsPath;)Lsun/nio/fs/WindowsPath;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsLinkSupport, resolveAllLinks, $WindowsPath*, $WindowsPath*), "java.io.IOException"},
		{"stripPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsLinkSupport, stripPrefix, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsLinkSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsLinkSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsLinkSupport$1"
	};
	$loadClass(WindowsLinkSupport, name, initialize, &classInfo$$, WindowsLinkSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLinkSupport);
	});
	return class$;
}

$Class* WindowsLinkSupport::class$ = nullptr;

		} // fs
	} // nio
} // sun