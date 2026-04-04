#include <java/nio/file/attribute/DosFileAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* DosFileAttributes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isArchive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributes, isArchive, bool)},
		{"isHidden", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributes, isHidden, bool)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributes, isReadOnly, bool)},
		{"isSystem", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DosFileAttributes, isSystem, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.DosFileAttributes",
		nullptr,
		"java.nio.file.attribute.BasicFileAttributes",
		nullptr,
		methodInfos$$
	};
	$loadClass(DosFileAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DosFileAttributes);
	});
	return class$;
}

$Class* DosFileAttributes::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java