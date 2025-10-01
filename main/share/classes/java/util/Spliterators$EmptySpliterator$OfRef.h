#ifndef _java_util_Spliterators$EmptySpliterator$OfRef_h_
#define _java_util_Spliterators$EmptySpliterator$OfRef_h_
//$ class java.util.Spliterators$EmptySpliterator$OfRef
//$ extends java.util.Spliterators$EmptySpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/Spliterators$EmptySpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class Spliterators$EmptySpliterator$OfRef : public ::java::util::Spliterators$EmptySpliterator, public ::java::util::Spliterator {
	$class(Spliterators$EmptySpliterator$OfRef, $NO_CLASS_INIT, ::java::util::Spliterators$EmptySpliterator, ::java::util::Spliterator)
public:
	Spliterators$EmptySpliterator$OfRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::Spliterators$EmptySpliterator::forEachRemaining;
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	using ::java::util::Spliterators$EmptySpliterator::tryAdvance;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_Spliterators$EmptySpliterator$OfRef_h_