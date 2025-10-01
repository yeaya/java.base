#ifndef _HexDumpReader$ByteArrayBuilder_h_
#define _HexDumpReader$ByteArrayBuilder_h_
//$ class HexDumpReader$ByteArrayBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE

namespace java {
	namespace util {
		class List;
	}
}

class HexDumpReader$ByteArrayBuilder : public ::java::lang::Object {
	$class(HexDumpReader$ByteArrayBuilder, 0, ::java::lang::Object)
public:
	HexDumpReader$ByteArrayBuilder();
	void init$();
	virtual void put(int8_t b);
	virtual $bytes* toArray();
	static bool $assertionsDisabled;
	static const int32_t BUFFER_SIZE = 4096;
	int32_t size = 0;
	::java::util::List* bytes = nullptr;
	$bytes* current = nullptr;
	int32_t offset = 0;
};

#pragma pop_macro("BUFFER_SIZE")

#endif // _HexDumpReader$ByteArrayBuilder_h_