#include <java/util/ComparableTimSort.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Comparable.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef INITIAL_TMP_STORAGE_LENGTH
#undef MIN_GALLOP
#undef MIN_MERGE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _ComparableTimSort_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ComparableTimSort, $assertionsDisabled)},
	{"MIN_MERGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComparableTimSort, MIN_MERGE)},
	{"a", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ComparableTimSort, a)},
	{"MIN_GALLOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComparableTimSort, MIN_GALLOP)},
	{"minGallop", "I", nullptr, $PRIVATE, $field(ComparableTimSort, minGallop)},
	{"INITIAL_TMP_STORAGE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComparableTimSort, INITIAL_TMP_STORAGE_LENGTH)},
	{"tmp", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ComparableTimSort, tmp)},
	{"tmpBase", "I", nullptr, $PRIVATE, $field(ComparableTimSort, tmpBase)},
	{"tmpLen", "I", nullptr, $PRIVATE, $field(ComparableTimSort, tmpLen)},
	{"stackSize", "I", nullptr, $PRIVATE, $field(ComparableTimSort, stackSize)},
	{"runBase", "[I", nullptr, $PRIVATE | $FINAL, $field(ComparableTimSort, runBase)},
	{"runLen", "[I", nullptr, $PRIVATE | $FINAL, $field(ComparableTimSort, runLen)},
	{}
};

$MethodInfo _ComparableTimSort_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;[Ljava/lang/Object;II)V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)($ObjectArray*,$ObjectArray*,int32_t,int32_t)>(&ComparableTimSort::init$))},
	{"binarySort", "([Ljava/lang/Object;III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,int32_t)>(&ComparableTimSort::binarySort))},
	{"countRunAndMakeAscending", "([Ljava/lang/Object;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t)>(&ComparableTimSort::countRunAndMakeAscending))},
	{"ensureCapacity", "(I)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(ComparableTimSort::*)(int32_t)>(&ComparableTimSort::ensureCapacity))},
	{"gallopLeft", "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;[Ljava/lang/Object;III)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Comparable*,$ObjectArray*,int32_t,int32_t,int32_t)>(&ComparableTimSort::gallopLeft))},
	{"gallopRight", "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;[Ljava/lang/Object;III)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Comparable*,$ObjectArray*,int32_t,int32_t,int32_t)>(&ComparableTimSort::gallopRight))},
	{"mergeAt", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)(int32_t)>(&ComparableTimSort::mergeAt))},
	{"mergeCollapse", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)()>(&ComparableTimSort::mergeCollapse))},
	{"mergeForceCollapse", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)()>(&ComparableTimSort::mergeForceCollapse))},
	{"mergeHi", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)(int32_t,int32_t,int32_t,int32_t)>(&ComparableTimSort::mergeHi))},
	{"mergeLo", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)(int32_t,int32_t,int32_t,int32_t)>(&ComparableTimSort::mergeLo))},
	{"minRunLength", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ComparableTimSort::minRunLength))},
	{"pushRun", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(ComparableTimSort::*)(int32_t,int32_t)>(&ComparableTimSort::pushRun))},
	{"reverseRange", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&ComparableTimSort::reverseRange))},
	{"sort", "([Ljava/lang/Object;II[Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t)>(&ComparableTimSort::sort))},
	{}
};

$ClassInfo _ComparableTimSort_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ComparableTimSort",
	"java.lang.Object",
	nullptr,
	_ComparableTimSort_FieldInfo_,
	_ComparableTimSort_MethodInfo_
};

$Object* allocate$ComparableTimSort($Class* clazz) {
	return $of($alloc(ComparableTimSort));
}

bool ComparableTimSort::$assertionsDisabled = false;

void ComparableTimSort::init$($ObjectArray* a, $ObjectArray* work, int32_t workBase, int32_t workLen) {
	this->minGallop = ComparableTimSort::MIN_GALLOP;
	this->stackSize = 0;
	$set(this, a, a);
	int32_t len = $nc(a)->length;
	int32_t tlen = (len < 2 * ComparableTimSort::INITIAL_TMP_STORAGE_LENGTH) ? (int32_t)((uint32_t)len >> 1) : ComparableTimSort::INITIAL_TMP_STORAGE_LENGTH;
	if (work == nullptr || workLen < tlen || workBase + tlen > $nc(work)->length) {
		$set(this, tmp, $new($ObjectArray, tlen));
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

void ComparableTimSort::sort($ObjectArray* a, int32_t lo, int32_t hi, $ObjectArray* work, int32_t workBase, int32_t workLen) {
	$init(ComparableTimSort);
	if (!ComparableTimSort::$assertionsDisabled && !(a != nullptr && lo >= 0 && lo <= hi && hi <= a->length)) {
		$throwNew($AssertionError);
	}
	int32_t nRemaining = hi - lo;
	if (nRemaining < 2) {
		return;
	}
	if (nRemaining < ComparableTimSort::MIN_MERGE) {
		int32_t initRunLen = countRunAndMakeAscending(a, lo, hi);
		binarySort(a, lo, hi, lo + initRunLen);
		return;
	}
	$var(ComparableTimSort, ts, $new(ComparableTimSort, a, work, workBase, workLen));
	int32_t minRun = minRunLength(nRemaining);
	do {
		int32_t runLen = countRunAndMakeAscending(a, lo, hi);
		if (runLen < minRun) {
			int32_t force = nRemaining <= minRun ? nRemaining : minRun;
			binarySort(a, lo, lo + force, lo + runLen);
			runLen = force;
		}
		ts->pushRun(lo, runLen);
		ts->mergeCollapse();
		lo += runLen;
		nRemaining -= runLen;
	} while (nRemaining != 0);
	if (!ComparableTimSort::$assertionsDisabled && !(lo == hi)) {
		$throwNew($AssertionError);
	}
	ts->mergeForceCollapse();
	if (!ComparableTimSort::$assertionsDisabled && !(ts->stackSize == 1)) {
		$throwNew($AssertionError);
	}
}

void ComparableTimSort::binarySort($ObjectArray* a, int32_t lo, int32_t hi, int32_t start) {
	$init(ComparableTimSort);
	$useLocalCurrentObjectStackCache();
	if (!ComparableTimSort::$assertionsDisabled && !(lo <= start && start <= hi)) {
		$throwNew($AssertionError);
	}
	if (start == lo) {
		++start;
	}
	for (; start < hi; ++start) {
		$var($Comparable, pivot, $cast($Comparable, $nc(a)->get(start)));
		int32_t left = lo;
		int32_t right = start;
		if (!ComparableTimSort::$assertionsDisabled && !(left <= right)) {
			$throwNew($AssertionError);
		}
		while (left < right) {
			int32_t mid = (int32_t)((uint32_t)(left + right) >> 1);
			if ($nc(pivot)->compareTo(a->get(mid)) < 0) {
				right = mid;
			} else {
				left = mid + 1;
			}
		}
		if (!ComparableTimSort::$assertionsDisabled && !(left == right)) {
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

int32_t ComparableTimSort::countRunAndMakeAscending($ObjectArray* a, int32_t lo, int32_t hi) {
	$init(ComparableTimSort);
	if (!ComparableTimSort::$assertionsDisabled && !(lo < hi)) {
		$throwNew($AssertionError);
	}
	int32_t runHi = lo + 1;
	if (runHi == hi) {
		return 1;
	}
	if ($nc(($cast($Comparable, $nc(a)->get(runHi++))))->compareTo(a->get(lo)) < 0) {
		while (runHi < hi && $nc(($cast($Comparable, a->get(runHi))))->compareTo(a->get(runHi - 1)) < 0) {
			++runHi;
		}
		reverseRange(a, lo, runHi);
	} else {
		while (runHi < hi && $nc(($cast($Comparable, a->get(runHi))))->compareTo(a->get(runHi - 1)) >= 0) {
			++runHi;
		}
	}
	return runHi - lo;
}

void ComparableTimSort::reverseRange($ObjectArray* a, int32_t lo, int32_t hi) {
	$init(ComparableTimSort);
	$useLocalCurrentObjectStackCache();
	--hi;
	while (lo < hi) {
		$var($Object0, t, $nc(a)->get(lo));
		a->set(lo++, a->get(hi));
		a->set(hi--, t);
	}
}

int32_t ComparableTimSort::minRunLength(int32_t n) {
	$init(ComparableTimSort);
	if (!ComparableTimSort::$assertionsDisabled && !(n >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t r = 0;
	while (n >= ComparableTimSort::MIN_MERGE) {
		r |= ((int32_t)(n & (uint32_t)1));
		n >>= 1;
	}
	return n + r;
}

void ComparableTimSort::pushRun(int32_t runBase, int32_t runLen) {
	$nc(this->runBase)->set(this->stackSize, runBase);
	$nc(this->runLen)->set(this->stackSize, runLen);
	++this->stackSize;
}

void ComparableTimSort::mergeCollapse() {
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

void ComparableTimSort::mergeForceCollapse() {
	while (this->stackSize > 1) {
		int32_t n = this->stackSize - 2;
		if (n > 0 && $nc(this->runLen)->get(n - 1) < $nc(this->runLen)->get(n + 1)) {
			--n;
		}
		mergeAt(n);
	}
}

void ComparableTimSort::mergeAt(int32_t i) {
	if (!ComparableTimSort::$assertionsDisabled && !(this->stackSize >= 2)) {
		$throwNew($AssertionError);
	}
	if (!ComparableTimSort::$assertionsDisabled && !(i >= 0)) {
		$throwNew($AssertionError);
	}
	if (!ComparableTimSort::$assertionsDisabled && !(i == this->stackSize - 2 || i == this->stackSize - 3)) {
		$throwNew($AssertionError);
	}
	int32_t base1 = $nc(this->runBase)->get(i);
	int32_t len1 = $nc(this->runLen)->get(i);
	int32_t base2 = $nc(this->runBase)->get(i + 1);
	int32_t len2 = $nc(this->runLen)->get(i + 1);
	if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0)) {
		$throwNew($AssertionError);
	}
	if (!ComparableTimSort::$assertionsDisabled && !(base1 + len1 == base2)) {
		$throwNew($AssertionError);
	}
	$nc(this->runLen)->set(i, len1 + len2);
	if (i == this->stackSize - 3) {
		$nc(this->runBase)->set(i + 1, $nc(this->runBase)->get(i + 2));
		$nc(this->runLen)->set(i + 1, $nc(this->runLen)->get(i + 2));
	}
	--this->stackSize;
	int32_t k = gallopRight($cast($Comparable, $nc(this->a)->get(base2)), this->a, base1, len1, 0);
	if (!ComparableTimSort::$assertionsDisabled && !(k >= 0)) {
		$throwNew($AssertionError);
	}
	base1 += k;
	len1 -= k;
	if (len1 == 0) {
		return;
	}
	len2 = gallopLeft($cast($Comparable, $nc(this->a)->get(base1 + len1 - 1)), this->a, base2, len2, len2 - 1);
	if (!ComparableTimSort::$assertionsDisabled && !(len2 >= 0)) {
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

int32_t ComparableTimSort::gallopLeft($Comparable* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint) {
	$init(ComparableTimSort);
	if (!ComparableTimSort::$assertionsDisabled && !(len > 0 && hint >= 0 && hint < len)) {
		$throwNew($AssertionError);
	}
	int32_t lastOfs = 0;
	int32_t ofs = 1;
	if ($nc(key)->compareTo($nc(a)->get(base + hint)) > 0) {
		int32_t maxOfs = len - hint;
		while (ofs < maxOfs && key->compareTo($nc(a)->get(base + hint + ofs)) > 0) {
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
		while (ofs < maxOfs && key->compareTo($nc(a)->get(base + hint - ofs)) <= 0) {
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
	if (!ComparableTimSort::$assertionsDisabled && !(-1 <= lastOfs && lastOfs < ofs && ofs <= len)) {
		$throwNew($AssertionError);
	}
	++lastOfs;
	while (lastOfs < ofs) {
		int32_t m = lastOfs + ((int32_t)((uint32_t)(ofs - lastOfs) >> 1));
		if ($nc(key)->compareTo($nc(a)->get(base + m)) > 0) {
			lastOfs = m + 1;
		} else {
			ofs = m;
		}
	}
	if (!ComparableTimSort::$assertionsDisabled && !(lastOfs == ofs)) {
		$throwNew($AssertionError);
	}
	return ofs;
}

int32_t ComparableTimSort::gallopRight($Comparable* key, $ObjectArray* a, int32_t base, int32_t len, int32_t hint) {
	$init(ComparableTimSort);
	if (!ComparableTimSort::$assertionsDisabled && !(len > 0 && hint >= 0 && hint < len)) {
		$throwNew($AssertionError);
	}
	int32_t ofs = 1;
	int32_t lastOfs = 0;
	if ($nc(key)->compareTo($nc(a)->get(base + hint)) < 0) {
		int32_t maxOfs = hint + 1;
		while (ofs < maxOfs && key->compareTo($nc(a)->get(base + hint - ofs)) < 0) {
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
		while (ofs < maxOfs && key->compareTo($nc(a)->get(base + hint + ofs)) >= 0) {
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
	if (!ComparableTimSort::$assertionsDisabled && !(-1 <= lastOfs && lastOfs < ofs && ofs <= len)) {
		$throwNew($AssertionError);
	}
	++lastOfs;
	while (lastOfs < ofs) {
		int32_t m = lastOfs + ((int32_t)((uint32_t)(ofs - lastOfs) >> 1));
		if ($nc(key)->compareTo($nc(a)->get(base + m)) < 0) {
			ofs = m;
		} else {
			lastOfs = m + 1;
		}
	}
	if (!ComparableTimSort::$assertionsDisabled && !(lastOfs == ofs)) {
		$throwNew($AssertionError);
	}
	return ofs;
}

void ComparableTimSort::mergeLo(int32_t base1, int32_t len1, int32_t base2, int32_t len2) {
	$useLocalCurrentObjectStackCache();
	if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0 && base1 + len1 == base2)) {
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
	int32_t minGallop = this->minGallop;
	bool outer$break = false;
	while (true) {
		int32_t count1 = 0;
		int32_t count2 = 0;
		do {
			if (!ComparableTimSort::$assertionsDisabled && !(len1 > 1 && len2 > 0)) {
				$throwNew($AssertionError);
			}
			if ($nc(($cast($Comparable, a->get(cursor2))))->compareTo($nc(tmp)->get(cursor1)) < 0) {
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
			if (!ComparableTimSort::$assertionsDisabled && !(len1 > 1 && len2 > 0)) {
				$throwNew($AssertionError);
			}
			count1 = gallopRight($cast($Comparable, a->get(cursor2)), tmp, cursor1, len1, 0);
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
			count2 = gallopLeft($cast($Comparable, $nc(tmp)->get(cursor1)), a, cursor2, len2, 0);
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
		} while ((count1 >= ComparableTimSort::MIN_GALLOP) | (count2 >= ComparableTimSort::MIN_GALLOP));

		if (outer$break) {
			break;
		}		if (minGallop < 0) {
			minGallop = 0;
		}
		minGallop += 2;
	}
	this->minGallop = minGallop < 1 ? 1 : minGallop;
	if (len1 == 1) {
		if (!ComparableTimSort::$assertionsDisabled && !(len2 > 0)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(a, cursor2, a, dest, len2);
		a->set(dest + len2, $nc(tmp)->get(cursor1));
	} else if (len1 == 0) {
		$throwNew($IllegalArgumentException, "Comparison method violates its general contract!"_s);
	} else {
		if (!ComparableTimSort::$assertionsDisabled && !(len2 == 0)) {
			$throwNew($AssertionError);
		}
		if (!ComparableTimSort::$assertionsDisabled && !(len1 > 1)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(tmp, cursor1, a, dest, len1);
	}
}

void ComparableTimSort::mergeHi(int32_t base1, int32_t len1, int32_t base2, int32_t len2) {
	$useLocalCurrentObjectStackCache();
	if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0 && len2 > 0 && base1 + len1 == base2)) {
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
	int32_t minGallop = this->minGallop;
	bool outer$break = false;
	while (true) {
		int32_t count1 = 0;
		int32_t count2 = 0;
		do {
			if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0 && len2 > 1)) {
				$throwNew($AssertionError);
			}
			if ($nc(($cast($Comparable, $nc(tmp)->get(cursor2))))->compareTo(a->get(cursor1)) < 0) {
				a->set(dest--, a->get(cursor1--));
				++count1;
				count2 = 0;
				if (--len1 == 0) {
					outer$break = true;
					break;
				}
			} else {
				a->set(dest--, tmp->get(cursor2--));
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
			if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0 && len2 > 1)) {
				$throwNew($AssertionError);
			}
			count1 = len1 - gallopRight($cast($Comparable, $nc(tmp)->get(cursor2)), a, base1, len1, len1 - 1);
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
			count2 = len2 - gallopLeft($cast($Comparable, a->get(cursor1)), tmp, tmpBase, len2, len2 - 1);
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
		} while ((count1 >= ComparableTimSort::MIN_GALLOP) | (count2 >= ComparableTimSort::MIN_GALLOP));

		if (outer$break) {
			break;
		}		if (minGallop < 0) {
			minGallop = 0;
		}
		minGallop += 2;
	}
	this->minGallop = minGallop < 1 ? 1 : minGallop;
	if (len2 == 1) {
		if (!ComparableTimSort::$assertionsDisabled && !(len1 > 0)) {
			$throwNew($AssertionError);
		}
		dest -= len1;
		cursor1 -= len1;
		$System::arraycopy(a, cursor1 + 1, a, dest + 1, len1);
		a->set(dest, $nc(tmp)->get(cursor2));
	} else if (len2 == 0) {
		$throwNew($IllegalArgumentException, "Comparison method violates its general contract!"_s);
	} else {
		if (!ComparableTimSort::$assertionsDisabled && !(len1 == 0)) {
			$throwNew($AssertionError);
		}
		if (!ComparableTimSort::$assertionsDisabled && !(len2 > 0)) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(tmp, tmpBase, a, dest - (len2 - 1), len2);
	}
}

$ObjectArray* ComparableTimSort::ensureCapacity(int32_t minCapacity) {
	if (this->tmpLen < minCapacity) {
		int32_t newSize = $usr(-1, $Integer::numberOfLeadingZeros(minCapacity));
		++newSize;
		if (newSize < 0) {
			newSize = minCapacity;
		} else {
			newSize = $Math::min(newSize, (int32_t)((uint32_t)$nc(this->a)->length >> 1));
		}
		$var($ObjectArray, newArray, $new($ObjectArray, newSize));
		$set(this, tmp, newArray);
		this->tmpLen = newSize;
		this->tmpBase = 0;
	}
	return this->tmp;
}

void clinit$ComparableTimSort($Class* class$) {
	ComparableTimSort::$assertionsDisabled = !ComparableTimSort::class$->desiredAssertionStatus();
}

ComparableTimSort::ComparableTimSort() {
}

$Class* ComparableTimSort::load$($String* name, bool initialize) {
	$loadClass(ComparableTimSort, name, initialize, &_ComparableTimSort_ClassInfo_, clinit$ComparableTimSort, allocate$ComparableTimSort);
	return class$;
}

$Class* ComparableTimSort::class$ = nullptr;

	} // util
} // java