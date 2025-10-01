#include <java/io/DataOutput.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _DataOutput_MethodInfo_[] = {
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeByte", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeChar", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeShort", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DataOutput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.DataOutput",
	nullptr,
	nullptr,
	nullptr,
	_DataOutput_MethodInfo_
};

$Object* allocate$DataOutput($Class* clazz) {
	return $of($alloc(DataOutput));
}

$Class* DataOutput::load$($String* name, bool initialize) {
	$loadClass(DataOutput, name, initialize, &_DataOutput_ClassInfo_, allocate$DataOutput);
	return class$;
}

$Class* DataOutput::class$ = nullptr;

	} // io
} // java