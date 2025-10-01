#include <java/net/FileNameMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$MethodInfo _FileNameMap_MethodInfo_[] = {
	{"getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileNameMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.FileNameMap",
	nullptr,
	nullptr,
	nullptr,
	_FileNameMap_MethodInfo_
};

$Object* allocate$FileNameMap($Class* clazz) {
	return $of($alloc(FileNameMap));
}

$Class* FileNameMap::load$($String* name, bool initialize) {
	$loadClass(FileNameMap, name, initialize, &_FileNameMap_ClassInfo_, allocate$FileNameMap);
	return class$;
}

$Class* FileNameMap::class$ = nullptr;

	} // net
} // java