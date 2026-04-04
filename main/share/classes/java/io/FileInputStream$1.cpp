#include <java/io/FileInputStream$1.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void FileInputStream$1::init$($FileInputStream* this$0) {
	$set(this, this$0, this$0);
}

void FileInputStream$1::close() {
	$nc(this->this$0->fd)->close();
}

FileInputStream$1::FileInputStream$1() {
}

$Class* FileInputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/FileInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(FileInputStream$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileInputStream;)V", nullptr, 0, $method(FileInputStream$1, init$, void, $FileInputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileInputStream$1, close, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.FileInputStream",
		"close",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.FileInputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.FileInputStream$1",
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
		"java.io.FileInputStream"
	};
	$loadClass(FileInputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileInputStream$1);
	});
	return class$;
}

$Class* FileInputStream$1::class$ = nullptr;

	} // io
} // java