#include <java/io/DataOutput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* DataOutput::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, write, void, int32_t), "java.io.IOException"},
		{"write", "([B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, write, void, $bytes*), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeBoolean, void, bool), "java.io.IOException"},
		{"writeByte", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeByte, void, int32_t), "java.io.IOException"},
		{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeBytes, void, $String*), "java.io.IOException"},
		{"writeChar", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeChar, void, int32_t), "java.io.IOException"},
		{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeChars, void, $String*), "java.io.IOException"},
		{"writeDouble", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeDouble, void, double), "java.io.IOException"},
		{"writeFloat", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeFloat, void, float), "java.io.IOException"},
		{"writeInt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeInt, void, int32_t), "java.io.IOException"},
		{"writeLong", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeLong, void, int64_t), "java.io.IOException"},
		{"writeShort", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeShort, void, int32_t), "java.io.IOException"},
		{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataOutput, writeUTF, void, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.DataOutput",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DataOutput, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataOutput);
	});
	return class$;
}

$Class* DataOutput::class$ = nullptr;

	} // io
} // java