#include <jdk/internal/module/ModuleInfo$DataInputWrapper.h>

#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ModuleInfo = ::jdk::internal::module::ModuleInfo;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$DataInputWrapper_FieldInfo_[] = {
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$DataInputWrapper, bb)},
	{}
};

$MethodInfo _ModuleInfo$DataInputWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(ModuleInfo$DataInputWrapper::*)($ByteBuffer*)>(&ModuleInfo$DataInputWrapper::init$))},
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
	{"skipBytes", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ModuleInfo$DataInputWrapper_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$DataInputWrapper", "jdk.internal.module.ModuleInfo", "DataInputWrapper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$DataInputWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$DataInputWrapper",
	"java.lang.Object",
	"java.io.DataInput",
	_ModuleInfo$DataInputWrapper_FieldInfo_,
	_ModuleInfo$DataInputWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$DataInputWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$DataInputWrapper($Class* clazz) {
	return $of($alloc(ModuleInfo$DataInputWrapper));
}

void ModuleInfo$DataInputWrapper::init$($ByteBuffer* bb) {
	$set(this, bb, bb);
}

void ModuleInfo$DataInputWrapper::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length);
}

void ModuleInfo$DataInputWrapper::readFully($bytes* b, int32_t off, int32_t len) {
	try {
		$nc(this->bb)->get(b, off, len);
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
}

int32_t ModuleInfo$DataInputWrapper::skipBytes(int32_t n) {
	int32_t skip = $Math::min(n, $nc(this->bb)->remaining());
	$nc(this->bb)->position($nc(this->bb)->position() + skip);
	return skip;
}

bool ModuleInfo$DataInputWrapper::readBoolean() {
	try {
		int32_t ch = $nc(this->bb)->get();
		return (ch != 0);
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int8_t ModuleInfo$DataInputWrapper::readByte() {
	try {
		return $nc(this->bb)->get();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t ModuleInfo$DataInputWrapper::readUnsignedByte() {
	try {
		return (int32_t)(((int32_t)$nc(this->bb)->get()) & (uint32_t)255);
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int16_t ModuleInfo$DataInputWrapper::readShort() {
	try {
		return $nc(this->bb)->getShort();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t ModuleInfo$DataInputWrapper::readUnsignedShort() {
	try {
		return (int32_t)(((int32_t)$nc(this->bb)->getShort()) & (uint32_t)0x0000FFFF);
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

char16_t ModuleInfo$DataInputWrapper::readChar() {
	try {
		return $nc(this->bb)->getChar();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t ModuleInfo$DataInputWrapper::readInt() {
	try {
		return $nc(this->bb)->getInt();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

int64_t ModuleInfo$DataInputWrapper::readLong() {
	try {
		return $nc(this->bb)->getLong();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

float ModuleInfo$DataInputWrapper::readFloat() {
	try {
		return $nc(this->bb)->getFloat();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

double ModuleInfo$DataInputWrapper::readDouble() {
	try {
		return $nc(this->bb)->getDouble();
	} catch ($BufferUnderflowException&) {
		$var($BufferUnderflowException, e, $catch());
		$throwNew($EOFException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$String* ModuleInfo$DataInputWrapper::readLine() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

$String* ModuleInfo$DataInputWrapper::readUTF() {
	return $DataInputStream::readUTF(this);
}

ModuleInfo$DataInputWrapper::ModuleInfo$DataInputWrapper() {
}

$Class* ModuleInfo$DataInputWrapper::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$DataInputWrapper, name, initialize, &_ModuleInfo$DataInputWrapper_ClassInfo_, allocate$ModuleInfo$DataInputWrapper);
	return class$;
}

$Class* ModuleInfo$DataInputWrapper::class$ = nullptr;

		} // module
	} // internal
} // jdk