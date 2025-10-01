#ifndef _ReadAhead$2_h_
#define _ReadAhead$2_h_
//$ class ReadAhead$2
//$ extends ReadAhead$StreamTokenizerMaker

#include <ReadAhead$StreamTokenizerMaker.h>

namespace java {
	namespace io {
		class StreamTokenizer;
	}
}

class ReadAhead$2 : public ::ReadAhead$StreamTokenizerMaker {
	$class(ReadAhead$2, $NO_CLASS_INIT, ::ReadAhead$StreamTokenizerMaker)
public:
	ReadAhead$2();
	void init$();
	virtual ::java::io::StreamTokenizer* create($String* input, int32_t limit) override;
};

#endif // _ReadAhead$2_h_