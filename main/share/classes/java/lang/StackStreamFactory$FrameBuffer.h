#ifndef _java_lang_StackStreamFactory$FrameBuffer_h_
#define _java_lang_StackStreamFactory$FrameBuffer_h_
//$ class java.lang.StackStreamFactory$FrameBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("START_POS")
#undef START_POS

namespace java {
	namespace lang {

class StackStreamFactory$FrameBuffer : public ::java::lang::Object {
	$class(StackStreamFactory$FrameBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackStreamFactory$FrameBuffer();
	void init$(int32_t initialBatchSize);
	virtual $Class* at(int32_t index) {return nullptr;}
	void check(int32_t skipFrames);
	int32_t curBatchFrameCount();
	virtual $ObjectArray* frames() {return nullptr;}
	void freeze();
	$Class* get();
	int32_t getIndex();
	bool isActive();
	bool isEmpty();
	$Class* next();
	virtual $Object* nextStackFrame();
	virtual void resize(int32_t startIndex, int32_t elements) {}
	void setBatch(int32_t depth, int32_t startIndex, int32_t endIndex);
	virtual int32_t startIndex();
	static const int32_t START_POS = 2;
	int32_t currentBatchSize = 0;
	int32_t origin = 0;
	int32_t fence = 0;
};

	} // lang
} // java

#pragma pop_macro("START_POS")

#endif // _java_lang_StackStreamFactory$FrameBuffer_h_