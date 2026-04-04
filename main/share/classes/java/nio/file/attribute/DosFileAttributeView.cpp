#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* DosFileAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT},
		{"setArchive", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributeView, setArchive, void, bool), "java.io.IOException"},
		{"setHidden", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributeView, setHidden, void, bool), "java.io.IOException"},
		{"setReadOnly", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributeView, setReadOnly, void, bool), "java.io.IOException"},
		{"setSystem", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributeView, setSystem, void, bool), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.DosFileAttributeView",
		nullptr,
		"java.nio.file.attribute.BasicFileAttributeView",
		nullptr,
		methodInfos$$
	};
	$loadClass(DosFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DosFileAttributeView);
	});
	return class$;
}

$Class* DosFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java