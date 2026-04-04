#include <java/nio/file/AccessMode.h>
#include <java/lang/Enum.h>
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

void AccessMode::clinit$($Class* clazz) {
	$assignStatic(AccessMode::READ, $new(AccessMode, "READ"_s, 0));
	$assignStatic(AccessMode::WRITE, $new(AccessMode, "WRITE"_s, 1));
	$assignStatic(AccessMode::EXECUTE, $new(AccessMode, "EXECUTE"_s, 2));
	$assignStatic(AccessMode::$VALUES, AccessMode::$values());
}

AccessMode::AccessMode() {
}

$Class* AccessMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READ", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, READ)},
		{"WRITE", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, WRITE)},
		{"EXECUTE", "Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AccessMode, EXECUTE)},
		{"$VALUES", "[Ljava/nio/file/AccessMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AccessMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/nio/file/AccessMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AccessMode, $values, $AccessModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AccessMode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(AccessMode, valueOf, AccessMode*, $String*)},
		{"values", "()[Ljava/nio/file/AccessMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(AccessMode, values, $AccessModeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.nio.file.AccessMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/nio/file/AccessMode;>;"
	};
	$loadClass(AccessMode, name, initialize, &classInfo$$, AccessMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AccessMode));
	});
	return class$;
}

$Class* AccessMode::class$ = nullptr;

		} // file
	} // nio
} // java