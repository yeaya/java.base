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

$Class* JavaIORandomAccessFileAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"openAndDelete", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/RandomAccessFile;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIORandomAccessFileAccess, openAndDelete, $RandomAccessFile*, $File*, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaIORandomAccessFileAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaIORandomAccessFileAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaIORandomAccessFileAccess);
	});
	return class$;
}

$Class* JavaIORandomAccessFileAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk