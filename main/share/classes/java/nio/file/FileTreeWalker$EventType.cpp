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

namespace java {
	namespace nio {
		namespace file {

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

void FileTreeWalker$EventType::clinit$($Class* clazz) {
	$assignStatic(FileTreeWalker$EventType::START_DIRECTORY, $new(FileTreeWalker$EventType, "START_DIRECTORY"_s, 0));
	$assignStatic(FileTreeWalker$EventType::END_DIRECTORY, $new(FileTreeWalker$EventType, "END_DIRECTORY"_s, 1));
	$assignStatic(FileTreeWalker$EventType::ENTRY, $new(FileTreeWalker$EventType, "ENTRY"_s, 2));
	$assignStatic(FileTreeWalker$EventType::$VALUES, FileTreeWalker$EventType::$values());
}

FileTreeWalker$EventType::FileTreeWalker$EventType() {
}

$Class* FileTreeWalker$EventType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"START_DIRECTORY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, START_DIRECTORY)},
		{"END_DIRECTORY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, END_DIRECTORY)},
		{"ENTRY", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileTreeWalker$EventType, ENTRY)},
		{"$VALUES", "[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTreeWalker$EventType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FileTreeWalker$EventType, $values, $FileTreeWalker$EventTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FileTreeWalker$EventType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileTreeWalker$EventType, valueOf, FileTreeWalker$EventType*, $String*)},
		{"values", "()[Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileTreeWalker$EventType, values, $FileTreeWalker$EventTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.FileTreeWalker$EventType", "java.nio.file.FileTreeWalker", "EventType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.nio.file.FileTreeWalker$EventType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/nio/file/FileTreeWalker$EventType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.FileTreeWalker"
	};
	$loadClass(FileTreeWalker$EventType, name, initialize, &classInfo$$, FileTreeWalker$EventType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileTreeWalker$EventType));
	});
	return class$;
}

$Class* FileTreeWalker$EventType::class$ = nullptr;

		} // file
	} // nio
} // java