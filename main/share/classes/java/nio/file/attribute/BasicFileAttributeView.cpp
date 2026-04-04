#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* BasicFileAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributeView, readAttributes, $BasicFileAttributes*), "java.io.IOException"},
		{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributeView, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.BasicFileAttributeView",
		nullptr,
		"java.nio.file.attribute.FileAttributeView",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileAttributeView);
	});
	return class$;
}

$Class* BasicFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java