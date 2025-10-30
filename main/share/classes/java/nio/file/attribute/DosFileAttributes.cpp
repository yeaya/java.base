#include <java/nio/file/attribute/DosFileAttributes.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _DosFileAttributes_MethodInfo_[] = {
	{"isArchive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isHidden", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSystem", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DosFileAttributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.DosFileAttributes",
	nullptr,
	"java.nio.file.attribute.BasicFileAttributes",
	nullptr,
	_DosFileAttributes_MethodInfo_
};

$Object* allocate$DosFileAttributes($Class* clazz) {
	return $of($alloc(DosFileAttributes));
}

$Class* DosFileAttributes::load$($String* name, bool initialize) {
	$loadClass(DosFileAttributes, name, initialize, &_DosFileAttributes_ClassInfo_, allocate$DosFileAttributes);
	return class$;
}

$Class* DosFileAttributes::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java