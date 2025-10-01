#ifndef _ReadAhead$StreamTokenizerMaker_h_
#define _ReadAhead$StreamTokenizerMaker_h_
//$ interface ReadAhead$StreamTokenizerMaker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class StreamTokenizer;
	}
}

class ReadAhead$StreamTokenizerMaker : public ::java::lang::Object {
	$interface(ReadAhead$StreamTokenizerMaker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::StreamTokenizer* create($String* input, int32_t limit) {return nullptr;}
};

#endif // _ReadAhead$StreamTokenizerMaker_h_