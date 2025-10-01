#ifndef _java_util_TreeMap$NavigableSubMap$EntrySetView_h_
#define _java_util_TreeMap$NavigableSubMap$EntrySetView_h_
//$ class java.util.TreeMap$NavigableSubMap$EntrySetView
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class TreeMap$NavigableSubMap;
	}
}

namespace java {
	namespace util {

class $export TreeMap$NavigableSubMap$EntrySetView : public ::java::util::AbstractSet {
	$class(TreeMap$NavigableSubMap$EntrySetView, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	TreeMap$NavigableSubMap$EntrySetView();
	void init$(::java::util::TreeMap$NavigableSubMap* this$0);
	virtual bool contains(Object$* o) override;
	virtual bool isEmpty() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::TreeMap$NavigableSubMap* this$0 = nullptr;
	int32_t size$ = 0;
	int32_t sizeModCount = 0;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap$EntrySetView_h_