#ifndef _java_util_TreeMap$EntrySpliterator_h_
#define _java_util_TreeMap$EntrySpliterator_h_
//$ class java.util.TreeMap$EntrySpliterator
//$ extends java.util.TreeMap$TreeMapSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/TreeMap$TreeMapSpliterator.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class Map$Entry;
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

class $import TreeMap$EntrySpliterator : public ::java::util::TreeMap$TreeMapSpliterator, public ::java::util::Spliterator {
	$class(TreeMap$EntrySpliterator, $NO_CLASS_INIT, ::java::util::TreeMap$TreeMapSpliterator, ::java::util::Spliterator)
public:
	TreeMap$EntrySpliterator();
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::TreeMap* tree, ::java::util::TreeMap$Entry* origin, ::java::util::TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	static int32_t lambda$getComparator$d5a01062$1(::java::util::Map$Entry* e1, ::java::util::Map$Entry* e2);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_TreeMap$EntrySpliterator_h_