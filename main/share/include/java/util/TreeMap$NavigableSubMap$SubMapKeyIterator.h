#ifndef _java_util_TreeMap$NavigableSubMap$SubMapKeyIterator_h_
#define _java_util_TreeMap$NavigableSubMap$SubMapKeyIterator_h_
//$ class java.util.TreeMap$NavigableSubMap$SubMapKeyIterator
//$ extends java.util.TreeMap$NavigableSubMap$SubMapIterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>

namespace java {
	namespace util {
		class Comparator;
		class TreeMap$Entry;
		class TreeMap$NavigableSubMap;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $import TreeMap$NavigableSubMap$SubMapKeyIterator : public ::java::util::TreeMap$NavigableSubMap$SubMapIterator, public ::java::util::Spliterator {
	$class(TreeMap$NavigableSubMap$SubMapKeyIterator, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap$SubMapIterator, ::java::util::Spliterator)
public:
	TreeMap$NavigableSubMap$SubMapKeyIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::TreeMap$NavigableSubMap* this$0, ::java::util::TreeMap$Entry* first, ::java::util::TreeMap$Entry* fence);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual $Object* next() override;
	virtual void remove() override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::TreeMap$NavigableSubMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap$SubMapKeyIterator_h_