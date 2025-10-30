#include <java/nio/file/FileTreeWalker$EventType.h>

#include <java/lang/Enum.h>
#include <java/nio/file/FileTreeWalker.h>
#include <jcpp.h>

#undef END_DIRECTORY
#undef ENTRY
#undef START_DIRECTORY

using $FileTreeWalker$EventTypeArray = $Array<::java::nio::file::FileTreeWalker$EventType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileTreeWalker$EventType_FieldInfo_[] = {
	{"START_DIRECTORY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, START_DIRECTORY)},
	{"END_DIRECTORY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, END_DIRECTORY)},
	{"ENTRY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, ENTRY)},
	{"$VALUES", "[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTreeWalker$EventType, $VALUES)},
	{}
};

$MethodInfo _FileTreeWalker$EventType_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FileTreeWalker$EventTypeArray*(*)()>(&FileTreeWalker$EventType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FileTreeWalker$EventType::*)($String*,int32_t)>(&FileTreeWalker$EventType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileTreeWalker$EventType*(*)($String*)>(&FileTreeWalker$EventType::valueOf))},
	{"values", "()[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileTreeWalker$EventTypeArray*(*)()>(&FileTreeWalker$EventType::values))},
	{}
};

$InnerClassInfo _FileTreeWalker$EventType_InnerClassesInfo_[] = {
	{"java.nio.file.FileTreeWalker$EventType", "java.nio.file.FileTreeWalker", "EventType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FileTreeWalker$EventType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.FileTreeWalker$EventType",
	"java.lang.Enum",
	nullptr,
	_FileTreeWalker$EventType_FieldInfo_,
	_FileTreeWalker$EventType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/FileTreeWalker$EventType;>;",
	nullptr,
	_FileTreeWalker$EventType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.FileTreeWalker"
};

$Object* allocate$FileTreeWalker$EventType($Class* clazz) {
	return $of($alloc(FileTreeWalker$EventType));
}

FileTreeWalker$EventType* FileTreeWalker$EventType::START_DIRECTORY = nullptr;
FileTreeWalker$EventType* FileTreeWalker$EventType::END_DIRECTORY = nullptr;
FileTreeWalker$EventType* FileTreeWalker$EventType::ENTRY = nullptr;
$FileTreeWalker$EventTypeArray* FileTreeWalker$EventType::$VALUES = nullptr;

$FileTreeWalker$EventTypeArray* FileTreeWalker$EventType::$values() {
	$init(FileTreeWalker$EventType);
	return $new($FileTreeWalker$EventTypeArray, {
		FileTreeWalker$EventType::START_DIRECTORY,
		FileTreeWalker$EventType::END_DIRECTORY,
		FileTreeWalker$EventType::ENTRY
	});
}

$FileTreeWalker$EventTypeArray* FileTreeWalker$EventType::values() {
	$init(FileTreeWalker$EventType);
	return $cast($FileTreeWalker$EventTypeArray, FileTreeWalker$EventType::$VALUES->clone());
}

FileTreeWalker$EventType* FileTreeWalker$EventType::valueOf($String* name) {
	$init(FileTreeWalker$EventType);
	return $cast(FileTreeWalker$EventType, $Enum::valueOf(FileTreeWalker$EventType::class$, name));
}

void FileTreeWalker$EventType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FileTreeWalker$EventType($Class* class$) {
	$assignStatic(FileTreeWalker$EventType::START_DIRECTORY, $new(FileTreeWalker$EventType, "START_DIRECTORY"_s, 0));
	$assignStatic(FileTreeWalker$EventType::END_DIRECTORY, $new(FileTreeWalker$EventType, "END_DIRECTORY"_s, 1));
	$assignStatic(FileTreeWalker$EventType::ENTRY, $new(FileTreeWalker$EventType, "ENTRY"_s, 2));
	$assignStatic(FileTreeWalker$EventType::$VALUES, FileTreeWalker$EventType::$values());
}

FileTreeWalker$EventType::FileTreeWalker$EventType() {
}

$Class* FileTreeWalker$EventType::load$($String* name, bool initialize) {
	$loadClass(FileTreeWalker$EventType, name, initialize, &_FileTreeWalker$EventType_ClassInfo_, clinit$FileTreeWalker$EventType, allocate$FileTreeWalker$EventType);
	return class$;
}

$Class* FileTreeWalker$EventType::class$ = nullptr;

		} // file
	} // nio
} // java