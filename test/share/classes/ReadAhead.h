#ifndef _ReadAhead_h_
#define _ReadAhead_h_
//$ class ReadAhead
//$ extends java.lang.Object

#include <java/lang/Array.h>

class ReadAhead$StreamTokenizerMaker;
namespace java {
	namespace io {
		class StreamTokenizer;
	}
}

class $export ReadAhead : public ::java::lang::Object {
	$class(ReadAhead, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadAhead();
	void init$();
	static void fail($String* why);
	static void main($StringArray* args);
	static void test(::java::io::StreamTokenizer* st);
	static void test(::ReadAhead$StreamTokenizerMaker* stm);
};

#endif // _ReadAhead_h_