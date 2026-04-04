#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef PRIVATE
#undef READ_ONLY
#undef READ_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

FileChannel$MapMode* FileChannel$MapMode::READ_ONLY = nullptr;
FileChannel$MapMode* FileChannel$MapMode::READ_WRITE = nullptr;
FileChannel$MapMode* FileChannel$MapMode::PRIVATE = nullptr;

void FileChannel$MapMode::init$($String* name) {
	$set(this, name, name);
}

$String* FileChannel$MapMode::toString() {
	return this->name;
}

void FileChannel$MapMode::clinit$($Class* clazz) {
	$assignStatic(FileChannel$MapMode::READ_ONLY, $new(FileChannel$MapMode, "READ_ONLY"_s));
	$assignStatic(FileChannel$MapMode::READ_WRITE, $new(FileChannel$MapMode, "READ_WRITE"_s));
	$assignStatic(FileChannel$MapMode::PRIVATE, $new(FileChannel$MapMode, "PRIVATE"_s));
}

FileChannel$MapMode::FileChannel$MapMode() {
}

$Class* FileChannel$MapMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READ_ONLY", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, READ_ONLY)},
		{"READ_WRITE", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, READ_WRITE)},
		{"PRIVATE", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, PRIVATE)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileChannel$MapMode, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(FileChannel$MapMode, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileChannel$MapMode, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.FileChannel$MapMode", "java.nio.channels.FileChannel", "MapMode", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.FileChannel$MapMode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.channels.FileChannel"
	};
	$loadClass(FileChannel$MapMode, name, initialize, &classInfo$$, FileChannel$MapMode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileChannel$MapMode);
	});
	return class$;
}

$Class* FileChannel$MapMode::class$ = nullptr;

		} // channels
	} // nio
} // java