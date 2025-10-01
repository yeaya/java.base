#ifndef _java_lang_StackStreamFactory$AbstractStackWalker_h_
#define _java_lang_StackStreamFactory$AbstractStackWalker_h_
//$ class java.lang.StackStreamFactory$AbstractStackWalker
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackStreamFactory$FrameBuffer;
		class StackStreamFactory$WalkerState;
		class StackWalker;
		class Thread;
	}
}

namespace java {
	namespace lang {

class StackStreamFactory$AbstractStackWalker : public ::java::lang::Object {
	$class(StackStreamFactory$AbstractStackWalker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackStreamFactory$AbstractStackWalker();
	void init$(::java::lang::StackWalker* walker, int32_t mode);
	void init$(::java::lang::StackWalker* walker, int32_t mode, int32_t maxDepth);
	virtual int32_t batchSize(int32_t lastBatchFrameCount) {return 0;}
	$Object* beginStackWalk();
	$Object* callStackWalk(int64_t mode, int32_t skipframes, int32_t batchSize, int32_t startIndex, $ObjectArray* frames);
	void checkState(::java::lang::StackStreamFactory$WalkerState* state);
	void close();
	virtual $Object* consumeFrames() {return nullptr;}
	$Object* doStackWalk(int64_t anchor, int32_t skipFrames, int32_t batchSize, int32_t bufStartIndex, int32_t bufEndIndex);
	int32_t fetchStackFrames(int32_t batchSize);
	int32_t fetchStackFrames(int64_t mode, int64_t anchor, int32_t batchSize, int32_t startIndex, $ObjectArray* frames);
	int32_t getNextBatch();
	virtual int32_t getNextBatchSize();
	bool hasNext();
	virtual void initFrameBuffer() {}
	$Class* nextFrame();
	$Class* peekFrame();
	bool skipReflectionFrames();
	int32_t toStackWalkMode(::java::lang::StackWalker* walker, int32_t mode);
	$Object* walk();
	::java::lang::StackWalker* walker = nullptr;
	$Thread* thread = nullptr;
	int32_t maxDepth = 0;
	int64_t mode = 0;
	int32_t depth = 0;
	::java::lang::StackStreamFactory$FrameBuffer* frameBuffer = nullptr;
	int64_t anchor = 0;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$AbstractStackWalker_h_