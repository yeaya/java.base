#ifndef _java_lang_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_h_
#define _java_lang_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_h_
//$ class java.lang.StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer
//$ extends java.lang.StackStreamFactory$FrameBuffer

#include <java/lang/Array.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>

namespace java {
	namespace lang {
		class LiveStackFrameInfo;
		class StackStreamFactory$LiveStackInfoTraverser;
	}
}

namespace java {
	namespace lang {

class StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer : public ::java::lang::StackStreamFactory$FrameBuffer {
	$class(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, 0, ::java::lang::StackStreamFactory$FrameBuffer)
public:
	StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer();
	void init$(::java::lang::StackStreamFactory$LiveStackInfoTraverser* this$0, int32_t initialBatchSize);
	virtual $Class* at(int32_t index) override;
	virtual $ObjectArray* frames() override;
	virtual $Object* nextStackFrame() override;
	virtual void resize(int32_t startIndex, int32_t elements) override;
	::java::lang::StackStreamFactory$LiveStackInfoTraverser* this$0 = nullptr;
	static bool $assertionsDisabled;
	$Array<::java::lang::LiveStackFrameInfo>* stackFrames = nullptr;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_h_