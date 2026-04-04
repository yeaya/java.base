#include <java/io/FileOutputStream$1.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void FileOutputStream$1::init$($FileOutputStream* this$0) {
	$set(this, this$0, this$0);
}

void FileOutputStream$1::close() {
	$nc(this->this$0->fd)->close();
}

FileOutputStream$1::FileOutputStream$1() {
}

$Class* FileOutputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/FileOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(FileOutputStream$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileOutputStream;)V", nullptr, 0, $method(FileOutputStream$1, init$, void, $FileOutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileOutputStream$1, close, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.FileOutputStream",
		"close",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.FileOutputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.FileOutputStream$1",
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
		"java.io.FileOutputStream"
	};
	$loadClass(FileOutputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileOutputStream$1);
	});
	return class$;
}

$Class* FileOutputStream$1::class$ = nullptr;

	} // io
} // java