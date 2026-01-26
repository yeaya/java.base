#include <java/io/RandomAccessFile$1.h>

#include <java/io/FileDescriptor.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _RandomAccessFile$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/RandomAccessFile;", nullptr, $FINAL | $SYNTHETIC, $field(RandomAccessFile$1, this$0)},
	{}
};

$MethodInfo _RandomAccessFile$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/RandomAccessFile;)V", nullptr, 0, $method(RandomAccessFile$1, init$, void, $RandomAccessFile*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile$1, close, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _RandomAccessFile$1_EnclosingMethodInfo_ = {
	"java.io.RandomAccessFile",
	"close",
	"()V"
};

$InnerClassInfo _RandomAccessFile$1_InnerClassesInfo_[] = {
	{"java.io.RandomAccessFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RandomAccessFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.RandomAccessFile$1",
	"java.lang.Object",
	"java.io.Closeable",
	_RandomAccessFile$1_FieldInfo_,
	_RandomAccessFile$1_MethodInfo_,
	nullptr,
	&_RandomAccessFile$1_EnclosingMethodInfo_,
	_RandomAccessFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.RandomAccessFile"
};

$Object* allocate$RandomAccessFile$1($Class* clazz) {
	return $of($alloc(RandomAccessFile$1));
}

void RandomAccessFile$1::init$($RandomAccessFile* this$0) {
	$set(this, this$0, this$0);
}

void RandomAccessFile$1::close() {
	$nc(this->this$0->fd)->close();
}

RandomAccessFile$1::RandomAccessFile$1() {
}

$Class* RandomAccessFile$1::load$($String* name, bool initialize) {
	$loadClass(RandomAccessFile$1, name, initialize, &_RandomAccessFile$1_ClassInfo_, allocate$RandomAccessFile$1);
	return class$;
}

$Class* RandomAccessFile$1::class$ = nullptr;

	} // io
} // java