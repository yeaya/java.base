#ifndef _java_lang_StackStreamFactory$CallerClassFinder$ClassBuffer_h_
#define _java_lang_StackStreamFactory$CallerClassFinder$ClassBuffer_h_
//$ class java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer
//$ extends java.lang.StackStreamFactory$FrameBuffer

#include <java/lang/Array.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>

namespace java {
	namespace lang {

class StackStreamFactory$CallerClassFinder$ClassBuffer : public ::java::lang::StackStreamFactory$FrameBuffer {
	$class(StackStreamFactory$CallerClassFinder$ClassBuffer, 0, ::java::lang::StackStreamFactory$FrameBuffer)
public:
	StackStreamFactory$CallerClassFinder$ClassBuffer();
	void init$(int32_t batchSize);
	virtual $Class* at(int32_t index) override;
	virtual $ObjectArray* frames() override;
	virtual void resize(int32_t startIndex, int32_t elements) override;
	static bool $assertionsDisabled;
	$ClassArray* classes = nullptr;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$CallerClassFinder$ClassBuffer_h_