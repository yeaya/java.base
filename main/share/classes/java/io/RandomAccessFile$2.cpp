#include <java/io/RandomAccessFile$2.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaIORandomAccessFileAccess = ::jdk::internal::access::JavaIORandomAccessFileAccess;

namespace java {
	namespace io {

$MethodInfo _RandomAccessFile$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RandomAccessFile$2::*)()>(&RandomAccessFile$2::init$))},
	{"openAndDelete", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/RandomAccessFile;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _RandomAccessFile$2_EnclosingMethodInfo_ = {
	"java.io.RandomAccessFile",
	nullptr,
	nullptr
};

$InnerClassInfo _RandomAccessFile$2_InnerClassesInfo_[] = {
	{"java.io.RandomAccessFile$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RandomAccessFile$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.RandomAccessFile$2",
	"java.lang.Object",
	"jdk.internal.access.JavaIORandomAccessFileAccess",
	nullptr,
	_RandomAccessFile$2_MethodInfo_,
	nullptr,
	&_RandomAccessFile$2_EnclosingMethodInfo_,
	_RandomAccessFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.RandomAccessFile"
};

$Object* allocate$RandomAccessFile$2($Class* clazz) {
	return $of($alloc(RandomAccessFile$2));
}

void RandomAccessFile$2::init$() {
}

$RandomAccessFile* RandomAccessFile$2::openAndDelete($File* file, $String* mode) {
	return $new($RandomAccessFile, file, mode, true);
}

RandomAccessFile$2::RandomAccessFile$2() {
}

$Class* RandomAccessFile$2::load$($String* name, bool initialize) {
	$loadClass(RandomAccessFile$2, name, initialize, &_RandomAccessFile$2_ClassInfo_, allocate$RandomAccessFile$2);
	return class$;
}

$Class* RandomAccessFile$2::class$ = nullptr;

	} // io
} // java