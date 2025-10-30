#include <java/io/File$PathStatus.h>

#include <java/io/File.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECKED
#undef INVALID

using $File$PathStatusArray = $Array<::java::io::File$PathStatus>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _File$PathStatus_FieldInfo_[] = {
	{"INVALID", "Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(File$PathStatus, INVALID)},
	{"CHECKED", "Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(File$PathStatus, CHECKED)},
	{"$VALUES", "[Ljava/io/File$PathStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(File$PathStatus, $VALUES)},
	{}
};

$MethodInfo _File$PathStatus_MethodInfo_[] = {
	{"$values", "()[Ljava/io/File$PathStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$File$PathStatusArray*(*)()>(&File$PathStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(File$PathStatus::*)($String*,int32_t)>(&File$PathStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<File$PathStatus*(*)($String*)>(&File$PathStatus::valueOf))},
	{"values", "()[Ljava/io/File$PathStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$File$PathStatusArray*(*)()>(&File$PathStatus::values))},
	{}
};

$InnerClassInfo _File$PathStatus_InnerClassesInfo_[] = {
	{"java.io.File$PathStatus", "java.io.File", "PathStatus", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _File$PathStatus_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.io.File$PathStatus",
	"java.lang.Enum",
	nullptr,
	_File$PathStatus_FieldInfo_,
	_File$PathStatus_MethodInfo_,
	"Ljava/lang/Enum<Ljava/io/File$PathStatus;>;",
	nullptr,
	_File$PathStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.File"
};

$Object* allocate$File$PathStatus($Class* clazz) {
	return $of($alloc(File$PathStatus));
}

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

void clinit$File$PathStatus($Class* class$) {
	$assignStatic(File$PathStatus::INVALID, $new(File$PathStatus, "INVALID"_s, 0));
	$assignStatic(File$PathStatus::CHECKED, $new(File$PathStatus, "CHECKED"_s, 1));
	$assignStatic(File$PathStatus::$VALUES, File$PathStatus::$values());
}

File$PathStatus::File$PathStatus() {
}

$Class* File$PathStatus::load$($String* name, bool initialize) {
	$loadClass(File$PathStatus, name, initialize, &_File$PathStatus_ClassInfo_, clinit$File$PathStatus, allocate$File$PathStatus);
	return class$;
}

$Class* File$PathStatus::class$ = nullptr;

	} // io
} // java