#ifndef _java_util_zip_Inflater_h_
#define _java_util_zip_Inflater_h_
//$ class java.util.zip.Inflater
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Inflater$InflaterZStreamRef;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import Inflater : public ::java::lang::Object {
	$class(Inflater, 0, ::java::lang::Object)
public:
	Inflater();
	void init$(bool nowrap);
	void init$();
	virtual void end();
	static void end(int64_t addr);
	void ensureOpen();
	virtual bool finished();
	virtual int32_t getAdler();
	static int32_t getAdler(int64_t addr);
	virtual int64_t getBytesRead();
	virtual int64_t getBytesWritten();
	virtual int32_t getRemaining();
	virtual int32_t getTotalIn();
	virtual int32_t getTotalOut();
	virtual int32_t inflate($bytes* output, int32_t off, int32_t len);
	virtual int32_t inflate($bytes* output);
	virtual int32_t inflate(::java::nio::ByteBuffer* output);
	int64_t inflateBufferBuffer(int64_t addr, int64_t inputAddress, int32_t inputLen, int64_t outputAddress, int32_t outputLen);
	int64_t inflateBufferBytes(int64_t addr, int64_t inputAddress, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen);
	int64_t inflateBytesBuffer(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, int64_t outputAddress, int32_t outputLen);
	int64_t inflateBytesBytes(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen);
	static int64_t init(bool nowrap);
	static void initIDs();
	virtual bool needsDictionary();
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
	static bool $assertionsDisabled;
	::java::util::zip::Inflater$InflaterZStreamRef* zsRef = nullptr;
	::java::nio::ByteBuffer* input = nullptr;
	$bytes* inputArray = nullptr;
	int32_t inputPos = 0;
	int32_t inputLim = 0;
	bool finished$ = false;
	bool needDict = false;
	int64_t bytesRead = 0;
	int64_t bytesWritten = 0;
	int32_t inputConsumed = 0;
	int32_t outputConsumed = 0;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_Inflater_h_