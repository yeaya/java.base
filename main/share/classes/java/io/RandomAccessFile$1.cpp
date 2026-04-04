#include <java/io/RandomAccessFile$1.h>
#include <java/io/FileDescriptor.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void RandomAccessFile$1::init$($RandomAccessFile* this$0) {
	$set(this, this$0, this$0);
}

void RandomAccessFile$1::close() {
	$nc(this->this$0->fd)->close();
}

RandomAccessFile$1::RandomAccessFile$1() {
}

$Class* RandomAccessFile$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/RandomAccessFile;", nullptr, $FINAL | $SYNTHETIC, $field(RandomAccessFile$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/RandomAccessFile;)V", nullptr, 0, $method(RandomAccessFile$1, init$, void, $RandomAccessFile*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile$1, close, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.RandomAccessFile",
		"close",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.RandomAccessFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.RandomAccessFile$1",
		"java.lang.Object",
		"java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.RandomAccessFile"
	};
	$loadClass(RandomAccessFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomAccessFile$1);
	});
	return class$;
}

$Class* RandomAccessFile$1::class$ = nullptr;

	} // io
} // java