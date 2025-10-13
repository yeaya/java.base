#ifndef _java_util_TimSort_h_
#define _java_util_TimSort_h_
//$ class java.util.TimSort
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_TMP_STORAGE_LENGTH")
#undef INITIAL_TMP_STORAGE_LENGTH
#pragma push_macro("MIN_GALLOP")
#undef MIN_GALLOP
#pragma push_macro("MIN_MERGE")
#undef MIN_MERGE

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class TimSort : public ::java::lang::Object {
	$class(TimSort, 0, ::java::lang::Object)
public:
	TimSort();
	void init$($ObjectArray* a, ::java::util::Comparator* c, $ObjectArray* work, int32_t workBase, int32_t workLen);
	static void binarySort($ObjectArray* a, int32_t lo, int32_t hi, int32_t start, ::java::util::Comparator* c);
	static int32_t countRunAndMakeAscending($ObjectArray* a, int32_t lo, int32_t hi, ::java::util::Comparator* c);
	$ObjectArray* ensureCapacity(int32_t minCapacity);
	static int32_t gallopLeft(Object$* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint, ::java::util::Comparator* c);
	static int32_t gallopRight(Object$* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint, ::java::util::Comparator* c);
	void mergeAt(int32_t i);
	void mergeCollapse();
	void mergeForceCollapse();
	void mergeHi(int32_t base1, int32_t len1, int32_t base2, int32_t len2);
	void mergeLo(int32_t base1, int32_t len1, int32_t base2, int32_t len2);
	static int32_t minRunLength(int32_t n);
	void pushRun(int32_t runBase, int32_t runLen);
	static void reverseRange($ObjectArray* a, int32_t lo, int32_t hi);
	static void sort($ObjectArray* a, int32_t lo, int32_t hi, ::java::util::Comparator* c, $ObjectArray* work, int32_t workBase, int32_t workLen);
	static bool $assertionsDisabled;
	static const int32_t MIN_MERGE = 32;
	$ObjectArray* a = nullptr;
	::java::util::Comparator* c = nullptr;
	static const int32_t MIN_GALLOP = 7;
	int32_t minGallop = 0;
	static const int32_t INITIAL_TMP_STORAGE_LENGTH = 256;
	$ObjectArray* tmp = nullptr;
	int32_t tmpBase = 0;
	int32_t tmpLen = 0;
	int32_t stackSize = 0;
	$ints* runBase = nullptr;
	$ints* runLen = nullptr;
};

	} // util
} // java

#pragma pop_macro("INITIAL_TMP_STORAGE_LENGTH")
#pragma pop_macro("MIN_GALLOP")
#pragma pop_macro("MIN_MERGE")

#endif // _java_util_TimSort_h_