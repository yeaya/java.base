#ifndef _java_util_TreeMap$KeySpliterator_h_
#define _java_util_TreeMap$KeySpliterator_h_
//$ class java.util.TreeMap$KeySpliterator
//$ extends java.util.TreeMap$TreeMapSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/TreeMap$TreeMapSpliterator.h>

namespace java {
	namespace util {
		class Comparator;
		class TreeMap;
		class TreeMap$Entry;
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

class $import TreeMap$KeySpliterator : public ::java::util::TreeMap$TreeMapSpliterator, public ::java::util::Spliterator {
	$class(TreeMap$KeySpliterator, $NO_CLASS_INIT, ::java::util::TreeMap$TreeMapSpliterator, ::java::util::Spliterator)
public:
	TreeMap$KeySpliterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::TreeMap* tree, ::java::util::TreeMap$Entry* origin, ::java::util::TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_TreeMap$KeySpliterator_h_