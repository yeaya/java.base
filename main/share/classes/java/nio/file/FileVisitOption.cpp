#include <java/nio/file/FileVisitOption.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FOLLOW_LINKS

using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileVisitOption_FieldInfo_[] = {
	{"FOLLOW_LINKS", "Ljava/nio/file/FileVisitOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FileVisitOption, FOLLOW_LINKS)},
	{"$VALUES", "[Ljava/nio/file/FileVisitOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FileVisitOption, $VALUES)},
	{}
};

$MethodInfo _FileVisitOption_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/FileVisitOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FileVisitOption, $values, $FileVisitOptionArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FileVisitOption, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileVisitOption, valueOf, FileVisitOption*, $String*)},
	{"values", "()[Ljava/nio/file/FileVisitOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileVisitOption, values, $FileVisitOptionArray*)},
	{}
};

$ClassInfo _FileVisitOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.FileVisitOption",
	"java.lang.Enum",
	nullptr,
	_FileVisitOption_FieldInfo_,
	_FileVisitOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/FileVisitOption;>;"
};

$Object* allocate$FileVisitOption($Class* clazz) {
	return $of($alloc(FileVisitOption));
}

FileVisitOption* FileVisitOption::FOLLOW_LINKS = nullptr;
$FileVisitOptionArray* FileVisitOption::$VALUES = nullptr;

$FileVisitOptionArray* FileVisitOption::$values() {
	$init(FileVisitOption);
	return $new($FileVisitOptionArray, {FileVisitOption::FOLLOW_LINKS});
}

$FileVisitOptionArray* FileVisitOption::values() {
	$init(FileVisitOption);
	return $cast($FileVisitOptionArray, FileVisitOption::$VALUES->clone());
}

FileVisitOption* FileVisitOption::valueOf($String* name) {
	$init(FileVisitOption);
	return $cast(FileVisitOption, $Enum::valueOf(FileVisitOption::class$, name));
}

void FileVisitOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FileVisitOption($Class* class$) {
	$assignStatic(FileVisitOption::FOLLOW_LINKS, $new(FileVisitOption, "FOLLOW_LINKS"_s, 0));
	$assignStatic(FileVisitOption::$VALUES, FileVisitOption::$values());
}

FileVisitOption::FileVisitOption() {
}

$Class* FileVisitOption::load$($String* name, bool initialize) {
	$loadClass(FileVisitOption, name, initialize, &_FileVisitOption_ClassInfo_, clinit$FileVisitOption, allocate$FileVisitOption);
	return class$;
}

$Class* FileVisitOption::class$ = nullptr;

		} // file
	} // nio
} // java