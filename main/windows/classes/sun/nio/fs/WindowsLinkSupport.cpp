#include <sun/nio/fs/WindowsLinkSupport.h>

#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/NotLinkException.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $NotLinkException = ::java::nio::file::NotLinkException;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
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

$FieldInfo _WindowsLinkSupport_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLinkSupport, $assertionsDisabled)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsLinkSupport, unsafe)},
	{}
};

$MethodInfo _WindowsLinkSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsLinkSupport::*)()>(&WindowsLinkSupport::init$))},
	{"getFinalPath", "(Lsun/nio/fs/WindowsPath;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($WindowsPath*)>(&WindowsLinkSupport::getFinalPath)), "java.io.IOException"},
	{"getFinalPath", "(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($WindowsPath*,bool)>(&WindowsLinkSupport::getFinalPath)), "java.io.IOException"},
	{"getRealPath", "(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($WindowsPath*,bool)>(&WindowsLinkSupport::getRealPath)), "java.io.IOException"},
	{"readLink", "(Lsun/nio/fs/WindowsPath;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($WindowsPath*)>(&WindowsLinkSupport::readLink)), "java.io.IOException"},
	{"readLinkImpl", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&WindowsLinkSupport::readLinkImpl)), "java.io.IOException"},
	{"resolveAllLinks", "(Lsun/nio/fs/WindowsPath;)Lsun/nio/fs/WindowsPath;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$WindowsPath*(*)($WindowsPath*)>(&WindowsLinkSupport::resolveAllLinks)), "java.io.IOException"},
	{"stripPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&WindowsLinkSupport::stripPrefix))},
	{}
};

$InnerClassInfo _WindowsLinkSupport_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsLinkSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsLinkSupport_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsLinkSupport",
	"java.lang.Object",
	nullptr,
	_WindowsLinkSupport_FieldInfo_,
	_WindowsLinkSupport_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLinkSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsLinkSupport$1"
};

$Object* allocate$WindowsLinkSupport($Class* clazz) {
	return $of($alloc(WindowsLinkSupport));
}

bool WindowsLinkSupport::$assertionsDisabled = false;
$Unsafe* WindowsLinkSupport::unsafe = nullptr;

void WindowsLinkSupport::init$() {
}

$String* WindowsLinkSupport::readLink($WindowsPath* path) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	int64_t handle = 0;
	try {
		handle = $nc(path)->openForReadAttributeAccess(false);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(path);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, readLinkImpl(handle));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$WindowsNativeDispatcher::CloseHandle(handle);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* WindowsLinkSupport::getFinalPath($WindowsPath* input) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	int64_t h = 0;
	try {
		h = $nc(input)->openForReadAttributeAccess(true);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(input);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, stripPrefix($($WindowsNativeDispatcher::GetFinalPathNameByHandle(h))));
				return$1 = true;
				goto $finally;
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				if (x->lastError() != 124) {
					x->rethrowAsIOException(input);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$WindowsNativeDispatcher::CloseHandle(h);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

$String* WindowsLinkSupport::getFinalPath($WindowsPath* input, bool followLinks) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(input)->getFileSystem()));
	try {
		if (!followLinks) {
			return input->getPathForWin32Calls();
		}
		if (!$nc($($WindowsFileAttributes::get(input, false)))->isSymbolicLink()) {
			return input->getPathForWin32Calls();
		}
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
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
				return target->getPathForWin32Calls();
			}
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			x->rethrowAsIOException(target);
		}
		$var($WindowsPath, link, $WindowsPath::createFromNormalizedPath(fs, $(readLink(target))));
		$var($WindowsPath, parent, target->getParent());
		if (parent == nullptr) {
			$var($WindowsPath, t, target);
			$assign(target, $cast($WindowsPath, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WindowsLinkSupport$1, t)))));
			$assign(parent, $nc(target)->getParent());
		}
		$assign(target, $nc(parent)->resolve(static_cast<$Path*>(link)));
	} while (++linkCount < 32);
	$throwNew($FileSystemException, $(input->getPathForExceptionMessage()), nullptr, "Too many links"_s);
	$shouldNotReachHere();
}

$String* WindowsLinkSupport::getRealPath($WindowsPath* input, bool resolveLinks) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(input)->getFileSystem()));
	$var($String, path, nullptr);
	try {
		$assign(path, $nc($(input->toAbsolutePath()))->toString());
	} catch ($IOError&) {
		$var($IOError, x, $catch());
		$throw(($cast($IOException, $(x->getCause()))));
	}
	if ($nc(path)->indexOf((int32_t)u'.') >= 0) {
		try {
			$assign(path, $WindowsNativeDispatcher::GetFullPathName(path));
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			x->rethrowAsIOException(input);
		}
	}
	$var($StringBuilder, sb, $new($StringBuilder, $nc(path)->length()));
	int32_t start = 0;
	char16_t c0 = $nc(path)->charAt(0);
	char16_t c1 = path->charAt(1);
	if ((c0 <= u'z' && c0 >= u'a' || c0 <= u'Z' && c0 >= u'A') && c1 == u':' && path->charAt(2) == u'\\') {
		sb->append($Character::toUpperCase(c0));
		sb->append(":\\"_s);
		start = 3;
	} else if (c0 == u'\\' && c1 == u'\\') {
		int32_t last = path->length() - 1;
		int32_t pos = path->indexOf((int32_t)u'\\', 2);
		if (pos == -1 || (pos == last)) {
			$throwNew($FileSystemException, $(input->getPathForExceptionMessage()), nullptr, "UNC has invalid share"_s);
		}
		pos = path->indexOf((int32_t)u'\\', pos + 1);
		if (pos < 0) {
			pos = last;
			sb->append(path)->append("\\"_s);
		} else {
			sb->append(static_cast<$CharSequence*>(path), 0, pos + 1);
		}
		start = pos + 1;
	} else {
		$throwNew($AssertionError, $of("path type not recognized"_s));
	}
	if (start >= path->length()) {
		$var($String, result, sb->toString());
		try {
			$WindowsNativeDispatcher::GetFileAttributes(result);
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			x->rethrowAsIOException(path);
		}
		return result;
	}
	int32_t curr = start;
	while (curr < path->length()) {
		int32_t next = path->indexOf((int32_t)u'\\', curr);
		int32_t end = (next == -1) ? path->length() : next;
		$var($String, var$0, $(sb->toString()));
		$var($String, search, $concat(var$0, $(path->substring(curr, end))));
		try {
			$var($WindowsNativeDispatcher$FirstFile, fileData, $WindowsNativeDispatcher::FindFirstFile($($WindowsPath::addPrefixIfNeeded(search))));
			$WindowsNativeDispatcher::FindClose($nc(fileData)->handle());
			if (resolveLinks && $WindowsFileAttributes::isReparsePoint($nc(fileData)->attributes())) {
				$var($String, result, getFinalPath(input));
				if (result == nullptr) {
					$var($WindowsPath, resolved, resolveAllLinks($($WindowsPath::createFromNormalizedPath(fs, path))));
					$assign(result, getRealPath(resolved, false));
				}
				return result;
			}
			sb->append($($nc(fileData)->name()));
			if (next != -1) {
				sb->append(u'\\');
			}
		} catch ($WindowsException&) {
			$var($WindowsException, e, $catch());
			e->rethrowAsIOException(path);
		}
		curr = end + 1;
	}
	return sb->toString();
}

$String* WindowsLinkSupport::readLinkImpl(int64_t handle) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	int32_t size = 16384;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(size));
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$WindowsNativeDispatcher::DeviceIoControlGetReparsePoint(handle, $nc(buffer)->address(), size);
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				if (x->lastError() == 4390) {
					$throwNew($NotLinkException, nullptr, nullptr, $(x->errorString()));
				}
				x->rethrowAsIOException(($String*)nullptr);
			}
			int16_t OFFSETOF_REPARSETAG = (int16_t)0;
			int16_t OFFSETOF_PATHOFFSET = (int16_t)8;
			int16_t OFFSETOF_PATHLENGTH = (int16_t)10;
			int16_t OFFSETOF_PATHBUFFER = (int16_t)(16 + 4);
			int32_t tag = (int32_t)$nc(WindowsLinkSupport::unsafe)->getLong($nc(buffer)->address() + OFFSETOF_REPARSETAG);
			if (tag != (int32_t)0xA000000C) {
				$throwNew($NotLinkException, nullptr, nullptr, "Reparse point is not a symbolic link"_s);
			}
			int16_t nameOffset = $nc(WindowsLinkSupport::unsafe)->getShort($nc(buffer)->address() + OFFSETOF_PATHOFFSET);
			int16_t nameLengthInBytes = $nc(WindowsLinkSupport::unsafe)->getShort($nc(buffer)->address() + OFFSETOF_PATHLENGTH);
			if ((nameLengthInBytes % 2) != 0) {
				$throwNew($FileSystemException, nullptr, nullptr, "Symbolic link corrupted"_s);
			}
			$var($chars, name, $new($chars, nameLengthInBytes / 2));
			$nc(WindowsLinkSupport::unsafe)->copyMemory(nullptr, $nc(buffer)->address() + OFFSETOF_PATHBUFFER + nameOffset, name, $Unsafe::ARRAY_CHAR_BASE_OFFSET, nameLengthInBytes);
			$var($String, target, stripPrefix($$new($String, name)));
			if ($nc(target)->isEmpty()) {
				$throwNew($IOException, "Symbolic link target is invalid"_s);
			}
			$assign(var$2, target);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$WindowsPath* WindowsLinkSupport::resolveAllLinks($WindowsPath* path$renamed) {
	$init(WindowsLinkSupport);
	$useLocalCurrentObjectStackCache();
	$var($WindowsPath, path, path$renamed);
	if (!WindowsLinkSupport::$assertionsDisabled && !$nc(path)->isAbsolute()) {
		$throwNew($AssertionError);
	}
	$var($WindowsFileSystem, fs, $cast($WindowsFileSystem, $nc(path)->getFileSystem()));
	int32_t linkCount = 0;
	int32_t elem = 0;
	while (elem < path->getNameCount()) {
		$var($WindowsPath, current, $nc($(path->getRoot()))->resolve($(static_cast<$Path*>(path->subpath(0, elem + 1)))));
		$var($WindowsFileAttributes, attrs, nullptr);
		try {
			$assign(attrs, $WindowsFileAttributes::get(current, false));
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
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
			$assign(path, $nc($($nc(current)->getParent()))->resolve(static_cast<$Path*>(target)));
			try {
				$var($String, full, $WindowsNativeDispatcher::GetFullPathName($($nc(path)->toString())));
				if (!$nc(full)->equals($($nc(path)->toString()))) {
					$assign(path, $WindowsPath::createFromNormalizedPath(fs, full));
				}
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				x->rethrowAsIOException(path);
			}
			if (remainder != nullptr) {
				$assign(path, $nc(path)->resolve(static_cast<$Path*>(remainder)));
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
	$useLocalCurrentObjectStackCache();
	$var($String, path, path$renamed);
	if ($nc(path)->startsWith("\\\\?\\"_s)) {
		if (path->startsWith("\\\\?\\UNC\\"_s)) {
			$assign(path, $str({"\\"_s, $(path->substring(7))}));
		} else {
			$assign(path, path->substring(4));
		}
		return path;
	}
	if ($nc(path)->startsWith("\\??\\"_s)) {
		if (path->startsWith("\\??\\UNC\\"_s)) {
			$assign(path, $str({"\\"_s, $(path->substring(7))}));
		} else {
			$assign(path, path->substring(4));
		}
		return path;
	}
	return path;
}

void clinit$WindowsLinkSupport($Class* class$) {
	WindowsLinkSupport::$assertionsDisabled = !WindowsLinkSupport::class$->desiredAssertionStatus();
	$assignStatic(WindowsLinkSupport::unsafe, $Unsafe::getUnsafe());
}

WindowsLinkSupport::WindowsLinkSupport() {
}

$Class* WindowsLinkSupport::load$($String* name, bool initialize) {
	$loadClass(WindowsLinkSupport, name, initialize, &_WindowsLinkSupport_ClassInfo_, clinit$WindowsLinkSupport, allocate$WindowsLinkSupport);
	return class$;
}

$Class* WindowsLinkSupport::class$ = nullptr;

		} // fs
	} // nio
} // sun