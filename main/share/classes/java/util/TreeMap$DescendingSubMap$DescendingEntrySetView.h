#ifndef _java_util_TreeMap$DescendingSubMap$DescendingEntrySetView_h_
#define _java_util_TreeMap$DescendingSubMap$DescendingEntrySetView_h_
//$ class java.util.TreeMap$DescendingSubMap$DescendingEntrySetView
//$ extends java.util.TreeMap$NavigableSubMap$EntrySetView

#include <java/util/TreeMap$NavigableSubMap$EntrySetView.h>

namespace java {
	namespace util {
		class Iterator;
		class TreeMap$DescendingSubMap;
	}
}

namespace java {
	namespace util {

class $export TreeMap$DescendingSubMap$DescendingEntrySetView : public ::java::util::TreeMap$NavigableSubMap$EntrySetView {
	$class(TreeMap$DescendingSubMap$DescendingEntrySetView, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap$EntrySetView)
public:
	TreeMap$DescendingSubMap$DescendingEntrySetView();
	void init$(::java::util::TreeMap$DescendingSubMap* this$0);
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::TreeMap$NavigableSubMap$EntrySetView::toArray;
	::java::util::TreeMap$DescendingSubMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$DescendingSubMap$DescendingEntrySetView_h_