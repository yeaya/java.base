#ifndef _ReadAhead$1_h_
#define _ReadAhead$1_h_
//$ class ReadAhead$1
//$ extends ReadAhead$StreamTokenizerMaker

#include <ReadAhead$StreamTokenizerMaker.h>

namespace java {
	namespace io {
		class StreamTokenizer;
	}
}

class ReadAhead$1 : public ::ReadAhead$StreamTokenizerMaker {
	$class(ReadAhead$1, $NO_CLASS_INIT, ::ReadAhead$StreamTokenizerMaker)
public:
	ReadAhead$1();
	void init$();
	virtual ::java::io::StreamTokenizer* create($String* input, int32_t limit) override;
};

#endif // _ReadAhead$1_h_