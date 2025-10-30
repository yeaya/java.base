#include <java/io/DataInput.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _DataInput_MethodInfo_[] = {
	{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"skipBytes", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DataInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.DataInput",
	nullptr,
	nullptr,
	nullptr,
	_DataInput_MethodInfo_
};

$Object* allocate$DataInput($Class* clazz) {
	return $of($alloc(DataInput));
}

$Class* DataInput::load$($String* name, bool initialize) {
	$loadClass(DataInput, name, initialize, &_DataInput_ClassInfo_, allocate$DataInput);
	return class$;
}

$Class* DataInput::class$ = nullptr;

	} // io
} // java