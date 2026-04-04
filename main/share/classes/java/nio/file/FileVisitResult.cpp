#include <java/nio/file/FileVisitResult.h>
#include <java/lang/Enum.h>
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

void FileVisitResult::clinit$($Class* clazz) {
	$assignStatic(FileVisitResult::CONTINUE, $new(FileVisitResult, "CONTINUE"_s, 0));
	$assignStatic(FileVisitResult::TERMINATE, $new(FileVisitResult, "TERMINATE"_s, 1));
	$assignStatic(FileVisitResult::SKIP_SUBTREE, $new(FileVisitResult, "SKIP_SUBTREE"_s, 2));
	$assignStatic(FileVisitResult::SKIP_SIBLINGS, $new(FileVisitResult, "SKIP_SIBLINGS"_s, 3));
	$assignStatic(FileVisitResult::$VALUES, FileVisitResult::$values());
}

FileVisitResult::FileVisitResult() {
}

$Class* FileVisitResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONTINUE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, CONTINUE)},
		{"TERMINATE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, TERMINATE)},
		{"SKIP_SUBTREE", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, SKIP_SUBTREE)},
		{"SKIP_SIBLINGS", "Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitResult, SKIP_SIBLINGS)},
		{"$VALUES", "[Ljava/nio/file/FileVisitResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FileVisitResult, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/nio/file/FileVisitResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FileVisitResult, $values, $FileVisitResultArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FileVisitResult, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileVisitResult, valueOf, FileVisitResult*, $String*)},
		{"values", "()[Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileVisitResult, values, $FileVisitResultArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.nio.file.FileVisitResult",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/nio/file/FileVisitResult;>;"
	};
	$loadClass(FileVisitResult, name, initialize, &classInfo$$, FileVisitResult::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileVisitResult));
	});
	return class$;
}

$Class* FileVisitResult::class$ = nullptr;

		} // file
	} // nio
} // java