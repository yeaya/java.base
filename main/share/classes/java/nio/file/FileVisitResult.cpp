#include <java/nio/file/FileVisitResult.h>

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

#undef CONTINUE
#undef SKIP_SIBLINGS
#undef SKIP_SUBTREE
#undef TERMINATE

using $FileVisitResultArray = $Array<::java::nio::file::FileVisitResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileVisitResult_FieldInfo_[] = {
	{"CONTINUE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, CONTINUE)},
	{"TERMINATE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, TERMINATE)},
	{"SKIP_SUBTREE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, SKIP_SUBTREE)},
	{"SKIP_SIBLINGS", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, SKIP_SIBLINGS)},
	{"$VALUES", "[Ljava/nio/file/FileVisitResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FileVisitResult, $VALUES)},
	{}
};

$MethodInfo _FileVisitResult_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/FileVisitResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FileVisitResultArray*(*)()>(&FileVisitResult::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FileVisitResult::*)($String*,int32_t)>(&FileVisitResult::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileVisitResult*(*)($String*)>(&FileVisitResult::valueOf))},
	{"values", "()[Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileVisitResultArray*(*)()>(&FileVisitResult::values))},
	{}
};

$ClassInfo _FileVisitResult_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.FileVisitResult",
	"java.lang.Enum",
	nullptr,
	_FileVisitResult_FieldInfo_,
	_FileVisitResult_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/FileVisitResult;>;"
};

$Object* allocate$FileVisitResult($Class* clazz) {
	return $of($alloc(FileVisitResult));
}


FileVisitResult* FileVisitResult::CONTINUE = nullptr;

FileVisitResult* FileVisitResult::TERMINATE = nullptr;

FileVisitResult* FileVisitResult::SKIP_SUBTREE = nullptr;

FileVisitResult* FileVisitResult::SKIP_SIBLINGS = nullptr;
$FileVisitResultArray* FileVisitResult::$VALUES = nullptr;

$FileVisitResultArray* FileVisitResult::$values() {
	$init(FileVisitResult);
	return $new($FileVisitResultArray, {
		FileVisitResult::CONTINUE,
		FileVisitResult::TERMINATE,
		FileVisitResult::SKIP_SUBTREE,
		FileVisitResult::SKIP_SIBLINGS
	});
}

$FileVisitResultArray* FileVisitResult::values() {
	$init(FileVisitResult);
	return $cast($FileVisitResultArray, FileVisitResult::$VALUES->clone());
}

FileVisitResult* FileVisitResult::valueOf($String* name) {
	$init(FileVisitResult);
	return $cast(FileVisitResult, $Enum::valueOf(FileVisitResult::class$, name));
}

void FileVisitResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FileVisitResult($Class* class$) {
	$assignStatic(FileVisitResult::CONTINUE, $new(FileVisitResult, "CONTINUE"_s, 0));
	$assignStatic(FileVisitResult::TERMINATE, $new(FileVisitResult, "TERMINATE"_s, 1));
	$assignStatic(FileVisitResult::SKIP_SUBTREE, $new(FileVisitResult, "SKIP_SUBTREE"_s, 2));
	$assignStatic(FileVisitResult::SKIP_SIBLINGS, $new(FileVisitResult, "SKIP_SIBLINGS"_s, 3));
	$assignStatic(FileVisitResult::$VALUES, FileVisitResult::$values());
}

FileVisitResult::FileVisitResult() {
}

$Class* FileVisitResult::load$($String* name, bool initialize) {
	$loadClass(FileVisitResult, name, initialize, &_FileVisitResult_ClassInfo_, clinit$FileVisitResult, allocate$FileVisitResult);
	return class$;
}

$Class* FileVisitResult::class$ = nullptr;

		} // file
	} // nio
} // java