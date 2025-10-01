#ifndef _java_util_SortedSet_h_
#define _java_util_SortedSet_h_
//$ interface java.util.SortedSet
//$ extends java.util.Set

#include <java/util/Set.h>

namespace java {
	namespace util {
		class Comparator;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $export SortedSet : public ::java::util::Set {
	$interface(SortedSet, $NO_CLASS_INIT, ::java::util::Set)
public:
	virtual ::java::util::Comparator* comparator() {return nullptr;}
	virtual $Object* first() {return nullptr;}
	virtual ::java::util::SortedSet* headSet(Object$* toElement) {return nullptr;}
	virtual $Object* last() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::SortedSet* subSet(Object$* fromElement, Object$* toElement) {return nullptr;}
	virtual ::java::util::SortedSet* tailSet(Object$* fromElement) {return nullptr;}
	using ::java::util::Set::toArray;
};

	} // util
} // java

#endif // _java_util_SortedSet_h_