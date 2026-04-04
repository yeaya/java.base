#include <java/io/DataInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* DataInput::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readBoolean, bool), "java.io.IOException"},
		{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readByte, int8_t), "java.io.IOException"},
		{"readChar", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readChar, char16_t), "java.io.IOException"},
		{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readDouble, double), "java.io.IOException"},
		{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readFloat, float), "java.io.IOException"},
		{"readFully", "([B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readFully, void, $bytes*), "java.io.IOException"},
		{"readFully", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readFully, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readInt, int32_t), "java.io.IOException"},
		{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readLine, $String*), "java.io.IOException"},
		{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readLong, int64_t), "java.io.IOException"},
		{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readShort, int16_t), "java.io.IOException"},
		{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readUTF, $String*), "java.io.IOException"},
		{"readUnsignedByte", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readUnsignedByte, int32_t), "java.io.IOException"},
		{"readUnsignedShort", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, readUnsignedShort, int32_t), "java.io.IOException"},
		{"skipBytes", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataInput, skipBytes, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.DataInput",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DataInput, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataInput);
	});
	return class$;
}

$Class* DataInput::class$ = nullptr;

	} // io
} // java