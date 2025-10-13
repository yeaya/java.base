#ifndef _java_util_zip_Deflater_h_
#define _java_util_zip_Deflater_h_
//$ class java.util.zip.Deflater
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BEST_COMPRESSION")
#undef BEST_COMPRESSION
#pragma push_macro("BEST_SPEED")
#undef BEST_SPEED
#pragma push_macro("DEFAULT_COMPRESSION")
#undef DEFAULT_COMPRESSION
#pragma push_macro("DEFAULT_STRATEGY")
#undef DEFAULT_STRATEGY
#pragma push_macro("DEFLATED")
#undef DEFLATED
#pragma push_macro("FILTERED")
#undef FILTERED
#pragma push_macro("FINISH")
#undef FINISH
#pragma push_macro("FULL_FLUSH")
#undef FULL_FLUSH
#pragma push_macro("HUFFMAN_ONLY")
#undef HUFFMAN_ONLY
#pragma push_macro("NO_COMPRESSION")
#undef NO_COMPRESSION
#pragma push_macro("NO_FLUSH")
#undef NO_FLUSH
#pragma push_macro("SYNC_FLUSH")
#undef SYNC_FLUSH

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Deflater$DeflaterZStreamRef;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import Deflater : public ::java::lang::Object {
	$class(Deflater, 0, ::java::lang::Object)
public:
	Deflater();
	void init$(int32_t level, bool nowrap);
	void init$(int32_t level);
	void init$();
	virtual int32_t deflate($bytes* output, int32_t off, int32_t len);
	virtual int32_t deflate($bytes* output);
	virtual int32_t deflate(::java::nio::ByteBuffer* output);
	virtual int32_t deflate($bytes* output, int32_t off, int32_t len, int32_t flush);
	virtual int32_t deflate(::java::nio::ByteBuffer* output, int32_t flush);
	int64_t deflateBufferBuffer(int64_t addr, int64_t inputAddress, int32_t inputLen, int64_t outputAddress, int32_t outputLen, int32_t flush, int32_t params);
	int64_t deflateBufferBytes(int64_t addr, int64_t inputAddress, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen, int32_t flush, int32_t params);
	int64_t deflateBytesBuffer(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, int64_t outputAddress, int32_t outputLen, int32_t flush, int32_t params);
	int64_t deflateBytesBytes(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen, int32_t flush, int32_t params);
	virtual void end();
	static void end(int64_t addr);
	void ensureOpen();
	virtual void finish();
	virtual bool finished();
	virtual int32_t getAdler();
	static int32_t getAdler(int64_t addr);
	virtual int64_t getBytesRead();
	virtual int64_t getBytesWritten();
	virtual int32_t getTotalIn();
	virtual int32_t getTotalOut();
	static int64_t init(int32_t level, int32_t strategy, bool nowrap);
	virtual bool needsInput();
	virtual void reset();
	static void reset(int64_t addr);
	virtual void setDictionary($bytes* dictionary, int32_t off, int32_t len);
	virtual void setDictionary($bytes* dictionary);
	virtual void setDictionary(::java::nio::ByteBuffer* dictionary);
	static void setDictionary(int64_t addr, $bytes* b, int32_t off, int32_t len);
	static void setDictionaryBuffer(int64_t addr, int64_t bufAddress, int32_t len);
	virtual void setInput($bytes* input, int32_t off, int32_t len);
	virtual void setInput($bytes* input);
	virtual void setInput(::java::nio::ByteBuffer* input);
	virtual void setLevel(int32_t level);
	virtual void setStrategy(int32_t strategy);
	static bool $assertionsDisabled;
	::java::util::zip::Deflater$DeflaterZStreamRef* zsRef = nullptr;
	::java::nio::ByteBuffer* input = nullptr;
	$bytes* inputArray = nullptr;
	int32_t inputPos = 0;
	int32_t inputLim = 0;
	int32_t level = 0;
	int32_t strategy = 0;
	bool setParams = false;
	bool finish$ = false;
	bool finished$ = false;
	int64_t bytesRead = 0;
	int64_t bytesWritten = 0;
	static const int32_t DEFLATED = 8;
	static const int32_t NO_COMPRESSION = 0;
	static const int32_t BEST_SPEED = 1;
	static const int32_t BEST_COMPRESSION = 9;
	static const int32_t DEFAULT_COMPRESSION = (-1);
	static const int32_t FILTERED = 1;
	static const int32_t HUFFMAN_ONLY = 2;
	static const int32_t DEFAULT_STRATEGY = 0;
	static const int32_t NO_FLUSH = 0;
	static const int32_t SYNC_FLUSH = 2;
	static const int32_t FULL_FLUSH = 3;
	static const int32_t FINISH = 4;
};

		} // zip
	} // util
} // java

#pragma pop_macro("BEST_COMPRESSION")
#pragma pop_macro("BEST_SPEED")
#pragma pop_macro("DEFAULT_COMPRESSION")
#pragma pop_macro("DEFAULT_STRATEGY")
#pragma pop_macro("DEFLATED")
#pragma pop_macro("FILTERED")
#pragma pop_macro("FINISH")
#pragma pop_macro("FULL_FLUSH")
#pragma pop_macro("HUFFMAN_ONLY")
#pragma pop_macro("NO_COMPRESSION")
#pragma pop_macro("NO_FLUSH")
#pragma pop_macro("SYNC_FLUSH")

#endif // _java_util_zip_Deflater_h_