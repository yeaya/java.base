#include <java/io/FileOutputStream$1.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FileOutputStream$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/FileOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(FileOutputStream$1, this$0)},
	{}
};

$MethodInfo _FileOutputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileOutputStream;)V", nullptr, 0, $method(FileOutputStream$1, init$, void, $FileOutputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileOutputStream$1, close, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _FileOutputStream$1_EnclosingMethodInfo_ = {
	"java.io.FileOutputStream",
	"close",
	"()V"
};

$InnerClassInfo _FileOutputStream$1_InnerClassesInfo_[] = {
	{"java.io.FileOutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileOutputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.FileOutputStream$1",
	"java.lang.Object",
	"java.io.Closeable",
	_FileOutputStream$1_FieldInfo_,
	_FileOutputStream$1_MethodInfo_,
	nullptr,
	&_FileOutputStream$1_EnclosingMethodInfo_,
	_FileOutputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.FileOutputStream"
};

$Object* allocate$FileOutputStream$1($Class* clazz) {
	return $of($alloc(FileOutputStream$1));
}

void FileOutputStream$1::init$($FileOutputStream* this$0) {
	$set(this, this$0, this$0);
}

void FileOutputStream$1::close() {
	$nc(this->this$0->fd)->close();
}

FileOutputStream$1::FileOutputStream$1() {
}

$Class* FileOutputStream$1::load$($String* name, bool initialize) {
	$loadClass(FileOutputStream$1, name, initialize, &_FileOutputStream$1_ClassInfo_, allocate$FileOutputStream$1);
	return class$;
}

$Class* FileOutputStream$1::class$ = nullptr;

	} // io
} // java