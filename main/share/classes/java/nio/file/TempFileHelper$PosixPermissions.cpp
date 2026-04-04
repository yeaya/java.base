#include <java/nio/file/TempFileHelper$PosixPermissions.h>
#include <java/nio/file/TempFileHelper.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/nio/file/attribute/PosixFilePermissions.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OWNER_EXECUTE
#undef OWNER_READ
#undef OWNER_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $PosixFilePermissions = ::java::nio::file::attribute::PosixFilePermissions;
using $EnumSet = ::java::util::EnumSet;

namespace java {
	namespace nio {
		namespace file {

$FileAttribute* TempFileHelper$PosixPermissions::filePermissions = nullptr;
$FileAttribute* TempFileHelper$PosixPermissions::dirPermissions = nullptr;

void TempFileHelper$PosixPermissions::init$() {
}

void TempFileHelper$PosixPermissions::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($PosixFilePermission);
	$assignStatic(TempFileHelper$PosixPermissions::filePermissions, $PosixFilePermissions::asFileAttribute($($EnumSet::of($PosixFilePermission::OWNER_READ, $PosixFilePermission::OWNER_WRITE))));
	$assignStatic(TempFileHelper$PosixPermissions::dirPermissions, $PosixFilePermissions::asFileAttribute($($EnumSet::of($PosixFilePermission::OWNER_READ, $PosixFilePermission::OWNER_WRITE, $PosixFilePermission::OWNER_EXECUTE))));
}

TempFileHelper$PosixPermissions::TempFileHelper$PosixPermissions() {
}

$Class* TempFileHelper$PosixPermissions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filePermissions", "Ljava/nio/file/attribute/FileAttribute;", "Ljava/nio/file/attribute/FileAttribute<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;", $STATIC | $FINAL, $staticField(TempFileHelper$PosixPermissions, filePermissions)},
		{"dirPermissions", "Ljava/nio/file/attribute/FileAttribute;", "Ljava/nio/file/attribute/FileAttribute<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;", $STATIC | $FINAL, $staticField(TempFileHelper$PosixPermissions, dirPermissions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TempFileHelper$PosixPermissions, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.TempFileHelper$PosixPermissions", "java.nio.file.TempFileHelper", "PosixPermissions", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.TempFileHelper$PosixPermissions",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.TempFileHelper"
	};
	$loadClass(TempFileHelper$PosixPermissions, name, initialize, &classInfo$$, TempFileHelper$PosixPermissions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TempFileHelper$PosixPermissions);
	});
	return class$;
}

$Class* TempFileHelper$PosixPermissions::class$ = nullptr;

		} // file
	} // nio
} // java