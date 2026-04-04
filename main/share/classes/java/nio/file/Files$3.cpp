#include <java/nio/file/Files$3.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/FileTreeWalker$EventType.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/Files.h>
#include <jcpp.h>

#undef END_DIRECTORY
#undef ENTRY
#undef START_DIRECTORY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FileTreeWalker$EventType = ::java::nio::file::FileTreeWalker$EventType;

namespace java {
	namespace nio {
		namespace file {

$ints* Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType = nullptr;

void Files$3::clinit$($Class* clazz) {
	$assignStatic(Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType, $new($ints, $($FileTreeWalker$EventType::values())->length));
	{
		try {
			Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType->set($FileTreeWalker$EventType::ENTRY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType->set($FileTreeWalker$EventType::START_DIRECTORY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType->set($FileTreeWalker$EventType::END_DIRECTORY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Files$3::Files$3() {
}

$Class* Files$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$FileTreeWalker$EventType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Files$3, $SwitchMap$java$nio$file$FileTreeWalker$EventType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.Files",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.nio.file.Files$3",
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
		"java.nio.file.Files"
	};
	$loadClass(Files$3, name, initialize, &classInfo$$, Files$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Files$3);
	});
	return class$;
}

$Class* Files$3::class$ = nullptr;

		} // file
	} // nio
} // java