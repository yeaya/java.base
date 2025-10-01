#ifndef _java_lang_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_h_
#define _java_lang_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_h_
//$ class java.lang.StackStreamFactory$StackFrameTraverser$StackFrameBuffer
//$ extends java.lang.StackStreamFactory$FrameBuffer

#include <java/lang/Array.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>

namespace java {
	namespace lang {
		class StackFrameInfo;
		class StackStreamFactory$StackFrameTraverser;
	}
}

namespace java {
	namespace lang {

class StackStreamFactory$StackFrameTraverser$StackFrameBuffer : public ::java::lang::StackStreamFactory$FrameBuffer {
	$class(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, 0, ::java::lang::StackStreamFactory$FrameBuffer)
public:
	StackStreamFactory$StackFrameTraverser$StackFrameBuffer();
	void init$(::java::lang::StackStreamFactory$StackFrameTraverser* this$0, int32_t initialBatchSize);
	virtual $Class* at(int32_t index) override;
	virtual $ObjectArray* frames() override;
	virtual $Object* nextStackFrame() override;
	virtual void resize(int32_t startIndex, int32_t elements) override;
	::java::lang::StackStreamFactory$StackFrameTraverser* this$0 = nullptr;
	static bool $assertionsDisabled;
	$Array<::java::lang::StackFrameInfo>* stackFrames = nullptr;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_h_