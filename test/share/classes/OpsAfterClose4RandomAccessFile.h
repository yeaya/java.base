#ifndef _OpsAfterClose4RandomAccessFile_h_
#define _OpsAfterClose4RandomAccessFile_h_
//$ class OpsAfterClose4RandomAccessFile
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("SET_LENGTH")
#undef SET_LENGTH
#pragma push_macro("SKIP_BYTES")
#undef SKIP_BYTES
#pragma push_macro("READ_BUF")
#undef READ_BUF
#pragma push_macro("GET_FD")
#undef GET_FD
#pragma push_macro("GET_LENGTH")
#undef GET_LENGTH
#pragma push_macro("WRITE_BUF")
#undef WRITE_BUF
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("GET_FILE_PTR")
#undef GET_FILE_PTR
#pragma push_macro("GET_CHANNEL")
#undef GET_CHANNEL
#pragma push_macro("SEEK")
#undef SEEK
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class $export OpsAfterClose4RandomAccessFile : public ::java::lang::Enum {
	$class(OpsAfterClose4RandomAccessFile, 0, ::java::lang::Enum)
public:
	OpsAfterClose4RandomAccessFile();
	static $Array<OpsAfterClose4RandomAccessFile>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::RandomAccessFile* r) {return false;}
	static void main($StringArray* args);
	static bool testRandomAccessFile(::java::io::RandomAccessFile* r);
	static ::OpsAfterClose4RandomAccessFile* valueOf($String* name);
	static $Array<OpsAfterClose4RandomAccessFile>* values();
	static ::OpsAfterClose4RandomAccessFile* READ;
	static ::OpsAfterClose4RandomAccessFile* READ_BUF;
	static ::OpsAfterClose4RandomAccessFile* GET_CHANNEL;
	static ::OpsAfterClose4RandomAccessFile* GET_FD;
	static ::OpsAfterClose4RandomAccessFile* GET_FILE_PTR;
	static ::OpsAfterClose4RandomAccessFile* GET_LENGTH;
	static ::OpsAfterClose4RandomAccessFile* SEEK;
	static ::OpsAfterClose4RandomAccessFile* SET_LENGTH;
	static ::OpsAfterClose4RandomAccessFile* SKIP_BYTES;
	static ::OpsAfterClose4RandomAccessFile* WRITE;
	static ::OpsAfterClose4RandomAccessFile* WRITE_BUF;
	static ::OpsAfterClose4RandomAccessFile* CLOSE;
	static $Array<OpsAfterClose4RandomAccessFile>* $VALUES;
};

#pragma pop_macro("READ")
#pragma pop_macro("SET_LENGTH")
#pragma pop_macro("SKIP_BYTES")
#pragma pop_macro("READ_BUF")
#pragma pop_macro("GET_FD")
#pragma pop_macro("GET_LENGTH")
#pragma pop_macro("WRITE_BUF")
#pragma pop_macro("CLOSE")
#pragma pop_macro("GET_FILE_PTR")
#pragma pop_macro("GET_CHANNEL")
#pragma pop_macro("SEEK")
#pragma pop_macro("WRITE")

#endif // _OpsAfterClose4RandomAccessFile_h_