#include <java/nio/file/FileTreeWalker$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/FileVisitOption.h>
#include <jcpp.h>

#undef FOLLOW_LINKS

using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;
using $FileVisitOption = ::java::nio::file::FileVisitOption;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileTreeWalker$1_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$FileVisitOption", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTreeWalker$1, $SwitchMap$java$nio$file$FileVisitOption)},
	{}
};

$EnclosingMethodInfo _FileTreeWalker$1_EnclosingMethodInfo_ = {
	"java.nio.file.FileTreeWalker",
	nullptr,
	nullptr
};

$InnerClassInfo _FileTreeWalker$1_InnerClassesInfo_[] = {
	{"java.nio.file.FileTreeWalker$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _FileTreeWalker$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.nio.file.FileTreeWalker$1",
	"java.lang.Object",
	nullptr,
	_FileTreeWalker$1_FieldInfo_,
	nullptr,
	nullptr,
	&_FileTreeWalker$1_EnclosingMethodInfo_,
	_FileTreeWalker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.FileTreeWalker"
};

$Object* allocate$FileTreeWalker$1($Class* clazz) {
	return $of($alloc(FileTreeWalker$1));
}

$ints* FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption = nullptr;

void clinit$FileTreeWalker$1($Class* class$) {
	$assignStatic(FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption, $new($ints, $($FileVisitOption::values())->length));
	{
		try {
			$nc(FileTreeWalker$1::$SwitchMap$java$nio$file$FileVisitOption)->set($FileVisitOption::FOLLOW_LINKS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FileTreeWalker$1::FileTreeWalker$1() {
}

$Class* FileTreeWalker$1::load$($String* name, bool initialize) {
	$loadClass(FileTreeWalker$1, name, initialize, &_FileTreeWalker$1_ClassInfo_, clinit$FileTreeWalker$1, allocate$FileTreeWalker$1);
	return class$;
}

$Class* FileTreeWalker$1::class$ = nullptr;

		} // file
	} // nio
} // java