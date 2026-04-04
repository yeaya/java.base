#include <java/io/UnixFileSystem.h>
#include <java/io/ExpiringCache.h>
#include <java/io/File.h>
#include <java/io/FileSystem.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
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

void UnixFileSystem::init$() {
	$useLocalObjectStack();
	$FileSystem::init$();
	$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
	this->slash = $$nc($nc(props)->getProperty("file.separator"_s))->charAt(0);
	this->colon = $$nc(props->getProperty("path.separator"_s))->charAt(0);
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
		sb->append(pathname, 0, off);
	}
	char16_t prevChar = 0;
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
	if (child->charAt(0) == u'/') {
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
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
						this->cache->put($$str({dir, $$str(this->slash), filename}), res);
					}
				}
			}
			if (res == nullptr) {
				$assign(res, canonicalize0(path));
				this->cache->put(path, res);
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
	$prepareNative(canonicalize0, $String*, $String* path);
	$var($String, $ret, $invokeNativeObject(path));
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
	$prepareNative(getBooleanAttributes0, int32_t, $File* f);
	int32_t $ret = $invokeNative(f);
	$finishNative();
	return $ret;
}

int32_t UnixFileSystem::getBooleanAttributes($File* f) {
	int32_t rv = getBooleanAttributes0(f);
	return rv | isHidden(f);
}

bool UnixFileSystem::hasBooleanAttributes($File* f, int32_t attributes) {
	int32_t rv = getBooleanAttributes0(f);
	if ((attributes & $FileSystem::BA_HIDDEN) != 0) {
		rv |= isHidden(f);
	}
	return (rv & attributes) == attributes;
}

int32_t UnixFileSystem::isHidden($File* f) {
	$init(UnixFileSystem);
	return $$nc($nc(f)->getName())->startsWith("."_s) ? $FileSystem::BA_HIDDEN : 0;
}

bool UnixFileSystem::checkAccess($File* f, int32_t access) {
	$prepareNative(checkAccess, bool, $File* f, int32_t access);
	bool $ret = $invokeNative(f, access);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getLastModifiedTime($File* f) {
	$prepareNative(getLastModifiedTime, int64_t, $File* f);
	int64_t $ret = $invokeNative(f);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getLength($File* f) {
	$prepareNative(getLength, int64_t, $File* f);
	int64_t $ret = $invokeNative(f);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setPermission($File* f, int32_t access, bool enable, bool owneronly) {
	$prepareNative(setPermission, bool, $File* f, int32_t access, bool enable, bool owneronly);
	bool $ret = $invokeNative(f, access, enable, owneronly);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::createFileExclusively($String* path) {
	$prepareNative(createFileExclusively, bool, $String* path);
	bool $ret = $invokeNative(path);
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
	$prepareNative(delete0, bool, $File* f);
	bool $ret = $invokeNative(f);
	$finishNative();
	return $ret;
}

$StringArray* UnixFileSystem::list($File* f) {
	$prepareNative(list, $StringArray*, $File* f);
	$var($StringArray, $ret, $invokeNativeObject(f));
	$finishNative();
	return $ret;
}

bool UnixFileSystem::createDirectory($File* f) {
	$prepareNative(createDirectory, bool, $File* f);
	bool $ret = $invokeNative(f);
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
	$prepareNative(rename0, bool, $File* f1, $File* f2);
	bool $ret = $invokeNative(f1, f2);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setLastModifiedTime($File* f, int64_t time) {
	$prepareNative(setLastModifiedTime, bool, $File* f, int64_t time);
	bool $ret = $invokeNative(f, time);
	$finishNative();
	return $ret;
}

bool UnixFileSystem::setReadOnly($File* f) {
	$prepareNative(setReadOnly, bool, $File* f);
	bool $ret = $invokeNative(f);
	$finishNative();
	return $ret;
}

$FileArray* UnixFileSystem::listRoots() {
	$useLocalObjectStack();
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkRead("/"_s);
		}
		return $new($FileArray, {$$new($File, "/"_s)});
	} catch ($SecurityException& x) {
		return $new($FileArray, 0);
	}
	$shouldNotReachHere();
}

int64_t UnixFileSystem::getSpace($File* f, int32_t t) {
	$prepareNative(getSpace, int64_t, $File* f, int32_t t);
	int64_t $ret = $invokeNative(f, t);
	$finishNative();
	return $ret;
}

int64_t UnixFileSystem::getNameMax0($String* path) {
	$prepareNative(getNameMax0, int64_t, $String* path);
	int64_t $ret = $invokeNative(path);
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
	$useLocalObjectStack();
	return $$nc($nc(f1)->getPath())->compareTo($($nc(f2)->getPath()));
}

int32_t UnixFileSystem::hashCode($File* f) {
	return $$nc($nc(f)->getPath())->hashCode() ^ 0x0012d591;
}

void UnixFileSystem::initIDs() {
	$init(UnixFileSystem);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void UnixFileSystem::clinit$($Class* clazz) {
	{
		UnixFileSystem::initIDs();
	}
}

UnixFileSystem::UnixFileSystem() {
}

$Class* UnixFileSystem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"slash", "C", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, slash)},
		{"colon", "C", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, colon)},
		{"javaHome", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, javaHome)},
		{"userDir", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, userDir)},
		{"cache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, cache)},
		{"javaHomePrefixCache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(UnixFileSystem, javaHomePrefixCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnixFileSystem, init$, void)},
		{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, canonicalize, $String*, $String*), "java.io.IOException"},
		{"canonicalize0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(UnixFileSystem, canonicalize0, $String*, $String*), "java.io.IOException"},
		{"checkAccess", "(Ljava/io/File;I)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, checkAccess, bool, $File*, int32_t)},
		{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, compare, int32_t, $File*, $File*)},
		{"createDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, createDirectory, bool, $File*)},
		{"createFileExclusively", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, createFileExclusively, bool, $String*), "java.io.IOException"},
		{"delete", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, delete$, bool, $File*)},
		{"delete0", "(Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(UnixFileSystem, delete0, bool, $File*)},
		{"fromURIPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, fromURIPath, $String*, $String*)},
		{"getBooleanAttributes", "(Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, getBooleanAttributes, int32_t, $File*)},
		{"getBooleanAttributes0", "(Ljava/io/File;)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, getBooleanAttributes0, int32_t, $File*)},
		{"getDefaultParent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, getDefaultParent, $String*)},
		{"getLastModifiedTime", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, getLastModifiedTime, int64_t, $File*)},
		{"getLength", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, getLength, int64_t, $File*)},
		{"getNameMax", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, getNameMax, int32_t, $String*)},
		{"getNameMax0", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $NATIVE, $method(UnixFileSystem, getNameMax0, int64_t, $String*)},
		{"getPathSeparator", "()C", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, getPathSeparator, char16_t)},
		{"getSeparator", "()C", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, getSeparator, char16_t)},
		{"getSpace", "(Ljava/io/File;I)J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, getSpace, int64_t, $File*, int32_t)},
		{"hasBooleanAttributes", "(Ljava/io/File;I)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, hasBooleanAttributes, bool, $File*, int32_t)},
		{"hashCode", "(Ljava/io/File;)I", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, hashCode, int32_t, $File*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixFileSystem, initIDs, void)},
		{"isAbsolute", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, isAbsolute, bool, $File*)},
		{"isHidden", "(Ljava/io/File;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(UnixFileSystem, isHidden, int32_t, $File*)},
		{"list", "(Ljava/io/File;)[Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, list, $StringArray*, $File*)},
		{"listRoots", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, listRoots, $FileArray*)},
		{"normalize", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(UnixFileSystem, normalize, $String*, $String*, int32_t)},
		{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, normalize, $String*, $String*)},
		{"parentOrNull", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(UnixFileSystem, parentOrNull, $String*, $String*)},
		{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, prefixLength, int32_t, $String*)},
		{"rename", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, rename, bool, $File*, $File*)},
		{"rename0", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(UnixFileSystem, rename0, bool, $File*, $File*)},
		{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, resolve, $String*, $String*, $String*)},
		{"resolve", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem, resolve, $String*, $File*)},
		{"setLastModifiedTime", "(Ljava/io/File;J)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, setLastModifiedTime, bool, $File*, int64_t)},
		{"setPermission", "(Ljava/io/File;IZZ)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, setPermission, bool, $File*, int32_t, bool, bool)},
		{"setReadOnly", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(UnixFileSystem, setReadOnly, bool, $File*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.UnixFileSystem",
		"java.io.FileSystem",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnixFileSystem, name, initialize, &classInfo$$, UnixFileSystem::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem);
	});
	return class$;
}

$Class* UnixFileSystem::class$ = nullptr;

	} // io
} // java