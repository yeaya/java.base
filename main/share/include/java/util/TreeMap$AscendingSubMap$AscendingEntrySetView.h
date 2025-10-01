#ifndef _java_util_TreeMap$AscendingSubMap$AscendingEntrySetView_h_
#define _java_util_TreeMap$AscendingSubMap$AscendingEntrySetView_h_
//$ class java.util.TreeMap$AscendingSubMap$AscendingEntrySetView
//$ extends java.util.TreeMap$NavigableSubMap$EntrySetView

#include <java/util/TreeMap$NavigableSubMap$EntrySetView.h>

namespace java {
	namespace util {
		class Iterator;
		class TreeMap$AscendingSubMap;
	}
}

namespace java {
	namespace util {

class $import TreeMap$AscendingSubMap$AscendingEntrySetView : public ::java::util::TreeMap$NavigableSubMap$EntrySetView {
	$class(TreeMap$AscendingSubMap$AscendingEntrySetView, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap$EntrySetView)
public:
	TreeMap$AscendingSubMap$AscendingEntrySetView();
	void init$(::java::util::TreeMap$AscendingSubMap* this$0);
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::TreeMap$NavigableSubMap$EntrySetView::toArray;
	::java::util::TreeMap$AscendingSubMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$AscendingSubMap$AscendingEntrySetView_h_