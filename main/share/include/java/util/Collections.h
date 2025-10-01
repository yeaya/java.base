#ifndef _java_util_Collections_h_
#define _java_util_Collections_h_
//$ class java.util.Collections
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BINARYSEARCH_THRESHOLD")
#undef BINARYSEARCH_THRESHOLD
#pragma push_macro("FILL_THRESHOLD")
#undef FILL_THRESHOLD
#pragma push_macro("EMPTY_MAP")
#undef EMPTY_MAP
#pragma push_macro("ROTATE_THRESHOLD")
#undef ROTATE_THRESHOLD
#pragma push_macro("REVERSE_THRESHOLD")
#undef REVERSE_THRESHOLD
#pragma push_macro("EMPTY_SET")
#undef EMPTY_SET
#pragma push_macro("EMPTY_LIST")
#undef EMPTY_LIST
#pragma push_macro("COPY_THRESHOLD")
#undef COPY_THRESHOLD
#pragma push_macro("INDEXOFSUBLIST_THRESHOLD")
#undef INDEXOFSUBLIST_THRESHOLD
#pragma push_macro("SHUFFLE_THRESHOLD")
#undef SHUFFLE_THRESHOLD
#pragma push_macro("REPLACEALL_THRESHOLD")
#undef REPLACEALL_THRESHOLD

namespace java {
	namespace util {
		class ArrayList;
		class Collection;
		class Comparator;
		class Deque;
		class Enumeration;
		class Iterator;
		class List;
		class ListIterator;
		class Map;
		class NavigableMap;
		class NavigableSet;
		class Queue;
		class Random;
		class Set;
		class SortedMap;
		class SortedSet;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $import Collections : public ::java::lang::Object {
	$class(Collections, $PRELOAD, ::java::lang::Object)
public:
	Collections();
	void init$();
	static bool addAll(::java::util::Collection* c, $ObjectArray* elements);
	static ::java::util::Queue* asLifoQueue(::java::util::Deque* deque);
	static int32_t binarySearch(::java::util::List* list, Object$* key);
	static int32_t binarySearch(::java::util::List* list, Object$* key, ::java::util::Comparator* c);
	static ::java::util::Collection* checkedCollection(::java::util::Collection* c, $Class* type);
	static ::java::util::List* checkedList(::java::util::List* list, $Class* type);
	static ::java::util::Map* checkedMap(::java::util::Map* m, $Class* keyType, $Class* valueType);
	static ::java::util::NavigableMap* checkedNavigableMap(::java::util::NavigableMap* m, $Class* keyType, $Class* valueType);
	static ::java::util::NavigableSet* checkedNavigableSet(::java::util::NavigableSet* s, $Class* type);
	static ::java::util::Queue* checkedQueue(::java::util::Queue* queue, $Class* type);
	static ::java::util::Set* checkedSet(::java::util::Set* s, $Class* type);
	static ::java::util::SortedMap* checkedSortedMap(::java::util::SortedMap* m, $Class* keyType, $Class* valueType);
	static ::java::util::SortedSet* checkedSortedSet(::java::util::SortedSet* s, $Class* type);
	static void copy(::java::util::List* dest, ::java::util::List* src);
	static bool disjoint(::java::util::Collection* c1, ::java::util::Collection* c2);
	static ::java::util::Enumeration* emptyEnumeration();
	static ::java::util::Iterator* emptyIterator();
	static ::java::util::List* emptyList();
	static ::java::util::ListIterator* emptyListIterator();
	static ::java::util::Map* emptyMap();
	static ::java::util::NavigableMap* emptyNavigableMap();
	static ::java::util::NavigableSet* emptyNavigableSet();
	static ::java::util::Set* emptySet();
	static ::java::util::SortedMap* emptySortedMap();
	static ::java::util::SortedSet* emptySortedSet();
	static ::java::util::Enumeration* enumeration(::java::util::Collection* c);
	static bool eq(Object$* o1, Object$* o2);
	static void fill(::java::util::List* list, Object$* obj);
	static int32_t frequency(::java::util::Collection* c, Object$* o);
	static $Object* get(::java::util::ListIterator* i, int32_t index);
	static int32_t indexOfSubList(::java::util::List* source, ::java::util::List* target);
	static int32_t indexedBinarySearch(::java::util::List* list, Object$* key);
	static int32_t indexedBinarySearch(::java::util::List* l, Object$* key, ::java::util::Comparator* c);
	static int32_t iteratorBinarySearch(::java::util::List* list, Object$* key);
	static int32_t iteratorBinarySearch(::java::util::List* l, Object$* key, ::java::util::Comparator* c);
	static int32_t lastIndexOfSubList(::java::util::List* source, ::java::util::List* target);
	static ::java::util::ArrayList* list(::java::util::Enumeration* e);
	static $Object* max(::java::util::Collection* coll);
	static $Object* max(::java::util::Collection* coll, ::java::util::Comparator* comp);
	static $Object* min(::java::util::Collection* coll);
	static $Object* min(::java::util::Collection* coll, ::java::util::Comparator* comp);
	static ::java::util::List* nCopies(int32_t n, Object$* o);
	static ::java::util::Set* newSetFromMap(::java::util::Map* map);
	static bool replaceAll(::java::util::List* list, Object$* oldVal, Object$* newVal);
	static void reverse(::java::util::List* list);
	static ::java::util::Comparator* reverseOrder();
	static ::java::util::Comparator* reverseOrder(::java::util::Comparator* cmp);
	static void rotate(::java::util::List* list, int32_t distance);
	static void rotate1(::java::util::List* list, int32_t distance);
	static void rotate2(::java::util::List* list, int32_t distance);
	static void shuffle(::java::util::List* list);
	static void shuffle(::java::util::List* list, ::java::util::Random* rnd);
	static ::java::util::Set* singleton(Object$* o);
	static ::java::util::Iterator* singletonIterator(Object$* e);
	static ::java::util::List* singletonList(Object$* o);
	static ::java::util::Map* singletonMap(Object$* key, Object$* value);
	static ::java::util::Spliterator* singletonSpliterator(Object$* element);
	static void sort(::java::util::List* list);
	static void sort(::java::util::List* list, ::java::util::Comparator* c);
	static void swap(::java::util::List* list, int32_t i, int32_t j);
	static void swap($ObjectArray* arr, int32_t i, int32_t j);
	static ::java::util::Collection* synchronizedCollection(::java::util::Collection* c);
	static ::java::util::Collection* synchronizedCollection(::java::util::Collection* c, Object$* mutex);
	static ::java::util::List* synchronizedList(::java::util::List* list);
	static ::java::util::List* synchronizedList(::java::util::List* list, Object$* mutex);
	static ::java::util::Map* synchronizedMap(::java::util::Map* m);
	static ::java::util::NavigableMap* synchronizedNavigableMap(::java::util::NavigableMap* m);
	static ::java::util::NavigableSet* synchronizedNavigableSet(::java::util::NavigableSet* s);
	static ::java::util::Set* synchronizedSet(::java::util::Set* s);
	static ::java::util::Set* synchronizedSet(::java::util::Set* s, Object$* mutex);
	static ::java::util::SortedMap* synchronizedSortedMap(::java::util::SortedMap* m);
	static ::java::util::SortedSet* synchronizedSortedSet(::java::util::SortedSet* s);
	static ::java::util::Collection* unmodifiableCollection(::java::util::Collection* c);
	static ::java::util::List* unmodifiableList(::java::util::List* list);
	static ::java::util::Map* unmodifiableMap(::java::util::Map* m);
	static ::java::util::NavigableMap* unmodifiableNavigableMap(::java::util::NavigableMap* m);
	static ::java::util::NavigableSet* unmodifiableNavigableSet(::java::util::NavigableSet* s);
	static ::java::util::Set* unmodifiableSet(::java::util::Set* s);
	static ::java::util::SortedMap* unmodifiableSortedMap(::java::util::SortedMap* m);
	static ::java::util::SortedSet* unmodifiableSortedSet(::java::util::SortedSet* s);
	static $ObjectArray* zeroLengthArray($Class* type);
	static const int32_t BINARYSEARCH_THRESHOLD = 5000;
	static const int32_t REVERSE_THRESHOLD = 18;
	static const int32_t SHUFFLE_THRESHOLD = 5;
	static const int32_t FILL_THRESHOLD = 25;
	static const int32_t ROTATE_THRESHOLD = 100;
	static const int32_t COPY_THRESHOLD = 10;
	static const int32_t REPLACEALL_THRESHOLD = 11;
	static const int32_t INDEXOFSUBLIST_THRESHOLD = 35;
	static ::java::util::Random* r;
	static ::java::util::Set* EMPTY_SET;
	static ::java::util::List* EMPTY_LIST;
	static ::java::util::Map* EMPTY_MAP;
};

	} // util
} // java

#pragma pop_macro("BINARYSEARCH_THRESHOLD")
#pragma pop_macro("FILL_THRESHOLD")
#pragma pop_macro("EMPTY_MAP")
#pragma pop_macro("ROTATE_THRESHOLD")
#pragma pop_macro("REVERSE_THRESHOLD")
#pragma pop_macro("EMPTY_SET")
#pragma pop_macro("EMPTY_LIST")
#pragma pop_macro("COPY_THRESHOLD")
#pragma pop_macro("INDEXOFSUBLIST_THRESHOLD")
#pragma pop_macro("SHUFFLE_THRESHOLD")
#pragma pop_macro("REPLACEALL_THRESHOLD")

#endif // _java_util_Collections_h_