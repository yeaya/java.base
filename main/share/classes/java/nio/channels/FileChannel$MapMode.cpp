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

$FieldInfo _FileChannel$MapMode_FieldInfo_[] = {
	{"READ_ONLY", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, READ_ONLY)},
	{"READ_WRITE", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, READ_WRITE)},
	{"PRIVATE", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FileChannel$MapMode, PRIVATE)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileChannel$MapMode, name)},
	{}
};

$MethodInfo _FileChannel$MapMode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(FileChannel$MapMode, init$, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileChannel$MapMode, toString, $String*)},
	{}
};

$InnerClassInfo _FileChannel$MapMode_InnerClassesInfo_[] = {
	{"java.nio.channels.FileChannel$MapMode", "java.nio.channels.FileChannel", "MapMode", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FileChannel$MapMode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.FileChannel$MapMode",
	"java.lang.Object",
	nullptr,
	_FileChannel$MapMode_FieldInfo_,
	_FileChannel$MapMode_MethodInfo_,
	nullptr,
	nullptr,
	_FileChannel$MapMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.FileChannel"
};

$Object* allocate$FileChannel$MapMode($Class* clazz) {
	return $of($alloc(FileChannel$MapMode));
}

FileChannel$MapMode* FileChannel$MapMode::READ_ONLY = nullptr;
FileChannel$MapMode* FileChannel$MapMode::READ_WRITE = nullptr;
FileChannel$MapMode* FileChannel$MapMode::PRIVATE = nullptr;

void FileChannel$MapMode::init$($String* name) {
	$set(this, name, name);
}

$String* FileChannel$MapMode::toString() {
	return this->name;
}

void clinit$FileChannel$MapMode($Class* class$) {
	$assignStatic(FileChannel$MapMode::READ_ONLY, $new(FileChannel$MapMode, "READ_ONLY"_s));
	$assignStatic(FileChannel$MapMode::READ_WRITE, $new(FileChannel$MapMode, "READ_WRITE"_s));
	$assignStatic(FileChannel$MapMode::PRIVATE, $new(FileChannel$MapMode, "PRIVATE"_s));
}

FileChannel$MapMode::FileChannel$MapMode() {
}

$Class* FileChannel$MapMode::load$($String* name, bool initialize) {
	$loadClass(FileChannel$MapMode, name, initialize, &_FileChannel$MapMode_ClassInfo_, clinit$FileChannel$MapMode, allocate$FileChannel$MapMode);
	return class$;
}

$Class* FileChannel$MapMode::class$ = nullptr;

		} // channels
	} // nio
} // java