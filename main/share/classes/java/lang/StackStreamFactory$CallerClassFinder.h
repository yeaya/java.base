#ifndef _java_lang_StackStreamFactory$CallerClassFinder_h_
#define _java_lang_StackStreamFactory$CallerClassFinder_h_
//$ class java.lang.StackStreamFactory$CallerClassFinder
//$ extends java.lang.StackStreamFactory$AbstractStackWalker

#include <java/lang/StackStreamFactory$AbstractStackWalker.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

namespace java {
	namespace lang {

class StackStreamFactory$CallerClassFinder : public ::java::lang::StackStreamFactory$AbstractStackWalker {
	$class(StackStreamFactory$CallerClassFinder, 0, ::java::lang::StackStreamFactory$AbstractStackWalker)
public:
	StackStreamFactory$CallerClassFinder();
	void init$(::java::lang::StackWalker* walker);
	virtual int32_t batchSize(int32_t lastBatchFrameCount) override;
	virtual $Object* consumeFrames() override;
	$Class* findCaller();
	virtual int32_t getNextBatchSize() override;
	virtual void initFrameBuffer() override;
	$Class* caller = nullptr;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$CallerClassFinder_h_