#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* FileAttribute::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileAttribute, name, $String*)},
		{"value", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(FileAttribute, value, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.FileAttribute",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(FileAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileAttribute);
	});
	return class$;
}

$Class* FileAttribute::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java