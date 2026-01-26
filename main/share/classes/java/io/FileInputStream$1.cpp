#include <java/io/FileInputStream$1.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FileInputStream$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/FileInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(FileInputStream$1, this$0)},
	{}
};

$MethodInfo _FileInputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileInputStream;)V", nullptr, 0, $method(FileInputStream$1, init$, void, $FileInputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileInputStream$1, close, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _FileInputStream$1_EnclosingMethodInfo_ = {
	"java.io.FileInputStream",
	"close",
	"()V"
};

$InnerClassInfo _FileInputStream$1_InnerClassesInfo_[] = {
	{"java.io.FileInputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileInputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.FileInputStream$1",
	"java.lang.Object",
	"java.io.Closeable",
	_FileInputStream$1_FieldInfo_,
	_FileInputStream$1_MethodInfo_,
	nullptr,
	&_FileInputStream$1_EnclosingMethodInfo_,
	_FileInputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.FileInputStream"
};

$Object* allocate$FileInputStream$1($Class* clazz) {
	return $of($alloc(FileInputStream$1));
}

void FileInputStream$1::init$($FileInputStream* this$0) {
	$set(this, this$0, this$0);
}

void FileInputStream$1::close() {
	$nc(this->this$0->fd)->close();
}

FileInputStream$1::FileInputStream$1() {
}

$Class* FileInputStream$1::load$($String* name, bool initialize) {
	$loadClass(FileInputStream$1, name, initialize, &_FileInputStream$1_ClassInfo_, allocate$FileInputStream$1);
	return class$;
}

$Class* FileInputStream$1::class$ = nullptr;

	} // io
} // java