#include <java/io/File$PathStatus.h>
#include <java/io/File.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECKED
#undef INVALID

using $File$PathStatusArray = $Array<::java::io::File$PathStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

File$PathStatus* File$PathStatus::INVALID = nullptr;
File$PathStatus* File$PathStatus::CHECKED = nullptr;
$File$PathStatusArray* File$PathStatus::$VALUES = nullptr;

$File$PathStatusArray* File$PathStatus::$values() {
	$init(File$PathStatus);
	return $new($File$PathStatusArray, {
		File$PathStatus::INVALID,
		File$PathStatus::CHECKED
	});
}

$File$PathStatusArray* File$PathStatus::values() {
	$init(File$PathStatus);
	return $cast($File$PathStatusArray, File$PathStatus::$VALUES->clone());
}

File$PathStatus* File$PathStatus::valueOf($String* name) {
	$init(File$PathStatus);
	return $cast(File$PathStatus, $Enum::valueOf(File$PathStatus::class$, name));
}

void File$PathStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void File$PathStatus::clinit$($Class* clazz) {
	$assignStatic(File$PathStatus::INVALID, $new(File$PathStatus, "INVALID"_s, 0));
	$assignStatic(File$PathStatus::CHECKED, $new(File$PathStatus, "CHECKED"_s, 1));
	$assignStatic(File$PathStatus::$VALUES, File$PathStatus::$values());
}

File$PathStatus::File$PathStatus() {
}

$Class* File$PathStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INVALID", "Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(File$PathStatus, INVALID)},
		{"CHECKED", "Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(File$PathStatus, CHECKED)},
		{"$VALUES", "[Ljava/io/File$PathStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(File$PathStatus, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/io/File$PathStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(File$PathStatus, $values, $File$PathStatusArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(File$PathStatus, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(File$PathStatus, valueOf, File$PathStatus*, $String*)},
		{"values", "()[Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(File$PathStatus, values, $File$PathStatusArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.File$PathStatus", "java.io.File", "PathStatus", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.io.File$PathStatus",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/io/File$PathStatus;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.File"
	};
	$loadClass(File$PathStatus, name, initialize, &classInfo$$, File$PathStatus::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(File$PathStatus));
	});
	return class$;
}

$Class* File$PathStatus::class$ = nullptr;

	} // io
} // java