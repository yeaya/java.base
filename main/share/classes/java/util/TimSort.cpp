#include <java/util/TimSort.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef INITIAL_TMP_STORAGE_LENGTH
#undef MIN_GALLOP
#undef MIN_MERGE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

$FieldInfo _TimSort_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimSort, $assertionsDisabled)},
	{"MIN_MERGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimSort, MIN_MERGE)},
	{"a", "[Ljava/lang/Object;", "[TT;", $PRIVATE | $FINAL, $field(TimSort, a)},
	{"c", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TT;>;", $PRIVATE | $FINAL, $field(TimSort, c)},
	{"MIN_GALLOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimSort, MIN_GALLOP)},
	{"minGallop", "I", nullptr, $PRIVATE, $field(TimSort, minGallop)},
	{"INITIAL_TMP_STORAGE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimSort, INITIAL_TMP_STORAGE_LENGTH)},
	{"tmp", "[Ljava/lang/Object;", "[TT;", $PRIVATE, $field(TimSort, tmp)},
	{"tmpBase", "I", nullptr, $PRIVATE, $field(TimSort, tmpBase)},
	{"tmpLen", "I", nullptr, $PRIVATE, $field(TimSort, tmpLen)},
	{"stackSize", "I", nullptr, $PRIVATE, $field(TimSort, stackSize)},
	{"runBase", "[I", nullptr, $PRIVATE | $FINAL, $field(TimSort, runBase)},
	{"runLen", "[I", nullptr, $PRIVATE | $FINAL, $field(TimSort, runLen)},
	{}
};

$MethodInfo _TimSort_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;Ljava/util/Comparator;[Ljava/lang/Object;II)V", "([TT;Ljava/util/Comparator<-TT;>;[TT;II)V", $PRIVATE, $method(TimSort, init$, void, $ObjectArray*, $Comparator*, $ObjectArray*, int32_t, int32_t)},
	{"binarySort", "([Ljava/lang/Object;IIILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;IIILjava/util/Comparator<-TT;>;)V", $PRIVATE | $STATIC, $staticMethod(TimSort, binarySort, void, $ObjectArray*, int32_t, int32_t, int32_t, $Comparator*)},
	{"countRunAndMakeAscending", "([Ljava/lang/Object;IILjava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;IILjava/util/Comparator<-TT;>;)I", $PRIVATE | $STATIC, $staticMethod(TimSort, countRunAndMakeAscending, int32_t, $ObjectArray*, int32_t, int32_t, $Comparator*)},
	{"ensureCapacity", "(I)[Ljava/lang/Object;", "(I)[TT;", $PRIVATE, $method(TimSort, ensureCapacity, $ObjectArray*, int32_t)},
	{"gallopLeft", "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", "<T:Ljava/lang/Object;>(TT;[TT;IIILjava/util/Comparator<-TT;>;)I", $PRIVATE | $STATIC, $staticMethod(TimSort, gallopLeft, int32_t, Object$*, $ObjectArray*, int32_t, int32_t, int32_t, $Comparator*)},
	{"gallopRight", "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", "<T:Ljava/lang/Object;>(TT;[TT;IIILjava/util/Comparator<-TT;>;)I", $PRIVATE | $STATIC, $staticMethod(TimSort, gallopRight, int32_t, Object$*, $ObjectArray*, int32_t, int32_t, int32_t, $Comparator*)},
	{"mergeAt", "(I)V", nullptr, $PRIVATE, $method(TimSort, mergeAt, void, int32_t)},
	{"mergeCollapse", "()V", nullptr, $PRIVATE, $method(TimSort, mergeCollapse, void)},
	{"mergeForceCollapse", "()V", nullptr, $PRIVATE, $method(TimSort, mergeForceCollapse, void)},
	{"mergeHi", "(IIII)V", nullptr, $PRIVATE, $method(TimSort, mergeHi, void, int32_t, int32_t, int32_t, int32_t)},
	{"mergeLo", "(IIII)V", nullptr, $PRIVATE, $method(TimSort, mergeLo, void, int32_t, int32_t, int32_t, int32_t)},
	{"minRunLength", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TimSort, minRunLength, int32_t, int32_t)},
	{"pushRun", "(II)V", nullptr, $PRIVATE, $method(TimSort, pushRun, void, int32_t, int32_t)},
	{"reverseRange", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TimSort, reverseRange, void, $ObjectArray*, int32_t, int32_t)},
	{"sort", "([Ljava/lang/Object;IILjava/util/Comparator;[Ljava/lang/Object;II)V", "<T:Ljava/lang/Object;>([TT;IILjava/util/Comparator<-TT;>;[TT;II)V", $STATIC, $staticMethod(TimSort, sort, void, $ObjectArray*, int32_t, int32_t, $Comparator*, $ObjectArray*, int32_t, int32_t)},
	{}
};

$ClassInfo _TimSort_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.TimSort",
	"java.lang.Object",
	nullptr,
	_TimSort_FieldInfo_,
	_TimSort_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TimSort($Class* clazz) {
	return $of($alloc(TimSort));
}

bool TimSort::$assertionsDisabled = false;

void TimSort::init$($ObjectArray* a, $Comparator* c, $ObjectArray* work, int32_t workBase, int32_t workLen) {
	this->minGallop = TimSort::MIN_GALLOP;
	this->stackSize = 0;
	$set(this, a, a);
	$set(this, c, c);
	int32_t len = $nc(a)->length;
	int32_t tlen = (len < 2 * TimSort::INITIAL_TMP_STORAGE_LENGTH) ? (int32_t)((uint32_t)len >> 1) : TimSort::INITIAL_TMP_STORAGE_LENGTH;
	if (work == nullptr || workLen < tlen || workBase + tlen > $nc(work)->length) {
		$var($ObjectArray, newArray, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), tlen)));
		$set(this, tmp, newArray);
		this->tmpBase = 0;
		this->tmpLen = tlen;
	} else {
		$set(this, tmp, work);
		this->tmpBase = workBase;
		this->tmpLen = workLen;
	}
	int32_t stackLen = (len < 120 ? 5 : len < 1542 ? 10 : len < 0x0001D16F ? 24 : 49);
	$set(this, runBase, $new($ints, stackLen));
	$set(this, runLen, $new($ints, stackLen));
}

void TimSort::sort($ObjectArray* a, int32_t lo, int32_t hi, $Comparator* c, $ObjectArray* work, int32_t workBase, int32_t workLen) {
	$init(TimSort);
	if (!TimSort::$assertionsDisabled && !(c != nullptr && a != nullptr && lo >= 0 && lo <= hi && hi <= a->length)) {
		$throwNew($AssertionError);
	}
	int32_t nRemaining = hi - lo;
	if (nRemaining < 2) {
		return;
	}
	if (nRemaining < TimSort::MIN_MERGE) {
		int32_t initRunLen = countRunAndMakeAscending(a, lo, hi, c);
		binarySort(a, lo, hi, lo + initRunLen, c);
		return;
	}
	$var(TimSort, ts, $new(TimSort, a, c, work, workBase, workLen));
	int32_t minRun = minRunLength(nRemaining);
	do {
		int32_t runLen = countRunAndMakeAscending(a, lo, hi, c);
		if (runLen < minRun) {
			int32_t force = nRemaining <= minRun ? nRemaining : minRun;
			binarySort(a, lo, lo + force, lo + runLen, c);
			runLen = force;
		}
		ts->pushRun(lo, runLen);
		ts->mergeCollapse();
		lo += runLen;
		nRemaining -= runLen;
	} while (nRemaining != 0);
	if (!TimSort::$assertionsDisabled && !(lo == hi)) {
		$throwNew($AssertionError);
	}
	ts->mergeForceCollapse();
	if (!TimSort::$assertionsDisabled && !(ts->stackSize == 1)) {
		$throwNew($AssertionError);
	}
}

void TimSort::binarySort($ObjectArray* a, int32_t lo, int32_t hi, int32_t start, $Comparator* c) {
	$init(TimSort);
	$useLocalCurrentObjectStackCache();
	if (!TimSort::$assertionsDisabled && !(lo <= start && start <= hi)) {
		$throwNew($AssertionError);
	}
	if (start == lo) {
		++start;
	}
	for (; start < hi; ++start) {
		$var($Object0, pivot, $nc(a)->get(start));
		int32_t left = lo;
		int32_t right = start;
		if (!TimSort::$assertionsDisabled && !(left <= right)) {
			$throwNew($AssertionError);
		}
		while (left < right) {
			int32_t mid = (int32_t)((uint32_t)(left + right) >> 1);
			if ($nc(c)->compare(pivot, a->get(mid)) < 0) {
				right = mid;
			} else {
				left = mid + 1;
			}
		}
		if (!TimSort::$assertionsDisabled && !(left == right)) {
			$throwNew($AssertionError);
		}
		int32_t n = start - left;
		switch (n) {
		case 2:
			{
				a->set(left + 2, a->get(left + 1));
			}
		case 1:
			{
				a->set(left + 1, a->get(left));
				break;
			}
		default:
			{
				$System::arraycopy(a, left, a, left + 1, n);
			}
		}
		a->set(left, pivot);
	}
}

int32_t TimSort::countRunAndMakeAscending($ObjectArray* a, int32_t lo, int32_t hi, $Comparator* c) {
	$init(TimSort);
	if (!TimSort::$assertionsDisabled && !(lo < hi)) {
		$throwNew($AssertionError);
	}
	int32_t runHi = lo + 1;
	if (runHi == hi) {
		return 1;
	}
	if ($nc(c)->compare($nc(a)->get(runHi++), a->get(lo)) < 0) {
		while (runHi < hi && c->compare($nc(a)->get(runHi), a->get(runHi - 1)) < 0) {
			++runHi;
		}
		reverseRange(a, lo, runHi);
	} else {
		while (runHi < hi && c->compare($nc(a)->get(runHi), a->get(runHi - 1)) >= 0) {
			++runHi;
		}
	}
	return runHi - lo;
}

void TimSort::reverseRange($ObjectArray* a, int32_t lo, int32_t hi) {
	$init(TimSort);
	$useLocalCurrentObjectStackCache();
	--hi;
	while (lo < hi) {
		$var($Object0, t, $nc(a)->get(lo));
		a->set(lo++, a->get(hi));
		a->set(hi--, t);
	}
}

int32_t TimSort::minRunLength(int32_t n) {
	$init(TimSort);
	if (!TimSort::$assertionsDisabled && !(n >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t r = 0;
	while (n >= TimSort::MIN_MERGE) {
		r |= ((int32_t)(n & (uint32_t)1));
		n >>= 1;
	}
	return n + r;
}

void TimSort::pushRun(int32_t runBase, int32_t runLen) {
	$nc(this->runBase)->set(this->stackSize, runBase);
	$nc(this->runLen)->set(this->stackSize, runLen);
	++this->stackSize;
}

void TimSort::mergeCollapse() {
	while (this->stackSize > 1) {
		int32_t n = this->stackSize - 2;
		if (n > 0 && $nc(this->runLen)->get(n - 1) <= $nc(this->runLen)->get(n) + $nc(this->runLen)->get(n + 1) || n > 1 && $nc(this->runLen)->get(n - 2) <= $nc(this->runLen)->get(n) + $nc(this->runLen)->get(n - 1)) {
			if ($nc(this->runLen)->get(n - 1) < $nc(this->runLen)->get(n + 1)) {
				--n;
			}
		} else if (n < 0 || $nc(this->runLen)->get(n) > $nc(this->runLen)->get(n + 1)) {
			break;
		}
		mergeAt(n);
	}
}

void TimSort::mergeForceCollapse() {
	while (this->stackSize > 1) {
		int32_t n = this->stackSize - 2;
		if (n > 0 && $nc(this->runLen)->get(n - 1) < $nc(this->runLen)->get(n + 1)) {
			--n;
		}
		mergeAt(n);
	}
}

void TimSort::mergeAt(int32_t i) {
	if (!TimSort::$assertionsDisabled && !(this->stackSize >= 2)) {
		$throwNew($AssertionError);
	}
	if (!TimSort::$assertionsDisabled && !(i >= 0)) {
		$throwNew($AssertionError);
	}
	if (!TimSort::$assertionsDisabled && !(i == this->stackSize - 2 || i == this->stackSize - 3)) {
		$throwNew($AssertionError);
	}
	int32_t base1 = $nc(this->runBase)->get(i);
	int32_t len1 = $nc(this->runLen)->get(i);
	int32_t base2 = $nc(this->runBase)->get(i + 1);
	int32_t len2 = $nc(this->runLen)->get(i + 1);
	if (!TimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0)) {
		$throwNew($AssertionError);
	}
	if (!TimSort::$assertionsDisabled && !(base1 + len1 == base2)) {
		$throwNew($AssertionError);
	}
	$nc(this->runLen)->set(i, len1 + len2);
	if (i == this->stackSize - 3) {
		$nc(this->runBase)->set(i + 1, $nc(this->runBase)->get(i + 2));
		$nc(this->runLen)->set(i + 1, $nc(this->runLen)->get(i + 2));
	}
	--this->stackSize;
	int32_t k = gallopRight($nc(this->a)->get(base2), this->a, base1, len1, 0, this->c);
	if (!TimSort::$assertionsDisabled && !(k >= 0)) {
		$throwNew($AssertionError);
	}
	base1 += k;
	len1 -= k;
	if (len1 == 0) {
		return;
	}
	len2 = gallopLeft($nc(this->a)->get(base1 + len1 - 1), this->a, base2, len2, len2 - 1, this->c);
	if (!TimSort::$assertionsDisabled && !(len2 >= 0)) {
		$throwNew($AssertionError);
	}
	if (len2 == 0) {
		return;
	}
	if (len1 <= len2) {
		mergeLo(base1, len1, base2, len2);
	} else {
		mergeHi(base1, len1, base2, len2);
	}
}

int32_t TimSort::gallopLeft(Object$* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint, $Comparator* c) {
	$init(TimSort);
	if (!TimSort::$assertionsDisabled && !(len > 0 && hint >= 0 && hint < len)) {
		$throwNew($AssertionError);
	}
	int32_t lastOfs = 0;
	int32_t ofs = 1;
	if ($nc(c)->compare(key, $nc(a)->get(base + hint)) > 0) {
		int32_t maxOfs = len - hint;
		while (ofs < maxOfs && c->compare(key, $nc(a)->get(base + hint + ofs)) > 0) {
			lastOfs = ofs;
			ofs = (ofs << 1) + 1;
			if (ofs <= 0) {
				ofs = maxOfs;
			}
		}
		if (ofs > maxOfs) {
			ofs = maxOfs;
		}
		lastOfs += hint;
		ofs += hint;
	} else {
		int32_t maxOfs = hint + 1;
		while (ofs < maxOfs && c->compare(key, $nc(a)->get(base + hint - ofs)) <= 0) {
			lastOfs = ofs;
			ofs = (ofs << 1) + 1;
			if (ofs <= 0) {
				ofs = maxOfs;
			}
		}
		if (ofs > maxOfs) {
			ofs = maxOfs;
		}
		int32_t tmp = lastOfs;
		lastOfs = hint - ofs;
		ofs = hint - tmp;
	}
	if (!TimSort::$assertionsDisabled && !(-1 <= lastOfs && lastOfs < ofs && ofs <= len)) {
		$throwNew($AssertionError);
	}
	++lastOfs;
	while (lastOfs < ofs) {
		int32_t m = lastOfs + ((int32_t)((uint32_t)(ofs - lastOfs) >> 1));
		if ($nc(c)->compare(key, $nc(a)->get(base + m)) > 0) {
			lastOfs = m + 1;
		} else {
			ofs = m;
		}
	}
	if (!TimSort::$assertionsDisabled && !(lastOfs == ofs)) {
		$throwNew($AssertionError);
	}
	return ofs;
}

int32_t TimSort::gallopRight(Object$* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint, $Comparator* c) {
	$init(TimSort);
	if (!TimSort::$assertionsDisabled && !(len > 0 && hint >= 0 && hint < len)) {
		$throwNew($AssertionError);
	}
	int32_t ofs = 1;
	int32_t lastOfs = 0;
	if ($nc(c)->compare(key, $nc(a)->get(base + hint)) < 0) {
		int32_t maxOfs = hint + 1;
		while (ofs < maxOfs && c->compare(key, $nc(a)->get(base + hint - ofs)) < 0) {
			lastOfs = ofs;
			ofs = (ofs << 1) + 1;
			if (ofs <= 0) {
				ofs = maxOfs;
			}
		}
		if (ofs > maxOfs) {
			ofs = maxOfs;
		}
		int32_t tmp = lastOfs;
		lastOfs = hint - ofs;
		ofs = hint - tmp;
	} else {
		int32_t maxOfs = len - hint;
		while (ofs < maxOfs && c->compare(key, $nc(a)->get(base + hint + ofs)) >= 0) {
			lastOfs = ofs;
			ofs = (ofs << 1) + 1;
			if (ofs <= 0) {
				ofs = maxOfs;
			}
		}
		if (ofs > maxOfs) {
			ofs = maxOfs;
		}
		lastOfs += hint;
		ofs += hint;
	}
	if (!TimSort::$assertionsDisabled && !(-1 <= lastOfs && lastOfs < ofs && ofs <= len)) {
		$throwNew($AssertionError);
	}
	++lastOfs;
	while (lastOfs < ofs) {
		int32_t m = lastOfs + ((int32_t)((uint32_t)(ofs - lastOfs) >> 1));
		if ($nc(c)->compare(key, $nc(a)->get(base + m)) < 0) {
			ofs = m;
		} else {
			lastOfs = m + 1;
		}
	}
	if (!TimSort::$assertionsDisabled && !(lastOfs == ofs)) {
		$throwNew($AssertionError);
	}
	return ofs;
}

void TimSort::mergeLo(int32_t base1, int32_t len1, int32_t base2, int32_t len2) {
	$useLocalCurrentObjectStackCache();
	if (!TimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0 && base1 + len1 == base2)) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, a, this->a);
	$var($ObjectArray, tmp, ensureCapacity(len1));
	int32_t cursor1 = this->tmpBase;
	int32_t cursor2 = base2;
	int32_t dest = base1;
	$System::arraycopy(a, base1, tmp, cursor1, len1);
	$nc(a)->set(dest++, a->get(cursor2++));
	if (--len2 == 0) {
		$System::arraycopy(tmp, cursor1, a, dest, len1);
		return;
	}
	if (len1 == 1) {
		$System::arraycopy(a, cursor2, a, dest, len2);
		a->set(dest + len2, $nc(tmp)->get(cursor1));
		return;
	}
	$var($Comparator, c, this->c);
	int32_t minGallop = this->minGallop;
	bool outer$break = false;
	while (true) {
		int32_t count1 = 0;
		int32_t count2 = 0;
		do {
			if (!TimSort::$assertionsDisabled && !(len1 > 1 && len2 > 0)) {
				$throwNew($AssertionError);
			}
			if ($nc(c)->compare(a->get(cursor2), $nc(tmp)->get(cursor1)) < 0) {
				a->set(dest++, a->get(cursor2++));
				++count2;
				count1 = 0;
				if (--len2 == 0) {
					outer$break = true;
					break;
				}
			} else {
				a->set(dest++, $nc(tmp)->get(cursor1++));
				++count1;
				count2 = 0;
				if (--len1 == 1) {
					outer$break = true;
					break;
				}
			}
		} while ((count1 | count2) < minGallop);

		if (outer$break) {
			break;
		}		do {
			if (!TimSort::$assertionsDisabled && !(len1 > 1 && len2 > 0)) {
				$throwNew($AssertionError);
			}
			count1 = gallopRight(a->get(cursor2), tmp, cursor1, len1, 0, c);
			if (count1 != 0) {
				$System::arraycopy(tmp, cursor1, a, dest, count1);
				dest += count1;
				cursor1 += count1;
				len1 -= count1;
				if (len1 <= 1) {
					outer$break = true;
					break;
				}
			}
			a->set(dest++, a->get(cursor2++));
			if (--len2 == 0) {
				outer$break = true;
				break;
			}
			count2 = gallopLeft($nc(tmp)->get(cursor1), a, cursor2, len2, 0, c);
			if (count2 != 0) {
				$System::arraycopy(a, cursor2, a, dest, count2);
				dest += count2;
				cursor2 += count2;
				len2 -= count2;
				if (len2 == 0) {
					outer$break = true;
					break;
				}
			}
			a->set(dest++, $nc(tmp)->get(cursor1++));
			if (--len1 == 1) {
				outer$break = true;
				break;
			}
			--minGallop;
		} while ((count1 >= TimSort::MIN_GALLOP) | (count2 >= TimSort::MIN_GALLOP));

		if (outer$break) {
			break;
		}		if (minGallop < 0) {
			minGallop = 0;
		}
		minGallop += 2;
	}
	this->minGallop = minGallop < 1 ? 1 : minGallop;
	if (len1 == 1) {
		if (!TimSort::$assertionsDisabled && !(len2 > 0)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(a, cursor2, a, dest, len2);
		a->set(dest + len2, $nc(tmp)->get(cursor1));
	} else if (len1 == 0) {
		$throwNew($IllegalArgumentException, "Comparison method violates its general contract!"_s);
	} else {
		if (!TimSort::$assertionsDisabled && !(len2 == 0)) {
			$throwNew($AssertionError);
		}
		if (!TimSort::$assertionsDisabled && !(len1 > 1)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(tmp, cursor1, a, dest, len1);
	}
}

void TimSort::mergeHi(int32_t base1, int32_t len1, int32_t base2, int32_t len2) {
	$useLocalCurrentObjectStackCache();
	if (!TimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0 && base1 + len1 == base2)) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, a, this->a);
	$var($ObjectArray, tmp, ensureCapacity(len2));
	int32_t tmpBase = this->tmpBase;
	$System::arraycopy(a, base2, tmp, tmpBase, len2);
	int32_t cursor1 = base1 + len1 - 1;
	int32_t cursor2 = tmpBase + len2 - 1;
	int32_t dest = base2 + len2 - 1;
	$nc(a)->set(dest--, a->get(cursor1--));
	if (--len1 == 0) {
		$System::arraycopy(tmp, tmpBase, a, dest - (len2 - 1), len2);
		return;
	}
	if (len2 == 1) {
		dest -= len1;
		cursor1 -= len1;
		$System::arraycopy(a, cursor1 + 1, a, dest + 1, len1);
		a->set(dest, $nc(tmp)->get(cursor2));
		return;
	}
	$var($Comparator, c, this->c);
	int32_t minGallop = this->minGallop;
	bool outer$break = false;
	while (true) {
		int32_t count1 = 0;
		int32_t count2 = 0;
		do {
			if (!TimSort::$assertionsDisabled && !(len1 > 0 && len2 > 1)) {
				$throwNew($AssertionError);
			}
			if ($nc(c)->compare($nc(tmp)->get(cursor2), a->get(cursor1)) < 0) {
				a->set(dest--, a->get(cursor1--));
				++count1;
				count2 = 0;
				if (--len1 == 0) {
					outer$break = true;
					break;
				}
			} else {
				a->set(dest--, $nc(tmp)->get(cursor2--));
				++count2;
				count1 = 0;
				if (--len2 == 1) {
					outer$break = true;
					break;
				}
			}
		} while ((count1 | count2) < minGallop);

		if (outer$break) {
			break;
		}		do {
			if (!TimSort::$assertionsDisabled && !(len1 > 0 && len2 > 1)) {
				$throwNew($AssertionError);
			}
			count1 = len1 - gallopRight($nc(tmp)->get(cursor2), a, base1, len1, len1 - 1, c);
			if (count1 != 0) {
				dest -= count1;
				cursor1 -= count1;
				len1 -= count1;
				$System::arraycopy(a, cursor1 + 1, a, dest + 1, count1);
				if (len1 == 0) {
					outer$break = true;
					break;
				}
			}
			a->set(dest--, $nc(tmp)->get(cursor2--));
			if (--len2 == 1) {
				outer$break = true;
				break;
			}
			count2 = len2 - gallopLeft(a->get(cursor1), tmp, tmpBase, len2, len2 - 1, c);
			if (count2 != 0) {
				dest -= count2;
				cursor2 -= count2;
				len2 -= count2;
				$System::arraycopy(tmp, cursor2 + 1, a, dest + 1, count2);
				if (len2 <= 1) {
					outer$break = true;
					break;
				}
			}
			a->set(dest--, a->get(cursor1--));
			if (--len1 == 0) {
				outer$break = true;
				break;
			}
			--minGallop;
		} while ((count1 >= TimSort::MIN_GALLOP) | (count2 >= TimSort::MIN_GALLOP));

		if (outer$break) {
			break;
		}		if (minGallop < 0) {
			minGallop = 0;
		}
		minGallop += 2;
	}
	this->minGallop = minGallop < 1 ? 1 : minGallop;
	if (len2 == 1) {
		if (!TimSort::$assertionsDisabled && !(len1 > 0)) {
			$throwNew($AssertionError);
		}
		dest -= len1;
		cursor1 -= len1;
		$System::arraycopy(a, cursor1 + 1, a, dest + 1, len1);
		a->set(dest, $nc(tmp)->get(cursor2));
	} else if (len2 == 0) {
		$throwNew($IllegalArgumentException, "Comparison method violates its general contract!"_s);
	} else {
		if (!TimSort::$assertionsDisabled && !(len1 == 0)) {
			$throwNew($AssertionError);
		}
		if (!TimSort::$assertionsDisabled && !(len2 > 0)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(tmp, tmpBase, a, dest - (len2 - 1), len2);
	}
}

$ObjectArray* TimSort::ensureCapacity(int32_t minCapacity) {
	if (this->tmpLen < minCapacity) {
		int32_t newSize = $usr(-1, $Integer::numberOfLeadingZeros(minCapacity));
		++newSize;
		if (newSize < 0) {
			newSize = minCapacity;
		} else {
			newSize = $Math::min(newSize, (int32_t)((uint32_t)$nc(this->a)->length >> 1));
		}
		$var($ObjectArray, newArray, $cast($ObjectArray, $1Array::newInstance($nc($of(this->a))->getClass()->getComponentType(), newSize)));
		$set(this, tmp, newArray);
		this->tmpLen = newSize;
		this->tmpBase = 0;
	}
	return this->tmp;
}

void clinit$TimSort($Class* class$) {
	TimSort::$assertionsDisabled = !TimSort::class$->desiredAssertionStatus();
}

TimSort::TimSort() {
}

$Class* TimSort::load$($String* name, bool initialize) {
	$loadClass(TimSort, name, initialize, &_TimSort_ClassInfo_, clinit$TimSort, allocate$TimSort);
	return class$;
}

$Class* TimSort::class$ = nullptr;

	} // util
} // java