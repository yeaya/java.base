#include <jdk/internal/module/ModuleInfo$CountingDataInput.h>

#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$CountingDataInput_FieldInfo_[] = {
	{"delegate", "Ljava/io/DataInput;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$CountingDataInput, delegate)},
	{"count", "J", nullptr, $PRIVATE, $field(ModuleInfo$CountingDataInput, count$)},
	{}
};

$MethodInfo _ModuleInfo$CountingDataInput_MethodInfo_[] = {
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ModuleInfo$CountingDataInput::*)($DataInput*)>(&ModuleInfo$CountingDataInput::init$))},
	{"count", "()J", nullptr, 0},
	{"readBoolean", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readDouble", "()D", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFloat", "()F", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readLong", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skipBytes", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModuleInfo$CountingDataInput_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$CountingDataInput", "jdk.internal.module.ModuleInfo", "CountingDataInput", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$CountingDataInput_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$CountingDataInput",
	"java.lang.Object",
	"java.io.DataInput",
	_ModuleInfo$CountingDataInput_FieldInfo_,
	_ModuleInfo$CountingDataInput_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$CountingDataInput_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$CountingDataInput($Class* clazz) {
	return $of($alloc(ModuleInfo$CountingDataInput));
}

void ModuleInfo$CountingDataInput::init$($DataInput* delegate) {
	$set(this, delegate, delegate);
}

int64_t ModuleInfo$CountingDataInput::count() {
	return this->count$;
}

void ModuleInfo$CountingDataInput::readFully($bytes* b) {
	$nc(this->delegate)->readFully(b, 0, $nc(b)->length);
	this->count$ += $nc(b)->length;
}

void ModuleInfo$CountingDataInput::readFully($bytes* b, int32_t off, int32_t len) {
	$nc(this->delegate)->readFully(b, off, len);
	this->count$ += len;
}

int32_t ModuleInfo$CountingDataInput::skipBytes(int32_t n) {
	int32_t skip = $nc(this->delegate)->skipBytes(n);
	this->count$ += skip;
	return skip;
}

bool ModuleInfo$CountingDataInput::readBoolean() {
	bool b = $nc(this->delegate)->readBoolean();
	++this->count$;
	return b;
}

int8_t ModuleInfo$CountingDataInput::readByte() {
	int8_t b = $nc(this->delegate)->readByte();
	++this->count$;
	return b;
}

int32_t ModuleInfo$CountingDataInput::readUnsignedByte() {
	int32_t i = $nc(this->delegate)->readUnsignedByte();
	++this->count$;
	return i;
}

int16_t ModuleInfo$CountingDataInput::readShort() {
	int16_t s = $nc(this->delegate)->readShort();
	this->count$ += 2;
	return s;
}

int32_t ModuleInfo$CountingDataInput::readUnsignedShort() {
	int32_t s = $nc(this->delegate)->readUnsignedShort();
	this->count$ += 2;
	return s;
}

char16_t ModuleInfo$CountingDataInput::readChar() {
	char16_t c = $nc(this->delegate)->readChar();
	this->count$ += 2;
	return c;
}

int32_t ModuleInfo$CountingDataInput::readInt() {
	int32_t i = $nc(this->delegate)->readInt();
	this->count$ += 4;
	return i;
}

int64_t ModuleInfo$CountingDataInput::readLong() {
	int64_t l = $nc(this->delegate)->readLong();
	this->count$ += 8;
	return l;
}

float ModuleInfo$CountingDataInput::readFloat() {
	float f = $nc(this->delegate)->readFloat();
	this->count$ += 4;
	return f;
}

double ModuleInfo$CountingDataInput::readDouble() {
	double d = $nc(this->delegate)->readDouble();
	this->count$ += 8;
	return d;
}

$String* ModuleInfo$CountingDataInput::readLine() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

$String* ModuleInfo$CountingDataInput::readUTF() {
	return $DataInputStream::readUTF(this);
}

ModuleInfo$CountingDataInput::ModuleInfo$CountingDataInput() {
}

$Class* ModuleInfo$CountingDataInput::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$CountingDataInput, name, initialize, &_ModuleInfo$CountingDataInput_ClassInfo_, allocate$ModuleInfo$CountingDataInput);
	return class$;
}

$Class* ModuleInfo$CountingDataInput::class$ = nullptr;

		} // module
	} // internal
} // jdk