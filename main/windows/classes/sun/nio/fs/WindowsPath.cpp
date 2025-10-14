#include <sun/nio/fs/WindowsPath.h>

#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <sun/nio/fs/Util.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsLinkSupport.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath$1.h>
#include <sun/nio/fs/WindowsPath$WindowsPathWithAttributes.h>
#include <sun/nio/fs/WindowsPathParser$Result.h>
#include <sun/nio/fs/WindowsPathParser.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <sun/nio/fs/WindowsUriSupport.h>
#include <sun/nio/fs/WindowsWatchService.h>
#include <jcpp.h>

#undef ABSOLUTE
#undef DIRECTORY_RELATIVE
#undef DRIVE_RELATIVE
#undef FILE_TREE
#undef MAX_LONG_PATH
#undef MAX_PATH
#undef RELATIVE
#undef UNC

using $IntegerArray = $Array<::java::lang::Integer>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $IOError = ::java::io::IOError;
using $IOException = ::java::io::IOException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $WatchEvent$Modifier = ::java::nio::file::WatchEvent$Modifier;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;
using $Util = ::sun::nio::fs::Util;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsLinkSupport = ::sun::nio::fs::WindowsLinkSupport;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath$1 = ::sun::nio::fs::WindowsPath$1;
using $WindowsPath$WindowsPathWithAttributes = ::sun::nio::fs::WindowsPath$WindowsPathWithAttributes;
using $WindowsPathParser = ::sun::nio::fs::WindowsPathParser;
using $WindowsPathParser$Result = ::sun::nio::fs::WindowsPathParser$Result;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;
using $WindowsUriSupport = ::sun::nio::fs::WindowsUriSupport;
using $WindowsWatchService = ::sun::nio::fs::WindowsWatchService;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPath_FieldInfo_[] = {
	{"MAX_PATH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPath, MAX_PATH)},
	{"MAX_LONG_PATH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPath, MAX_LONG_PATH)},
	{"fs", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $PRIVATE | $FINAL, $field(WindowsPath, fs)},
	{"type", "Lsun/nio/fs/WindowsPathType;", nullptr, $PRIVATE | $FINAL, $field(WindowsPath, type$)},
	{"root", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPath, root)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPath, path)},
	{"pathForWin32Calls", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/String;>;", $PRIVATE | $VOLATILE, $field(WindowsPath, pathForWin32Calls)},
	{"offsets", "[Ljava/lang/Integer;", nullptr, $PRIVATE | $VOLATILE, $field(WindowsPath, offsets)},
	{"hash", "I", nullptr, $PRIVATE, $field(WindowsPath, hash)},
	{}
};

$MethodInfo _WindowsPath_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsFileSystem;Lsun/nio/fs/WindowsPathType;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsPath::*)($WindowsFileSystem*,$WindowsPathType*,$String*,$String*)>(&WindowsPath::init$))},
	{"addPrefixIfNeeded", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&WindowsPath::addPrefixIfNeeded))},
	{"checkDelete", "()V", nullptr, 0},
	{"checkRead", "()V", nullptr, 0},
	{"checkWrite", "()V", nullptr, 0},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"createFromNormalizedPath", "(Lsun/nio/fs/WindowsFileSystem;Ljava/lang/String;Ljava/nio/file/attribute/BasicFileAttributes;)Lsun/nio/fs/WindowsPath;", nullptr, $STATIC, $method(static_cast<WindowsPath*(*)($WindowsFileSystem*,$String*,$BasicFileAttributes*)>(&WindowsPath::createFromNormalizedPath))},
	{"createFromNormalizedPath", "(Lsun/nio/fs/WindowsFileSystem;Ljava/lang/String;)Lsun/nio/fs/WindowsPath;", nullptr, $STATIC, $method(static_cast<WindowsPath*(*)($WindowsFileSystem*,$String*)>(&WindowsPath::createFromNormalizedPath))},
	{"elementAsString", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsPath::*)(int32_t)>(&WindowsPath::elementAsString))},
	{"emptyPath", "()Lsun/nio/fs/WindowsPath;", nullptr, $PRIVATE, $method(static_cast<WindowsPath*(WindowsPath::*)()>(&WindowsPath::emptyPath))},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAbsolutePath", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsPath::*)()>(&WindowsPath::getAbsolutePath)), "sun.nio.fs.WindowsException"},
	{"getFileName", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getFileSystem", "()Lsun/nio/fs/WindowsFileSystem;", nullptr, $PUBLIC},
	{"getName", "(I)Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"getNameCount", "()I", nullptr, $PUBLIC},
	{"getParent", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"getPathForExceptionMessage", "()Ljava/lang/String;", nullptr, 0},
	{"getPathForPermissionCheck", "()Ljava/lang/String;", nullptr, 0},
	{"getPathForWin32Calls", "()Ljava/lang/String;", nullptr, 0, nullptr, "sun.nio.fs.WindowsException"},
	{"getRoot", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"hasDotOrDotDot", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WindowsPath::*)()>(&WindowsPath::hasDotOrDotDot))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initOffsets", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsPath::*)()>(&WindowsPath::initOffsets))},
	{"isAbsolute", "()Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WindowsPath::*)()>(&WindowsPath::isEmpty))},
	{"isSameDrive", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&WindowsPath::isSameDrive))},
	{"isUnc", "()Z", nullptr, 0},
	{"needsSlashWhenResolving", "()Z", nullptr, 0},
	{"normalize", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"openFileForReadAttributeAccess", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(WindowsPath::*)(int32_t)>(&WindowsPath::openFileForReadAttributeAccess)), "sun.nio.fs.WindowsException"},
	{"openForReadAttributeAccess", "(Z)J", nullptr, 0, nullptr, "sun.nio.fs.WindowsException"},
	{"openSocketForReadAttributeAccess", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(WindowsPath::*)()>(&WindowsPath::openSocketForReadAttributeAccess)), "sun.nio.fs.WindowsException"},
	{"parse", "(Lsun/nio/fs/WindowsFileSystem;Ljava/lang/String;)Lsun/nio/fs/WindowsPath;", nullptr, $STATIC, $method(static_cast<WindowsPath*(*)($WindowsFileSystem*,$String*)>(&WindowsPath::parse))},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"relativize", "(Ljava/nio/file/Path;)Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/nio/file/Path;)Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"subpath", "(II)Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"toAbsolutePath", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"toWindowsPath", "(Ljava/nio/file/Path;)Lsun/nio/fs/WindowsPath;", nullptr, $STATIC, $method(static_cast<WindowsPath*(*)($Path*)>(&WindowsPath::toWindowsPath))},
	{"type", "()Lsun/nio/fs/WindowsPathType;", nullptr, 0},
	{}
};

$InnerClassInfo _WindowsPath_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsPath$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.nio.fs.WindowsPath$WindowsPathWithAttributes", "sun.nio.fs.WindowsPath", "WindowsPathWithAttributes", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsPath_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_WindowsPath_FieldInfo_,
	_WindowsPath_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsPath$1,sun.nio.fs.WindowsPath$WindowsPathWithAttributes"
};

$Object* allocate$WindowsPath($Class* clazz) {
	return $of($alloc(WindowsPath));
}

void WindowsPath::init$($WindowsFileSystem* fs, $WindowsPathType* type, $String* root, $String* path) {
	$set(this, fs, fs);
	$set(this, type$, type);
	$set(this, root, root);
	$set(this, path, path);
}

WindowsPath* WindowsPath::parse($WindowsFileSystem* fs, $String* path) {
	$init(WindowsPath);
	$var($WindowsPathParser$Result, result, $WindowsPathParser::parse(path));
	$var($WindowsFileSystem, var$0, fs);
	$var($WindowsPathType, var$1, $nc(result)->type());
	$var($String, var$2, result->root());
	return $new(WindowsPath, var$0, var$1, var$2, $(result->path()));
}

WindowsPath* WindowsPath::createFromNormalizedPath($WindowsFileSystem* fs, $String* path, $BasicFileAttributes* attrs) {
	$init(WindowsPath);
	try {
		$var($WindowsPathParser$Result, result, $WindowsPathParser::parseNormalizedPath(path));
		if (attrs == nullptr) {
			$var($WindowsFileSystem, var$0, fs);
			$var($WindowsPathType, var$1, $nc(result)->type());
			$var($String, var$2, result->root());
			return $new(WindowsPath, var$0, var$1, var$2, $(result->path()));
		} else {
			$var($WindowsFileSystem, var$3, fs);
			$var($WindowsPathType, var$4, $nc(result)->type());
			$var($String, var$5, result->root());
			return $new($WindowsPath$WindowsPathWithAttributes, var$3, var$4, var$5, $(result->path()), attrs);
		}
	} catch ($InvalidPathException&) {
		$var($InvalidPathException, x, $catch());
		$throwNew($AssertionError, $($of(x->getMessage())));
	}
	$shouldNotReachHere();
}

WindowsPath* WindowsPath::createFromNormalizedPath($WindowsFileSystem* fs, $String* path) {
	$init(WindowsPath);
	return createFromNormalizedPath(fs, path, nullptr);
}

$String* WindowsPath::getPathForExceptionMessage() {
	return this->path;
}

$String* WindowsPath::getPathForPermissionCheck() {
	return this->path;
}

$String* WindowsPath::getPathForWin32Calls() {
	bool var$0 = isAbsolute();
	if (var$0 && $nc(this->path)->length() <= WindowsPath::MAX_PATH) {
		return this->path;
	}
	$var($WeakReference, ref, this->pathForWin32Calls);
	$var($String, resolved, (ref != nullptr) ? $cast($String, $nc(ref)->get()) : ($String*)nullptr);
	if (resolved != nullptr) {
		return resolved;
	}
	$assign(resolved, getAbsolutePath());
	if ($nc(resolved)->length() > WindowsPath::MAX_PATH) {
		if (resolved->length() > WindowsPath::MAX_LONG_PATH) {
			$throwNew($WindowsException, $$str({"Cannot access file with path exceeding "_s, $$str(WindowsPath::MAX_LONG_PATH), " characters"_s}));
		}
		$assign(resolved, addPrefixIfNeeded($($WindowsNativeDispatcher::GetFullPathName(resolved))));
	}
	$init($WindowsPathType);
	if (this->type$ != $WindowsPathType::DRIVE_RELATIVE) {
		$synchronized(this) {
			$set(this, pathForWin32Calls, $new($WeakReference, resolved));
		}
	}
	return resolved;
}

$String* WindowsPath::getAbsolutePath() {
	if (isAbsolute()) {
		return this->path;
	}
	$init($WindowsPathType);
	if (this->type$ == $WindowsPathType::RELATIVE) {
		$var($String, defaultDirectory, $nc($($cast($WindowsFileSystem, getFileSystem())))->defaultDirectory());
		if (isEmpty()) {
			return defaultDirectory;
		}
		if ($nc(defaultDirectory)->endsWith("\\"_s)) {
			return $str({defaultDirectory, this->path});
		} else {
			int32_t var$0 = defaultDirectory->length();
			$var($StringBuilder, sb, $new($StringBuilder, var$0 + $nc(this->path)->length() + 1));
			return sb->append(defaultDirectory)->append(u'\\')->append(this->path)->toString();
		}
	}
	if (this->type$ == $WindowsPathType::DIRECTORY_RELATIVE) {
		$var($String, defaultRoot, $nc($($cast($WindowsFileSystem, getFileSystem())))->defaultRoot());
		return $str({defaultRoot, $($nc(this->path)->substring(1))});
	}
	if (isSameDrive(this->root, $($nc($($cast($WindowsFileSystem, getFileSystem())))->defaultRoot()))) {
		$var($String, remaining, $nc(this->path)->substring($nc(this->root)->length()));
		$var($String, defaultDirectory, $nc($($cast($WindowsFileSystem, getFileSystem())))->defaultDirectory());
		if (remaining->isEmpty()) {
			return defaultDirectory;
		} else if ($nc(defaultDirectory)->endsWith("\\"_s)) {
			return $str({defaultDirectory, remaining});
		} else {
			return $str({defaultDirectory, "\\"_s, remaining});
		}
	} else {
		$var($String, wd, nullptr);
		try {
			int32_t dt = $WindowsNativeDispatcher::GetDriveType($$str({this->root, "\\"_s}));
			if (dt == 0 || dt == 1) {
				$throwNew($WindowsException, ""_s);
			}
			$assign(wd, $WindowsNativeDispatcher::GetFullPathName($$str({this->root, "."_s})));
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			$throwNew($WindowsException, $$str({"Unable to get working directory of drive \'"_s, $$str($Character::toUpperCase($nc(this->root)->charAt(0))), "\'"_s}));
		}
		$var($String, result, wd);
		if ($nc(wd)->endsWith("\\"_s)) {
			$plusAssign(result, $($nc(this->path)->substring($nc(this->root)->length())));
		} else {
			int32_t var$2 = $nc(this->path)->length();
			if (var$2 > $nc(this->root)->length()) {
				$plusAssign(result, $$str({"\\"_s, $($nc(this->path)->substring($nc(this->root)->length()))}));
			}
		}
		return result;
	}
}

bool WindowsPath::isSameDrive($String* root1, $String* root2) {
	$init(WindowsPath);
	char16_t var$0 = $Character::toUpperCase($nc(root1)->charAt(0));
	return var$0 == $Character::toUpperCase($nc(root2)->charAt(0));
}

$String* WindowsPath::addPrefixIfNeeded($String* path$renamed) {
	$init(WindowsPath);
	$var($String, path, path$renamed);
	if ($nc(path)->length() > WindowsPath::MAX_PATH) {
		if (path->startsWith("\\\\"_s)) {
			$assign(path, $str({"\\\\?\\UNC"_s, $(path->substring(1, path->length()))}));
		} else {
			$assign(path, $str({"\\\\?\\"_s, path}));
		}
	}
	return path;
}

$FileSystem* WindowsPath::getFileSystem() {
	return this->fs;
}

bool WindowsPath::isEmpty() {
	return $nc(this->path)->isEmpty();
}

WindowsPath* WindowsPath::emptyPath() {
	$init($WindowsPathType);
	return $new(WindowsPath, $($cast($WindowsFileSystem, getFileSystem())), $WindowsPathType::RELATIVE, ""_s, ""_s);
}

$Path* WindowsPath::getFileName() {
	int32_t len = $nc(this->path)->length();
	if (len == 0) {
		return this;
	}
	if ($nc(this->root)->length() == len) {
		return nullptr;
	}
	int32_t off = $nc(this->path)->lastIndexOf((int32_t)u'\\');
	if (off < $nc(this->root)->length()) {
		off = $nc(this->root)->length();
	} else {
		++off;
	}
	$var($WindowsFileSystem, var$0, $cast($WindowsFileSystem, getFileSystem()));
	$init($WindowsPathType);
	$var($WindowsPathType, var$1, $WindowsPathType::RELATIVE);
	$var($String, var$2, ""_s);
	return $new(WindowsPath, var$0, var$1, var$2, $($nc(this->path)->substring(off)));
}

WindowsPath* WindowsPath::getParent() {
	int32_t var$0 = $nc(this->root)->length();
	if (var$0 == $nc(this->path)->length()) {
		return nullptr;
	}
	int32_t off = $nc(this->path)->lastIndexOf((int32_t)u'\\');
	if (off < $nc(this->root)->length()) {
		return getRoot();
	} else {
		$var($WindowsFileSystem, var$1, $cast($WindowsFileSystem, getFileSystem()));
		$var($WindowsPathType, var$2, this->type$);
		$var($String, var$3, this->root);
		return $new(WindowsPath, var$1, var$2, var$3, $($nc(this->path)->substring(0, off)));
	}
}

WindowsPath* WindowsPath::getRoot() {
	if ($nc(this->root)->isEmpty()) {
		return nullptr;
	}
	return $new(WindowsPath, $($cast($WindowsFileSystem, getFileSystem())), this->type$, this->root, this->root);
}

$WindowsPathType* WindowsPath::type() {
	return this->type$;
}

bool WindowsPath::isUnc() {
	$init($WindowsPathType);
	return this->type$ == $WindowsPathType::UNC;
}

bool WindowsPath::needsSlashWhenResolving() {
	if ($nc(this->path)->endsWith("\\"_s)) {
		return false;
	}
	int32_t var$0 = $nc(this->path)->length();
	return var$0 > $nc(this->root)->length();
}

bool WindowsPath::isAbsolute() {
	$init($WindowsPathType);
	return this->type$ == $WindowsPathType::ABSOLUTE || this->type$ == $WindowsPathType::UNC;
}

WindowsPath* WindowsPath::toWindowsPath($Path* path) {
	$init(WindowsPath);
	if (path == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf(WindowsPath, path))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast(WindowsPath, path);
}

bool WindowsPath::hasDotOrDotDot() {
	int32_t n = getNameCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($String, name, elementAsString(i));
		bool var$0 = $nc(name)->length() == 1;
		if (var$0 && name->charAt(0) == u'.') {
			return true;
		}
		bool var$2 = $nc(name)->length() == 2;
		bool var$1 = var$2 && name->charAt(0) == u'.';
		if (var$1 && name->charAt(1) == u'.') {
			return true;
		}
	}
	return false;
}

WindowsPath* WindowsPath::relativize($Path* obj) {
	$var(WindowsPath, child, toWindowsPath(obj));
	if (this->equals(child)) {
		return emptyPath();
	}
	if (this->type$ != $nc(child)->type$) {
		$throwNew($IllegalArgumentException, "\'other\' is different type of Path"_s);
	}
	if (!$nc(this->root)->equalsIgnoreCase($nc(child)->root)) {
		$throwNew($IllegalArgumentException, "\'other\' has different root"_s);
	}
	if (this->isEmpty()) {
		return child;
	}
	$var(WindowsPath, base, this);
	bool var$0 = base->hasDotOrDotDot();
	if (var$0 || $nc(child)->hasDotOrDotDot()) {
		$assign(base, base->normalize());
		$assign(child, child->normalize());
	}
	int32_t baseCount = base->getNameCount();
	int32_t childCount = $nc(child)->getNameCount();
	int32_t n = $Math::min(baseCount, childCount);
	int32_t i = 0;
	while (i < n) {
		if (!$nc($(base->getName(i)))->equals($(child->getName(i)))) {
			break;
		}
		++i;
	}
	$var(WindowsPath, childRemaining, nullptr);
	bool isChildEmpty = false;
	if (i == childCount) {
		$assign(childRemaining, emptyPath());
		isChildEmpty = true;
	} else {
		$assign(childRemaining, child->subpath(i, childCount));
		isChildEmpty = $nc(childRemaining)->isEmpty();
	}
	if (i == baseCount) {
		return childRemaining;
	}
	$var(WindowsPath, baseRemaining, base->subpath(i, baseCount));
	if ($nc(baseRemaining)->hasDotOrDotDot()) {
		$throwNew($IllegalArgumentException, $$str({"Unable to compute relative  path from "_s, this, " to "_s, obj}));
	}
	if ($nc(baseRemaining)->isEmpty()) {
		return childRemaining;
	}
	int32_t dotdots = $nc(baseRemaining)->getNameCount();
	if (dotdots == 0) {
		return childRemaining;
	}
	$var($StringBuilder, result, $new($StringBuilder));
	for (int32_t j = 0; j < dotdots; ++j) {
		result->append("..\\"_s);
	}
	if (!isChildEmpty) {
		for (int32_t j = 0; j < $nc(childRemaining)->getNameCount(); ++j) {
			result->append($($nc($(childRemaining->getName(j)))->toString()));
			result->append("\\"_s);
		}
	}
	result->setLength(result->length() - 1);
	$var($WindowsFileSystem, var$1, $cast($WindowsFileSystem, getFileSystem()));
	return createFromNormalizedPath(var$1, $(result->toString()));
}

WindowsPath* WindowsPath::normalize() {
	int32_t count = getNameCount();
	if (count == 0 || isEmpty()) {
		return this;
	}
	$var($booleans, ignore, $new($booleans, count));
	int32_t remaining = count;
	int32_t prevRemaining = 0;
	do {
		prevRemaining = remaining;
		int32_t prevName = -1;
		for (int32_t i = 0; i < count; ++i) {
			if (ignore->get(i)) {
				continue;
			}
			$var($String, name, elementAsString(i));
			if ($nc(name)->length() > 2) {
				prevName = i;
				continue;
			}
			if ($nc(name)->length() == 1) {
				if (name->charAt(0) == u'.') {
					ignore->set(i, true);
					--remaining;
				} else {
					prevName = i;
				}
				continue;
			}
			bool var$0 = $nc(name)->charAt(0) != u'.';
			if (var$0 || $nc(name)->charAt(1) != u'.') {
				prevName = i;
				continue;
			}
			if (prevName >= 0) {
				ignore->set(prevName, true);
				ignore->set(i, true);
				remaining = remaining - 2;
				prevName = -1;
			} else {
				$init($WindowsPathType);
				if (isAbsolute() || this->type$ == $WindowsPathType::DIRECTORY_RELATIVE) {
					bool hasPrevious = false;
					for (int32_t j = 0; j < i; ++j) {
						if (!ignore->get(j)) {
							hasPrevious = true;
							break;
						}
					}
					if (!hasPrevious) {
						ignore->set(i, true);
						--remaining;
					}
				}
			}
		}
	} while (prevRemaining > remaining);
	if (remaining == count) {
		return this;
	}
	if (remaining == 0) {
		return $nc(this->root)->isEmpty() ? emptyPath() : getRoot();
	}
	$var($StringBuilder, result, $new($StringBuilder));
	if (this->root != nullptr) {
		result->append(this->root);
	}
	for (int32_t i = 0; i < count; ++i) {
		if (!ignore->get(i)) {
			result->append($($of(getName(i))));
			result->append("\\"_s);
		}
	}
	result->setLength(result->length() - 1);
	$var($WindowsFileSystem, var$1, $cast($WindowsFileSystem, getFileSystem()));
	return createFromNormalizedPath(var$1, $(result->toString()));
}

WindowsPath* WindowsPath::resolve($Path* obj) {
	$var(WindowsPath, other, toWindowsPath(obj));
	if ($nc(other)->isEmpty()) {
		return this;
	}
	if ($nc(other)->isAbsolute()) {
		return other;
	}
	$init($WindowsPath$1);
	switch ($nc($WindowsPath$1::$SwitchMap$sun$nio$fs$WindowsPathType)->get(($nc(other)->type$)->ordinal())) {
	case 1:
		{
			{
				$var($String, result, nullptr);
				bool var$0 = $nc(this->path)->endsWith("\\"_s);
				if (!var$0) {
					int32_t var$1 = $nc(this->root)->length();
					var$0 = (var$1 == $nc(this->path)->length());
				}
				if (var$0) {
					$assign(result, $str({this->path, other->path}));
				} else {
					$assign(result, $str({this->path, "\\"_s, other->path}));
				}
				return $new(WindowsPath, $($cast($WindowsFileSystem, getFileSystem())), this->type$, this->root, result);
			}
		}
	case 2:
		{
			{
				$var($String, result, nullptr);
				if ($nc(this->root)->endsWith("\\"_s)) {
					$assign(result, $str({this->root, $($nc(other->path)->substring(1))}));
				} else {
					$assign(result, $str({this->root, other->path}));
				}
				return createFromNormalizedPath($($cast($WindowsFileSystem, getFileSystem())), result);
			}
		}
	case 3:
		{
			{
				if (!$nc(this->root)->endsWith("\\"_s)) {
					return other;
				}
				$var($String, thisRoot, $nc(this->root)->substring(0, $nc(this->root)->length() - 1));
				if (!thisRoot->equalsIgnoreCase(other->root)) {
					return other;
				}
				$var($String, remaining, $nc(other->path)->substring($nc(other->root)->length()));
				$var($String, result, nullptr);
				if ($nc(this->path)->endsWith("\\"_s)) {
					$assign(result, $str({this->path, remaining}));
				} else {
					$assign(result, $str({this->path, "\\"_s, remaining}));
				}
				return createFromNormalizedPath($($cast($WindowsFileSystem, getFileSystem())), result);
			}
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

void WindowsPath::initOffsets() {
	if (this->offsets == nullptr) {
		$var($ArrayList, list, $new($ArrayList));
		if (isEmpty()) {
			list->add($($Integer::valueOf(0)));
		} else {
			int32_t start = $nc(this->root)->length();
			int32_t off = $nc(this->root)->length();
			while (off < $nc(this->path)->length()) {
				if ($nc(this->path)->charAt(off) != u'\\') {
					++off;
				} else {
					list->add($($Integer::valueOf(start)));
					start = ++off;
				}
			}
			if (start != off) {
				list->add($($Integer::valueOf(start)));
			}
		}
		$synchronized(this) {
			if (this->offsets == nullptr) {
				$set(this, offsets, $fcast($IntegerArray, list->toArray($$new($IntegerArray, list->size()))));
			}
		}
	}
}

int32_t WindowsPath::getNameCount() {
	initOffsets();
	return $nc(this->offsets)->length;
}

$String* WindowsPath::elementAsString(int32_t i) {
	initOffsets();
	if (i == ($nc(this->offsets)->length - 1)) {
		return $nc(this->path)->substring($nc($nc(this->offsets)->get(i))->intValue());
	}
	int32_t var$0 = $nc($nc(this->offsets)->get(i))->intValue();
	return $nc(this->path)->substring(var$0, $nc($nc(this->offsets)->get(i + 1))->intValue() - 1);
}

WindowsPath* WindowsPath::getName(int32_t index) {
	initOffsets();
	if (index < 0 || index >= $nc(this->offsets)->length) {
		$throwNew($IllegalArgumentException);
	}
	$var($WindowsFileSystem, var$0, $cast($WindowsFileSystem, getFileSystem()));
	$init($WindowsPathType);
	$var($WindowsPathType, var$1, $WindowsPathType::RELATIVE);
	$var($String, var$2, ""_s);
	return $new(WindowsPath, var$0, var$1, var$2, $(elementAsString(index)));
}

WindowsPath* WindowsPath::subpath(int32_t beginIndex, int32_t endIndex) {
	initOffsets();
	if (beginIndex < 0) {
		$throwNew($IllegalArgumentException);
	}
	if (beginIndex >= $nc(this->offsets)->length) {
		$throwNew($IllegalArgumentException);
	}
	if (endIndex > $nc(this->offsets)->length) {
		$throwNew($IllegalArgumentException);
	}
	if (beginIndex >= endIndex) {
		$throwNew($IllegalArgumentException);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = beginIndex; i < endIndex; ++i) {
		sb->append($(elementAsString(i)));
		if (i != (endIndex - 1)) {
			sb->append("\\"_s);
		}
	}
	$var($WindowsFileSystem, var$0, $cast($WindowsFileSystem, getFileSystem()));
	$init($WindowsPathType);
	$var($WindowsPathType, var$1, $WindowsPathType::RELATIVE);
	$var($String, var$2, ""_s);
	return $new(WindowsPath, var$0, var$1, var$2, $(sb->toString()));
}

bool WindowsPath::startsWith($Path* obj) {
	if (!($instanceOf(WindowsPath, $Objects::requireNonNull(obj)))) {
		return false;
	}
	$var(WindowsPath, other, $cast(WindowsPath, obj));
	if (!$nc(this->root)->equalsIgnoreCase($nc(other)->root)) {
		return false;
	}
	if ($nc(other)->isEmpty()) {
		return this->isEmpty();
	}
	int32_t thisCount = getNameCount();
	int32_t otherCount = $nc(other)->getNameCount();
	if (otherCount <= thisCount) {
		while (--otherCount >= 0) {
			$var($String, thisElement, this->elementAsString(otherCount));
			$var($String, otherElement, other->elementAsString(otherCount));
			if (!$nc(thisElement)->equalsIgnoreCase(otherElement)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

bool WindowsPath::endsWith($Path* obj) {
	if (!($instanceOf(WindowsPath, $Objects::requireNonNull(obj)))) {
		return false;
	}
	$var(WindowsPath, other, $cast(WindowsPath, obj));
	int32_t var$0 = $nc($nc(other)->path)->length();
	if (var$0 > $nc(this->path)->length()) {
		return false;
	}
	if ($nc(other)->isEmpty()) {
		return this->isEmpty();
	}
	int32_t thisCount = this->getNameCount();
	int32_t otherCount = $nc(other)->getNameCount();
	if (otherCount > thisCount) {
		return false;
	}
	if ($nc(other->root)->length() > 0) {
		if (otherCount < thisCount) {
			return false;
		}
		if (!$nc(this->root)->equalsIgnoreCase(other->root)) {
			return false;
		}
	}
	int32_t off = thisCount - otherCount;
	while (--otherCount >= 0) {
		$var($String, thisElement, this->elementAsString(off + otherCount));
		$var($String, otherElement, other->elementAsString(otherCount));
		if (!$nc(thisElement)->equalsIgnoreCase(otherElement)) {
			return false;
		}
	}
	return true;
}

int32_t WindowsPath::compareTo($Path* obj) {
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($String, s1, this->path);
	$var($String, s2, $nc(($cast(WindowsPath, obj)))->path);
	int32_t n1 = $nc(s1)->length();
	int32_t n2 = $nc(s2)->length();
	int32_t min = $Math::min(n1, n2);
	for (int32_t i = 0; i < min; ++i) {
		char16_t c1 = s1->charAt(i);
		char16_t c2 = s2->charAt(i);
		if (c1 != c2) {
			c1 = $Character::toUpperCase(c1);
			c2 = $Character::toUpperCase(c2);
			if (c1 != c2) {
				return c1 - c2;
			}
		}
	}
	return n1 - n2;
}

bool WindowsPath::equals(Object$* obj) {
	{
		$var(WindowsPath, path, nullptr);
		bool var$0 = $instanceOf(WindowsPath, obj);
		if (var$0) {
			$assign(path, $cast(WindowsPath, obj));
			var$0 = true;
		}
		if (var$0) {
			return compareTo(static_cast<$Path*>(path)) == 0;
		}
	}
	return false;
}

int32_t WindowsPath::hashCode() {
	int32_t h = this->hash;
	if (h == 0) {
		for (int32_t i = 0; i < $nc(this->path)->length(); ++i) {
			h = 31 * h + $Character::toUpperCase($nc(this->path)->charAt(i));
		}
		this->hash = h;
	}
	return h;
}

$String* WindowsPath::toString() {
	return this->path;
}

int64_t WindowsPath::openForReadAttributeAccess(bool followLinks) {
	int32_t flags = 0x02000000;
	if (!followLinks) {
		flags |= 0x00200000;
	}
	try {
		return openFileForReadAttributeAccess(flags);
	} catch ($WindowsException&) {
		$var($WindowsException, e, $catch());
		if (followLinks && e->lastError() == 1920) {
			try {
				return openSocketForReadAttributeAccess();
			} catch ($WindowsException&) {
				$catch();
			}
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

int64_t WindowsPath::openFileForReadAttributeAccess(int32_t flags) {
	return $WindowsNativeDispatcher::CreateFile($(getPathForWin32Calls()), 128, ((1 | 2) | 4), 0, 3, flags);
}

int64_t WindowsPath::openSocketForReadAttributeAccess() {
	int32_t flags = 0x02000000 | 0x00200000;
	int64_t handle = openFileForReadAttributeAccess(flags);
	try {
		$var($WindowsFileAttributes, attrs, $WindowsFileAttributes::readAttributes(handle));
		if (!$nc(attrs)->isUnixDomainSocket()) {
			$throwNew($WindowsException, "not a socket"_s);
		}
		return handle;
	} catch ($WindowsException&) {
		$var($WindowsException, e, $catch());
		$WindowsNativeDispatcher::CloseHandle(handle);
		$throw(e);
	}
	$shouldNotReachHere();
}

void WindowsPath::checkRead() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkRead($(getPathForPermissionCheck()));
	}
}

void WindowsPath::checkWrite() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkWrite($(getPathForPermissionCheck()));
	}
}

void WindowsPath::checkDelete() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkDelete($(getPathForPermissionCheck()));
	}
}

$URI* WindowsPath::toUri() {
	return $WindowsUriSupport::toUri(this);
}

WindowsPath* WindowsPath::toAbsolutePath() {
	if (isAbsolute()) {
		return this;
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertyAccess("user.dir"_s);
	}
	try {
		$var($WindowsFileSystem, var$0, $cast($WindowsFileSystem, getFileSystem()));
		return createFromNormalizedPath(var$0, $(getAbsolutePath()));
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		$throwNew($IOError, $$new($IOException, $(x->getMessage())));
	}
	$shouldNotReachHere();
}

WindowsPath* WindowsPath::toRealPath($LinkOptionArray* options) {
	checkRead();
	$var($String, rp, $WindowsLinkSupport::getRealPath(this, $Util::followLinks(options)));
	return createFromNormalizedPath($($cast($WindowsFileSystem, getFileSystem())), rp);
}

$WatchKey* WindowsPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers$renamed) {
	$var($WatchEvent$ModifierArray, modifiers, modifiers$renamed);
	if (watcher == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($WindowsWatchService, watcher))) {
		$throwNew($ProviderMismatchException);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		bool watchSubtree = false;
		int32_t ml = $nc(modifiers)->length;
		if (ml > 0) {
			$assign(modifiers, $fcast($WatchEvent$ModifierArray, $Arrays::copyOf(modifiers, ml)));
			int32_t i = 0;
			while (i < ml) {
				$init($ExtendedOptions);
				if ($nc($ExtendedOptions::FILE_TREE)->matches(modifiers->get(i++))) {
					watchSubtree = true;
					break;
				}
			}
		}
		$var($String, s, getPathForPermissionCheck());
		sm->checkRead(s);
		if (watchSubtree) {
			sm->checkRead($$str({s, "\\-"_s}));
		}
	}
	return $nc(($cast($WindowsWatchService, watcher)))->register$(this, events, modifiers);
}

int32_t WindowsPath::compareTo(Object$* obj) {
	return this->compareTo($cast($Path, obj));
}

WindowsPath::WindowsPath() {
}

$Class* WindowsPath::load$($String* name, bool initialize) {
	$loadClass(WindowsPath, name, initialize, &_WindowsPath_ClassInfo_, allocate$WindowsPath);
	return class$;
}

$Class* WindowsPath::class$ = nullptr;

		} // fs
	} // nio
} // sun