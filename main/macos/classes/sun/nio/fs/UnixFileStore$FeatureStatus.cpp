#include <sun/nio/fs/UnixFileStore$FeatureStatus.h>
#include <java/lang/Enum.h>
#include <sun/nio/fs/UnixFileStore.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef PRESENT
#undef UNKNOWN

using $UnixFileStore$FeatureStatusArray = $Array<::sun::nio::fs::UnixFileStore$FeatureStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

UnixFileStore$FeatureStatus* UnixFileStore$FeatureStatus::PRESENT = nullptr;
UnixFileStore$FeatureStatus* UnixFileStore$FeatureStatus::NOT_PRESENT = nullptr;
UnixFileStore$FeatureStatus* UnixFileStore$FeatureStatus::UNKNOWN = nullptr;
$UnixFileStore$FeatureStatusArray* UnixFileStore$FeatureStatus::$VALUES = nullptr;

$UnixFileStore$FeatureStatusArray* UnixFileStore$FeatureStatus::$values() {
	$init(UnixFileStore$FeatureStatus);
	return $new($UnixFileStore$FeatureStatusArray, {
		UnixFileStore$FeatureStatus::PRESENT,
		UnixFileStore$FeatureStatus::NOT_PRESENT,
		UnixFileStore$FeatureStatus::UNKNOWN
	});
}

$UnixFileStore$FeatureStatusArray* UnixFileStore$FeatureStatus::values() {
	$init(UnixFileStore$FeatureStatus);
	return $cast($UnixFileStore$FeatureStatusArray, UnixFileStore$FeatureStatus::$VALUES->clone());
}

UnixFileStore$FeatureStatus* UnixFileStore$FeatureStatus::valueOf($String* name) {
	$init(UnixFileStore$FeatureStatus);
	return $cast(UnixFileStore$FeatureStatus, $Enum::valueOf(UnixFileStore$FeatureStatus::class$, name));
}

void UnixFileStore$FeatureStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void UnixFileStore$FeatureStatus::clinit$($Class* clazz) {
	$assignStatic(UnixFileStore$FeatureStatus::PRESENT, $new(UnixFileStore$FeatureStatus, "PRESENT"_s, 0));
	$assignStatic(UnixFileStore$FeatureStatus::NOT_PRESENT, $new(UnixFileStore$FeatureStatus, "NOT_PRESENT"_s, 1));
	$assignStatic(UnixFileStore$FeatureStatus::UNKNOWN, $new(UnixFileStore$FeatureStatus, "UNKNOWN"_s, 2));
	$assignStatic(UnixFileStore$FeatureStatus::$VALUES, UnixFileStore$FeatureStatus::$values());
}

UnixFileStore$FeatureStatus::UnixFileStore$FeatureStatus() {
}

$Class* UnixFileStore$FeatureStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PRESENT", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, PRESENT)},
		{"NOT_PRESENT", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, NOT_PRESENT)},
		{"UNKNOWN", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, UNKNOWN)},
		{"$VALUES", "[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileStore$FeatureStatus, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnixFileStore$FeatureStatus, $values, $UnixFileStore$FeatureStatusArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UnixFileStore$FeatureStatus, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnixFileStore$FeatureStatus, valueOf, UnixFileStore$FeatureStatus*, $String*)},
		{"values", "()[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnixFileStore$FeatureStatus, values, $UnixFileStore$FeatureStatusArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileStore$FeatureStatus", "sun.nio.fs.UnixFileStore", "FeatureStatus", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.nio.fs.UnixFileStore$FeatureStatus",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/nio/fs/UnixFileStore$FeatureStatus;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixFileStore"
	};
	$loadClass(UnixFileStore$FeatureStatus, name, initialize, &classInfo$$, UnixFileStore$FeatureStatus::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnixFileStore$FeatureStatus));
	});
	return class$;
}

$Class* UnixFileStore$FeatureStatus::class$ = nullptr;

		} // fs
	} // nio
} // sun