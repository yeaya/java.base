#include <sun/nio/fs/UnixFileStore$FeatureStatus.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $UnixFileStore = ::sun::nio::fs::UnixFileStore;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileStore$FeatureStatus_FieldInfo_[] = {
	{"PRESENT", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, PRESENT)},
	{"NOT_PRESENT", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, NOT_PRESENT)},
	{"UNKNOWN", "Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixFileStore$FeatureStatus, UNKNOWN)},
	{"$VALUES", "[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixFileStore$FeatureStatus, $VALUES)},
	{}
};

$MethodInfo _UnixFileStore$FeatureStatus_MethodInfo_[] = {
	{"$values", "()[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UnixFileStore$FeatureStatusArray*(*)()>(&UnixFileStore$FeatureStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(UnixFileStore$FeatureStatus::*)($String*,int32_t)>(&UnixFileStore$FeatureStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UnixFileStore$FeatureStatus*(*)($String*)>(&UnixFileStore$FeatureStatus::valueOf))},
	{"values", "()[Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UnixFileStore$FeatureStatusArray*(*)()>(&UnixFileStore$FeatureStatus::values))},
	{}
};

$InnerClassInfo _UnixFileStore$FeatureStatus_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileStore$FeatureStatus", "sun.nio.fs.UnixFileStore", "FeatureStatus", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UnixFileStore$FeatureStatus_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.nio.fs.UnixFileStore$FeatureStatus",
	"java.lang.Enum",
	nullptr,
	_UnixFileStore$FeatureStatus_FieldInfo_,
	_UnixFileStore$FeatureStatus_MethodInfo_,
	"Ljava/lang/Enum<Lsun/nio/fs/UnixFileStore$FeatureStatus;>;",
	nullptr,
	_UnixFileStore$FeatureStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileStore"
};

$Object* allocate$UnixFileStore$FeatureStatus($Class* clazz) {
	return $of($alloc(UnixFileStore$FeatureStatus));
}

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

void clinit$UnixFileStore$FeatureStatus($Class* class$) {
	$assignStatic(UnixFileStore$FeatureStatus::PRESENT, $new(UnixFileStore$FeatureStatus, "PRESENT"_s, 0));
	$assignStatic(UnixFileStore$FeatureStatus::NOT_PRESENT, $new(UnixFileStore$FeatureStatus, "NOT_PRESENT"_s, 1));
	$assignStatic(UnixFileStore$FeatureStatus::UNKNOWN, $new(UnixFileStore$FeatureStatus, "UNKNOWN"_s, 2));
	$assignStatic(UnixFileStore$FeatureStatus::$VALUES, UnixFileStore$FeatureStatus::$values());
}

UnixFileStore$FeatureStatus::UnixFileStore$FeatureStatus() {
}

$Class* UnixFileStore$FeatureStatus::load$($String* name, bool initialize) {
	$loadClass(UnixFileStore$FeatureStatus, name, initialize, &_UnixFileStore$FeatureStatus_ClassInfo_, clinit$UnixFileStore$FeatureStatus, allocate$UnixFileStore$FeatureStatus);
	return class$;
}

$Class* UnixFileStore$FeatureStatus::class$ = nullptr;

		} // fs
	} // nio
} // sun