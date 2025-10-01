#include <java/nio/file/attribute/FileAttribute.h>

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
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _FileAttribute_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"value", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.FileAttribute",
	nullptr,
	nullptr,
	nullptr,
	_FileAttribute_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$FileAttribute($Class* clazz) {
	return $of($alloc(FileAttribute));
}

$Class* FileAttribute::load$($String* name, bool initialize) {
	$loadClass(FileAttribute, name, initialize, &_FileAttribute_ClassInfo_, allocate$FileAttribute);
	return class$;
}

$Class* FileAttribute::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java