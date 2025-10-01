#include <java/io/WinNTFileSystem.h>

#include <java/io/ExpiringCache.h>
#include <java/io/File.h>
#include <java/io/FileSystem.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/util/BitSet.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ENGLISH

using $FileArray = $Array<::java::io::File>;
using $ExpiringCache = ::java::io::ExpiringCache;
using $File = ::java::io::File;
using $FileSystem = ::java::io::FileSystem;
using $Serializable = ::java::io::Serializable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Path = ::java::nio::file::Path;
using $BitSet = ::java::util::BitSet;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace io {

class WinNTFileSystem$$Lambda$lambda$listRoots$0 : public $IntFunction {
	$class(WinNTFileSystem$$Lambda$lambda$listRoots$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(WinNTFileSystem* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t i) override {
		 return $of($nc(inst$)->lambda$listRoots$0(i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WinNTFileSystem$$Lambda$lambda$listRoots$0>());
	}
	WinNTFileSystem* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WinNTFileSystem$$Lambda$lambda$listRoots$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WinNTFileSystem$$Lambda$lambda$listRoots$0, inst$)},
	{}
};
$MethodInfo WinNTFileSystem$$Lambda$lambda$listRoots$0::methodInfos[3] = {
	{"<init>", "(Ljava/io/WinNTFileSystem;)V", nullptr, $PUBLIC, $method(static_cast<void(WinNTFileSystem$$Lambda$lambda$listRoots$0::*)(WinNTFileSystem*)>(&WinNTFileSystem$$Lambda$lambda$listRoots$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WinNTFileSystem$$Lambda$lambda$listRoots$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.io.WinNTFileSystem$$Lambda$lambda$listRoots$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$0::load$($String* name, bool initialize) {
	$loadClass(WinNTFileSystem$$Lambda$lambda$listRoots$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$0::class$ = nullptr;

class WinNTFileSystem$$Lambda$lambda$listRoots$1$1 : public $Predicate {
	$class(WinNTFileSystem$$Lambda$lambda$listRoots$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(WinNTFileSystem* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* f) override {
		 return $nc(inst$)->lambda$listRoots$1($cast($File, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WinNTFileSystem$$Lambda$lambda$listRoots$1$1>());
	}
	WinNTFileSystem* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WinNTFileSystem$$Lambda$lambda$listRoots$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WinNTFileSystem$$Lambda$lambda$listRoots$1$1, inst$)},
	{}
};
$MethodInfo WinNTFileSystem$$Lambda$lambda$listRoots$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/WinNTFileSystem;)V", nullptr, $PUBLIC, $method(static_cast<void(WinNTFileSystem$$Lambda$lambda$listRoots$1$1::*)(WinNTFileSystem*)>(&WinNTFileSystem$$Lambda$lambda$listRoots$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo WinNTFileSystem$$Lambda$lambda$listRoots$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.io.WinNTFileSystem$$Lambda$lambda$listRoots$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$1$1::load$($String* name, bool initialize) {
	$loadClass(WinNTFileSystem$$Lambda$lambda$listRoots$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$1$1::class$ = nullptr;

class WinNTFileSystem$$Lambda$lambda$listRoots$2$2 : public $IntFunction {
	$class(WinNTFileSystem$$Lambda$lambda$listRoots$2$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(WinNTFileSystem::lambda$listRoots$2(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WinNTFileSystem$$Lambda$lambda$listRoots$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WinNTFileSystem$$Lambda$lambda$listRoots$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinNTFileSystem$$Lambda$lambda$listRoots$2$2::*)()>(&WinNTFileSystem$$Lambda$lambda$listRoots$2$2::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WinNTFileSystem$$Lambda$lambda$listRoots$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.io.WinNTFileSystem$$Lambda$lambda$listRoots$2$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$2$2::load$($String* name, bool initialize) {
	$loadClass(WinNTFileSystem$$Lambda$lambda$listRoots$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WinNTFileSystem$$Lambda$lambda$listRoots$2$2::class$ = nullptr;

$FieldInfo _WinNTFileSystem_FieldInfo_[] = {
	{"slash", "C", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, slash)},
	{"altSlash", "C", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, altSlash)},
	{"semicolon", "C", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, semicolon)},
	{"userDir", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, userDir)},
	{"driveDirCache", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WinNTFileSystem, driveDirCache)},
	{"cache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, cache)},
	{"prefixCache", "Ljava/io/ExpiringCache;", nullptr, $PRIVATE | $FINAL, $field(WinNTFileSystem, prefixCache)},
	{}
};

$MethodInfo _WinNTFileSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinNTFileSystem::*)()>(&WinNTFileSystem::init$))},
	{"access", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(WinNTFileSystem::*)($String*)>(&WinNTFileSystem::access))},
	{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canonicalize0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(WinNTFileSystem::*)($String*)>(&WinNTFileSystem::canonicalize0)), "java.io.IOException"},
	{"canonicalizeWithPrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)($String*,$String*)>(&WinNTFileSystem::canonicalizeWithPrefix)), "java.io.IOException"},
	{"canonicalizeWithPrefix0", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(WinNTFileSystem::*)($String*,$String*)>(&WinNTFileSystem::canonicalizeWithPrefix0)), "java.io.IOException"},
	{"checkAccess", "(Ljava/io/File;I)Z", nullptr, $PUBLIC | $NATIVE},
	{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC},
	{"createDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE},
	{"createFileExclusively", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $NATIVE, nullptr, "java.io.IOException"},
	{"delete", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"delete0", "(Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WinNTFileSystem::*)($File*)>(&WinNTFileSystem::delete0))},
	{"driveIndex", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&WinNTFileSystem::driveIndex))},
	{"fromURIPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBooleanAttributes", "(Ljava/io/File;)I", nullptr, $PUBLIC | $NATIVE},
	{"getDefaultParent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDrive", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)($String*)>(&WinNTFileSystem::getDrive))},
	{"getDriveDirectory", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(WinNTFileSystem::*)(int32_t)>(&WinNTFileSystem::getDriveDirectory))},
	{"getDriveDirectory", "(C)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)(char16_t)>(&WinNTFileSystem::getDriveDirectory))},
	{"getLastModifiedTime", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE},
	{"getLength", "(Ljava/io/File;)J", nullptr, $PUBLIC | $NATIVE},
	{"getNameMax", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getNameMax0", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WinNTFileSystem::*)($String*)>(&WinNTFileSystem::getNameMax0))},
	{"getPathSeparator", "()C", nullptr, $PUBLIC},
	{"getSeparator", "()C", nullptr, $PUBLIC},
	{"getSpace", "(Ljava/io/File;I)J", nullptr, $PUBLIC},
	{"getSpace0", "(Ljava/io/File;I)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(WinNTFileSystem::*)($File*,int32_t)>(&WinNTFileSystem::getSpace0))},
	{"getUserPath", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)()>(&WinNTFileSystem::getUserPath))},
	{"hashCode", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WinNTFileSystem::initIDs))},
	{"isAbsolute", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"isLetter", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(WinNTFileSystem::*)(char16_t)>(&WinNTFileSystem::isLetter))},
	{"isSlash", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(WinNTFileSystem::*)(char16_t)>(&WinNTFileSystem::isSlash))},
	{"lambda$listRoots$0", "(I)Ljava/io/File;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$File*(WinNTFileSystem::*)(int32_t)>(&WinNTFileSystem::lambda$listRoots$0))},
	{"lambda$listRoots$1", "(Ljava/io/File;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(WinNTFileSystem::*)($File*)>(&WinNTFileSystem::lambda$listRoots$1))},
	{"lambda$listRoots$2", "(I)[Ljava/io/File;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FileArray*(*)(int32_t)>(&WinNTFileSystem::lambda$listRoots$2))},
	{"list", "(Ljava/io/File;)[Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE},
	{"listRoots", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"listRoots0", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WinNTFileSystem::listRoots0))},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)($String*,int32_t,int32_t)>(&WinNTFileSystem::normalize))},
	{"normalizePrefix", "(Ljava/lang/String;ILjava/lang/StringBuilder;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WinNTFileSystem::*)($String*,int32_t,$StringBuilder*)>(&WinNTFileSystem::normalizePrefix))},
	{"parentOrNull", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&WinNTFileSystem::parentOrNull))},
	{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"rename", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"rename0", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WinNTFileSystem::*)($File*,$File*)>(&WinNTFileSystem::rename0))},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLastModifiedTime", "(Ljava/io/File;J)Z", nullptr, $PUBLIC | $NATIVE},
	{"setPermission", "(Ljava/io/File;IZZ)Z", nullptr, $PUBLIC | $NATIVE},
	{"setReadOnly", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $NATIVE},
	{"slashify", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WinNTFileSystem::*)($String*)>(&WinNTFileSystem::slashify))},
	{}
};

#define _METHOD_INDEX_canonicalize0 3
#define _METHOD_INDEX_canonicalizeWithPrefix0 5
#define _METHOD_INDEX_checkAccess 6
#define _METHOD_INDEX_createDirectory 8
#define _METHOD_INDEX_createFileExclusively 9
#define _METHOD_INDEX_delete0 11
#define _METHOD_INDEX_getBooleanAttributes 14
#define _METHOD_INDEX_getDriveDirectory 17
#define _METHOD_INDEX_getLastModifiedTime 19
#define _METHOD_INDEX_getLength 20
#define _METHOD_INDEX_getNameMax0 22
#define _METHOD_INDEX_getSpace0 26
#define _METHOD_INDEX_initIDs 29
#define _METHOD_INDEX_list 36
#define _METHOD_INDEX_listRoots0 38
#define _METHOD_INDEX_rename0 45
#define _METHOD_INDEX_setLastModifiedTime 48
#define _METHOD_INDEX_setPermission 49
#define _METHOD_INDEX_setReadOnly 50

$ClassInfo _WinNTFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.WinNTFileSystem",
	"java.io.FileSystem",
	nullptr,
	_WinNTFileSystem_FieldInfo_,
	_WinNTFileSystem_MethodInfo_
};

$Object* allocate$WinNTFileSystem($Class* clazz) {
	return $of($alloc(WinNTFileSystem));
}

$StringArray* WinNTFileSystem::driveDirCache = nullptr;

void WinNTFileSystem::init$() {
	$FileSystem::init$();
	$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
	this->slash = $nc($($nc(props)->getProperty("file.separator"_s)))->charAt(0);
	this->semicolon = $nc($(props->getProperty("path.separator"_s)))->charAt(0);
	this->altSlash = (this->slash == u'\\') ? u'/' : u'\\';
	$set(this, userDir, normalize($(props->getProperty("user.dir"_s))));
	$init($FileSystem);
	$set(this, cache, $FileSystem::useCanonCaches ? $new($ExpiringCache) : ($ExpiringCache*)nullptr);
	$set(this, prefixCache, $FileSystem::useCanonPrefixCache ? $new($ExpiringCache) : ($ExpiringCache*)nullptr);
}

bool WinNTFileSystem::isSlash(char16_t c) {
	return (c == u'\\') || (c == u'/');
}

bool WinNTFileSystem::isLetter(char16_t c) {
	return ((c >= u'a') && (c <= u'z')) || ((c >= u'A') && (c <= u'Z'));
}

$String* WinNTFileSystem::slashify($String* p) {
	bool var$0 = !$nc(p)->isEmpty();
	if (var$0 && p->charAt(0) != this->slash) {
		return $str({$$str(this->slash), p});
	} else {
		return p;
	}
}

char16_t WinNTFileSystem::getSeparator() {
	return this->slash;
}

char16_t WinNTFileSystem::getPathSeparator() {
	return this->semicolon;
}

$String* WinNTFileSystem::normalize($String* path) {
	int32_t n = $nc(path)->length();
	char16_t slash = this->slash;
	char16_t altSlash = this->altSlash;
	char16_t prev = (char16_t)0;
	for (int32_t i = 0; i < n; ++i) {
		char16_t c = path->charAt(i);
		if (c == altSlash) {
			return normalize(path, n, (prev == slash) ? i - 1 : i);
		}
		if ((c == slash) && (prev == slash) && (i > 1)) {
			return normalize(path, n, i - 1);
		}
		if ((c == u':') && (i > 1)) {
			return normalize(path, n, 0);
		}
		prev = c;
	}
	if (prev == slash) {
		return normalize(path, n, n - 1);
	}
	return path;
}

$String* WinNTFileSystem::normalize($String* path, int32_t len, int32_t off) {
	if (len == 0) {
		return path;
	}
	if (off < 3) {
		off = 0;
	}
	int32_t src = 0;
	char16_t slash = this->slash;
	$var($StringBuilder, sb, $new($StringBuilder, len));
	if (off == 0) {
		src = normalizePrefix(path, len, sb);
	} else {
		src = off;
		sb->append(static_cast<$CharSequence*>(path), 0, off);
	}
	while (src < len) {
		char16_t c = $nc(path)->charAt(src++);
		if (isSlash(c)) {
			while ((src < len) && isSlash(path->charAt(src))) {
				++src;
			}
			if (src == len) {
				int32_t sn = sb->length();
				if ((sn == 2) && (sb->charAt(1) == u':')) {
					sb->append(slash);
					break;
				}
				if (sn == 0) {
					sb->append(slash);
					break;
				}
				if ((sn == 1) && (isSlash(sb->charAt(0)))) {
					sb->append(slash);
					break;
				}
				break;
			} else {
				sb->append(slash);
			}
		} else {
			sb->append(c);
		}
	}
	return sb->toString();
}

int32_t WinNTFileSystem::normalizePrefix($String* path, int32_t len, $StringBuilder* sb) {
	int32_t src = 0;
	while ((src < len) && isSlash($nc(path)->charAt(src))) {
		++src;
	}
	char16_t c = 0;
	bool var$0 = (len - src >= 2) && isLetter(c = $nc(path)->charAt(src));
	if (var$0 && $nc(path)->charAt(src + 1) == u':') {
		$nc(sb)->append(c);
		sb->append(u':');
		src += 2;
	} else {
		src = 0;
		bool var$1 = (len >= 2) && isSlash(path->charAt(0));
		if (var$1 && isSlash(path->charAt(1))) {
			src = 1;
			$nc(sb)->append(this->slash);
		}
	}
	return src;
}

int32_t WinNTFileSystem::prefixLength($String* path) {
	char16_t slash = this->slash;
	int32_t n = $nc(path)->length();
	if (n == 0) {
		return 0;
	}
	char16_t c0 = path->charAt(0);
	char16_t c1 = (n > 1) ? path->charAt(1) : (char16_t)0;
	if (c0 == slash) {
		if (c1 == slash) {
			return 2;
		}
		return 1;
	}
	if (isLetter(c0) && (c1 == u':')) {
		if ((n > 2) && (path->charAt(2) == slash)) {
			return 3;
		}
		return 2;
	}
	return 0;
}

$String* WinNTFileSystem::resolve($String* parent, $String* child) {
	int32_t pn = $nc(parent)->length();
	if (pn == 0) {
		return child;
	}
	int32_t cn = $nc(child)->length();
	if (cn == 0) {
		return parent;
	}
	$var($String, c, child);
	int32_t childStart = 0;
	int32_t parentEnd = pn;
	bool var$0 = pn == 2 && isLetter(parent->charAt(0));
	bool isDirectoryRelative = var$0 && parent->charAt(1) == u':';
	if ((cn > 1) && (c->charAt(0) == this->slash)) {
		if (c->charAt(1) == this->slash) {
			childStart = 2;
		} else if (!isDirectoryRelative) {
			childStart = 1;
		}
		if (cn == childStart) {
			if (parent->charAt(pn - 1) == this->slash) {
				return parent->substring(0, pn - 1);
			}
			return parent;
		}
	}
	if (parent->charAt(pn - 1) == this->slash) {
		--parentEnd;
	}
	int32_t strlen = parentEnd + cn - childStart;
	$var($chars, theChars, nullptr);
	if (child->charAt(childStart) == this->slash || isDirectoryRelative) {
		$assign(theChars, $new($chars, strlen));
		parent->getChars(0, parentEnd, theChars, 0);
		child->getChars(childStart, cn, theChars, parentEnd);
	} else {
		$assign(theChars, $new($chars, strlen + 1));
		parent->getChars(0, parentEnd, theChars, 0);
		theChars->set(parentEnd, this->slash);
		child->getChars(childStart, cn, theChars, parentEnd + 1);
	}
	return $new($String, theChars);
}

$String* WinNTFileSystem::getDefaultParent() {
	return ($str({""_s, $$str(this->slash)}));
}

$String* WinNTFileSystem::fromURIPath($String* path) {
	$var($String, p, path);
	bool var$0 = ($nc(p)->length() > 2);
	if (var$0 && (p->charAt(2) == u':')) {
		$assign(p, p->substring(1));
		bool var$1 = (p->length() > 3);
		if (var$1 && p->endsWith("/"_s)) {
			$assign(p, p->substring(0, p->length() - 1));
		}
	} else {
		bool var$3 = (p->length() > 1);
		if (var$3 && p->endsWith("/"_s)) {
			$assign(p, p->substring(0, p->length() - 1));
		}
	}
	return p;
}

bool WinNTFileSystem::isAbsolute($File* f) {
	int32_t pl = $nc(f)->getPrefixLength();
	return (((pl == 2) && ($nc($(f->getPath()))->charAt(0) == this->slash)) || (pl == 3));
}

$String* WinNTFileSystem::resolve($File* f) {
	$var($String, path, $nc(f)->getPath());
	int32_t pl = f->getPrefixLength();
	if ((pl == 2) && ($nc(path)->charAt(0) == this->slash)) {
		return path;
	}
	if (pl == 3) {
		return path;
	}
	if (pl == 0) {
		$var($String, var$0, $(getUserPath()));
		return $concat(var$0, $(slashify(path)));
	}
	if (pl == 1) {
		$var($String, up, getUserPath());
		$var($String, ud, getDrive(up));
		if (ud != nullptr) {
			return $str({ud, path});
		}
		return $str({up, path});
	}
	if (pl == 2) {
		$var($String, up, getUserPath());
		$var($String, ud, getDrive(up));
		if ((ud != nullptr) && $nc(path)->startsWith(ud)) {
			return $str({up, $(slashify($(path->substring(2))))});
		}
		char16_t drive = $nc(path)->charAt(0);
		$var($String, dir, getDriveDirectory(drive));
		if (dir != nullptr) {
			$var($String, p, $str({$$str(drive), ($$str({$$str(u':'), dir, $(slashify($(path->substring(2))))}))}));
			$var($SecurityManager, security, $System::getSecurityManager());
			try {
				if (security != nullptr) {
					security->checkRead(p);
				}
			} catch ($SecurityException&) {
				$var($SecurityException, x, $catch());
				$throwNew($SecurityException, $$str({"Cannot resolve path "_s, path}));
			}
			return p;
		}
		return $str({$$str(drive), ":"_s, $(slashify($(path->substring(2))))});
	}
	$throwNew($InternalError, $$str({"Unresolvable path: "_s, path}));
}

$String* WinNTFileSystem::getUserPath() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertyAccess("user.dir"_s);
	}
	return normalize(this->userDir);
}

$String* WinNTFileSystem::getDrive($String* path) {
	int32_t pl = prefixLength(path);
	return (pl == 3) ? $nc(path)->substring(0, 2) : ($String*)nullptr;
}

int32_t WinNTFileSystem::driveIndex(char16_t d) {
	$init(WinNTFileSystem);
	if ((d >= u'a') && (d <= u'z')) {
		return d - u'a';
	}
	if ((d >= u'A') && (d <= u'Z')) {
		return d - u'A';
	}
	return -1;
}

$String* WinNTFileSystem::getDriveDirectory(int32_t drive) {
	$var($String, $ret, nullptr);
	$prepareNative(WinNTFileSystem, getDriveDirectory, $String*, int32_t drive);
	$assign($ret, $invokeNative(WinNTFileSystem, getDriveDirectory, drive));
	$finishNative();
	return $ret;
}

$String* WinNTFileSystem::getDriveDirectory(char16_t drive) {
	int32_t i = driveIndex(drive);
	if (i < 0) {
		return nullptr;
	}
	$var($String, s, $nc(WinNTFileSystem::driveDirCache)->get(i));
	if (s != nullptr) {
		return s;
	}
	$assign(s, getDriveDirectory(i + 1));
	$nc(WinNTFileSystem::driveDirCache)->set(i, s);
	return s;
}

$String* WinNTFileSystem::canonicalize($String* path) {
	int32_t len = $nc(path)->length();
	bool var$0 = (len == 2) && (isLetter(path->charAt(0)));
	if (var$0 && (path->charAt(1) == u':')) {
		char16_t c = path->charAt(0);
		if ((c >= u'A') && (c <= u'Z')) {
			return path;
		}
		return $str({""_s, $$str(((char16_t)(c - 32))), $$str(u':')});
	} else {
		bool var$4 = (len == 3) && (isLetter(path->charAt(0)));
		bool var$3 = var$4 && (path->charAt(1) == u':');
		if (var$3 && (path->charAt(2) == u'\\')) {
			char16_t c = path->charAt(0);
			if ((c >= u'A') && (c <= u'Z')) {
				return path;
			}
			return $str({""_s, $$str(((char16_t)(c - 32))), $$str(u':'), $$str(u'\\')});
		}
	}
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
					$assign(resDir, $nc(this->prefixCache)->get(dir));
					if (resDir != nullptr) {
						$var($String, filename, path->substring(1 + dir->length()));
						$assign(res, canonicalizeWithPrefix(resDir, filename));
						$init($File);
						$nc(this->cache)->put($$str({dir, $$str($File::separatorChar), filename}), res);
					}
				}
			}
			if (res == nullptr) {
				$assign(res, canonicalize0(path));
				$nc(this->cache)->put(path, res);
				if ($FileSystem::useCanonPrefixCache && dir != nullptr) {
					$assign(resDir, parentOrNull(res));
					if (resDir != nullptr) {
						$var($File, f, $new($File, res));
						bool var$5 = f->exists();
						if (var$5 && !f->isDirectory()) {
							$nc(this->prefixCache)->put(dir, resDir);
						}
					}
				}
			}
		}
		return res;
	}
}

$String* WinNTFileSystem::canonicalize0($String* path) {
	$var($String, $ret, nullptr);
	$prepareNative(WinNTFileSystem, canonicalize0, $String*, $String* path);
	$assign($ret, $invokeNative(WinNTFileSystem, canonicalize0, path));
	$finishNative();
	return $ret;
}

$String* WinNTFileSystem::canonicalizeWithPrefix($String* canonicalPrefix, $String* filename) {
	$init($File);
	return canonicalizeWithPrefix0(canonicalPrefix, $$str({canonicalPrefix, $$str($File::separatorChar), filename}));
}

$String* WinNTFileSystem::canonicalizeWithPrefix0($String* canonicalPrefix, $String* pathWithCanonicalPrefix) {
	$var($String, $ret, nullptr);
	$prepareNative(WinNTFileSystem, canonicalizeWithPrefix0, $String*, $String* canonicalPrefix, $String* pathWithCanonicalPrefix);
	$assign($ret, $invokeNative(WinNTFileSystem, canonicalizeWithPrefix0, canonicalPrefix, pathWithCanonicalPrefix));
	$finishNative();
	return $ret;
}

$String* WinNTFileSystem::parentOrNull($String* path) {
	$init(WinNTFileSystem);
	if (path == nullptr) {
		return nullptr;
	}
	$init($File);
	char16_t sep = $File::separatorChar;
	char16_t altSep = u'/';
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
			if (nonDotCount == 0) {
				return nullptr;
			}
		} else if (c == sep) {
			if (adjacentDots == 1 && nonDotCount == 0) {
				return nullptr;
			}
			bool var$0 = idx == 0 || idx >= last - 1 || $nc(path)->charAt(idx - 1) == sep;
			if (var$0 || $nc(path)->charAt(idx - 1) == altSep) {
				return nullptr;
			}
			return $nc(path)->substring(0, idx);
		} else if (c == altSep) {
			return nullptr;
		} else if (c == u'*' || c == u'?') {
			return nullptr;
		} else {
			++nonDotCount;
			adjacentDots = 0;
		}
		--idx;
	}
	return nullptr;
}

int32_t WinNTFileSystem::getBooleanAttributes($File* f) {
	int32_t $ret = 0;
	$prepareNative(WinNTFileSystem, getBooleanAttributes, int32_t, $File* f);
	$ret = $invokeNative(WinNTFileSystem, getBooleanAttributes, f);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::checkAccess($File* f, int32_t access) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, checkAccess, bool, $File* f, int32_t access);
	$ret = $invokeNative(WinNTFileSystem, checkAccess, f, access);
	$finishNative();
	return $ret;
}

int64_t WinNTFileSystem::getLastModifiedTime($File* f) {
	int64_t $ret = 0;
	$prepareNative(WinNTFileSystem, getLastModifiedTime, int64_t, $File* f);
	$ret = $invokeNative(WinNTFileSystem, getLastModifiedTime, f);
	$finishNative();
	return $ret;
}

int64_t WinNTFileSystem::getLength($File* f) {
	int64_t $ret = 0;
	$prepareNative(WinNTFileSystem, getLength, int64_t, $File* f);
	$ret = $invokeNative(WinNTFileSystem, getLength, f);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::setPermission($File* f, int32_t access, bool enable, bool owneronly) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, setPermission, bool, $File* f, int32_t access, bool enable, bool owneronly);
	$ret = $invokeNative(WinNTFileSystem, setPermission, f, access, enable, owneronly);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::createFileExclusively($String* path) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, createFileExclusively, bool, $String* path);
	$ret = $invokeNative(WinNTFileSystem, createFileExclusively, path);
	$finishNative();
	return $ret;
}

$StringArray* WinNTFileSystem::list($File* f) {
	$var($StringArray, $ret, nullptr);
	$prepareNative(WinNTFileSystem, list, $StringArray*, $File* f);
	$assign($ret, $invokeNative(WinNTFileSystem, list, f));
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::createDirectory($File* f) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, createDirectory, bool, $File* f);
	$ret = $invokeNative(WinNTFileSystem, createDirectory, f);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::setLastModifiedTime($File* f, int64_t time) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, setLastModifiedTime, bool, $File* f, int64_t time);
	$ret = $invokeNative(WinNTFileSystem, setLastModifiedTime, f, time);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::setReadOnly($File* f) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, setReadOnly, bool, $File* f);
	$ret = $invokeNative(WinNTFileSystem, setReadOnly, f);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::delete$($File* f) {
	$init($FileSystem);
	if ($FileSystem::useCanonCaches) {
		$nc(this->cache)->clear();
	}
	if ($FileSystem::useCanonPrefixCache) {
		$nc(this->prefixCache)->clear();
	}
	return delete0(f);
}

bool WinNTFileSystem::delete0($File* f) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, delete0, bool, $File* f);
	$ret = $invokeNative(WinNTFileSystem, delete0, f);
	$finishNative();
	return $ret;
}

bool WinNTFileSystem::rename($File* f1, $File* f2) {
	$init($FileSystem);
	if ($FileSystem::useCanonCaches) {
		$nc(this->cache)->clear();
	}
	if ($FileSystem::useCanonPrefixCache) {
		$nc(this->prefixCache)->clear();
	}
	return rename0(f1, f2);
}

bool WinNTFileSystem::rename0($File* f1, $File* f2) {
	bool $ret = false;
	$prepareNative(WinNTFileSystem, rename0, bool, $File* f1, $File* f2);
	$ret = $invokeNative(WinNTFileSystem, rename0, f1, f2);
	$finishNative();
	return $ret;
}

$FileArray* WinNTFileSystem::listRoots() {
	return $fcast($FileArray, $nc($($nc($($nc($($nc($($BitSet::valueOf($$new($longs, {(int64_t)listRoots0()}))))->stream()))->mapToObj(static_cast<$IntFunction*>($$new(WinNTFileSystem$$Lambda$lambda$listRoots$0, this)))))->filter(static_cast<$Predicate*>($$new(WinNTFileSystem$$Lambda$lambda$listRoots$1$1, this)))))->toArray(static_cast<$IntFunction*>($$new(WinNTFileSystem$$Lambda$lambda$listRoots$2$2))));
}

int32_t WinNTFileSystem::listRoots0() {
	$init(WinNTFileSystem);
	int32_t $ret = 0;
	$prepareNativeStatic(WinNTFileSystem, listRoots0, int32_t);
	$ret = $invokeNativeStatic(WinNTFileSystem, listRoots0);
	$finishNativeStatic();
	return $ret;
}

bool WinNTFileSystem::access($String* path) {
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkRead(path);
		}
		return true;
	} catch ($SecurityException&) {
		$var($SecurityException, x, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int64_t WinNTFileSystem::getSpace($File* f, int32_t t) {
	if ($nc(f)->exists()) {
		return getSpace0(f, t);
	}
	return 0;
}

int64_t WinNTFileSystem::getSpace0($File* f, int32_t t) {
	int64_t $ret = 0;
	$prepareNative(WinNTFileSystem, getSpace0, int64_t, $File* f, int32_t t);
	$ret = $invokeNative(WinNTFileSystem, getSpace0, f, t);
	$finishNative();
	return $ret;
}

int32_t WinNTFileSystem::getNameMax0($String* path) {
	int32_t $ret = 0;
	$prepareNative(WinNTFileSystem, getNameMax0, int32_t, $String* path);
	$ret = $invokeNative(WinNTFileSystem, getNameMax0, path);
	$finishNative();
	return $ret;
}

int32_t WinNTFileSystem::getNameMax($String* path) {
	$var($String, s, nullptr);
	if (path != nullptr) {
		$var($File, f, $new($File, path));
		if (f->isAbsolute()) {
			$var($Path, root, $nc($(f->toPath()))->getRoot());
			if (root != nullptr) {
				$assign(s, root->toString());
				if (!$nc(s)->endsWith("\\"_s)) {
					$assign(s, $str({s, "\\"_s}));
				}
			}
		}
	}
	return getNameMax0(s);
}

int32_t WinNTFileSystem::compare($File* f1, $File* f2) {
	return $nc($($nc(f1)->getPath()))->compareToIgnoreCase($($nc(f2)->getPath()));
}

int32_t WinNTFileSystem::hashCode($File* f) {
	$init($Locale);
	return $($nc($($nc(f)->getPath()))->toLowerCase($Locale::ENGLISH))->hashCode() ^ 0x0012D591;
}

void WinNTFileSystem::initIDs() {
	$init(WinNTFileSystem);
	$prepareNativeStatic(WinNTFileSystem, initIDs, void);
	$invokeNativeStatic(WinNTFileSystem, initIDs);
	$finishNativeStatic();
}

$FileArray* WinNTFileSystem::lambda$listRoots$2(int32_t x$0) {
	$init(WinNTFileSystem);
	return $new($FileArray, x$0);
}

bool WinNTFileSystem::lambda$listRoots$1($File* f) {
	bool var$0 = access($($nc(f)->getPath()));
	return var$0 && $nc(f)->exists();
}

$File* WinNTFileSystem::lambda$listRoots$0(int32_t i) {
	return $new($File, $$str({$$str((char16_t)(u'A' + i)), ":"_s, $$str(this->slash)}));
}

void clinit$WinNTFileSystem($Class* class$) {
	$assignStatic(WinNTFileSystem::driveDirCache, $new($StringArray, 26));
	{
		WinNTFileSystem::initIDs();
	}
}

WinNTFileSystem::WinNTFileSystem() {
}

$Class* WinNTFileSystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WinNTFileSystem$$Lambda$lambda$listRoots$0::classInfo$.name)) {
			return WinNTFileSystem$$Lambda$lambda$listRoots$0::load$(name, initialize);
		}
		if (name->equals(WinNTFileSystem$$Lambda$lambda$listRoots$1$1::classInfo$.name)) {
			return WinNTFileSystem$$Lambda$lambda$listRoots$1$1::load$(name, initialize);
		}
		if (name->equals(WinNTFileSystem$$Lambda$lambda$listRoots$2$2::classInfo$.name)) {
			return WinNTFileSystem$$Lambda$lambda$listRoots$2$2::load$(name, initialize);
		}
	}
	$loadClass(WinNTFileSystem, name, initialize, &_WinNTFileSystem_ClassInfo_, clinit$WinNTFileSystem, allocate$WinNTFileSystem);
	return class$;
}

$Class* WinNTFileSystem::class$ = nullptr;

	} // io
} // java