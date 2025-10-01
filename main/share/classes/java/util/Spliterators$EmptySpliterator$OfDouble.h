#ifndef _java_util_Spliterators$EmptySpliterator$OfDouble_h_
#define _java_util_Spliterators$EmptySpliterator$OfDouble_h_
//$ class java.util.Spliterators$EmptySpliterator$OfDouble
//$ extends java.util.Spliterators$EmptySpliterator
//$ implements java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterators$EmptySpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {

class Spliterators$EmptySpliterator$OfDouble : public ::java::util::Spliterators$EmptySpliterator {
	$class(Spliterators$EmptySpliterator$OfDouble, $NO_CLASS_INIT, ::java::util::Spliterators$EmptySpliterator, ::java::util::Spliterator$OfDouble)
public:
	Spliterators$EmptySpliterator$OfDouble();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(Object$* consumer) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action);
	virtual ::java::util::Comparator* getComparator();
	virtual int64_t getExactSizeIfKnown();
	virtual bool hasCharacteristics(int32_t characteristics);
	virtual int32_t hashCode() override;
	void init$();
	void forEachRemaining(::java::util::function::DoubleConsumer* consumer);
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action);
	bool tryAdvance(::java::util::function::DoubleConsumer* consumer);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfDouble {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
		virtual ::java::util::Spliterator$OfDouble* trySplit() override;
		virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
		virtual bool tryAdvance(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(Object$* action) override;
		virtual bool tryAdvance(Object$* action) override;
		virtual int64_t estimateSize() override;
		virtual int64_t getExactSizeIfKnown() override;
		virtual int32_t characteristics() override;
		virtual bool hasCharacteristics(int32_t characteristics) override;
		virtual ::java::util::Comparator* getComparator() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* obj) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::java::util::Spliterator$OfDouble* as$(::java::util::Spliterator$OfDouble*) {
		return &memberClass0$;
	}
};

	} // util
} // java

#endif // _java_util_Spliterators$EmptySpliterator$OfDouble_h_