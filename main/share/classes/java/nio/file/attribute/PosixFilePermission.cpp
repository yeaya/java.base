#include <java/nio/file/attribute/PosixFilePermission.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef GROUP_EXECUTE
#undef GROUP_READ
#undef GROUP_WRITE
#undef OTHERS_EXECUTE
#undef OTHERS_READ
#undef OTHERS_WRITE
#undef OWNER_EXECUTE
#undef OWNER_READ
#undef OWNER_WRITE

using $PosixFilePermissionArray = $Array<::java::nio::file::attribute::PosixFilePermission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _PosixFilePermission_FieldInfo_[] = {
	{"OWNER_READ", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OWNER_READ)},
	{"OWNER_WRITE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OWNER_WRITE)},
	{"OWNER_EXECUTE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OWNER_EXECUTE)},
	{"GROUP_READ", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, GROUP_READ)},
	{"GROUP_WRITE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, GROUP_WRITE)},
	{"GROUP_EXECUTE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, GROUP_EXECUTE)},
	{"OTHERS_READ", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OTHERS_READ)},
	{"OTHERS_WRITE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OTHERS_WRITE)},
	{"OTHERS_EXECUTE", "Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PosixFilePermission, OTHERS_EXECUTE)},
	{"$VALUES", "[Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PosixFilePermission, $VALUES)},
	{}
};

$MethodInfo _PosixFilePermission_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PosixFilePermissionArray*(*)()>(&PosixFilePermission::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PosixFilePermission::*)($String*,int32_t)>(&PosixFilePermission::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PosixFilePermission*(*)($String*)>(&PosixFilePermission::valueOf))},
	{"values", "()[Ljava/nio/file/attribute/PosixFilePermission;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PosixFilePermissionArray*(*)()>(&PosixFilePermission::values))},
	{}
};

$ClassInfo _PosixFilePermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.attribute.PosixFilePermission",
	"java.lang.Enum",
	nullptr,
	_PosixFilePermission_FieldInfo_,
	_PosixFilePermission_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/attribute/PosixFilePermission;>;"
};

$Object* allocate$PosixFilePermission($Class* clazz) {
	return $of($alloc(PosixFilePermission));
}


PosixFilePermission* PosixFilePermission::OWNER_READ = nullptr;

PosixFilePermission* PosixFilePermission::OWNER_WRITE = nullptr;

PosixFilePermission* PosixFilePermission::OWNER_EXECUTE = nullptr;

PosixFilePermission* PosixFilePermission::GROUP_READ = nullptr;

PosixFilePermission* PosixFilePermission::GROUP_WRITE = nullptr;

PosixFilePermission* PosixFilePermission::GROUP_EXECUTE = nullptr;

PosixFilePermission* PosixFilePermission::OTHERS_READ = nullptr;

PosixFilePermission* PosixFilePermission::OTHERS_WRITE = nullptr;

PosixFilePermission* PosixFilePermission::OTHERS_EXECUTE = nullptr;
$PosixFilePermissionArray* PosixFilePermission::$VALUES = nullptr;

$PosixFilePermissionArray* PosixFilePermission::$values() {
	$init(PosixFilePermission);
	return $new($PosixFilePermissionArray, {
		PosixFilePermission::OWNER_READ,
		PosixFilePermission::OWNER_WRITE,
		PosixFilePermission::OWNER_EXECUTE,
		PosixFilePermission::GROUP_READ,
		PosixFilePermission::GROUP_WRITE,
		PosixFilePermission::GROUP_EXECUTE,
		PosixFilePermission::OTHERS_READ,
		PosixFilePermission::OTHERS_WRITE,
		PosixFilePermission::OTHERS_EXECUTE
	});
}

$PosixFilePermissionArray* PosixFilePermission::values() {
	$init(PosixFilePermission);
	return $cast($PosixFilePermissionArray, PosixFilePermission::$VALUES->clone());
}

PosixFilePermission* PosixFilePermission::valueOf($String* name) {
	$init(PosixFilePermission);
	return $cast(PosixFilePermission, $Enum::valueOf(PosixFilePermission::class$, name));
}

void PosixFilePermission::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PosixFilePermission($Class* class$) {
	$assignStatic(PosixFilePermission::OWNER_READ, $new(PosixFilePermission, "OWNER_READ"_s, 0));
	$assignStatic(PosixFilePermission::OWNER_WRITE, $new(PosixFilePermission, "OWNER_WRITE"_s, 1));
	$assignStatic(PosixFilePermission::OWNER_EXECUTE, $new(PosixFilePermission, "OWNER_EXECUTE"_s, 2));
	$assignStatic(PosixFilePermission::GROUP_READ, $new(PosixFilePermission, "GROUP_READ"_s, 3));
	$assignStatic(PosixFilePermission::GROUP_WRITE, $new(PosixFilePermission, "GROUP_WRITE"_s, 4));
	$assignStatic(PosixFilePermission::GROUP_EXECUTE, $new(PosixFilePermission, "GROUP_EXECUTE"_s, 5));
	$assignStatic(PosixFilePermission::OTHERS_READ, $new(PosixFilePermission, "OTHERS_READ"_s, 6));
	$assignStatic(PosixFilePermission::OTHERS_WRITE, $new(PosixFilePermission, "OTHERS_WRITE"_s, 7));
	$assignStatic(PosixFilePermission::OTHERS_EXECUTE, $new(PosixFilePermission, "OTHERS_EXECUTE"_s, 8));
	$assignStatic(PosixFilePermission::$VALUES, PosixFilePermission::$values());
}

PosixFilePermission::PosixFilePermission() {
}

$Class* PosixFilePermission::load$($String* name, bool initialize) {
	$loadClass(PosixFilePermission, name, initialize, &_PosixFilePermission_ClassInfo_, clinit$PosixFilePermission, allocate$PosixFilePermission);
	return class$;
}

$Class* PosixFilePermission::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java