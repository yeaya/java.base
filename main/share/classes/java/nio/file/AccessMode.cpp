#include <java/nio/file/AccessMode.h>

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

#undef EXECUTE
#undef READ
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _AccessMode_FieldInfo_[] = {
	{"READ", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, READ)},
	{"WRITE", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, WRITE)},
	{"EXECUTE", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, EXECUTE)},
	{"$VALUES", "[Ljava/nio/file/AccessMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AccessMode, $VALUES)},
	{}
};

$MethodInfo _AccessMode_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/AccessMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AccessModeArray*(*)()>(&AccessMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AccessMode::*)($String*,int32_t)>(&AccessMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AccessMode*(*)($String*)>(&AccessMode::valueOf))},
	{"values", "()[Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessModeArray*(*)()>(&AccessMode::values))},
	{}
};

$ClassInfo _AccessMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.AccessMode",
	"java.lang.Enum",
	nullptr,
	_AccessMode_FieldInfo_,
	_AccessMode_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/AccessMode;>;"
};

$Object* allocate$AccessMode($Class* clazz) {
	return $of($alloc(AccessMode));
}


AccessMode* AccessMode::READ = nullptr;

AccessMode* AccessMode::WRITE = nullptr;

AccessMode* AccessMode::EXECUTE = nullptr;
$AccessModeArray* AccessMode::$VALUES = nullptr;

$AccessModeArray* AccessMode::$values() {
	$init(AccessMode);
	return $new($AccessModeArray, {
		AccessMode::READ,
		AccessMode::WRITE,
		AccessMode::EXECUTE
	});
}

$AccessModeArray* AccessMode::values() {
	$init(AccessMode);
	return $cast($AccessModeArray, AccessMode::$VALUES->clone());
}

AccessMode* AccessMode::valueOf($String* name) {
	$init(AccessMode);
	return $cast(AccessMode, $Enum::valueOf(AccessMode::class$, name));
}

void AccessMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AccessMode($Class* class$) {
	$assignStatic(AccessMode::READ, $new(AccessMode, "READ"_s, 0));
	$assignStatic(AccessMode::WRITE, $new(AccessMode, "WRITE"_s, 1));
	$assignStatic(AccessMode::EXECUTE, $new(AccessMode, "EXECUTE"_s, 2));
	$assignStatic(AccessMode::$VALUES, AccessMode::$values());
}

AccessMode::AccessMode() {
}

$Class* AccessMode::load$($String* name, bool initialize) {
	$loadClass(AccessMode, name, initialize, &_AccessMode_ClassInfo_, clinit$AccessMode, allocate$AccessMode);
	return class$;
}

$Class* AccessMode::class$ = nullptr;

		} // file
	} // nio
} // java