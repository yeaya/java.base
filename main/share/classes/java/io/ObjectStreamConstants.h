#ifndef _java_io_ObjectStreamConstants_h_
#define _java_io_ObjectStreamConstants_h_
//$ interface java.io.ObjectStreamConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PROTOCOL_VERSION_1")
#undef PROTOCOL_VERSION_1
#pragma push_macro("PROTOCOL_VERSION_2")
#undef PROTOCOL_VERSION_2
#pragma push_macro("SC_BLOCK_DATA")
#undef SC_BLOCK_DATA
#pragma push_macro("SC_ENUM")
#undef SC_ENUM
#pragma push_macro("SC_EXTERNALIZABLE")
#undef SC_EXTERNALIZABLE
#pragma push_macro("SC_SERIALIZABLE")
#undef SC_SERIALIZABLE
#pragma push_macro("SC_WRITE_METHOD")
#undef SC_WRITE_METHOD
#pragma push_macro("SERIAL_FILTER_PERMISSION")
#undef SERIAL_FILTER_PERMISSION
#pragma push_macro("STREAM_MAGIC")
#undef STREAM_MAGIC
#pragma push_macro("STREAM_VERSION")
#undef STREAM_VERSION
#pragma push_macro("SUBCLASS_IMPLEMENTATION_PERMISSION")
#undef SUBCLASS_IMPLEMENTATION_PERMISSION
#pragma push_macro("SUBSTITUTION_PERMISSION")
#undef SUBSTITUTION_PERMISSION
#pragma push_macro("TC_ARRAY")
#undef TC_ARRAY
#pragma push_macro("TC_BASE")
#undef TC_BASE
#pragma push_macro("TC_BLOCKDATA")
#undef TC_BLOCKDATA
#pragma push_macro("TC_BLOCKDATALONG")
#undef TC_BLOCKDATALONG
#pragma push_macro("TC_CLASS")
#undef TC_CLASS
#pragma push_macro("TC_CLASSDESC")
#undef TC_CLASSDESC
#pragma push_macro("TC_ENDBLOCKDATA")
#undef TC_ENDBLOCKDATA
#pragma push_macro("TC_ENUM")
#undef TC_ENUM
#pragma push_macro("TC_EXCEPTION")
#undef TC_EXCEPTION
#pragma push_macro("TC_LONGSTRING")
#undef TC_LONGSTRING
#pragma push_macro("TC_MAX")
#undef TC_MAX
#pragma push_macro("TC_NULL")
#undef TC_NULL
#pragma push_macro("TC_OBJECT")
#undef TC_OBJECT
#pragma push_macro("TC_PROXYCLASSDESC")
#undef TC_PROXYCLASSDESC
#pragma push_macro("TC_REFERENCE")
#undef TC_REFERENCE
#pragma push_macro("TC_RESET")
#undef TC_RESET
#pragma push_macro("TC_STRING")
#undef TC_STRING

namespace java {
	namespace io {
		class SerializablePermission;
	}
}

namespace java {
	namespace io {

class $export ObjectStreamConstants : public ::java::lang::Object {
	$interface(ObjectStreamConstants, 0, ::java::lang::Object)
public:
	static const int16_t STREAM_MAGIC = (int16_t)0x0000ACED;
	static const int16_t STREAM_VERSION = 5;
	static const int8_t TC_BASE = 112;
	static const int8_t TC_NULL = (int8_t)112;
	static const int8_t TC_REFERENCE = (int8_t)113;
	static const int8_t TC_CLASSDESC = (int8_t)114;
	static const int8_t TC_OBJECT = (int8_t)115;
	static const int8_t TC_STRING = (int8_t)116;
	static const int8_t TC_ARRAY = (int8_t)117;
	static const int8_t TC_CLASS = (int8_t)118;
	static const int8_t TC_BLOCKDATA = (int8_t)119;
	static const int8_t TC_ENDBLOCKDATA = (int8_t)120;
	static const int8_t TC_RESET = (int8_t)121;
	static const int8_t TC_BLOCKDATALONG = (int8_t)122;
	static const int8_t TC_EXCEPTION = (int8_t)123;
	static const int8_t TC_LONGSTRING = (int8_t)124;
	static const int8_t TC_PROXYCLASSDESC = (int8_t)125;
	static const int8_t TC_ENUM = (int8_t)126;
	static const int8_t TC_MAX = (int8_t)126;
	static const int32_t baseWireHandle = 0x007E0000;
	static const int8_t SC_WRITE_METHOD = 1;
	static const int8_t SC_BLOCK_DATA = 8;
	static const int8_t SC_SERIALIZABLE = 2;
	static const int8_t SC_EXTERNALIZABLE = 4;
	static const int8_t SC_ENUM = 16;
	static ::java::io::SerializablePermission* SUBSTITUTION_PERMISSION;
	static ::java::io::SerializablePermission* SUBCLASS_IMPLEMENTATION_PERMISSION;
	static ::java::io::SerializablePermission* SERIAL_FILTER_PERMISSION;
	static const int32_t PROTOCOL_VERSION_1 = 1;
	static const int32_t PROTOCOL_VERSION_2 = 2;
};

	} // io
} // java

#pragma pop_macro("PROTOCOL_VERSION_1")
#pragma pop_macro("PROTOCOL_VERSION_2")
#pragma pop_macro("SC_BLOCK_DATA")
#pragma pop_macro("SC_ENUM")
#pragma pop_macro("SC_EXTERNALIZABLE")
#pragma pop_macro("SC_SERIALIZABLE")
#pragma pop_macro("SC_WRITE_METHOD")
#pragma pop_macro("SERIAL_FILTER_PERMISSION")
#pragma pop_macro("STREAM_MAGIC")
#pragma pop_macro("STREAM_VERSION")
#pragma pop_macro("SUBCLASS_IMPLEMENTATION_PERMISSION")
#pragma pop_macro("SUBSTITUTION_PERMISSION")
#pragma pop_macro("TC_ARRAY")
#pragma pop_macro("TC_BASE")
#pragma pop_macro("TC_BLOCKDATA")
#pragma pop_macro("TC_BLOCKDATALONG")
#pragma pop_macro("TC_CLASS")
#pragma pop_macro("TC_CLASSDESC")
#pragma pop_macro("TC_ENDBLOCKDATA")
#pragma pop_macro("TC_ENUM")
#pragma pop_macro("TC_EXCEPTION")
#pragma pop_macro("TC_LONGSTRING")
#pragma pop_macro("TC_MAX")
#pragma pop_macro("TC_NULL")
#pragma pop_macro("TC_OBJECT")
#pragma pop_macro("TC_PROXYCLASSDESC")
#pragma pop_macro("TC_REFERENCE")
#pragma pop_macro("TC_RESET")
#pragma pop_macro("TC_STRING")

#endif // _java_io_ObjectStreamConstants_h_