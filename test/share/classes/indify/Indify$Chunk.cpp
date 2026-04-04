#include <indify/Indify$Chunk.h>
#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$Class* Indify$Chunk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Chunk, readFrom, void, $DataInputStream*), "java.io.IOException"},
		{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Chunk, writeTo, void, $DataOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"indify.Indify$Chunk",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$Chunk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indify$Chunk);
	});
	return class$;
}

$Class* Indify$Chunk::class$ = nullptr;

} // indify