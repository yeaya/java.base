#include <java/io/ObjectStreamConstants.h>

#include <java/io/SerializablePermission.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PROTOCOL_VERSION_1
#undef PROTOCOL_VERSION_2
#undef SC_BLOCK_DATA
#undef SC_ENUM
#undef SC_EXTERNALIZABLE
#undef SC_SERIALIZABLE
#undef SC_WRITE_METHOD
#undef SERIAL_FILTER_PERMISSION
#undef STREAM_MAGIC
#undef STREAM_VERSION
#undef SUBCLASS_IMPLEMENTATION_PERMISSION
#undef SUBSTITUTION_PERMISSION
#undef TC_ARRAY
#undef TC_BASE
#undef TC_BLOCKDATA
#undef TC_BLOCKDATALONG
#undef TC_CLASS
#undef TC_CLASSDESC
#undef TC_ENDBLOCKDATA
#undef TC_ENUM
#undef TC_EXCEPTION
#undef TC_LONGSTRING
#undef TC_MAX
#undef TC_NULL
#undef TC_OBJECT
#undef TC_PROXYCLASSDESC
#undef TC_REFERENCE
#undef TC_RESET
#undef TC_STRING

using $SerializablePermission = ::java::io::SerializablePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamConstants_FieldInfo_[] = {
	{"STREAM_MAGIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, STREAM_MAGIC)},
	{"STREAM_VERSION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, STREAM_VERSION)},
	{"TC_BASE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_BASE)},
	{"TC_NULL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_NULL)},
	{"TC_REFERENCE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_REFERENCE)},
	{"TC_CLASSDESC", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_CLASSDESC)},
	{"TC_OBJECT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_OBJECT)},
	{"TC_STRING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_STRING)},
	{"TC_ARRAY", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_ARRAY)},
	{"TC_CLASS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_CLASS)},
	{"TC_BLOCKDATA", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_BLOCKDATA)},
	{"TC_ENDBLOCKDATA", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_ENDBLOCKDATA)},
	{"TC_RESET", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_RESET)},
	{"TC_BLOCKDATALONG", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_BLOCKDATALONG)},
	{"TC_EXCEPTION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_EXCEPTION)},
	{"TC_LONGSTRING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_LONGSTRING)},
	{"TC_PROXYCLASSDESC", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_PROXYCLASSDESC)},
	{"TC_ENUM", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_ENUM)},
	{"TC_MAX", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, TC_MAX)},
	{"baseWireHandle", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, baseWireHandle)},
	{"SC_WRITE_METHOD", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, SC_WRITE_METHOD)},
	{"SC_BLOCK_DATA", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, SC_BLOCK_DATA)},
	{"SC_SERIALIZABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, SC_SERIALIZABLE)},
	{"SC_EXTERNALIZABLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, SC_EXTERNALIZABLE)},
	{"SC_ENUM", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, SC_ENUM)},
	{"SUBSTITUTION_PERMISSION", "Ljava/io/SerializablePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ObjectStreamConstants, SUBSTITUTION_PERMISSION)},
	{"SUBCLASS_IMPLEMENTATION_PERMISSION", "Ljava/io/SerializablePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ObjectStreamConstants, SUBCLASS_IMPLEMENTATION_PERMISSION)},
	{"SERIAL_FILTER_PERMISSION", "Ljava/io/SerializablePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ObjectStreamConstants, SERIAL_FILTER_PERMISSION)},
	{"PROTOCOL_VERSION_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, PROTOCOL_VERSION_1)},
	{"PROTOCOL_VERSION_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ObjectStreamConstants, PROTOCOL_VERSION_2)},
	{}
};

$ClassInfo _ObjectStreamConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectStreamConstants",
	nullptr,
	nullptr,
	_ObjectStreamConstants_FieldInfo_
};

$Object* allocate$ObjectStreamConstants($Class* clazz) {
	return $of($alloc(ObjectStreamConstants));
}


$SerializablePermission* ObjectStreamConstants::SUBSTITUTION_PERMISSION = nullptr;

$SerializablePermission* ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION = nullptr;

$SerializablePermission* ObjectStreamConstants::SERIAL_FILTER_PERMISSION = nullptr;

void clinit$ObjectStreamConstants($Class* class$) {
	$assignStatic(ObjectStreamConstants::SUBSTITUTION_PERMISSION, $new($SerializablePermission, "enableSubstitution"_s));
	$assignStatic(ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION, $new($SerializablePermission, "enableSubclassImplementation"_s));
	$assignStatic(ObjectStreamConstants::SERIAL_FILTER_PERMISSION, $new($SerializablePermission, "serialFilter"_s));
}

$Class* ObjectStreamConstants::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamConstants, name, initialize, &_ObjectStreamConstants_ClassInfo_, clinit$ObjectStreamConstants, allocate$ObjectStreamConstants);
	return class$;
}

$Class* ObjectStreamConstants::class$ = nullptr;

	} // io
} // java