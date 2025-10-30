#include <sun/nio/fs/WindowsPathType.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABSOLUTE
#undef DIRECTORY_RELATIVE
#undef DRIVE_RELATIVE
#undef RELATIVE
#undef UNC

using $WindowsPathTypeArray = $Array<::sun::nio::fs::WindowsPathType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPathType_FieldInfo_[] = {
	{"ABSOLUTE", "Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WindowsPathType, ABSOLUTE)},
	{"UNC", "Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WindowsPathType, UNC)},
	{"RELATIVE", "Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WindowsPathType, RELATIVE)},
	{"DIRECTORY_RELATIVE", "Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WindowsPathType, DIRECTORY_RELATIVE)},
	{"DRIVE_RELATIVE", "Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WindowsPathType, DRIVE_RELATIVE)},
	{"$VALUES", "[Lsun/nio/fs/WindowsPathType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsPathType, $VALUES)},
	{}
};

$MethodInfo _WindowsPathType_MethodInfo_[] = {
	{"$values", "()[Lsun/nio/fs/WindowsPathType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$WindowsPathTypeArray*(*)()>(&WindowsPathType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(WindowsPathType::*)($String*,int32_t)>(&WindowsPathType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WindowsPathType*(*)($String*)>(&WindowsPathType::valueOf))},
	{"values", "()[Lsun/nio/fs/WindowsPathType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowsPathTypeArray*(*)()>(&WindowsPathType::values))},
	{}
};

$ClassInfo _WindowsPathType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.nio.fs.WindowsPathType",
	"java.lang.Enum",
	nullptr,
	_WindowsPathType_FieldInfo_,
	_WindowsPathType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/nio/fs/WindowsPathType;>;"
};

$Object* allocate$WindowsPathType($Class* clazz) {
	return $of($alloc(WindowsPathType));
}

WindowsPathType* WindowsPathType::ABSOLUTE = nullptr;
WindowsPathType* WindowsPathType::UNC = nullptr;
WindowsPathType* WindowsPathType::RELATIVE = nullptr;
WindowsPathType* WindowsPathType::DIRECTORY_RELATIVE = nullptr;
WindowsPathType* WindowsPathType::DRIVE_RELATIVE = nullptr;
$WindowsPathTypeArray* WindowsPathType::$VALUES = nullptr;

$WindowsPathTypeArray* WindowsPathType::$values() {
	$init(WindowsPathType);
	return $new($WindowsPathTypeArray, {
		WindowsPathType::ABSOLUTE,
		WindowsPathType::UNC,
		WindowsPathType::RELATIVE,
		WindowsPathType::DIRECTORY_RELATIVE,
		WindowsPathType::DRIVE_RELATIVE
	});
}

$WindowsPathTypeArray* WindowsPathType::values() {
	$init(WindowsPathType);
	return $cast($WindowsPathTypeArray, WindowsPathType::$VALUES->clone());
}

WindowsPathType* WindowsPathType::valueOf($String* name) {
	$init(WindowsPathType);
	return $cast(WindowsPathType, $Enum::valueOf(WindowsPathType::class$, name));
}

void WindowsPathType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$WindowsPathType($Class* class$) {
	$assignStatic(WindowsPathType::ABSOLUTE, $new(WindowsPathType, "ABSOLUTE"_s, 0));
	$assignStatic(WindowsPathType::UNC, $new(WindowsPathType, "UNC"_s, 1));
	$assignStatic(WindowsPathType::RELATIVE, $new(WindowsPathType, "RELATIVE"_s, 2));
	$assignStatic(WindowsPathType::DIRECTORY_RELATIVE, $new(WindowsPathType, "DIRECTORY_RELATIVE"_s, 3));
	$assignStatic(WindowsPathType::DRIVE_RELATIVE, $new(WindowsPathType, "DRIVE_RELATIVE"_s, 4));
	$assignStatic(WindowsPathType::$VALUES, WindowsPathType::$values());
}

WindowsPathType::WindowsPathType() {
}

$Class* WindowsPathType::load$($String* name, bool initialize) {
	$loadClass(WindowsPathType, name, initialize, &_WindowsPathType_ClassInfo_, clinit$WindowsPathType, allocate$WindowsPathType);
	return class$;
}

$Class* WindowsPathType::class$ = nullptr;

		} // fs
	} // nio
} // sun