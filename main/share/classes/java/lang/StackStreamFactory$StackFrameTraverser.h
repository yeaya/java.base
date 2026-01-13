#ifndef _java_lang_StackStreamFactory$StackFrameTraverser_h_
#define _java_lang_StackStreamFactory$StackFrameTraverser_h_
//$ class java.lang.StackStreamFactory$StackFrameTraverser
//$ extends java.lang.StackStreamFactory$AbstractStackWalker
//$ implements java.util.Spliterator

#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/util/Spliterator.h>

#pragma push_macro("CHARACTERISTICS")
#undef CHARACTERISTICS

namespace java {
	namespace lang {
		class StackWalker;
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Function;
		}
	}
}

namespace java {
	namespace lang {

class StackStreamFactory$StackFrameTraverser : public ::java::lang::StackStreamFactory$AbstractStackWalker, public ::java::util::Spliterator {
	$class(StackStreamFactory$StackFrameTraverser, 0, ::java::lang::StackStreamFactory$AbstractStackWalker, ::java::util::Spliterator)
public:
	StackStreamFactory$StackFrameTraverser();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::lang::StackWalker* walker, ::java::util::function::Function* function);
	void init$(::java::lang::StackWalker* walker, ::java::util::function::Function* function, int32_t mode);
	virtual int32_t batchSize(int32_t lastBatchFrameCount) override;
	virtual int32_t characteristics() override;
	virtual $Object* consumeFrames() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void initFrameBuffer() override;
	virtual ::java::lang::StackWalker$StackFrame* nextStackFrame();
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static const int32_t CHARACTERISTICS = 1040; // Spliterator.ORDERED | Spliterator.IMMUTABLE
	::java::util::function::Function* function = nullptr;
};

	} // lang
} // java

#pragma pop_macro("CHARACTERISTICS")

#endif // _java_lang_StackStreamFactory$StackFrameTraverser_h_