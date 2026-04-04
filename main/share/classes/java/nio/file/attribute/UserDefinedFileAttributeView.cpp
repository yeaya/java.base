#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* UserDefinedFileAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserDefinedFileAttributeView, delete$, void, $String*), "java.io.IOException"},
		{"list", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(UserDefinedFileAttributeView, list, $List*), "java.io.IOException"},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"read", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserDefinedFileAttributeView, read, int32_t, $String*, $ByteBuffer*), "java.io.IOException"},
		{"size", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserDefinedFileAttributeView, size, int32_t, $String*), "java.io.IOException"},
		{"write", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserDefinedFileAttributeView, write, int32_t, $String*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.UserDefinedFileAttributeView",
		nullptr,
		"java.nio.file.attribute.FileAttributeView",
		nullptr,
		methodInfos$$
	};
	$loadClass(UserDefinedFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserDefinedFileAttributeView);
	});
	return class$;
}

$Class* UserDefinedFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java