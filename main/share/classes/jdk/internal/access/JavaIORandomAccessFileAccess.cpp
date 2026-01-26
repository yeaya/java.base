#include <jdk/internal/access/JavaIORandomAccessFileAccess.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaIORandomAccessFileAccess_MethodInfo_[] = {
	{"openAndDelete", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/RandomAccessFile;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIORandomAccessFileAccess, openAndDelete, $RandomAccessFile*, $File*, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _JavaIORandomAccessFileAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaIORandomAccessFileAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaIORandomAccessFileAccess_MethodInfo_
};

$Object* allocate$JavaIORandomAccessFileAccess($Class* clazz) {
	return $of($alloc(JavaIORandomAccessFileAccess));
}

$Class* JavaIORandomAccessFileAccess::load$($String* name, bool initialize) {
	$loadClass(JavaIORandomAccessFileAccess, name, initialize, &_JavaIORandomAccessFileAccess_ClassInfo_, allocate$JavaIORandomAccessFileAccess);
	return class$;
}

$Class* JavaIORandomAccessFileAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk