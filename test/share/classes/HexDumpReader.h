#ifndef _HexDumpReader_h_
#define _HexDumpReader_h_
//$ class HexDumpReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}

class $export HexDumpReader : public ::java::lang::Object {
	$class(HexDumpReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HexDumpReader();
	void init$();
	static ::java::io::InputStream* getStreamFromHexDump($String* fileName);
	static ::java::io::InputStream* getStreamFromHexDump(::java::io::File* hexFile);
};

#endif // _HexDumpReader_h_