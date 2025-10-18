#include <java/io/UnixFileSystem.h>

#include <java/io/ExpiringCache.h>
#include <java/io/File.h>
#include <java/io/FileSystem.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef BA_HIDDEN
#undef MAX_VALUE

using $FileArray = $Array<::java::io::File>;
using $ExpiringCache = ::java::io::ExpiringCache;
using $File = ::java::io::File;
using $FileSystem = ::java::io::FileSystem;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace io {

$FieldInfo _UnixFileSystem_FieldInfo_[] = {
	{"slash", "C", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, slash)},
	{"colon", "C", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, colon)},
	{"javaHome", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, javaHome)},
	{"userDir", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, userDir)},
	{"cache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, cache)},
	{"javaHomePrefixCache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, javaHomePrefixCache)},
	{}
};

$MethodInfo _UnixFileSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnixFileSystem::*)()>(&UnixFileSystem::init$))},
	{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canonicalize0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(UnixFileSystem::*)($String*)>(&UnixFileSystem::canonicalize0)), "java.io.IOException"},
	{"checkAccess", "(Ljava/io/File;I)Z", nullptr, $PUBLIC | $NATIVE},
	{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC},
	{"createDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE},
	{"createFileExclusively", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $NATIVE, nullptr, "java.io.IOException"},
	{"delete", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"delete0", "(Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(UnixFileSystem::*)($File*)>(&UnixFileSystem::delete0))},
	{"fromURIPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBooleanAttributes", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"getBooleanAttributes0", "(Ljava/io/File;)I", nullptr, $PUBLIC | $NATIVE},
	{"getDefaultParent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLastModifiedTime", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE},
	{"getLength", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE},
	{"getNameMax", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getNameMax0", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(UnixFileSystem::*)($String*)>(&UnixFileSystem::getNameMax0))},
	{"getPathSeparator", "()C", nullptr, $PUBLIC},
	{"getSeparator", "()C", nullptr, $PUBLIC},
	{"getSpace", "(Ljava/io/File;I)J", nullptr, $PUBLIC | $NATIVE},
	{"hasBooleanAttributes", "(Ljava/io/File;I)Z", nullptr, $PUBLIC},
	{"hashCode", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&UnixFileSystem::initIDs))},
	{"isAbsolute", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isHidden", "(Ljava/io/File;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($File*)>(&UnixFileSystem::isHidden))},
	{"list", "(Ljava/io/File;)[Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE},
	{"listRoots", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(UnixFileSystem::*)($String*,int32_t)>(&UnixFileSystem::normalize))},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"parentOrNull", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&UnixFileSystem::parentOrNull))},
	{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"rename", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"rename0", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(UnixFileSystem::*)($File*,$File*)>(&UnixFileSystem::rename0))},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLastModifiedTime", "(Ljava/io/File;J)Z", nullptr, $PUBLIC | $NATIVE},
	{"setPermission", "(Ljava/io/File;IZZ)Z", nullptr, $PUBLIC | $NATIVE},
	{"setReadOnly", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE},
	{}
};

#define _METHOD_INDEX_canonicalize0 2
#define _METHOD_INDEX_checkAccess 3
#define _METHOD_INDEX_createDirectory 5
#define _METHOD_INDEX_createFileExclusively 6
#define _METHOD_INDEX_delete0 8
#define _METHOD_INDEX_getBooleanAttributes0 11
#define _METHOD_INDEX_getLastModifiedTime 13
#define _METHOD_INDEX_getLength 14
#define _METHOD_INDEX_getNameMax0 16
#define _METHOD_INDEX_getSpace 19
#define _METHOD_INDEX_initIDs 22
#define _METHOD_INDEX_list 25
#define _METHOD_INDEX_rename0 32
#define _METHOD_INDEX_setLastModifiedTime 35
#define _METHOD_INDEX_setPermission 36
#define _METHOD_INDEX_setReadOnly 37

$ClassInfo _UnixFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.UnixFileSystem",
	"java.io.FileSystem",
	nullptr,
	_UnixFileSystem_FieldInfo_,
	_UnixFileSystem_MethodInfo_
};

$Object* allocate$UnixFileSystem($Class* clazz) {
	return $of($alloc(UnixFileSystem));
}

void UnixFileSystem::init$() {
	$FileSystem::init$();
	$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
	this->slash = $nc($($nc(props)->getProperty("file.separator"_s)))->charAt(0);
	this->colon = $nc($(props->getProperty("path.separator"_s)))->charAt(0);
	$set(this, javaHome, $StaticProperty::javaHome());
	$set(this, userDir, $StaticProperty::userDir());
	$init($FileSystem);
	$set(this, cache, $FileSystem::useCanonCaches ? $new($ExpiringCache) : ($ExpiringCache*)nullptr);
	$set(this, javaHomePrefixCache, $FileSystem::useCanonPrefixCache ? $new($ExpiringCache) : ($ExpiringCache*)nullptr);
}

char16_t UnixFileSystem::getSeparator() {
	return this->slash;
}

char16_t UnixFileSystem::getPathSeparator() {
	return this->colon;
}

$String* UnixFileSystem::normalize($String* pathname, int32_t off) {
	int32_t n = $nc(pathname)->length();
	while ((n > off) && (pathname->charAt(n - 1) == u'/')) {
		--n;
	}
	if (n == 0) {
		return "/"_s;
	}
	if (n == off) {
		return pathname->substring(0, off);
	}
	$var($StringBuilder, sb, $new($StringBuilder, n));
	if (off > 0) {
		sb->append(static_cast<$CharSequence*>(pathname), 0, off);
	}
	char16_t prevChar = (char16_t)0;
	for (int32_t i = off; i < n; ++i) {
		char16_t c = pathname->charAt(i);
		if ((prevChar == u'/') && (c == u'/')) {
			continue;
		}
		sb->append(c);
		prevChar = c;
	}
	return sb->toString();
}

$String* UnixFileSystem::normalize($String* pathname) {
	int32_t doubleSlash = $nc(pathname)->indexOf("//"_s);
	if (doubleSlash >= 0) {
		return normalize(pathname, doubleSlash);
	}
	if (pathname->endsWith("/"_s)) {
		return normalize(pathname, pathname->length() - 1);
	}
	return pathname;
}

int32_t UnixFileSystem::prefixLength($String* pathname) {
	return $nc(pathname)->startsWith("/"_s) ? 1 : 0;
}

$String* UnixFileSystem::resolve($String* parent, $String* child) {
	if ($nc(child)->isEmpty()) {
		return parent;
	}
	if ($nc(child)->charAt(0) == u'/') {
		if ($nc(parent)->equals("/"_s)) {
			return child;
		}
		return $str({parent, child});
	}
	if ($nc(parent)->equals("/"_s)) {
		return $str({parent, child});
	}
	return $str({parent, $$str(u'/'), child});
}

$String* UnixFileSystem::getDefaultParent() {
	return "/"_s;
}

$String* UnixFileSystem::fromURIPath($String* path) {
	$var($String, p, path);
	bool var$0 = $nc(p)->endsWith("/"_s);
	if (var$0 && (p->length() > 1)) {
		$assign(p, p->substring(0, p->length() - 1));
	}
	return p;
}

bool UnixFileSystem::isAbsolute($File* f) {
	return ($nc(f)->getPrefixLength() != 0);
}

$String* UnixFileSystem::resolve($File* f) {
	if (isAbsolute(f)) {
		return $nc(f)->getPath();
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertyAccess("user.dir"_s);
	}
	return resolve(this->userDir, $($nc(f)->getPath()));
}

$String* UnixFileSystem::canonicalize($String* path) {
	$init($FileSystem);
	if (!$FileSystem::useCanonCaches) {
		return canonicalize0(path);
	} else {
		$var($String, res, $nc(this->cache)->get(path));
		if (res == nullptr) {
			$var($String, dir, nullptr);
			$var($String, resDir, nullptr);
			if ($FileSystem::useCanonPrefixCache) {
				$assign(dir, parentOrNull(path));
				if (dir != nullptr) {
					$assign(resDir, $nc(this->javaHomePrefixCache)->get(dir));
					if (resDir != nullptr) {
						$var($String, filename, $nc(path)->substring(1 + dir->length()));
						$assign(res, $str({resDir, $$str(this->slash), filename}));
						$nc(this->cache)->put($$str({dir, $$str(this->slash), filename}), res);
					}
				}
			}
			if (res == nullptr) {
				$assign(res, canonicalize0(path));
				$nc(this->cache)->put(path, res);
				if ($FileSystem::useCanonPrefixCache && dir != nullptr && dir->startsWith(this->javaHome)) {
					$assign(resDir, parentOrNull(res));
					if (resDir != nullptr && resDir->equals(dir)) {
						$var($File, f, $new($File, res));
						bool var$0 = f->exists();
						if (var$0 && !f->isDirectory()) {
							$nc(this->javaHomePrefixCache)->put(dir, resDir);
						}
					}
				}
			}
		}
		return res;
	}
}

$String* UnixFileSystem::canonicalize0($String* path) {
	$var($String, $ret, nullptr);
	$prepareNative(UnixFileSystem, canonicalize0, $String*, $String* path);
	$assign($ret, $invokeNative(UnixFileSystem, canonicalize0, path));
	$finishNative();
	return $ret;
}

$String* UnixFileSystem::parentOrNull($String* path) {
	$init(UnixFileSystem);
	if (path == nullptr) {
		return nullptr;
	}
	$init($File);
	char16_t sep = $File::separatorChar;
	int32_t last = $nc(path)->length() - 1;
	int32_t idx = last;
	int32_t adjacentDots = 0;
	int32_t nonDotCount = 0;
	while (idx > 0) {
		char16_t c = path->charAt(idx);
		if (c == u'.') {
			if (++adjacentDots >= 2) {
				return nullptr;
			}
		} else if (c == sep) {
			if (adjacentDots == 1 && nonDotCount == 0) {
				return nullptr;
			}
			if (idx == 0 || idx >= last - 1 || path->charAt(idx - 1) == sep) {
				return nullptr;
			}
			return path->substring(0, idx);
		} else {
			++nonDotCount;
			adjacentDots = 0;
		}
		--idx;
	}
	return nullptr;
}

int32_t UnixFileSystem::getBooleanAttributes0($File* f) {
	int32_t $ret = 0;
	$prepareNative(UnixFileSystem, getBooleanAttributes0, int32_t, $File* f);
	$ret = $invokeNative(UnixFileSystem, getBooleanAttributes0, f);
	$finishNative();
	return $ret;
}

int32_t UnixFileSystem::getBooleanAttributes($File* f) {
	int32_t rv = getBooleanAttributes0(f);
	return rv | isHidden(f);
}

bool UnixFileSystem::hasBooleanAttributes($File* f, int32_t attributes) {
	int32_t rv = getBooleanAttributes0(f);
	if (((int32_t)(attributes & (uint32_t)$FileSystem::BA_HIDDEN)) != 0) {
		rv |= isHidden(f);
	}
	return ((int32_t)(rv & (uint32_t)attributes)) == attributes;
}

int32_t UnixFileSystem::isHidden($File* f) {
	$init(UnixFileSystem);
	return $nc($($nc(f)->getName()))->startsWith("."_s) ? $FileSystem::BA_HIDDEN : 0;
}

bool UnixFileSystem::checkAccess($File* f, int32_t access) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, checkAccess, bool, $File* f, int32_t access);
	$ret = $invokeNative(UnixFileSystem, checkAccess, f, access);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getLastModifiedTime($File* f) {
	int64_t $ret = 0;
	$prepareNative(UnixFileSystem, getLastModifiedTime, int64_t, $File* f);
	$ret = $invokeNative(UnixFileSystem, getLastModifiedTime, f);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getLength($File* f) {
	int64_t $ret = 0;
	$prepareNative(UnixFileSystem, getLength, int64_t, $File* f);
	$ret = $invokeNative(UnixFileSystem, getLength, f);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setPermission($File* f, int32_t access, bool enable, bool owneronly) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, setPermission, bool, $File* f, int32_t access, bool enable, bool owneronly);
	$ret = $invokeNative(UnixFileSystem, setPermission, f, access, enable, owneronly);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::createFileExclusively($String* path) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, createFileExclusively, bool, $String* path);
	$ret = $invokeNative(UnixFileSystem, createFileExclusively, path);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::delete$($File* f) {
	$init($FileSystem);
	if ($FileSystem::useCanonCaches) {
		$nc(this->cache)->clear();
	}
	if ($FileSystem::useCanonPrefixCache) {
		$nc(this->javaHomePrefixCache)->clear();
	}
	return delete0(f);
}

bool UnixFileSystem::delete0($File* f) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, delete0, bool, $File* f);
	$ret = $invokeNative(UnixFileSystem, delete0, f);
	$finishNative();
	return $ret;
}

$StringArray* UnixFileSystem::list($File* f) {
	$var($StringArray, $ret, nullptr);
	$prepareNative(UnixFileSystem, list, $StringArray*, $File* f);
	$assign($ret, $invokeNative(UnixFileSystem, list, f));
	$finishNative();
	return $ret;
}

bool UnixFileSystem::createDirectory($File* f) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, createDirectory, bool, $File* f);
	$ret = $invokeNative(UnixFileSystem, createDirectory, f);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::rename($File* f1, $File* f2) {
	$init($FileSystem);
	if ($FileSystem::useCanonCaches) {
		$nc(this->cache)->clear();
	}
	if ($FileSystem::useCanonPrefixCache) {
		$nc(this->javaHomePrefixCache)->clear();
	}
	return rename0(f1, f2);
}

bool UnixFileSystem::rename0($File* f1, $File* f2) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, rename0, bool, $File* f1, $File* f2);
	$ret = $invokeNative(UnixFileSystem, rename0, f1, f2);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setLastModifiedTime($File* f, int64_t time) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, setLastModifiedTime, bool, $File* f, int64_t time);
	$ret = $invokeNative(UnixFileSystem, setLastModifiedTime, f, time);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setReadOnly($File* f) {
	bool $ret = false;
	$prepareNative(UnixFileSystem, setReadOnly, bool, $File* f);
	$ret = $invokeNative(UnixFileSystem, setReadOnly, f);
	$finishNative();
	return $ret;
}

$FileArray* UnixFileSystem::listRoots() {
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkRead("/"_s);
		}
		return $new($FileArray, {$$new($File, "/"_s)});
	} catch ($SecurityException&) {
		$var($SecurityException, x, $catch());
		return $new($FileArray, 0);
	}
	$shouldNotReachHere();
}

int64_t UnixFileSystem::getSpace($File* f, int32_t t) {
	int64_t $ret = 0;
	$prepareNative(UnixFileSystem, getSpace, int64_t, $File* f, int32_t t);
	$ret = $invokeNative(UnixFileSystem, getSpace, f, t);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getNameMax0($String* path) {
	int64_t $ret = 0;
	$prepareNative(UnixFileSystem, getNameMax0, int64_t, $String* path);
	$ret = $invokeNative(UnixFileSystem, getNameMax0, path);
	$finishNative();
	return $ret;
}

int32_t UnixFileSystem::getNameMax($String* path) {
	int64_t nameMax = getNameMax0(path);
	if (nameMax > $Integer::MAX_VALUE) {
		nameMax = $Integer::MAX_VALUE;
	}
	return (int32_t)nameMax;
}

int32_t UnixFileSystem::compare($File* f1, $File* f2) {
	return $nc($($nc(f1)->getPath()))->compareTo($($nc(f2)->getPath()));
}

int32_t UnixFileSystem::hashCode($File* f) {
	return $nc($($nc(f)->getPath()))->hashCode() ^ 0x0012D591;
}

void UnixFileSystem::initIDs() {
	$init(UnixFileSystem);
	$prepareNativeStatic(UnixFileSystem, initIDs, void);
	$invokeNativeStatic(UnixFileSystem, initIDs);
	$finishNativeStatic();
}

void clinit$UnixFileSystem($Class* class$) {
	{
		UnixFileSystem::initIDs();
	}
}

UnixFileSystem::UnixFileSystem() {
}

$Class* UnixFileSystem::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem, name, initialize, &_UnixFileSystem_ClassInfo_, clinit$UnixFileSystem, allocate$UnixFileSystem);
	return class$;
}

$Class* UnixFileSystem::class$ = nullptr;

	} // io
} // java