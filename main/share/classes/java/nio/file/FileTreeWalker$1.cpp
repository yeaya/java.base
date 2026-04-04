#include <java/nio/file/FileTreeWalker$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/FileVisitOption.h>
#include <jcpp.h>

#undef FOLLOW_LINKS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FileVisitOption = ::java::nio::file::FileVisitOption;

namespace java {
	namespace nio {
		namespace file {

$ints* FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption = nullptr;

void FileTreeWalker$1::clinit$($Class* clazz) {
	$assignStatic(FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption, $new($ints, $($FileVisitOption::values())->length));
	{
		try {
			FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption->set($FileVisitOption::FOLLOW_LINKS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FileTreeWalker$1::FileTreeWalker$1() {
}

$Class* FileTreeWalker$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$FileVisitOption", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTreeWalker$1, $SwitchMap$java$nio$file$FileVisitOption)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.FileTreeWalker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.FileTreeWalker$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.nio.file.FileTreeWalker$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.FileTreeWalker"
	};
	$loadClass(FileTreeWalker$1, name, initialize, &classInfo$$, FileTreeWalker$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileTreeWalker$1);
	});
	return class$;
}

$Class* FileTreeWalker$1::class$ = nullptr;

		} // file
	} // nio
} // java