#include <java/nio/file/TempFileHelper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/TempFileHelper$PosixPermissions.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/security/SecureRandom.h>
#include <java/util/Set.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $TempFileHelper$PosixPermissions = ::java::nio::file::TempFileHelper$PosixPermissions;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $SecureRandom = ::java::security::SecureRandom;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _TempFileHelper_FieldInfo_[] = {
	{"tmpdir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TempFileHelper, tmpdir)},
	{"isPosix", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TempFileHelper, isPosix)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TempFileHelper, random)},
	{}
};

$MethodInfo _TempFileHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TempFileHelper::*)()>(&TempFileHelper::init$))},
	{"create", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;Z[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;Z[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PRIVATE | $STATIC, $method(static_cast<$Path*(*)($Path*,$String*,$String*,bool,$FileAttributeArray*)>(&TempFileHelper::create)), "java.io.IOException"},
	{"createTempDirectory", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $STATIC, $method(static_cast<$Path*(*)($Path*,$String*,$FileAttributeArray*)>(&TempFileHelper::createTempDirectory)), "java.io.IOException"},
	{"createTempFile", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $STATIC, $method(static_cast<$Path*(*)($Path*,$String*,$String*,$FileAttributeArray*)>(&TempFileHelper::createTempFile)), "java.io.IOException"},
	{"generatePath", "(Ljava/lang/String;Ljava/lang/String;Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Path*(*)($String*,$String*,$Path*)>(&TempFileHelper::generatePath))},
	{}
};

$InnerClassInfo _TempFileHelper_InnerClassesInfo_[] = {
	{"java.nio.file.TempFileHelper$PosixPermissions", "java.nio.file.TempFileHelper", "PosixPermissions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TempFileHelper_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.TempFileHelper",
	"java.lang.Object",
	nullptr,
	_TempFileHelper_FieldInfo_,
	_TempFileHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TempFileHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.TempFileHelper$PosixPermissions"
};

$Object* allocate$TempFileHelper($Class* clazz) {
	return $of($alloc(TempFileHelper));
}

$Path* TempFileHelper::tmpdir = nullptr;
bool TempFileHelper::isPosix = false;
$SecureRandom* TempFileHelper::random = nullptr;

void TempFileHelper::init$() {
}

$Path* TempFileHelper::generatePath($String* prefix, $String* suffix, $Path* dir) {
	$init(TempFileHelper);
	int64_t n = $nc(TempFileHelper::random)->nextLong();
	$var($String, s, $str({prefix, $($Long::toUnsignedString(n)), suffix}));
	$var($Path, name, $nc($($nc(dir)->getFileSystem()))->getPath(s, $$new($StringArray, 0)));
	if ($nc(name)->getParent() != nullptr) {
		$throwNew($IllegalArgumentException, "Invalid prefix or suffix"_s);
	}
	return dir->resolve(name);
}

$Path* TempFileHelper::create($Path* dir$renamed, $String* prefix$renamed, $String* suffix$renamed, bool createDirectory, $FileAttributeArray* attrs$renamed) {
	$init(TempFileHelper);
	$var($String, prefix, prefix$renamed);
	$var($Path, dir, dir$renamed);
	$var($String, suffix, suffix$renamed);
	$var($FileAttributeArray, attrs, attrs$renamed);
	if (prefix == nullptr) {
		$assign(prefix, ""_s);
	}
	if (suffix == nullptr) {
		$assign(suffix, (createDirectory) ? ""_s : ".tmp"_s);
	}
	if (dir == nullptr) {
		$assign(dir, TempFileHelper::tmpdir);
	}
	bool var$0 = TempFileHelper::isPosix;
	if (var$0) {
		var$0 = ($nc(dir)->getFileSystem() == $FileSystems::getDefault());
	}
	if (var$0) {
		if ($nc(attrs)->length == 0) {
			$assign(attrs, $new($FileAttributeArray, 1));
			$init($TempFileHelper$PosixPermissions);
			attrs->set(0, (createDirectory) ? $TempFileHelper$PosixPermissions::dirPermissions : $TempFileHelper$PosixPermissions::filePermissions);
		} else {
			bool hasPermissions = false;
			for (int32_t i = 0; i < attrs->length; ++i) {
				if ($nc($($nc(attrs->get(i))->name()))->equals("posix:permissions"_s)) {
					hasPermissions = true;
					break;
				}
			}
			if (!hasPermissions) {
				$var($FileAttributeArray, copy, $new($FileAttributeArray, attrs->length + 1));
				$System::arraycopy(attrs, 0, copy, 0, attrs->length);
				$assign(attrs, copy);
				$init($TempFileHelper$PosixPermissions);
				attrs->set(attrs->length - 1, (createDirectory) ? $TempFileHelper$PosixPermissions::dirPermissions : $TempFileHelper$PosixPermissions::filePermissions);
			}
		}
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	for (;;) {
		$var($Path, f, nullptr);
		try {
			$assign(f, generatePath(prefix, suffix, dir));
		} catch ($InvalidPathException&) {
			$var($InvalidPathException, e, $catch());
			if (sm != nullptr) {
				$throwNew($IllegalArgumentException, "Invalid prefix or suffix"_s);
			}
			$throw(e);
		}
		try {
			if (createDirectory) {
				return $Files::createDirectory(f, attrs);
			} else {
				return $Files::createFile(f, attrs);
			}
		} catch ($SecurityException&) {
			$var($SecurityException, e, $catch());
			if (dir == TempFileHelper::tmpdir && sm != nullptr) {
				$throwNew($SecurityException, "Unable to create temporary file or directory"_s);
			}
			$throw(e);
		} catch ($FileAlreadyExistsException&) {
			$catch();
		}
	}
	$shouldNotReachHere();
}

$Path* TempFileHelper::createTempFile($Path* dir, $String* prefix, $String* suffix, $FileAttributeArray* attrs) {
	$init(TempFileHelper);
	return create(dir, prefix, suffix, false, attrs);
}

$Path* TempFileHelper::createTempDirectory($Path* dir, $String* prefix, $FileAttributeArray* attrs) {
	$init(TempFileHelper);
	return create(dir, prefix, nullptr, true, attrs);
}

void clinit$TempFileHelper($Class* class$) {
	$assignStatic(TempFileHelper::tmpdir, $Path::of($($StaticProperty::javaIoTmpDir()), $$new($StringArray, 0)));
	TempFileHelper::isPosix = $nc($($nc($($FileSystems::getDefault()))->supportedFileAttributeViews()))->contains("posix"_s);
	$assignStatic(TempFileHelper::random, $new($SecureRandom));
}

TempFileHelper::TempFileHelper() {
}

$Class* TempFileHelper::load$($String* name, bool initialize) {
	$loadClass(TempFileHelper, name, initialize, &_TempFileHelper_ClassInfo_, clinit$TempFileHelper, allocate$TempFileHelper);
	return class$;
}

$Class* TempFileHelper::class$ = nullptr;

		} // file
	} // nio
} // java