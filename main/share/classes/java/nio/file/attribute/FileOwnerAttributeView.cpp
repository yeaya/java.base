#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* FileOwnerAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOwner", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileOwnerAttributeView, getOwner, $UserPrincipal*), "java.io.IOException"},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"setOwner", "(Ljava/nio/file/attribute/UserPrincipal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileOwnerAttributeView, setOwner, void, $UserPrincipal*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.FileOwnerAttributeView",
		nullptr,
		"java.nio.file.attribute.FileAttributeView",
		nullptr,
		methodInfos$$
	};
	$loadClass(FileOwnerAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileOwnerAttributeView);
	});
	return class$;
}

$Class* FileOwnerAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java