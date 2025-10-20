#include <sun/nio/fs/UnixPath.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixUriUtils.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef JLA
#undef O_NOFOLLOW
#undef O_RDONLY

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $Charset = ::java::nio::charset::Charset;
using $FileSystem = ::java::nio::file::FileSystem;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $Objects = ::java::util::Objects;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixUriUtils = ::sun::nio::fs::UnixUriUtils;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixPath_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixPath, $assertionsDisabled)},
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixPath, JLA)},
	{"fs", "Lsun/nio/fs/UnixFileSystem;", nullptr, $PRIVATE | $FINAL, $field(UnixPath, fs)},
	{"path", "[B", nullptr, $PRIVATE | $FINAL, $field(UnixPath, path)},
	{"stringValue", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(UnixPath, stringValue)},
	{"hash", "I", nullptr, $PRIVATE, $field(UnixPath, hash)},
	{"offsets", "[I", nullptr, $PRIVATE | $VOLATILE, $field(UnixPath, offsets)},
	{}
};

$MethodInfo _UnixPath_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;[B)V", nullptr, 0, $method(static_cast<void(UnixPath::*)($UnixFileSystem*,$bytes*)>(&UnixPath::init$))},
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(UnixPath::*)($UnixFileSystem*,$String*)>(&UnixPath::init$))},
	{"asByteArray", "()[B", nullptr, 0},
	{"checkDelete", "()V", nullptr, 0},
	{"checkNotNul", "(Ljava/lang/String;C)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,char16_t)>(&UnixPath::checkNotNul))},
	{"checkRead", "()V", nullptr, 0},
	{"checkWrite", "()V", nullptr, 0},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"emptyPath", "()Lsun/nio/fs/UnixPath;", nullptr, $PRIVATE, $method(static_cast<UnixPath*(UnixPath::*)()>(&UnixPath::emptyPath))},
	{"encode", "(Lsun/nio/fs/UnixFileSystem;Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($UnixFileSystem*,$String*)>(&UnixPath::encode))},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getByteArrayForSysCalls", "()[B", nullptr, 0},
	{"getFileName", "()Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"getFileSystem", "()Lsun/nio/fs/UnixFileSystem;", nullptr, $PUBLIC},
	{"getName", "(I)Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"getNameCount", "()I", nullptr, $PUBLIC},
	{"getParent", "()Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"getPathForExceptionMessage", "()Ljava/lang/String;", nullptr, 0},
	{"getPathForPermissionCheck", "()Ljava/lang/String;", nullptr, 0},
	{"getRoot", "()Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"hasDotOrDotDot", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(UnixPath::*)()>(&UnixPath::hasDotOrDotDot))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initOffsets", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixPath::*)()>(&UnixPath::initOffsets))},
	{"isAbsolute", "()Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, 0},
	{"normalize", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,int32_t,int32_t)>(&UnixPath::normalize))},
	{"normalize", "()Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"normalizeAndCheck", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&UnixPath::normalizeAndCheck))},
	{"openForAttributeAccess", "(Z)I", nullptr, 0, nullptr, "sun.nio.fs.UnixException"},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"relativize", "(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"resolve", "([B[B)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*,$bytes*)>(&UnixPath::resolve))},
	{"resolve", "(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"resolve", "([B)Lsun/nio/fs/UnixPath;", nullptr, 0},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"subpath", "(II)Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"toAbsolutePath", "()Lsun/nio/fs/UnixPath;", nullptr, $PUBLIC},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUnixPath", "(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;", nullptr, $STATIC, $method(static_cast<UnixPath*(*)($Path*)>(&UnixPath::toUnixPath))},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnixPath_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_UnixPath_FieldInfo_,
	_UnixPath_MethodInfo_
};

$Object* allocate$UnixPath($Class* clazz) {
	return $of($alloc(UnixPath));
}

bool UnixPath::$assertionsDisabled = false;
$JavaLangAccess* UnixPath::JLA = nullptr;

void UnixPath::init$($UnixFileSystem* fs, $bytes* path) {
	$set(this, fs, fs);
	$set(this, path, path);
}

void UnixPath::init$($UnixFileSystem* fs, $String* input) {
	$useLocalCurrentObjectStackCache();
	UnixPath::init$(fs, $(encode(fs, $(normalizeAndCheck(input)))));
}

$String* UnixPath::normalizeAndCheck($String* input) {
	$init(UnixPath);
	int32_t n = $nc(input)->length();
	char16_t prevChar = (char16_t)0;
	for (int32_t i = 0; i < n; ++i) {
		char16_t c = input->charAt(i);
		if ((c == u'/') && (prevChar == u'/')) {
			return normalize(input, n, i - 1);
		}
		checkNotNul(input, c);
		prevChar = c;
	}
	if (prevChar == u'/') {
		return normalize(input, n, n - 1);
	}
	return input;
}

void UnixPath::checkNotNul($String* input, char16_t c) {
	$init(UnixPath);
	if (c == u'\0') {
		$throwNew($InvalidPathException, input, "Nul character not allowed"_s);
	}
}

$String* UnixPath::normalize($String* input, int32_t len, int32_t off) {
	$init(UnixPath);
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		return input;
	}
	int32_t n = len;
	while ((n > 0) && ($nc(input)->charAt(n - 1) == u'/')) {
		--n;
	}
	if (n == 0) {
		return "/"_s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, $nc(input)->length()));
	if (off > 0) {
		sb->append($($nc(input)->substring(0, off)));
	}
	char16_t prevChar = (char16_t)0;
	for (int32_t i = off; i < n; ++i) {
		char16_t c = $nc(input)->charAt(i);
		if ((c == u'/') && (prevChar == u'/')) {
			continue;
		}
		checkNotNul(input, c);
		sb->append(c);
		prevChar = c;
	}
	return sb->toString();
}

$bytes* UnixPath::encode($UnixFileSystem* fs, $String* input$renamed) {
	$init(UnixPath);
	$useLocalCurrentObjectStackCache();
	$var($String, input, input$renamed);
	$assign(input, $nc(fs)->normalizeNativePath(input));
	try {
		return $nc(UnixPath::JLA)->getBytesNoRepl(input, $($Util::jnuEncoding()));
	} catch ($CharacterCodingException&) {
		$var($CharacterCodingException, cce, $catch());
		$throwNew($InvalidPathException, input, "Malformed input or input contains unmappable characters"_s);
	}
	$shouldNotReachHere();
}

$bytes* UnixPath::asByteArray() {
	return this->path;
}

$bytes* UnixPath::getByteArrayForSysCalls() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($cast($UnixFileSystem, getFileSystem())))->needToResolveAgainstDefaultDirectory()) {
		return resolve($($nc($($cast($UnixFileSystem, getFileSystem())))->defaultDirectory()), this->path);
	} else if (!isEmpty()) {
		return this->path;
	} else {
		$var($bytes, here, $new($bytes, {(int8_t)u'.'}));
		return here;
	}
}

$String* UnixPath::getPathForExceptionMessage() {
	return toString();
}

$String* UnixPath::getPathForPermissionCheck() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($cast($UnixFileSystem, getFileSystem())))->needToResolveAgainstDefaultDirectory()) {
		return $Util::toString($(getByteArrayForSysCalls()));
	} else {
		return toString();
	}
}

UnixPath* UnixPath::toUnixPath($Path* obj) {
	$init(UnixPath);
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf(UnixPath, obj))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast(UnixPath, obj);
}

void UnixPath::initOffsets() {
	if (this->offsets == nullptr) {
		int32_t count = 0;
		int32_t index = 0;
		count = 0;
		index = 0;
		if (isEmpty()) {
			count = 1;
		} else {
			while (index < $nc(this->path)->length) {
				int8_t c = $nc(this->path)->get(index++);
				if (c != u'/') {
					++count;
					while (index < $nc(this->path)->length && $nc(this->path)->get(index) != u'/') {
						++index;
					}
				}
			}
		}
		$var($ints, result, $new($ints, count));
		count = 0;
		index = 0;
		while (index < $nc(this->path)->length) {
			int8_t c = $nc(this->path)->get(index);
			if (c == u'/') {
				++index;
			} else {
				result->set(count++, index++);
				while (index < $nc(this->path)->length && $nc(this->path)->get(index) != u'/') {
					++index;
				}
			}
		}
		$synchronized(this) {
			if (this->offsets == nullptr) {
				$set(this, offsets, result);
			}
		}
	}
}

bool UnixPath::isEmpty() {
	return $nc(this->path)->length == 0;
}

UnixPath* UnixPath::emptyPath() {
	$useLocalCurrentObjectStackCache();
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), $$new($bytes, 0));
}

bool UnixPath::hasDotOrDotDot() {
	$useLocalCurrentObjectStackCache();
	int32_t n = getNameCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($bytes, bytes, $nc($(getName(i)))->path);
		if ($nc(bytes)->length == 1 && bytes->get(0) == u'.') {
			return true;
		}
		if (($nc(bytes)->length == 2 && bytes->get(0) == u'.') && bytes->get(1) == u'.') {
			return true;
		}
	}
	return false;
}

$FileSystem* UnixPath::getFileSystem() {
	return this->fs;
}

UnixPath* UnixPath::getRoot() {
	if ($nc(this->path)->length > 0 && $nc(this->path)->get(0) == u'/') {
		return $nc($($cast($UnixFileSystem, getFileSystem())))->rootDirectory();
	} else {
		return nullptr;
	}
}

UnixPath* UnixPath::getFileName() {
	$useLocalCurrentObjectStackCache();
	initOffsets();
	int32_t count = $nc(this->offsets)->length;
	if (count == 0) {
		return nullptr;
	}
	if (count == 1 && $nc(this->path)->length > 0 && $nc(this->path)->get(0) != u'/') {
		return this;
	}
	int32_t lastOffset = $nc(this->offsets)->get(count - 1);
	int32_t len = $nc(this->path)->length - lastOffset;
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, lastOffset, result, 0, len);
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

UnixPath* UnixPath::getParent() {
	$useLocalCurrentObjectStackCache();
	initOffsets();
	int32_t count = $nc(this->offsets)->length;
	if (count == 0) {
		return nullptr;
	}
	int32_t len = $nc(this->offsets)->get(count - 1) - 1;
	if (len <= 0) {
		return getRoot();
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, 0, result, 0, len);
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

int32_t UnixPath::getNameCount() {
	initOffsets();
	return $nc(this->offsets)->length;
}

UnixPath* UnixPath::getName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	initOffsets();
	if (index < 0) {
		$throwNew($IllegalArgumentException);
	}
	if (index >= $nc(this->offsets)->length) {
		$throwNew($IllegalArgumentException);
	}
	int32_t begin = $nc(this->offsets)->get(index);
	int32_t len = 0;
	if (index == ($nc(this->offsets)->length - 1)) {
		len = $nc(this->path)->length - begin;
	} else {
		len = $nc(this->offsets)->get(index + 1) - begin - 1;
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, begin, result, 0, len);
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

UnixPath* UnixPath::subpath(int32_t beginIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
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
	int32_t begin = $nc(this->offsets)->get(beginIndex);
	int32_t len = 0;
	if (endIndex == $nc(this->offsets)->length) {
		len = $nc(this->path)->length - begin;
	} else {
		len = $nc(this->offsets)->get(endIndex) - begin - 1;
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, begin, result, 0, len);
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

bool UnixPath::isAbsolute() {
	return ($nc(this->path)->length > 0 && $nc(this->path)->get(0) == u'/');
}

$bytes* UnixPath::resolve($bytes* base, $bytes* child) {
	$init(UnixPath);
	int32_t baseLength = $nc(base)->length;
	int32_t childLength = $nc(child)->length;
	if (childLength == 0) {
		return base;
	}
	if (baseLength == 0 || child->get(0) == u'/') {
		return child;
	}
	$var($bytes, result, nullptr);
	if (baseLength == 1 && base->get(0) == u'/') {
		$assign(result, $new($bytes, childLength + 1));
		result->set(0, (int8_t)u'/');
		$System::arraycopy(child, 0, result, 1, childLength);
	} else {
		$assign(result, $new($bytes, baseLength + 1 + childLength));
		$System::arraycopy(base, 0, result, 0, baseLength);
		result->set(base->length, (int8_t)u'/');
		$System::arraycopy(child, 0, result, baseLength + 1, childLength);
	}
	return result;
}

UnixPath* UnixPath::resolve($Path* obj) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, other, $nc($(toUnixPath(obj)))->path);
	if ($nc(other)->length > 0 && other->get(0) == u'/') {
		return ($cast(UnixPath, obj));
	}
	$var($bytes, result, resolve(this->path, other));
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

UnixPath* UnixPath::resolve($bytes* other) {
	$useLocalCurrentObjectStackCache();
	return resolve(static_cast<$Path*>($$new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), other)));
}

UnixPath* UnixPath::relativize($Path* obj) {
	$useLocalCurrentObjectStackCache();
	$var(UnixPath, child, toUnixPath(obj));
	if ($nc(child)->equals(this)) {
		return emptyPath();
	}
	bool var$0 = this->isAbsolute();
	if (var$0 != $nc(child)->isAbsolute()) {
		$throwNew($IllegalArgumentException, "\'other\' is different type of Path"_s);
	}
	if (this->isEmpty()) {
		return child;
	}
	$var(UnixPath, base, this);
	bool var$1 = base->hasDotOrDotDot();
	if (var$1 || $nc(child)->hasDotOrDotDot()) {
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
	$var(UnixPath, childRemaining, nullptr);
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
	$var(UnixPath, baseRemaining, base->subpath(i, baseCount));
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
	int32_t len = dotdots * 3 + $nc($nc(childRemaining)->path)->length;
	if (isChildEmpty) {
		if (!UnixPath::$assertionsDisabled && !childRemaining->isEmpty()) {
			$throwNew($AssertionError);
		}
		--len;
	}
	$var($bytes, result, $new($bytes, len));
	int32_t pos = 0;
	while (dotdots > 0) {
		result->set(pos++, (int8_t)u'.');
		result->set(pos++, (int8_t)u'.');
		if (isChildEmpty) {
			if (dotdots > 1) {
				result->set(pos++, (int8_t)u'/');
			}
		} else {
			result->set(pos++, (int8_t)u'/');
		}
		--dotdots;
	}
	$System::arraycopy(childRemaining->path, 0, result, pos, $nc(childRemaining->path)->length);
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

UnixPath* UnixPath::normalize() {
	$useLocalCurrentObjectStackCache();
	int32_t count = getNameCount();
	if (count == 0 || isEmpty()) {
		return this;
	}
	$var($booleans, ignore, $new($booleans, count));
	$var($ints, size, $new($ints, count));
	int32_t remaining = count;
	bool hasDotDot = false;
	bool isAbsolute = this->isAbsolute();
	for (int32_t i = 0; i < count; ++i) {
		int32_t begin = $nc(this->offsets)->get(i);
		int32_t len = 0;
		if (i == ($nc(this->offsets)->length - 1)) {
			len = $nc(this->path)->length - begin;
		} else {
			len = $nc(this->offsets)->get(i + 1) - begin - 1;
		}
		size->set(i, len);
		if ($nc(this->path)->get(begin) == u'.') {
			if (len == 1) {
				ignore->set(i, true);
				--remaining;
			} else if ($nc(this->path)->get(begin + 1) == u'.') {
				hasDotDot = true;
			}
		}
	}
	if (hasDotDot) {
		int32_t prevRemaining = 0;
		do {
			prevRemaining = remaining;
			int32_t prevName = -1;
			for (int32_t i = 0; i < count; ++i) {
				if (ignore->get(i)) {
					continue;
				}
				if (size->get(i) != 2) {
					prevName = i;
					continue;
				}
				int32_t begin = $nc(this->offsets)->get(i);
				if ($nc(this->path)->get(begin) != u'.' || $nc(this->path)->get(begin + 1) != u'.') {
					prevName = i;
					continue;
				}
				if (prevName >= 0) {
					ignore->set(prevName, true);
					ignore->set(i, true);
					remaining = remaining - 2;
					prevName = -1;
				} else if (isAbsolute) {
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
		} while (prevRemaining > remaining);
	}
	if (remaining == count) {
		return this;
	}
	if (remaining == 0) {
		return isAbsolute ? $nc($($cast($UnixFileSystem, getFileSystem())))->rootDirectory() : emptyPath();
	}
	int32_t len = remaining - 1;
	if (isAbsolute) {
		++len;
	}
	for (int32_t i = 0; i < count; ++i) {
		if (!ignore->get(i)) {
			len += size->get(i);
		}
	}
	$var($bytes, result, $new($bytes, len));
	int32_t pos = 0;
	if (isAbsolute) {
		result->set(pos++, (int8_t)u'/');
	}
	for (int32_t i = 0; i < count; ++i) {
		if (!ignore->get(i)) {
			$System::arraycopy(this->path, $nc(this->offsets)->get(i), result, pos, size->get(i));
			pos += size->get(i);
			if (--remaining > 0) {
				result->set(pos++, (int8_t)u'/');
			}
		}
	}
	return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), result);
}

bool UnixPath::startsWith($Path* other) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(UnixPath, $Objects::requireNonNull(other)))) {
		return false;
	}
	$var(UnixPath, that, $cast(UnixPath, other));
	if ($nc($nc(that)->path)->length > $nc(this->path)->length) {
		return false;
	}
	int32_t thisOffsetCount = getNameCount();
	int32_t thatOffsetCount = $nc(that)->getNameCount();
	if (thatOffsetCount == 0 && this->isAbsolute()) {
		return that->isEmpty() ? false : true;
	}
	if (thatOffsetCount > thisOffsetCount) {
		return false;
	}
	if ((thatOffsetCount == thisOffsetCount) && ($nc(this->path)->length != $nc(that->path)->length)) {
		return false;
	}
	for (int32_t i = 0; i < thatOffsetCount; ++i) {
		$var($Integer, o1, $Integer::valueOf($nc(this->offsets)->get(i)));
		$var($Integer, o2, $Integer::valueOf($nc(that->offsets)->get(i)));
		if (!$nc(o1)->equals(o2)) {
			return false;
		}
	}
	int32_t i = 0;
	while (i < $nc(that->path)->length) {
		if ($nc(this->path)->get(i) != $nc(that->path)->get(i)) {
			return false;
		}
		++i;
	}
	if (i < $nc(this->path)->length && $nc(this->path)->get(i) != u'/') {
		return false;
	}
	return true;
}

bool UnixPath::endsWith($Path* other) {
	if (!($instanceOf(UnixPath, $Objects::requireNonNull(other)))) {
		return false;
	}
	$var(UnixPath, that, $cast(UnixPath, other));
	int32_t thisLen = $nc(this->path)->length;
	int32_t thatLen = $nc($nc(that)->path)->length;
	if (thatLen > thisLen) {
		return false;
	}
	if (thisLen > 0 && thatLen == 0) {
		return false;
	}
	bool var$0 = that->isAbsolute();
	if (var$0 && !this->isAbsolute()) {
		return false;
	}
	int32_t thisOffsetCount = getNameCount();
	int32_t thatOffsetCount = that->getNameCount();
	if (thatOffsetCount > thisOffsetCount) {
		return false;
	} else if (thatOffsetCount == thisOffsetCount) {
		if (thisOffsetCount == 0) {
			return true;
		}
		int32_t expectedLen = thisLen;
		bool var$1 = this->isAbsolute();
		if (var$1 && !that->isAbsolute()) {
			--expectedLen;
		}
		if (thatLen != expectedLen) {
			return false;
		}
	} else if (that->isAbsolute()) {
		return false;
	}
	int32_t thisPos = $nc(this->offsets)->get(thisOffsetCount - thatOffsetCount);
	int32_t thatPos = $nc(that->offsets)->get(0);
	if ((thatLen - thatPos) != (thisLen - thisPos)) {
		return false;
	}
	while (thatPos < thatLen) {
		if ($nc(this->path)->get(thisPos++) != $nc(that->path)->get(thatPos++)) {
			return false;
		}
	}
	return true;
}

int32_t UnixPath::compareTo($Path* other) {
	$useLocalCurrentObjectStackCache();
	int32_t len1 = $nc(this->path)->length;
	int32_t len2 = $nc($nc(($cast(UnixPath, other)))->path)->length;
	int32_t n = $Math::min(len1, len2);
	$var($bytes, v1, this->path);
	$var($bytes, v2, ($cast(UnixPath, other))->path);
	int32_t k = 0;
	while (k < n) {
		int32_t c1 = (int32_t)($nc(v1)->get(k) & (uint32_t)255);
		int32_t c2 = (int32_t)($nc(v2)->get(k) & (uint32_t)255);
		if (c1 != c2) {
			return c1 - c2;
		}
		++k;
	}
	return len1 - len2;
}

bool UnixPath::equals(Object$* ob) {
	{
		$var(UnixPath, path, nullptr);
		bool var$0 = $instanceOf(UnixPath, ob);
		if (var$0) {
			$assign(path, $cast(UnixPath, ob));
			var$0 = true;
		}
		if (var$0) {
			return compareTo(static_cast<$Path*>(path)) == 0;
		}
	}
	return false;
}

int32_t UnixPath::hashCode() {
	int32_t h = this->hash;
	if (h == 0) {
		for (int32_t i = 0; i < $nc(this->path)->length; ++i) {
			h = 31 * h + ((int32_t)($nc(this->path)->get(i) & (uint32_t)255));
		}
		this->hash = h;
	}
	return h;
}

$String* UnixPath::toString() {
	if (this->stringValue == nullptr) {
		$set(this, stringValue, $nc(this->fs)->normalizeJavaPath($($Util::toString(this->path))));
	}
	return this->stringValue;
}

int32_t UnixPath::openForAttributeAccess(bool followLinks) {
	$init($UnixConstants);
	int32_t flags = $UnixConstants::O_RDONLY;
	if (!followLinks) {
		if ($UnixConstants::O_NOFOLLOW == 0) {
			$throwNew($UnixException, "NOFOLLOW_LINKS is not supported on this platform"_s);
		}
		flags |= $UnixConstants::O_NOFOLLOW;
	}
	return $UnixNativeDispatcher::open(this, flags, 0);
}

void UnixPath::checkRead() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkRead($(getPathForPermissionCheck()));
	}
}

void UnixPath::checkWrite() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkWrite($(getPathForPermissionCheck()));
	}
}

void UnixPath::checkDelete() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkDelete($(getPathForPermissionCheck()));
	}
}

UnixPath* UnixPath::toAbsolutePath() {
	$useLocalCurrentObjectStackCache();
	if (isAbsolute()) {
		return this;
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertyAccess("user.dir"_s);
	}
	$var($UnixFileSystem, var$0, $cast($UnixFileSystem, getFileSystem()));
	return $new(UnixPath, var$0, $(resolve($($nc($($cast($UnixFileSystem, getFileSystem())))->defaultDirectory()), this->path)));
}

$Path* UnixPath::toRealPath($LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	checkRead();
	$var(UnixPath, absolute, toAbsolutePath());
	if ($Util::followLinks(options)) {
		try {
			$var($bytes, rp, $UnixNativeDispatcher::realpath(absolute));
			return $new(UnixPath, $($cast($UnixFileSystem, getFileSystem())), rp);
		} catch ($UnixException&) {
			$var($UnixException, x, $catch());
			x->rethrowAsIOException(this);
		}
	}
	$var(UnixPath, result, $nc(this->fs)->rootDirectory());
	for (int32_t i = 0; i < $nc(absolute)->getNameCount(); ++i) {
		$var(UnixPath, element, absolute->getName(i));
		bool var$0 = ($nc($($nc(element)->asByteArray()))->length == 1);
		if (var$0 && ($nc($(element->asByteArray()))->get(0) == u'.')) {
			continue;
		}
		bool var$2 = ($nc($($nc(element)->asByteArray()))->length == 2);
		bool var$1 = var$2 && ($nc($(element->asByteArray()))->get(0) == u'.');
		if (var$1 && ($nc($(element->asByteArray()))->get(1) == u'.')) {
			$var($UnixFileAttributes, attrs, nullptr);
			try {
				$assign(attrs, $UnixFileAttributes::get(result, false));
			} catch ($UnixException&) {
				$var($UnixException, x, $catch());
				x->rethrowAsIOException(result);
			}
			if (!$nc(attrs)->isSymbolicLink()) {
				$assign(result, $nc(result)->getParent());
				if (result == nullptr) {
					$assign(result, $nc(this->fs)->rootDirectory());
				}
				continue;
			}
		}
		$assign(result, $nc(result)->resolve(static_cast<$Path*>(element)));
	}
	try {
		$UnixFileAttributes::get(result, false);
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException(result);
	}
	return result;
}

$URI* UnixPath::toUri() {
	return $UnixUriUtils::toUri(this);
}

$WatchKey* UnixPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	if (watcher == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractWatchService, watcher))) {
		$throwNew($ProviderMismatchException);
	}
	checkRead();
	return $nc(($cast($AbstractWatchService, watcher)))->register$(this, events, modifiers);
}

int32_t UnixPath::compareTo(Object$* other) {
	return this->compareTo($cast($Path, other));
}

void clinit$UnixPath($Class* class$) {
	UnixPath::$assertionsDisabled = !UnixPath::class$->desiredAssertionStatus();
	$assignStatic(UnixPath::JLA, $SharedSecrets::getJavaLangAccess());
}

UnixPath::UnixPath() {
}

$Class* UnixPath::load$($String* name, bool initialize) {
	$loadClass(UnixPath, name, initialize, &_UnixPath_ClassInfo_, clinit$UnixPath, allocate$UnixPath);
	return class$;
}

$Class* UnixPath::class$ = nullptr;

		} // fs
	} // nio
} // sun