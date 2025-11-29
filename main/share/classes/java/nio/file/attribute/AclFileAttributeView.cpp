#include <java/nio/file/attribute/AclFileAttributeView.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _AclFileAttributeView_MethodInfo_[] = {
	{"getAcl", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/attribute/AclEntry;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setAcl", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/attribute/AclEntry;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AclFileAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.AclFileAttributeView",
	nullptr,
	"java.nio.file.attribute.FileOwnerAttributeView",
	nullptr,
	_AclFileAttributeView_MethodInfo_
};

$Object* allocate$AclFileAttributeView($Class* clazz) {
	return $of($alloc(AclFileAttributeView));
}

$Class* AclFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(AclFileAttributeView, name, initialize, &_AclFileAttributeView_ClassInfo_, allocate$AclFileAttributeView);
	return class$;
}

$Class* AclFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java