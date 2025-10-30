#include <java/nio/file/Files$3.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/FileTreeWalker$EventType.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/Files.h>
#include <jcpp.h>

#undef END_DIRECTORY
#undef ENTRY
#undef START_DIRECTORY

using $FileTreeWalker$EventTypeArray = $Array<::java::nio::file::FileTreeWalker$EventType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;
using $FileTreeWalker$EventType = ::java::nio::file::FileTreeWalker$EventType;
using $Files = ::java::nio::file::Files;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Files$3_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$FileTreeWalker$EventType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Files$3, $SwitchMap$java$nio$file$FileTreeWalker$EventType)},
	{}
};

$EnclosingMethodInfo _Files$3_EnclosingMethodInfo_ = {
	"java.nio.file.Files",
	nullptr,
	nullptr
};

$InnerClassInfo _Files$3_InnerClassesInfo_[] = {
	{"java.nio.file.Files$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Files$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.nio.file.Files$3",
	"java.lang.Object",
	nullptr,
	_Files$3_FieldInfo_,
	nullptr,
	nullptr,
	&_Files$3_EnclosingMethodInfo_,
	_Files$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$3($Class* clazz) {
	return $of($alloc(Files$3));
}

$ints* Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType = nullptr;

void clinit$Files$3($Class* class$) {
	$assignStatic(Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType, $new($ints, $($FileTreeWalker$EventType::values())->length));
	{
		try {
			$nc(Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType)->set($FileTreeWalker$EventType::ENTRY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType)->set($FileTreeWalker$EventType::START_DIRECTORY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType)->set($FileTreeWalker$EventType::END_DIRECTORY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Files$3::Files$3() {
}

$Class* Files$3::load$($String* name, bool initialize) {
	$loadClass(Files$3, name, initialize, &_Files$3_ClassInfo_, clinit$Files$3, allocate$Files$3);
	return class$;
}

$Class* Files$3::class$ = nullptr;

		} // file
	} // nio
} // java